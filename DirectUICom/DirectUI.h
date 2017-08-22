// DirectUI.h : CDirectUI 的声明

#pragma once
#include "resource.h"       // 主符号

#include "DirectUICom.h"
#include "DirectUISupport.h"

#include "_IDirectUIEvents_CP.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif



// CDirectUI

class ATL_NO_VTABLE CDirectUI :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CDirectUI, &CLSID_DirectUI>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CDirectUI>,
	public CProxy_IDirectUIEvents<CDirectUI>,
	public IDispatchImpl<IDirectUI, &IID_IDirectUI, &LIBID_DirectUIComLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CDirectUI();
	virtual ~CDirectUI();

DECLARE_REGISTRY_RESOURCEID(IDR_DIRECTUI)


BEGIN_COM_MAP(CDirectUI)
	COM_INTERFACE_ENTRY(IDirectUI)
	COM_INTERFACE_ENTRY(ISkinObjResBase)
	COM_INTERFACE_ENTRY(IDUIObj)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CDirectUI)
	CONNECTION_POINT_ENTRY(__uuidof(_IDirectUIEvents))
END_CONNECTION_POINT_MAP()
// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();

public:
	CDirectUI_  *m_pObject;

public:
	DECLARE_OBJRESBASE();

	STDMETHOD(SetObjPtr)(OLE_HANDLE pObjPtr);
	STDMETHOD(Create)(OLE_HANDLE hWnd,SkinRect rect,VARIANT_BOOL* pbResult);
	STDMETHOD(GetHwnd)(OLE_HANDLE * phResult);
};

OBJECT_ENTRY_AUTO(__uuidof(DirectUI), CDirectUI)
