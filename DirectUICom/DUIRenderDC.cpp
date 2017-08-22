// DUIRenderDC.cpp : CDUIRenderDC µÄÊµÏÖ

#include "stdafx.h"
#include "DUIRenderDC.h"


// CDUIRenderDC

STDMETHODIMP CDUIRenderDC::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IDUIRenderDC
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CDUIRenderDC::SetRenderDCPtr(OLE_HANDLE pRenderDC)
{
	m_pDC = (IRenderDC_*)pRenderDC;

	return S_OK;
}

STDMETHODIMP CDUIRenderDC::GetRenderDCPtr(OLE_HANDLE *pRenderDC)
{
	*pRenderDC = (OLE_HANDLE)m_pDC;

	return S_OK;
}
