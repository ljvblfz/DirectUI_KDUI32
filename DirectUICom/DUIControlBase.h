// DUIControlBase.h : CDUIControlBase 的声明

#pragma once
#include "resource.h"       // 主符号

#include "DirectUICom.h"
#include "DirectUISupport.h"

#include "_IDUIControlBaseEvents_CP.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif



// CDUIControlBase

class ATL_NO_VTABLE CDUIControlBase :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CDUIControlBase, &CLSID_DUIControlBase>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CDUIControlBase>,
	public CProxy_IDUIControlBaseEvents<CDUIControlBase>,
	public IDispatchImpl<IDUIControlBase, &IID_IDUIControlBase, &LIBID_DirectUIComLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CDUIControlBase();
	virtual ~CDUIControlBase();

DECLARE_REGISTRY_RESOURCEID(IDR_DUICONTROLBASE)


BEGIN_COM_MAP(CDUIControlBase)
	COM_INTERFACE_ENTRY(IDUIControlBase)
	COM_INTERFACE_ENTRY(ISkinObjResBase)
	COM_INTERFACE_ENTRY(IDUIObj)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CDUIControlBase)
	CONNECTION_POINT_ENTRY(__uuidof(_IDUIControlBaseEvents))
END_CONNECTION_POINT_MAP()
// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();

protected:
	deque<ICtrlPluginProp*> m_dequeProps;
	IDUIControlBase *m_pRealCtrlBase;

private:
	SkinControlBase_ *m_pObject;

public:
	DECLARE_OBJRESBASE();

	STDMETHOD(SetObjPtr)(OLE_HANDLE pObjPtr);

	STDMETHOD(FinalCreate)(VARIANT_BOOL bNewObject);
	STDMETHOD(CreateProps)(VARIANT_BOOL* pbResult);
	STDMETHOD(RenderDrawObject)(IDUIRenderDC* pDC, SkinRect* rect, VARIANT_BOOL* pbResult);
	STDMETHOD(EventNotify)(DUINotify *peVentNotify,VARIANT_BOOL *pbResult);

	STDMETHOD(GetControlTypeName)(BSTR* pstrResult);
	STDMETHOD(GetAuthorInfo)(BSTR *pbstrAuthorName,BSTR *pbstrCompany,BSTR *pbstrUrl,BSTR *pbstrVersion);
	STDMETHOD(GetControlIcon)(int nWidth,int nHeight,OLE_HANDLE* phIcon);
	STDMETHOD(GetDragCursor)(OLE_HANDLE *phCursor);
	STDMETHOD(SetClassId)(BSTR clsId);
	STDMETHOD(GetClassId)(BSTR* clsId);
	STDMETHOD(GetCategoryName)(BSTR* pstrResult);
	STDMETHOD(CreateGroupProp)(ICtrlPluginProp *pParentProp,BSTR strPropName,VARIANT_BOOL bExpand,ICtrlPluginProp **ppProp);
	STDMETHOD(CreateProp)(ICtrlPluginProp* pPropParent,enumPropType eType,BSTR strPropName,BSTR strPropHelp,VARIANT_BOOL bIsStyle,IDUIPropBase **ppProp);
	STDMETHOD(AddProp)(ICtrlPluginProp* pProp);
	STDMETHOD(GetPropList)(OLE_HANDLE *pPropList);
	STDMETHOD(SetRealCtrlPtr)(IDUIControlBase* pCtrlBase);
	STDMETHOD(GetRealCtrlPtr)(IDUIControlBase** ppCtrlBase);
	STDMETHOD(GetInterface)(OLE_HANDLE pIID,IDispatch **ppResult);

};

OBJECT_ENTRY_AUTO(__uuidof(DUIControlBase), CDUIControlBase)
