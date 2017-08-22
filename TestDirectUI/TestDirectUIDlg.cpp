// TestDirectUIDlg.cpp : implementation file
//

#include "stdafx.h"
#include "TestDirectUI.h"
#include "TestDirectUIDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CTestDirectUIDlg dialog




CTestDirectUIDlg::CTestDirectUIDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTestDirectUIDlg::IDD, pParent)
{
	m_pDirectUI = NULL;
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTestDirectUIDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CTestDirectUIDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_WM_CREATE()
END_MESSAGE_MAP()


// CTestDirectUIDlg message handlers

BOOL CTestDirectUIDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CTestDirectUIDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CTestDirectUIDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CTestDirectUIDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

#include "..\\DUIButton\\DUIButton.h"

void CTestDirectUIDlg::Init()
{
	theApp.m_pDUIRes->CreateDirectUI((OLE_HANDLE)m_hWnd,&m_pDirectUI);

	ICommandButton *pButton = NULL;
	theApp.m_pDUIRes->CreateControl(m_pDirectUI,L"{579147B8-9D94-481A-B200-C1CBD03FA01C}",(IDUIControlBase**)&pButton);

	VARIANT_BOOL bResult = VARIANT_FALSE;
	pButton->SetText(L"aaa",&bResult);
	SkinRect rect = {20,20,100,50};
	pButton->SetRect(rect);//*/

	DUIImageBase duiimgbase;
	duiimgbase.strImagePath = L"C:\\Button.bmp";

	duiimgbase.rect.left = 1;
	duiimgbase.rect.top = 1;
	duiimgbase.rect.right = 19;
	duiimgbase.rect.bottom = 22;

	duiimgbase.rcBorder.left = 4;
	duiimgbase.rcBorder.right = 4;
	duiimgbase.rcBorder.top = 4;
	duiimgbase.rcBorder.bottom = 4;
	
	duiimgbase.bStretch = VARIANT_TRUE;
	pButton->SetBackImage(&duiimgbase,DUI_BUTTON_STATUS_NORMAL,&bResult);

}

int CTestDirectUIDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	Init();

	return 0;
}
