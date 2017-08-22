// KDUI32.cpp : 定义 DLL 应用程序的入口点。
//

#include "stdafx.h"
#include "KDUI32.h"
#include <math.h>

#pragma comment(lib, "msimg32.lib")

#ifdef _MANAGED
#pragma managed(push, off)
#endif

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
    return TRUE;
}

#ifdef _MANAGED
#pragma managed(pop)
#endif

////////////////////////////////////////////////////////////////////////////////
//class CMsgHooker
CMsgHooker::CMsgHooker() : CSubclassWnd(),
m_MsgRecvObj(NULL)
{}

CMsgHooker::~CMsgHooker()
{
}

LRESULT CMsgHooker::BaseProc(HWND hWnd,UINT msg, WPARAM wp, LPARAM lp)
{
	return CSubclassWnd::WindowProc(hWnd,msg, wp, lp);
}

LRESULT CMsgHooker::WindowProc(HWND hWnd,UINT msg, WPARAM wp, LPARAM lp)
{
	BOOL bTurnDefProc = TRUE;
	LRESULT lRes = FALSE;

	BOOL bSendToUser = FALSE;
	
	if(HasMsgRecv())
	{
		CDirectUI_* pDirectUI = dynamic_cast<CDirectUI_*>(m_MsgRecvObj);
		if (pDirectUI)
		{
		//	bSendToUser = TRUE;
		}

		bTurnDefProc = m_MsgRecvObj->WindowProc(hWnd,msg, wp, lp, lRes);
	}
	
	if(bTurnDefProc == -1) //  拖拽后不需要发送LButtonDown消息 2011-9-20 yyc
		return lRes;
	else if((bTurnDefProc && m_pOldWndProc) || bSendToUser)
		return CSubclassWnd::WindowProc(hWnd,msg, wp, lp);
	else
		return lRes;
}

BOOL CRenderDC_GDI_::AlphaBlend_(IRenderImage_* pImage,const RECT& rcDest,const RECT& rcSrc)
{
	int nDestWidth = rcDest.right - rcDest.left;
	int nDestHeight = rcDest.bottom - rcDest.top;
	int nSrcWidth = rcSrc.right - rcSrc.left;
	int nSrcHeight = rcSrc.bottom - rcSrc.top;
	CRenderImage_GDI_ *pGDIImage = (CRenderImage_GDI_*)pImage;
	HBITMAP hBitmap = pGDIImage->GetHBitmap();
	HDC hDC = ::CreateCompatibleDC(m_hDC);
	HBITMAP hOldBitmap = (HBITMAP)::SelectObject(hDC,hBitmap);

	BLENDFUNCTION bf = { AC_SRC_OVER, 0,255, AC_SRC_ALPHA };
	::AlphaBlend(m_hDC,rcDest.left,rcDest.top,nDestWidth,nDestHeight,
		               hDC,rcSrc.left,rcSrc.top,nSrcWidth,nSrcHeight,bf);

	::SelectObject(hDC,hOldBitmap);
	::DeleteDC(hDC);

	return TRUE;
}

BOOL CRenderDC_GDI_::DrawImage(IRenderImage_* pImage, RECT rcDest, RECT rcSrc, 
									 BOOL bStretch,COLORREF clrTrans,BOOL bTrans,BOOL bClient /*= FALSE*/)
{
	RECT rectDest = rcDest;

	clrTrans = RGB(255,0,255);

	int nDesWidth = rectDest.right - rectDest.left;
	int nDesHeight = rectDest.bottom - rectDest.top;
	float fDesWidth = static_cast<float>(nDesWidth);
	float fDesHeight = static_cast<float>(nDesHeight);

	int nSrcWidth = rcSrc.right - rcSrc.left;
	int nSrcHeight = rcSrc.bottom - rcSrc.top;

	BOOL bSameSize = (nDesWidth == nSrcWidth) && (nDesHeight == nSrcHeight);

	if (bStretch && !bSameSize)
	{		
		AlphaBlend_(pImage,rcDest,rcSrc);
	}
	else
	{
		int nRowNum = 0, nColNum = 0;
		if (nSrcWidth <= fDesWidth || nSrcHeight <= fDesHeight)
		{
			nRowNum = ceil(fDesWidth / nSrcWidth) ;
			nColNum = ceil(fDesHeight / nSrcHeight);
			int nImgLeft = 0,nImgRight = 0,nImgTop = 0,nImgBottom = 0;

			for (int j = 0; j < nColNum; j++)
			{
				for (int i = 0; i < nRowNum; i++)
				{
					nImgLeft = rectDest.left + i * nSrcWidth ;
					nImgRight = nImgLeft + nSrcWidth;

					nImgTop = rectDest.top + j * nSrcHeight ;
					nImgBottom = nImgTop + nSrcHeight; 

					RECT rcSrcDraw = rcSrc;

					if (nImgRight > rectDest.right)
					{						
						rcSrcDraw.right = rcSrcDraw.left + nSrcWidth - (nImgRight - rectDest.right);
					}

					if (nImgBottom > rectDest.bottom)
					{
						rcSrcDraw.bottom = rcSrcDraw.top + nSrcHeight - (nImgBottom - rectDest.bottom);
					}

					RECT rcDest;
					rcDest.left = nImgLeft;
					rcDest.top = nImgTop;
					rcDest.right = rcDest.left + (rcSrcDraw.right - rcSrcDraw.left);
					rcDest.bottom = rcDest.top + (rcSrcDraw.bottom - rcSrcDraw.top);
					AlphaBlend_(pImage,rcDest,rcSrcDraw);
				}
			}
		}
		else
		{
			rcSrc.right = rcSrc.left + nDesWidth;
			rcSrc.bottom = rcSrc.top + nDesHeight;

			RECT rcDest;
			rcDest.left = rectDest.left;
			rcDest.top = rectDest.top;
			rcDest.right = rcDest.left + (rcSrc.right - rcSrc.left);
			rcDest.bottom = rcDest.top + (rcSrc.bottom - rcSrc.top);

			AlphaBlend_(pImage,rcDest,rcSrc);
		}
	}
	
	return TRUE;
}

