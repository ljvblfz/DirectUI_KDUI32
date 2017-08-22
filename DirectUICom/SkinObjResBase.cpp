// SkinObjResBase.cpp : CSkinObjResBase µÄÊµÏÖ

#include "stdafx.h"
#include "SkinObjResBase.h"
#include "DUIObj.h"

// CSkinObjResBase
CSkinObjResBase::CSkinObjResBase():
m_pSkinObjResBase(NULL),
m_pDUIObj(NULL)
{
}

CSkinObjResBase::~CSkinObjResBase()
{
}

HRESULT CSkinObjResBase::FinalConstruct()
{
	CDUIObj::CreateInstance(&m_pDUIObj);

	return S_OK;
}

void CSkinObjResBase::FinalRelease()
{
	m_pDUIObj->Release();
}

STDMETHODIMP CSkinObjResBase::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ISkinObjResBase
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CSkinObjResBase::SetObjPtr(OLE_HANDLE pObjPtr)
{
	m_pSkinObjResBase = ((SkinObjResBase_*)pObjPtr);

	return S_OK;
}

STDMETHODIMP CSkinObjResBase::SetRect(SkinRect rect)
{
	if (m_pSkinObjResBase == NULL) return S_FALSE;
	
	RECT rc = {rect.left,rect.top,rect.right,rect.bottom};
	m_pSkinObjResBase->SetRect(rc);

	return S_OK;
}

STDMETHODIMP CSkinObjResBase::GetRect(SkinRect *pRect)
{
	if (m_pSkinObjResBase == NULL) return S_FALSE;

	RECT rect = m_pSkinObjResBase->GetRect();
	pRect->left = rect.left;
	pRect->top = rect.top;
	pRect->right = rect.right;
	pRect->bottom = rect.bottom;

	return S_OK;
}

