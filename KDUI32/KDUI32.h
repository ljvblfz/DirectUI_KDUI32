// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 KDUI32_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// KDUI32_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#include "subclass.h"
#include "stringex.h"
#include <deque>
using namespace std;

#include "..\DirectUICom\DirectUICom.h"

enum _ObjType
{
	OBJTYPE_UNDEFINED = 100,
	OBJTYPE_IMAGE,
	OBJTYPE_IMAGEBASE,
	OBJTYPE_TEXTSTYLE,
	OBJTYPE_FONTEX,
	OBJTYPE_DIRECTUI,
	OBJTYPE_CONTROL,
	OBJTYPE_LAST
};
 
class SkinObjResBase_;
//////////////////////////////////////////////////////////////////////////
//类  名 : class CMsgHooker
//功  能 : 把指定句柄的消息发送到指定的CObjectBase
//////////////////////////////////////////////////////////////////////////
class KDUI32_API CMsgHooker : public CSubclassWnd
{
public:
	CMsgHooker();
	virtual ~CMsgHooker();

public:
	void SetMsgRecv(SkinObjResBase_* pObjBase){ m_MsgRecvObj = pObjBase; }
	BOOL HasMsgRecv() { return m_MsgRecvObj!=NULL; }

public:
	LRESULT BaseProc(HWND hWnd,UINT msg, WPARAM wp, LPARAM lp);
	virtual LRESULT WindowProc(HWND hWnd,UINT msg, WPARAM wp, LPARAM lp);

protected:
	SkinObjResBase_* m_MsgRecvObj; //消息接受者容器
};

class IRenderDC_;

class IRenderImage_
{
public:
	IRenderImage_():m_pDispatch(NULL){}
	virtual ~IRenderImage_()
	{
		if (m_pDispatch)
			m_pDispatch->Release();
	}

public:
	virtual BOOL Draw(IRenderDC_ *pDC,const RECT& rect)
	{
		return FALSE;
	}

	virtual BOOL LoadImage(LPCTSTR strImagePath)
	{
		return FALSE;
	}

	virtual LONG GetWidth(){return 0;}
	virtual LONG GetHeight(){return 0;}

	void SetDispatch(IDispatch *pDispatch){m_pDispatch = pDispatch;}
	IDispatch* GetDispatch(){return m_pDispatch;}

private:
	IDispatch *m_pDispatch;
};

class IRenderDC_
{
public:
	IRenderDC_():m_pRenderDCComPtr(NULL)
	{
		::CoCreateInstance(__uuidof(DUIRenderDC), NULL, CLSCTX_INPROC_SERVER, IID_IDispatch, (void**)&m_pRenderDCComPtr);
		m_pRenderDCComPtr->SetRenderDCPtr((OLE_HANDLE)this);
	}

	virtual ~IRenderDC_(){m_pRenderDCComPtr->Release();}

	void SetRenderDCComPtr(IDUIRenderDC *pDC){m_pRenderDCComPtr = pDC;}
	IDUIRenderDC* GetRenderDCComPtr(){return m_pRenderDCComPtr;}

	virtual BOOL DrawImage(IRenderImage_ *pImage,const RECT& rect)
	{
		return FALSE;
	}

	virtual BOOL AlphaBlend_(IRenderImage_* pImage,const RECT& rcDest,const RECT& rcSrc)
	{
		return FALSE;
	}

	virtual BOOL DrawImageSec(IRenderImage_ *pImage,const RECT& rcDest,const RECT& rcSrc,const RECT& rcBorder)
	{
		return FALSE;
	}

protected:
	IDUIRenderDC *m_pRenderDCComPtr;
};

class CRenderImage_GDI_ : public IRenderImage_
{
public:
	CRenderImage_GDI_():m_hBitmap(NULL){};
	virtual ~CRenderImage_GDI_(){}

public:
	virtual BOOL Draw(IRenderDC_ *pDC,const RECT& rect)
	{
		RECT rcSrc;
		rcSrc.left = 0;
		rcSrc.top = 0;
		rcSrc.right = rcSrc.left + GetWidth();
		rcSrc.bottom = rcSrc.top + GetHeight();

		return pDC->AlphaBlend_(this,rect,rcSrc);
	}

