// DirectUI.cpp : CDirectUI µÄÊµÏÖ

#include "stdafx.h"
#include "DirectUI.h"
#include "DUIObj.h"
#include "SkinObjResBase.h"

// CDirectUI

CDirectUI::CDirectUI():
m_pObject(NULL)
{
}

CDirectUI::~CDirectUI()
{
}

HRESULT CDirectUI::FinalConstruct()
{
	IMPLEMENT_OBJRESBASE();

	return S_OK;
}

void CDirectUI::FinalRelease()
{

}

STDMETHODIMP CDirectUI::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IDirectUI
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CDirectUI::SetObjPtr(OLE_HANDLE pObjPtr)
{
	m_pObject = (CDirectUI_*)pObjPtr;
	m_pObjResBase->SetObjPtr(pObjPtr);

	return S_OK;
}

STDMETHODIMP CDirectUI::Create(OLE_HANDLE hWnd,SkinRect rect,VARIANT_BOOL* pbResult)
{

	return S_OK;
}

STDMETHODIMP CDirectUI::GetHwnd(OLE_HANDLE * phResult)
{
	*phResult = OLE2HANDLE(m_pObject->GetHwnd());

	return S_OK;
}