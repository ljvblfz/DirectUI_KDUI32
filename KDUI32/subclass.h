#pragma once

class KDUI32_API CSubclassWnd
{
	friend class CSubclassWndMap;

public:
	CSubclassWnd();
	~CSubclassWnd();
	
	// Subclass a window. Hook(NULL) to unhook (automatic on WM_NCDESTROY)
	BOOL	HookWindow(HWND  hwnd);
     void	Unhook();
	BOOL	IsHooked() {return m_hWnd!=NULL; }

	friend	LRESULT CALLBACK HookWndProc(HWND, UINT, WPARAM, LPARAM);
	virtual	LRESULT WindowProc(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp);
	LRESULT Default();				// call this at the end of handler fns

	static MSG& GetCurrMsg();

public:
	inline HWND GetHwnd(){return m_hWnd;}
	inline WNDPROC& GetOldWndProc(){return m_pOldWndProc;}
    
protected:
	HWND					m_hWnd;				// the window hooked
	WNDPROC			m_pOldWndProc;		// ..and original window proc
	CSubclassWnd*	m_pNext;				// next in chain of hooks for this window

	static MSG s_curMsg;
};
