// TestDirectUIDlg.h : header file
//

#pragma once


// CTestDirectUIDlg dialog
class CTestDirectUIDlg : public CDialog
{
// Construction
public:
	CTestDirectUIDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_TESTDIRECTUI_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	void Init();

// Implementation
protected:
	HICON m_hIcon;
	IDirectUI *m_pDirectUI;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};
