// CommandButton.cpp : CCommandButton µÄÊµÏÖ

#include "stdafx.h"
#include "CommandButton.h"
#include "stringex.h"

// CCommandButton
CCommandButton::CCommandButton()
{
	for (int i=DUI_BUTTON_STATUS_NORMAL;i<DUI_BUTTON_STATUS_LAST;i++)
	{
		m_pImageBack[i] = NULL;
	}
}

CCommandButton::~CCommandButton()
{
}

HRESULT CCommandButton::FinalConstruct()
{
	IMPLEMENT_CONTROLBASE();
	return S_OK;
}

void CCommandButton::FinalRelease()
{
	RELEASE_CONTROLBASE();
}

STDMETHODIMP CCommandButton::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ICommandButton
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CCommandButton::FinalCreate(VARIANT_BOOL bNewObject)
{
	IMPLEMENT_CONTROLBASE_GETVARS();

	return S_OK;
}

STDMETHODIMP CCommandButton::CreateProps(VARIANT_BOOL* pbResult)
{	
	ICtrlPluginProp *pGroupProp = NULL;
	CreateGroupProp(NULL,L"Back",VARIANT_TRUE,&pGroupProp);

	tstringex strKeys[] = {_T("Normal"),_T("Hot"),_T("Press"),_T("Disabled"),_T("Focus")};
	
	for (int i=DUI_BUTTON_STATUS_NORMAL;i<DUI_BUTTON_STATUS_LAST;i++)
	{
		BSTR bstrTemp = strKeys[i].AllocSysString();
		CreateProp(pGroupProp,_PROPTYPE_IMAGESECTION,bstrTemp,L"",VARIANT_TRUE, (IDUIPropBase**)&m_pImageBack[i]);
		::SysFreeString(bstrTemp);
	}//*/

	return S_OK;
}

STDMETHODIMP CCommandButton::RenderDrawObject(IDUIRenderDC* pDC, SkinRect* rect, VARIANT_BOOL* pbResult)
{
	m_pImageBack[0]->RenderDraw(pDC,rect,pbResult);

	return S_OK;
}

STDMETHODIMP CCommandButton::EventNotify(DUINotify *peVentNotify,VARIANT_BOOL *pbResult)
{
	return S_OK;
}


STDMETHODIMP CCommandButton::SetText(BSTR strText,VARIANT_BOOL* pbResult)
{
	m_strText = strText;
	*pbResult = VARIANT_TRUE;

	return S_OK;
}

STDMETHODIMP CCommandButton::SetBackImage(DUIImageBase *pImageBase,eDUI_BUTTON_STATUS eStatus,VARIANT_BOOL* pbResult)
{
	*pbResult = VARIANT_FALSE;

	if (eStatus < DUI_BUTTON_STATUS_NORMAL || eStatus >= DUI_BUTTON_STATUS_LAST) return S_FALSE;
	
	IImageSecProp * pImageProp = m_pImageBack[eStatus];
	if (pImageProp == NULL) return S_FALSE;

	pImageProp->SetImageBase(pImageBase,pbResult);

	*pbResult = VARIANT_TRUE;

	return S_OK;
}
