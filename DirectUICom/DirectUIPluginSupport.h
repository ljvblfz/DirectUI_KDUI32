#if !defined (_DIRECTUIPLUGINSUPPORT_INC_H_)
#define _DIRECTUIPLUGINSUPPORT_INC_H_

#pragma once

#include "DirectUISupport.h"

#include <map>
#include <deque>
using namespace std;

#define BEGIN_CONTROLBASE_IMPL(ControlBase) 
#define CONTROLBASE_CreateGroupProp(ControlBase)  STDMETHODIMP RAW(CreateGroupProp)(ICtrlPluginProp *pParentProp,BSTR strPropName,VARIANT_BOOL bExpand,ICtrlPluginProp **ppProp){return ControlBase->RAW(CreateGroupProp)(pParentProp,strPropName,bExpand,ppProp);}
#define CONTROLBASE_CreateProp(ControlBase)  STDMETHODIMP RAW(CreateProp)(ICtrlPluginProp* pPropParent,enumPropType eType,BSTR strPropName,BSTR strPropHelp,VARIANT_BOOL bIsStyle, IDUIPropBase **ppProp){return ControlBase->RAW(CreateProp)(pPropParent,eType,strPropName,strPropHelp,bIsStyle,ppProp);}
#define CONTROLBASE_GetAuthorInfo(ControlBase)  STDMETHODIMP RAW(GetAuthorInfo)(BSTR *pbstrAuthorName,BSTR *pbstrCompany,BSTR *pbstrUrl,BSTR *pbstrVersion){return ControlBase->RAW(GetAuthorInfo)(pbstrAuthorName,pbstrCompany,pbstrUrl,pbstrVersion);}
#define CONTROLBASE_GetControlTypeName(ControlBase)  STDMETHODIMP RAW(GetControlTypeName)(BSTR* pbstrName){return ControlBase->RAW(GetControlTypeName)(pbstrName);}
#define CONTROLBASE_GetCategoryName(ControlBase)  STDMETHODIMP RAW(GetCategoryName)(BSTR* pstrResult){return ControlBase->RAW(GetCategoryName)(pstrResult);}
#define CONTROLBASE_GetDragCursor(ControlBase)  STDMETHODIMP RAW(GetDragCursor)(OLE_HANDLE *phCursor){return ControlBase->RAW(GetDragCursor)(phCursor);}
#define CONTROLBASE_GetControlIcon(ControlBase)  STDMETHODIMP RAW(GetControlIcon)(int nWidth,int nHeight,OLE_HANDLE* phIcon){return ControlBase->RAW(GetControlIcon)(nWidth,nHeight,phIcon);}
#define CONTROLBASE_SetClassId(ControlBase)  STDMETHODIMP RAW(SetClassId)(BSTR clsId){return ControlBase->RAW(SetClassId)(clsId);}
#define CONTROLBASE_GetClassId(ControlBase)  STDMETHODIMP RAW(GetClassId)(BSTR* clsId){return ControlBase->RAW(GetClassId)(clsId);}
#define CONTROLBASE_RenderDrawObject(ControlBase)  STDMETHODIMP RAW(RenderDrawObject)(IDUIRenderDC *pDC,SkinRect sknrc,VARIANT_BOOL* pbResult){return ControlBase->RAW(RenderDrawObject)(pDC,sknrc,pbResult);}
#define CONTROLBASE_SetObjPtr(ControlBase)  STDMETHODIMP RAW(SetObjPtr)(OLE_HANDLE pObjPtr){return ControlBase->RAW(SetObjPtr)(pObjPtr);}
#define CONTROLBASE_AddProp(ControlBase)  STDMETHODIMP RAW(AddProp)(ICtrlPluginProp* pProp){return ControlBase->RAW(AddProp)(pProp);}
#define CONTROLBASE_GetPropList(ControlBase)  STDMETHODIMP RAW(GetPropList)(OLE_HANDLE *pPropList){return ControlBase->RAW(GetPropList)(pPropList);}
#define CONTROLBASE_SetRealCtrlPtr(ControlBase)  STDMETHODIMP RAW(SetRealCtrlPtr)(IDUIControlBase* pCtrlBase){return ControlBase->RAW(SetRealCtrlPtr)(pCtrlBase);}
#define CONTROLBASE_GetRealCtrlPtr(ControlBase)  STDMETHODIMP RAW(GetRealCtrlPtr)(IDUIControlBase** ppCtrlBase){return ControlBase->RAW(GetRealCtrlPtr)(ppCtrlBase);}
#define CONTROLBASE_GetInterface(ControlBase)  STDMETHODIMP RAW(GetInterface)(OLE_HANDLE pIID,IDispatch **ppResult){return ControlBase->RAW(GetInterface)(pIID,ppResult);}
#define END_CONTROLBASE_IMPL(ControlBase)

