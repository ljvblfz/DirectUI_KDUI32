// DUIRes.cpp : CDUIRes µÄÊµÏÖ

#include "stdafx.h"
#include "DUIRes.h"
#include "DirectUI.h"

// CDUIRes
CDUIRes::CDUIRes()
{
	m_duiResource.SetDUIResComPtr(this);
}

CDUIRes::~CDUIRes()
{

}

HRESULT CDUIRes::FinalConstruct()
{
	return S_OK;
}

void CDUIRes::FinalRelease()
{
}

STDMETHODIMP CDUIRes::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IDUIRes
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CDUIRes::GetDUIResObjPtr(OLE_HANDLE *plResObjPtr)
{
	*plResObjPtr = (OLE_HANDLE)&m_duiResource;

	return S_OK;
}

STDMETHODIMP CDUIRes::OpenSkin(VARIANT_BOOL *pbResult)
{
	m_duiResource.OpenSkin("");

	return S_OK;
}

STDMETHODIMP CDUIRes::CloseSkin(VARIANT_BOOL *pbResult)
{
	m_duiResource.CloseSkin();

	return S_OK;
}

STDMETHODIMP CDUIRes::CreateDirectUI(OLE_HANDLE hWnd,IDirectUI **pResult)
{
	CDirectUI_ *pDirectUI = m_duiResource.CreateDirectUI((HWND)hWnd);

	IDirectUI *pDUICom = NULL;
	::CoCreateInstance(  __uuidof(DirectUI), NULL, CLSCTX_INPROC_SERVER, IID_IDispatch, (void**)&pDUICom);
	pDUICom->SetObjPtr((OLE_HANDLE)pDirectUI);
	pDirectUI->SetDispatch(pDUICom);

	*pResult = pDUICom;
	
	return S_OK;
}

STDMETHODIMP CDUIRes::CreateControl(IDirectUI* pDirectUI,BSTR strCLSID,IDUIControlBase **pResult)
{
	if (pDirectUI == NULL) return S_FALSE;

	CDirectUI_ *pDUI = ((CDirectUI*)pDirectUI)->m_pObject;

	SkinControlBase_ *pCtrlBase = m_duiResource.CreateControl(pDUI,strCLSID);
	*pResult = (IDUIControlBase*)pCtrlBase->GetDispatch();
	
	IDUIControlBase *pControlCom = NULL;
	pControlCom =*pResult;
	pControlCom->SetObjPtr((OLE_HANDLE)pCtrlBase);
	VARIANT_BOOL bResult = VARIANT_FALSE;
	pControlCom->CreateProps(&bResult);
	pControlCom->FinalCreate(VARIANT_FALSE);


	return S_OK;
}

STDMETHODIMP CDUIRes::LoadImage(BSTR strImagePath,IDUIRenderImage **ppResult)
{
	IRenderImage_ *pImage = new CRenderImage_GDI_();

	IDUIRenderImage *pDUIImage = NULL;
	::CoCreateInstance(__uuidof(DUIRenderImage), NULL, CLSCTX_INPROC_SERVER, IID_IDispatch, (void**)&pDUIImage);

	*ppResult = pDUIImage;

	pImage->SetDispatch(pDUIImage);

	return S_OK;
}