	virtual BOOL LoadImage(LPCTSTR strImagePath)
	{
		m_hBitmap = (HBITMAP)::LoadImage(NULL, strImagePath, IMAGE_BITMAP, 0, 0, LR_CREATEDIBSECTION|LR_DEFAULTSIZE|LR_LOADFROMFILE);
		return (m_hBitmap != NULL);
	}

	virtual LONG GetWidth()
	{
		BITMAP bmp;
		::GetObject(m_hBitmap,sizeof(BITMAP),&bmp);
		return bmp.bmWidth;
	}

	virtual LONG GetHeight()
	{
		BITMAP bmp;
		::GetObject(m_hBitmap,sizeof(BITMAP),&bmp);
		return bmp.bmHeight;
	}

	void SetHBitmap(HBITMAP hBitmap){m_hBitmap = hBitmap;}
	HBITMAP GetHBitmap(){return m_hBitmap;}

private:
	HBITMAP m_hBitmap;
};

class CRenderDC_GDI_ : public IRenderDC_
{
public:
	CRenderDC_GDI_():m_hDC(NULL)
	{
//		m_pRenderDCComPtr->SetRenderDCPtr((OLE_HANDLE)this);
	}

	virtual ~CRenderDC_GDI_(){}

public:
	virtual BOOL DrawImage(IRenderImage_ *pImage,const RECT& rect)
	{
		RECT rcSrc;
		rcSrc.left = 0;
		rcSrc.top = 0;
		rcSrc.right = rcSrc.left + pImage->GetWidth();
		rcSrc.bottom = rcSrc.top + pImage->GetHeight();

		return AlphaBlend_(pImage,rect,rcSrc);
	}

	virtual BOOL AlphaBlend_(IRenderImage_* pImage,const RECT& rcDest,const RECT& rcSrc);

	BOOL DrawImage(IRenderImage_* pImage, RECT rcDest, RECT rcSrc,BOOL bStretch,COLORREF clrTrans,BOOL bTrans,BOOL bClient = FALSE);
	virtual BOOL DrawImageSec(IRenderImage_ *pImage,const RECT& rcDest,const RECT& rcSrc,const RECT& rcBorder);

	void SetHDC(HDC hDC){m_hDC = hDC;}
	HDC GetHDC(){return m_hDC;}

private:
	HDC m_hDC;
};

class CDUIResource_;

class KDUI32_API CDUIObj_
{
public:
	CDUIObj_():m_pDispatch(NULL),m_objType(OBJTYPE_UNDEFINED),m_pDUIResource(NULL){}
	virtual ~CDUIObj_(){}

public:
	tstring GetName(){return m_strName;}
	void SetName(LPCTSTR strName){m_strName = strName;}
	_ObjType GetType(){return m_objType;}

	virtual	BOOL AccessConfig(BOOL bRead){return TRUE;}
	void SetDispatch(IDispatch *pDispatch){m_pDispatch = pDispatch;}
	IDispatch* GetDispatch(){return m_pDispatch;}
	CDUIResource_* GetDUIRes(){return m_pDUIResource;}
	void SetDUIRes(CDUIResource_ *pDUIRes){m_pDUIResource = pDUIRes;}

protected:
	tstring m_strName;
	_ObjType m_objType;
	IDispatch *m_pDispatch;
	CDUIResource_ *m_pDUIResource;
};

class KDUI32_API SkinShareObj_ : public CDUIObj_
{
public:
	SkinShareObj_(){}
	virtual ~SkinShareObj_(){}

	
};

class KDUI32_API SkinPicture_ : public SkinShareObj_
{
public:
	SkinPicture_():m_hBitmap(NULL){}
	virtual ~SkinPicture_(){}

	BOOL LoadImage(LPCTSTR strFilePath)
	{
		if (!m_renderImage.LoadImage(strFilePath)) return FALSE;
		m_hBitmap	 = m_renderImage.GetHBitmap();
		return TRUE;
	}

	CRenderImage_GDI_* GetRenderImage(){return &m_renderImage;}

protected:
	string m_strFilePath;
	HBITMAP m_hBitmap;
	CRenderImage_GDI_ m_renderImage;
};