#define INTERFACE_CONTROLBASE_IMPL_NORENDERDRAWOBJECT(ControlBase)\
	CONTROLBASE_CreateGroupProp(ControlBase)\
	CONTROLBASE_CreateProp(ControlBase)\
	CONTROLBASE_SetClassId(ControlBase)\
	CONTROLBASE_GetClassId(ControlBase)\
	CONTROLBASE_GetAuthorInfo(ControlBase)\
	CONTROLBASE_GetControlTypeName(ControlBase)\
	CONTROLBASE_GetCategoryName(ControlBase)\
	CONTROLBASE_GetDragCursor(ControlBase)\
	CONTROLBASE_GetControlIcon(ControlBase)\
	CONTROLBASE_AddProp(ControlBase)\
	CONTROLBASE_GetPropList(ControlBase)\
	CONTROLBASE_SetRealCtrlPtr(ControlBase)\
	CONTROLBASE_GetRealCtrlPtr(ControlBase)\
	CONTROLBASE_GetInterface(ControlBase)
	
#define DECLARE_CONTROLBASE_VAR() \
	IDUIObj *m_pDUIObj;\
	ISkinObjResBase *m_pObjResBase;\
	IDUIControlBase *m_pControlBase;\
	IDUIRes *m_pDUIRes;\
	IDirectUI *m_pDirectUI;\
	HWND m_hWndDirectUI;
	
#define	DECLARE_CONTROLBASE_DEFAULT() \
	DECLARE_CONTROLBASE_VAR()\
	INTERFACE_DUIOBJ_IMPL_DEFAULT(m_pDUIObj)\
	INTERFACE_SKINOBJRESBASE_IMPL_DEFAULT(m_pObjResBase)\
	INTERFACE_CONTROLBASE_IMPL_DEFAULT(m_pControlBase)\
	CONTROLBASE_SetObjPtr(m_pControlBase)\

#define	DECLARE_CONTROLBASE_NORENDERDRAWOBJECT() \
	DECLARE_CONTROLBASE_VAR()\
	INTERFACE_DUIOBJ_IMPL_DEFAULT(m_pDUIObj)\
	INTERFACE_SKINOBJRESBASE_IMPL_DEFAULT(m_pObjResBase)\
	INTERFACE_CONTROLBASE_IMPL_NORENDERDRAWOBJECT(m_pControlBase)\
	CONTROLBASE_SetObjPtr(m_pControlBase)\

#define IMPLEMENT_CONTROLBASE() \
	m_pDUIObj = NULL;\
	m_pObjResBase = NULL;\
	m_pDUIRes = NULL;\
	m_pDirectUI = NULL;\
	m_hWndDirectUI = NULL;\
	::CoCreateInstance(__uuidof(DUIControlBase),NULL,CLSCTX_INPROC_SERVER,__uuidof(IDUIControlBase),(LPVOID*)&m_pControlBase);\
	m_pControlBase->SetRealCtrlPtr(this);
	
#define IMPLEMENT_CONTROLBASE_GETVARS() \
	GUID guidObj = __uuidof(IDUIObj);\
	m_pControlBase->GetInterface((OLE_HANDLE)(&guidObj),(IDispatch**)&m_pDUIObj);\
	GUID guidResObj = __uuidof(ISkinObjResBase);\
	m_pControlBase->GetInterface((OLE_HANDLE)(&guidResObj),(IDispatch**)&m_pObjResBase);\
	m_pControlBase->GetDUIRes(&m_pDUIRes);//\
//	m_pControlBase->GetDirectUI((IDispatch**)&m_pDirectUI);
//	if (m_pDirectUI)\
//		{m_pDirectUI->GetWindowHandle((LONGLONG*)&m_hWndDirectUI);\
//		m_pDirectUI->GetRenderDevice((LONGLONG*)&m_pRenderDevice);}


#define RELEASE_CONTROLBASE() \
	if (m_pControlBase){\
	m_pControlBase->Release();\
	m_pControlBase = NULL;\
	}

#endif //_DIRECTUIPLUGINSUPPORT_INC_H_