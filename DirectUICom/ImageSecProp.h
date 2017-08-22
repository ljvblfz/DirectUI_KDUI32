// ImageSecProp.h : CImageSecProp 的声明

#pragma once
#include "resource.h"       // 主符号

#include "DirectUICom.h"
#include "DirectUISupport.h"
#include "DUIPropBase.h"
#include "DUIPropType.h"
#include "_IImageSecPropEvents_CP.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif



// CImageSecProp

class ATL_NO_VTABLE CImageSecProp :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CImageSecProp, &CLSID_ImageSecProp>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CImageSecProp>,
	public CProxy_IImageSecPropEvents<CImageSecProp>,
	public IDispatchImpl<IImageSecProp, &IID_IImageSecProp, &LIBID_DirectUIComLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CImageSecProp()
	{
		m_pImageBase = new SkinImageBase_();
	}

	virtual ~CImageSecProp()
	{
		if (m_pImageBase)
		{
			delete m_pImageBase;
			m_pImageBase = NULL;
		}
	}

DECLARE_REGISTRY_RESOURCEID(IDR_IMAGESECPROP)


BEGIN_COM_MAP(CImageSecProp)
	COM_INTERFACE_ENTRY(IImageSecProp)
	COM_INTERFACE_ENTRY(IDUIPropBase)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CImageSecProp)
	CONNECTION_POINT_ENTRY(__uuidof(_IImageSecPropEvents))
END_CONNECTION_POINT_MAP()
// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		IMPLEMENT_PROP_BASE(m_pPropBase)
		return S_OK;
	}

	void FinalRelease()
	{
	}

private:
	IDUIPropBase *m_pPropBase;
	SkinImageBase_ *m_pImageBase;

public:
	INTERFACE_PROP_BASE_IMPL_DEFAULT(m_pPropBase)

	STDMETHOD(RenderDraw)(IDUIRenderDC* pDC, SkinRect* rect, VARIANT_BOOL* pbResult);
	STDMETHOD(SetImageBase)(DUIImageBase *pImgbase,VARIANT_BOOL* pbResult);
	STDMETHOD(GetImageBase)(DUIImageBase *pImgbase);


};

OBJECT_ENTRY_AUTO(__uuidof(ImageSecProp), CImageSecProp)
