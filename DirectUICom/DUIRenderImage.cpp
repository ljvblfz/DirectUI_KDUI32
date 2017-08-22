// DUIRenderImage.cpp : CDUIRenderImage µÄÊµÏÖ

#include "stdafx.h"
#include "DUIRenderImage.h"


// CDUIRenderImage

STDMETHODIMP CDUIRenderImage::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IDUIRenderImage
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}
