// DUIControlBase.cpp : CDUIControlBase 的实现

#include "stdafx.h"
#include "DUIControlBase.h"
#include "DUIObj.h"
#include "SkinObjResBase.h"

// CDUIControlBase
CDUIControlBase::CDUIControlBase():
m_pObject(NULL),
m_pRealCtrlBase(NULL)
{

}

CDUIControlBase::~CDUIControlBase()
{

}

HRESULT CDUIControlBase::FinalConstruct()
{
	IMPLEMENT_OBJRESBASE();
	return S_OK;
}

void CDUIControlBase::FinalRelease()
{

}

STDMETHODIMP CDUIControlBase::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IDUIControlBase
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CDUIControlBase::SetObjPtr(OLE_HANDLE pObjPtr)
{
	m_pObject = (SkinControlBase_*)pObjPtr;
	m_pObjResBase->SetObjPtr(pObjPtr);

	return S_OK;
}


STDMETHODIMP CDUIControlBase::CreateProps(VARIANT_BOOL* pbResult)
{
	// TODO: 在此添加实现代码

	return S_OK;
}

STDMETHODIMP CDUIControlBase::RenderDrawObject(IDUIRenderDC* pDC, SkinRect* rect, VARIANT_BOOL* pbResult)
{
	// TODO: 在此添加实现代码

	return S_OK;
}

STDMETHODIMP CDUIControlBase::EventNotify(DUINotify *peVentNotify,VARIANT_BOOL *pbResult)
{

	return S_OK;
}

STDMETHODIMP CDUIControlBase::GetControlTypeName(BSTR* pstrResult)
{

	return S_OK;
}

STDMETHODIMP CDUIControlBase::GetAuthorInfo(BSTR *pbstrAuthorName,BSTR *pbstrCompany,BSTR *pbstrUrl,BSTR *pbstrVersion)
{
	return S_OK;
}

STDMETHODIMP CDUIControlBase::GetControlIcon(int nWidth,int nHeight,OLE_HANDLE* phIcon)
{
	return S_OK;
}

STDMETHODIMP CDUIControlBase::GetDragCursor(OLE_HANDLE *phCursor)
{
	return S_OK;
}

STDMETHODIMP CDUIControlBase::SetClassId(BSTR clsId)
{
	return S_OK;
}

STDMETHODIMP CDUIControlBase::GetClassId(BSTR* clsId)
{
	return S_OK;
}

STDMETHODIMP CDUIControlBase::GetCategoryName(BSTR* pstrResult)
{
	return S_OK;
}

STDMETHODIMP CDUIControlBase::CreateGroupProp(ICtrlPluginProp *pParentProp,BSTR strPropName,VARIANT_BOOL bExpand,ICtrlPluginProp **ppProp)
{	
	ICtrlPluginProp* pAddinProp = NULL;
	::CoCreateInstance(__uuidof(CtrlPluginProp),NULL,CLSCTX_INPROC_SERVER,__uuidof(ICtrlPluginProp), (void**)&pAddinProp);

	pAddinProp->put_strName(strPropName);
	pAddinProp->put_bGroup(TRUE);
	IDUIRes *pDUIRes = (IDUIRes*)m_pObject->GetDUIRes()->GetDUIResComPtr();
	pAddinProp->SetDUIRes(pDUIRes);
	pAddinProp->SetControlBasePtr(m_pRealCtrlBase);
	pAddinProp->Expand(bExpand);

	if (pParentProp)
		pParentProp->AddProp(pAddinProp);
	else
		AddProp(pAddinProp); 

	*ppProp = pAddinProp;

	return S_OK;
}

STDMETHODIMP CDUIControlBase::CreateProp(ICtrlPluginProp* pPropParent,enumPropType eType,BSTR strPropName,BSTR strPropHelp,VARIANT_BOOL bIsStyle,IDUIPropBase **ppProp)
{
	IDUIPropBase *pProp = NULL;
	
	switch(eType)
	{
	case _PROPTYPE_IMAGESECTION:
		{
			::CoCreateInstance(__uuidof(ImageSecProp),NULL,CLSCTX_INPROC_SERVER,
				__uuidof(IImageSecProp),(LPVOID*)&pProp);
		}
		break;

	default:
		break;
	}

	if (pProp == NULL) return S_FALSE;

	pProp->SetName(strPropName);
	pProp->SetHelp(strPropHelp);

	IDUIPropType *pPropType = NULL;
	pProp->GetPropTypePtr(&pPropType);

	if (pPropParent)
	{
		pPropParent->AddSkinProp(pPropType);
		pPropParent->AddPropBase(pProp);
	}

	*ppProp = pProp;

	return S_OK;
}

STDMETHODIMP CDUIControlBase::AddProp(ICtrlPluginProp* pProp)
{
	m_dequeProps.push_back(pProp);
	return S_OK;
}

STDMETHODIMP CDUIControlBase::GetPropList(OLE_HANDLE *pPropList)
{
	*pPropList = (OLE_HANDLE)&m_dequeProps;
	return S_OK;
}

STDMETHODIMP CDUIControlBase::SetRealCtrlPtr(IDUIControlBase* pCtrlBase)
{
	m_pRealCtrlBase = pCtrlBase;

	return S_OK;
}

STDMETHODIMP CDUIControlBase::GetRealCtrlPtr(IDUIControlBase** ppCtrlBase)
{
	*ppCtrlBase = m_pRealCtrlBase;

	return S_OK;
}

STDMETHODIMP CDUIControlBase::FinalCreate(VARIANT_BOOL bNewObject)
{

	return S_OK;
}

STDMETHODIMP CDUIControlBase::GetInterface(OLE_HANDLE pIID,IDispatch **ppResult)
{
	*ppResult = NULL;

	CLSID* pClsID = (CLSID*)pIID;
	if (pClsID == NULL) return S_FALSE;

	if (*pClsID == __uuidof(IDUIObj))
	{
		*ppResult = m_pDUIObj;
		return S_OK;
	}
	else if (*pClsID == __uuidof(ISkinObjResBase))
	{
		*ppResult = m_pObjResBase;
		return S_OK;
	}
	else if (*pClsID == __uuidof(IDUIControlBase))
	{
		*ppResult = this;
		return S_OK;
	}

	return S_FALSE;
}
