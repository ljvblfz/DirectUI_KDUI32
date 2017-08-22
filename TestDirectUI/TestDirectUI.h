// TestDirectUI.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CTestDirectUIApp:
// See TestDirectUI.cpp for the implementation of this class
//

class CTestDirectUIApp : public CWinApp
{
public:
	CTestDirectUIApp();

// Overrides
	public:
	virtual BOOL InitInstance();

	IDUIRes *m_pDUIRes;

// Implementation

	DECLARE_MESSAGE_MAP()
public:
	virtual int ExitInstance();
};

extern CTestDirectUIApp theApp;