class KDUI32_API SkinImageBase_ : public SkinShareObj_
{
public:
	SkinImageBase_():m_pSkinPicture(NULL){}
	virtual ~SkinImageBase_(){}

public:
	void SetPicture(SkinPicture_* pSkinPicture){m_pSkinPicture = pSkinPicture;}
	SkinPicture_* GetPicture(){return m_pSkinPicture;}

	void SetSourceRect(const RECT& rect){m_rect = rect;}
	RECT GetSourceRect(){return m_rect;}

	void SetBorderRect(const RECT& rect){m_rcBorder = rect;}
	RECT GetBorderRect(){return m_rcBorder;}

	BOOL RenderDraw(IRenderDC_ *pDC,const RECT& rcDest)
	{
		IRenderImage_* pImage = m_pSkinPicture->GetRenderImage();
		return pDC->DrawImageSec(	pImage,rcDest,m_rect,m_rcBorder);		
	}

protected:
	SkinPicture_ *m_pSkinPicture;
	RECT m_rect;
	RECT m_rcBorder;
};

class CDirectUI_;

class KDUI32_API SkinObjResBase_ : public CDUIObj_
{
public:
	SkinObjResBase_():m_hWndDirectUI(NULL),m_pObjParent(NULL){}
	virtual ~SkinObjResBase_(){DestroyObjects();}

	void DestroyObjects()
	{
		for (size_t i=0;i<m_dequeObjects.size();i++)
		{
			SkinObjResBase_* pObj = m_dequeObjects[i];
			IDispatch *pCom = pObj->GetDispatch();
			if (pCom) pCom->Release();
			
			delete pObj;
		}

		m_dequeObjects.clear();
	}

public:
	virtual BOOL AccessConfig(BOOL bRead){return TRUE;}
	virtual BOOL RenderDraw(IRenderDC_ *pDC)
	{
		for (size_t i=0;i<m_dequeObjects.size();i++)
		{
			SkinObjResBase_* pObj = m_dequeObjects[i];
			pObj->RenderDraw(pDC);
		}

		return TRUE;
	}

	void SetRect(const RECT& rect){m_rect = rect;}
	RECT GetRect(){return m_rect;}

	void SetParent(SkinObjResBase_ *pObjParent)
	{
		m_pObjParent = pObjParent;
	}

	SkinObjResBase_* GetParent()
	{
		return m_pObjParent;
	}

	SkinObjResBase_* GetRoot()
	{
		SkinObjResBase_* pParent = GetParent();
		if (pParent)
			return pParent->GetRoot();

		return this;
	}

	BOOL AddObject(SkinObjResBase_ *pObject)
	{
		if (pObject == NULL) return FALSE;

		for(size_t i=0;i<m_dequeObjects.size();i++)
		{
			if (pObject == m_dequeObjects[i])
				return FALSE;
		}

		m_dequeObjects.push_back(pObject);

		return TRUE;
	}

	BOOL RemoveObject(SkinObjResBase_ *pObject)
	{
		if (pObject == NULL) return FALSE;

		for(size_t i=0;i<m_dequeObjects.size();i++)
		{
			if (pObject == m_dequeObjects[i])
			{
				m_dequeObjects.erase(m_dequeObjects.begin() + i);
				return TRUE;
			}
		}

		return FALSE;
	}

	CDirectUI_* GetDirectUI()
	{
		if (::IsWindow(m_hWndDirectUI))
		{
			return (CDirectUI_*)(GetWindowLongPtr(m_hWndDirectUI,GWL_USERDATA));
		}

		SkinObjResBase_* pRoot = GetRoot();
		if (pRoot && pRoot->GetType() == OBJTYPE_DIRECTUI)
			return (CDirectUI_*)pRoot;

		return NULL;
	}

	void SetDirectUIHwnd(HWND hWnd){m_hWndDirectUI = hWnd;}

	virtual BOOL WindowProc(HWND hWnd,UINT uMsgID,WPARAM wParam,LPARAM lParam, LRESULT& lResult){return 0;}

protected:
	RECT  m_rect;
	std::deque<SkinObjResBase_*> m_dequeObjects;
	HWND m_hWndDirectUI;
	SkinObjResBase_ *m_pObjParent;
};


