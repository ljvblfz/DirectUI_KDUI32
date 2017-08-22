// ImageSecProp.cpp : CImageSecProp µÄÊµÏÖ

#include "stdafx.h"
#include "ImageSecProp.h"
#include "DUIPropBase.h"
#include "DUIPropType.h"

// CImageSecProp

STDMETHODIMP CImageSecProp::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IImageSecProp
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CImageSecProp::RenderDraw(IDUIRenderDC* pDC, SkinRect* rect, 
									   VARIANT_BOOL* pbResult)
{
	IRenderDC_ *pDC_ = NULL;
	pDC->GetRenderDCPtr((OLE_HANDLE*)&pDC_);

	RECT rcDest = {rect->left,rect->top,rect->right,rect->bottom};
	
	BOOL bResult = m_pImageBase->RenderDraw(pDC_,rcDest);

	*pbResult = bResult ? VARIANT_TRUE : VARIANT_FALSE;

	return S_OK;
}

STDMETHODIMP CImageSecProp::SetImageBase(DUIImageBase *pImgbase,VARIANT_BOOL* pbResult)
{
	SkinPicture_ *pSkinPicture = new SkinPicture_();
	USES_CONVERSION;
	LPCTSTR strName = W2T(pImgbase->strImagePath);
	pSkinPicture->SetName(strName);
	pSkinPicture->LoadImage(strName);
	
	m_pImageBase->SetPicture(pSkinPicture);

	RECT rect;
	rect.left = pImgbase->rect.left;
	rect.top = pImgbase->rect.top;
	rect.right = pImgbase->rect.right;
	rect.bottom = pImgbase->rect.bottom;
	m_pImageBase->SetSourceRect(rect);

	RECT rcBorder;
	rcBorder.left = pImgbase->rcBorder.left;
	rcBorder.top = pImgbase->rcBorder.top;
	rcBorder.right = pImgbase->rcBorder.right;
	rcBorder.bottom = pImgbase->rcBorder.bottom;
	m_pImageBase->SetBorderRect(rcBorder);
	
	return S_OK;
}

STDMETHODIMP CImageSecProp::GetImageBase(DUIImageBase *pImgbase)
{
	RECT rect = m_pImageBase->GetSourceRect();
	pImgbase->rect.left = rect.left;
	pImgbase->rect.top = rect.top;
	pImgbase->rect.right = rect.right;
	pImgbase->rect.bottom = rect.bottom;

	RECT rcBorder = m_pImageBase->GetBorderRect();
	pImgbase->rcBorder.left = rcBorder.left;
	pImgbase->rcBorder.top = rcBorder.top;
	pImgbase->rcBorder.right = rcBorder.right;
	pImgbase->rcBorder.bottom = rcBorder.bottom;

	SkinPicture_* pSkinPicture = m_pImageBase->GetPicture();
	if (pSkinPicture)
	{
		USES_CONVERSION;
		pImgbase->strImagePath = T2W((LPTSTR)pSkinPicture->GetName().c_str());
	}

	return S_OK;
}