BOOL CRenderDC_GDI_::DrawImageSec(IRenderImage_ *pImage,const RECT& rcDest,const RECT& rcSrc,const RECT& rcBorder)
{
	if (pImage == NULL) return FALSE;

	int nDesWidth = rcDest.right - rcDest.left;
	int nDesHeight = rcDest.bottom - rcDest.top;

	if (nDesHeight == 0 || nDesWidth == 0) return FALSE;	

	//画九宫图	
	//  +---|--------------------|---+
	//  |1	|			2		 |3	 |
	//  ------------------------------
	//  |4	|			5		 |6	 |
	//  ------------------------------
	//  |7	|			8		 |9	 |
	//  +---|--------------------|---+	
	RECT rcOffset = rcBorder;

	int nTopHeight = rcOffset.top;
	int nBottomHeight = rcOffset.bottom;
	int nLeftWidth = rcOffset.left;
	int nRightWidth = rcOffset.right;

	RECT rcTex = rcSrc;
	RECT rcDestTemp = {0,0,0,0},rcTexTemp = {0,0,0,0};

	COLORREF clrTrans = -1;
	BOOL bTrans = TRUE;

	//第一步: 贴四个角：1,3,7,9
	//1
	//&& nDesWidth >= nLeftWidth && nDesHeight >= nTopHeight
	if (nTopHeight != 0 && nLeftWidth !=0 )
	{  
		rcDestTemp.top = rcDest.top;
		rcDestTemp.bottom = rcDest.top + nTopHeight;
		rcDestTemp.left = rcDest.left;
		rcDestTemp.right = rcDest.left + nLeftWidth;

		rcTexTemp.top = rcTex.top;
		rcTexTemp.bottom = rcTex.top + nTopHeight;
		rcTexTemp.left = rcTex.left;
		rcTexTemp.right = rcTex.left + nLeftWidth;		

		DrawImage(pImage, rcDestTemp, rcTexTemp, FALSE,RGB(0,0,0),clrTrans,bTrans);
	}	

	//3
	//&& nDesWidth >= nRightWidth && nDesHeight >= nTopHeight
	if (nTopHeight != 0 && nRightWidth !=0 )
	{  
		rcDestTemp.top = rcDest.top;
		rcDestTemp.bottom = rcDest.top + nTopHeight;
		rcDestTemp.left = rcDest.right - nRightWidth;
		rcDestTemp.right = rcDest.right ;

		rcTexTemp.top = rcTex.top;
		rcTexTemp.bottom = rcTex.top + nTopHeight;
		rcTexTemp.left = rcTex.right - nRightWidth;
		rcTexTemp.right = rcTex.right;

		DrawImage(pImage, rcDestTemp, rcTexTemp, FALSE,clrTrans,bTrans,FALSE);
	}

	//7
	//&& nDesWidth >= nLeftWidth && nDesHeight >= nBottomHeight
	if (nBottomHeight != 0 && nLeftWidth !=0 )
	{  
		rcDestTemp.top = rcDest.bottom - nBottomHeight;
		rcDestTemp.bottom = rcDest.bottom;
		rcDestTemp.left = rcDest.left;
		rcDestTemp.right = rcDest.left + nLeftWidth;

		rcTexTemp.top = rcTex.bottom - nBottomHeight;
		rcTexTemp.bottom = rcTex.bottom;
		rcTexTemp.left = rcTex.left;
		rcTexTemp.right = rcTex.left + nLeftWidth;

		DrawImage(pImage, rcDestTemp, rcTexTemp, FALSE,clrTrans,bTrans,FALSE);
	}	

	//9
	// && nDesWidth >= nRightWidth && nDesHeight >= nBottomHeight
	if (nBottomHeight != 0 && nRightWidth !=0)
	{  
		rcDestTemp.top = rcDest.bottom - nBottomHeight;
		rcDestTemp.bottom = rcDest.bottom;
		rcDestTemp.left = rcDest.right - nRightWidth;
		rcDestTemp.right = rcDest.right ;

		rcTexTemp.top = rcTex.bottom - nBottomHeight;
		rcTexTemp.bottom = rcTex.bottom;
		rcTexTemp.left = rcTex.right - nRightWidth;
		rcTexTemp.right = rcTex.right;

		DrawImage(pImage, rcDestTemp, rcTexTemp, FALSE,clrTrans,bTrans,FALSE);
	}

	//第二步: 贴四条边：2,4,6,8
	//2
	//&& nDesHeight >= nTopHeight
	if (nTopHeight != 0 )
	{  
		rcDestTemp.top = rcDest.top;
		rcDestTemp.bottom = rcDest.top + nTopHeight;
		rcDestTemp.left = rcDest.left + nLeftWidth;
		rcDestTemp.right = rcDest.right - nRightWidth;

		rcTexTemp.top = rcTex.top;
		rcTexTemp.bottom = rcTex.top + nTopHeight;
		rcTexTemp.left = rcTex.left + nLeftWidth;
		rcTexTemp.right = rcTex.right - nRightWidth;

		if((rcDestTemp.right > rcDestTemp.left) && (rcDestTemp.bottom > rcDestTemp.top) )
		{
			DrawImage(pImage,rcDestTemp,rcTexTemp,TRUE,clrTrans,bTrans,FALSE);
		}
	}	

	//4
	//&& nDesWidth >= nLeftWidth
	if (nLeftWidth != 0 )
	{  
		rcDestTemp.top = rcDest.top + nTopHeight;
		rcDestTemp.bottom = rcDest.bottom - nBottomHeight;
		rcDestTemp.left = rcDest.left;
		rcDestTemp.right = rcDest.left + nLeftWidth;

		rcTexTemp.top = rcTex.top + nTopHeight;
		rcTexTemp.bottom = rcTex.bottom - nBottomHeight;
		rcTexTemp.left = rcTex.left;
		rcTexTemp.right = rcTex.left + nLeftWidth;

		if((rcDestTemp.right > rcDestTemp.left) && (rcDestTemp.bottom > rcDestTemp.top) )
		{
				DrawImage(pImage,rcDestTemp,rcTexTemp,TRUE,clrTrans,bTrans,FALSE);
		}
	}

	//6
	// && nDesWidth >= nRightWidth
	if (nRightWidth != 0)
	{  
		rcDestTemp.top = rcDest.top + nTopHeight;
		rcDestTemp.bottom = rcDest.bottom - nBottomHeight;
		rcDestTemp.left = rcDest.right - nRightWidth;
		rcDestTemp.right = rcDest.right;

		rcTexTemp.top = rcTex.top + nTopHeight;
		rcTexTemp.bottom = rcTex.bottom - nBottomHeight;
		rcTexTemp.right = rcTex.right;
		rcTexTemp.left = rcTex.right - nRightWidth;

		if((rcDestTemp.right > rcDestTemp.left) && (rcDestTemp.bottom > rcDestTemp.top) )
		{
				DrawImage(pImage,rcDestTemp,rcTexTemp,TRUE,clrTrans,bTrans,FALSE);
		}
	}

	//8
	//&& nDesHeight >= nBottomHeight
	if (nBottomHeight != 0 )
	{  
		rcDestTemp.top = rcDest.bottom - nBottomHeight;
		rcDestTemp.bottom = rcDest.bottom;
		rcDestTemp.left = rcDest.left + nLeftWidth;
		rcDestTemp.right = rcDest.right - nRightWidth;

		rcTexTemp.top = rcTex.bottom - nBottomHeight;
		rcTexTemp.bottom = rcTex.bottom;
		rcTexTemp.left = rcTex.left + nLeftWidth;
		rcTexTemp.right = rcTex.right - nRightWidth;

		if((rcDestTemp.right > rcDestTemp.left) && (rcDestTemp.bottom > rcDestTemp.top) )
		{
				DrawImage(pImage,rcDestTemp,rcTexTemp,TRUE,clrTrans,bTrans,FALSE);
		}
	}

	//第三步: 贴中间部分，Tile平铺或拉伸Stretch
	//if (nDesHeight - nBottomHeight - nTopHeight > 0 && nDesWidth - nRightWidth - nLeftWidth > 0)
	{  
		rcDestTemp.top = rcDest.top + nTopHeight;
		rcDestTemp.bottom = rcDest.bottom - nBottomHeight;
		rcDestTemp.left = rcDest.left + nLeftWidth;
		rcDestTemp.right = rcDest.right - nRightWidth;

		rcTexTemp.top = rcTex.top + nTopHeight;
		rcTexTemp.bottom = rcTex.bottom - nBottomHeight;
		rcTexTemp.left = rcTex.left + nLeftWidth;
		rcTexTemp.right = rcTex.right - nRightWidth;

		if((rcDestTemp.right > rcDestTemp.left) && (rcDestTemp.bottom > rcDestTemp.top) )
		{
				DrawImage(pImage,rcDestTemp,rcTexTemp,TRUE,clrTrans,bTrans,FALSE);
		}
	}
}