class KDUI32_API SkinControlBase_ : public SkinObjResBase_
{
public:
	SkinControlBase_(){m_objType = OBJTYPE_CONTROL;}
	virtual ~SkinControlBase_(){}

public:
	virtual BOOL RenderDraw(IRenderDC_ *pDC)
	{
		IDUIControlBase *pDUIControlBase = (IDUIControlBase*)m_pDispatch;
		SkinRect rect = {m_rect.left,m_rect.top,m_rect.right,m_rect.bottom};
		VARIANT_BOOL bResult = VARIANT_FALSE;
		pDUIControlBase->RenderDrawObject(pDC->GetRenderDCComPtr(),&rect,&bResult);

		SkinObjResBase_::RenderDraw(pDC);

		return TRUE;
	}
	
private:

};

class KDUI32_API CDirectUI_ : public SkinObjResBase_
{
public:
	CDirectUI_(){m_objType = OBJTYPE_DIRECTUI;}
	virtual ~CDirectUI_(){}

public:
	BOOL Create(HWND hWnd)
	{
		m_hWnd = hWnd;
				
		m_msghook.SetMsgRecv(this);
		m_msghook.HookWindow(hWnd);
		
		return TRUE;
	}

	HWND GetHwnd(){return  m_hWnd;}

	virtual BOOL WindowProc(HWND hWnd,UINT uMsgID,WPARAM wParam,LPARAM lParam, LRESULT& lResult)
	{
		switch(uMsgID)
		{
		case WM_PAINT:
			{
				OnPaint();
				return FALSE;
			}
			break;

		case WM_SIZE:
			{
				OnSize();
				break;
			}
		}

		return TRUE;
	}

	void OnPaint()
	{
		PAINTSTRUCT ps;
		HDC hDC = ::BeginPaint(m_hWnd,&ps);
		m_dcRender.SetHDC(hDC);
		
		RECT rcClient;
		::GetClientRect(m_hWnd,&rcClient);

		RenderDraw(&m_dcRender);
		
		::EndPaint(m_hWnd,&ps);
	}

	void OnSize()
	{
	}

private:
	HWND m_hWnd;
	CMsgHooker m_msghook;
	CRenderDC_GDI_ m_dcRender;
};

class KDUI32_API CDUIResource_
{
public:
	CDUIResource_():m_pDUIResComPtr(NULL){}
	virtual ~CDUIResource_(){CloseSkin();}

public:
	BOOL OpenSkin(LPCSTR strSkinPath)
	{
		return TRUE;
	}

	void CloseSkin()
	{
		DestroyDirectUIs();
	}

	void DestroyDirectUIs()
	{
		for (size_t i=0;i<m_dequeDirectUIs.size();i++)
		{
			CDirectUI_* pDUI = m_dequeDirectUIs[i];
			IDispatch *pCom = pDUI->GetDispatch();
			if (pCom)
			{
				pCom->Release();
				pDUI->SetDispatch(NULL);
			}

			delete pDUI;
		}

		m_dequeDirectUIs.clear();
	}

	CDirectUI_* CreateDirectUI(HWND hWnd)
	{
		CDirectUI_ *pNewDUI = new CDirectUI_();

		pNewDUI->Create(hWnd);

		m_dequeDirectUIs.push_back(pNewDUI);

		return pNewDUI;
	}

	SkinControlBase_* CreateControl(CDirectUI_ *pDirectUI,BSTR strClsid)
	{
		if (pDirectUI == NULL) return NULL;

		SkinControlBase_ *pNewCtrl = new SkinControlBase_();
		pNewCtrl->SetDUIRes(this);
		pNewCtrl->SetParent(pDirectUI);

		pDirectUI->AddObject(pNewCtrl);

		GUID clsid;
		CLSIDFromString(strClsid,&clsid);
		
		IDispatch *pDispatch = NULL;
		::CoCreateInstance(clsid, NULL, CLSCTX_INPROC_SERVER, IID_IDispatch, (void**)&pDispatch);

		pNewCtrl->SetDispatch(pDispatch);
	
		return pNewCtrl;
	}

	string GetSkinPath(){return strSkinPath;}

	IDispatch* GetDUIResComPtr(){return m_pDUIResComPtr;}
	void SetDUIResComPtr(IDispatch *pDUIRes){m_pDUIResComPtr = pDUIRes;}
	
private:
	string strSkinPath;
	IDispatch *m_pDUIResComPtr;
	deque<CDirectUI_*> m_dequeDirectUIs;
};

