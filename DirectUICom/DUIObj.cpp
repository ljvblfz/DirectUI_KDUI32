// DUIObj.cpp : CDUIObj 的实现

#include "stdafx.h"
#include "DUIObj.h"


// CDUIObj
CDUIObj::CDUIObj():
m_pDUIObj(NULL),
m_pDUIRes(NULL)
{
}

CDUIObj::~CDUIObj()
{

}

HRESULT CDUIObj::FinalConstruct()
{
	return S_OK;
}

void CDUIObj::FinalRelease()
{
}

STDMETHODIMP CDUIObj::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IDUIObj
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CDUIObj::SetObjPtr(OLE_HANDLE pObjPtr)
{
	// TODO: 在此添加实现代码
	m_pDUIObj = (CDUIObj_*)pObjPtr;
	return S_OK;
}

STDMETHODIMP CDUIObj::GetObjPtr(OLE_HANDLE* pObjPtr)
{
	// TODO: 在此添加实现代码
	*pObjPtr = (OLE_HANDLE)m_pDUIObj;
	return S_OK;
}

STDMETHODIMP CDUIObj::SetName(BSTR strName)
{
	if (m_pDUIObj == NULL) return S_FALSE;

	USES_CONVERSION;
	m_pDUIObj->SetName(W2T(strName)); 

	return S_OK;
}

STDMETHODIMP CDUIObj::GetName(BSTR* pResult)
{
	if (m_pDUIObj == NULL) return S_FALSE;

	USES_CONVERSION;

	*pResult = T2W((LPTSTR)m_pDUIObj->GetName().c_str());

	return S_OK;
}

STDMETHODIMP CDUIObj::GetType(enumDUIObjType* pType)
{
	if (m_pDUIObj == NULL) return S_FALSE;

	*pType = (enumDUIObjType)m_pDUIObj->GetType();

	return S_OK;
}

STDMETHODIMP CDUIObj::SetDUIRes(IDUIRes* pDUIRes)
{
	m_pDUIRes = pDUIRes;

	return S_OK;
}

STDMETHODIMP CDUIObj::GetDUIRes(IDUIRes** ppResult)
{
	*ppResult = m_pDUIRes;

	return S_OK;
}
