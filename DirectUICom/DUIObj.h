// DUIObj.h : CDUIObj 的声明

#pragma once
#include "resource.h"       // 主符号

#include "DirectUICom.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif



// CDUIObj

class ATL_NO_VTABLE CDUIObj :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CDUIObj, &CLSID_DUIObj>,
	public ISupportErrorInfo,
	public IDispatchImpl<IDUIObj, &IID_IDUIObj, &LIBID_DirectUIComLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CDUIObj();
	virtual ~CDUIObj();

DECLARE_REGISTRY_RESOURCEID(IDR_DUIOBJ)


BEGIN_COM_MAP(CDUIObj)
	COM_INTERFACE_ENTRY(IDUIObj)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();

public:
	CDUIObj_ *m_pDUIObj;
	IDUIRes* m_pDUIRes;

public:
	STDMETHOD(SetName)(BSTR strName);

	STDMETHOD(SetObjPtr)(OLE_HANDLE pObjPtr);
	STDMETHOD(GetObjPtr)(OLE_HANDLE* pObjPtr);

	STDMETHOD(GetName)(BSTR* pResult);
	STDMETHOD(GetType)(enumDUIObjType* pType);
	STDMETHOD(SetDUIRes)(IDUIRes* pDUIRes);
	STDMETHOD(GetDUIRes)(IDUIRes** ppResult);
};

OBJECT_ENTRY_AUTO(__uuidof(DUIObj), CDUIObj)
