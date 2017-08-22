// DUIPropType.h : CDUIPropType 的声明

#pragma once
#include "resource.h"       // 主符号

#include "DirectUICom.h"
#include "_IDUIPropTypeEvents_CP.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif



// CDUIPropType

class ATL_NO_VTABLE CDUIPropType :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CDUIPropType, &CLSID_DUIPropType>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CDUIPropType>,
	public CProxy_IDUIPropTypeEvents<CDUIPropType>,
	public IDispatchImpl<IDUIPropType, &IID_IDUIPropType, &LIBID_DirectUIComLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CDUIPropType():
    m_pIDispatch(NULL)
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_DUIPROPTYPE)


BEGIN_COM_MAP(CDUIPropType)
	COM_INTERFACE_ENTRY(IDUIPropType)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CDUIPropType)
	CONNECTION_POINT_ENTRY(__uuidof(_IDUIPropTypeEvents))
END_CONNECTION_POINT_MAP()
// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		if (m_pIDispatch)
		{
			IDUIControlBase* pControlBase = NULL;
			m_pIDispatch->QueryInterface(IID_IDUIControlBase,(void**)&pControlBase);
			if (pControlBase == NULL)//插件对象由另一个模块来管理,不需要在这里做清理
			{
				m_pIDispatch->Release();
				m_pIDispatch = NULL;
			}
		}

		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	IDUIPropBase *m_pPropOwner;
	ICtrlPluginProp *m_pPropParent;

private:
	CComBSTR m_strName;
	enumPropType m_eType;
	CComVariant m_vtValue;
	CComBSTR m_strHelp;
	CComBSTR m_strValue;
	IDispatch *m_pIDispatch;

public:
	STDMETHOD(get_eType)(enumPropType* pVal);
	STDMETHOD(put_eType)(enumPropType newVal);

	STDMETHOD(get_strName)(BSTR* pVal);
	STDMETHOD(put_strName)(BSTR newVal);

	STDMETHOD(get_vtValue)(VARIANT* pVal);
	STDMETHOD(put_vtValue)(VARIANT newVal);

	STDMETHOD(get_strValue)(BSTR* pVal);
	STDMETHOD(put_strValue)(BSTR newVal);

	STDMETHOD(GetPropBase)(IDUIPropBase** pResult);
	STDMETHOD(SetPropBase)(IDUIPropBase* pPropBase);

	STDMETHOD(GetParentProp)(ICtrlPluginProp** pResult);
	STDMETHOD(SetParentProp)(ICtrlPluginProp* pProp);

	STDMETHOD(get_bAccess)(/*[out, retval]*/ VARIANT_BOOL *pVal);
	STDMETHOD(put_bAccess)(/*[in]*/ VARIANT_BOOL newVal);

};

OBJECT_ENTRY_AUTO(__uuidof(DUIPropType), CDUIPropType)
