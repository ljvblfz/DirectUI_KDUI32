#if !defined (_DIRECTUISUPPORT_INC_H_)
#define _DIRECTUISUPPORT_INC_H_

#pragma once

#include "DirectUICom.h"

#include <comutil.h>
#pragma comment(lib, "comsupp.lib")

#include <map>
#include <deque>
using namespace std;

#define SkinRect2CRect(sknrc) CRect((sknrc).left,(sknrc).top,(sknrc).right,(sknrc).bottom)
#define CRect2SkinRect(rect,sknrc) (sknrc).left = (rect).left;(sknrc).right = (rect).right;(sknrc).top = (rect).top;(sknrc).bottom = (rect).bottom; 
#define SkinSize2CSize(sknsize) CSize((sknsize).cx,(sknsize).cy)
#define CSize2SkinSize(size,sknsize) (sknsize).cx = (size).cx;(sknsize).cy = (size).cy;
#define VARIANTBOOL2BOOL(bValue) bValue == VARIANT_TRUE ? TRUE : FALSE
#define BOOL2VARIANTBOOL(bValue) bValue ? VARIANT_TRUE : VARIANT_FALSE

COLORREF OLE2COLOR(OLE_COLOR clrValue);

#define	HANDLE2OLE(handle) \
	(OLE_HANDLE)LONG_PTR(handle)

#define     OLE2HANDLE(olehandle) \
	(OLE_HANDLE)(LONG_PTR)(olehandle)


#ifndef UNREFERENCED_PARAMETER
#define UNREFERENCED_PARAMETER(P)          (P)
#endif

#ifdef _DIRECTUICOM
#define RAW(x) x
#else
#define RAW(x) x
//#define RAW(x) raw_##x
#endif

#define BEGIN_DUIOBJ_IMPL(DuiObj) 
#define DUIOBJ_GetName(DuiObj) STDMETHODIMP RAW(GetName)(BSTR* pstrResult){return DuiObj->RAW(GetName)(pstrResult);}
#define DUIOBJ_SetName(DuiObj) STDMETHODIMP RAW(SetName)(BSTR strName){return DuiObj->RAW(SetName)(strName);}
#define DUIOBJ_GetObjPtr(DuiObj) STDMETHODIMP RAW(GetObjPtr)(OLE_HANDLE *pResult){return DuiObj->RAW(GetObjPtr)(pResult);}
#define DUIOBJ_GetDUIRes(DuiObj) STDMETHODIMP RAW(GetDUIRes)(IDUIRes **ppResult){return DuiObj->RAW(GetDUIRes)(ppResult);}
#define DUIOBJ_SetDUIRes(DuiObj) STDMETHODIMP RAW(SetDUIRes)(IDUIRes *pResult){return DuiObj->RAW(SetDUIRes)(pResult);}
#define DUIOBJ_GetType(DuiObj) STDMETHODIMP RAW(GetType)(enumDUIObjType* pType){return DuiObj->RAW(GetType)(pType);}
#define END_DUIOBJ_IMPL(DuiObj)

#define INTERFACE_DUIOBJ_IMPL_DEFAULT(DuiObj)\
	DUIOBJ_GetName(DuiObj)\
	DUIOBJ_SetName(DuiObj)\
	DUIOBJ_GetObjPtr(DuiObj)\
	DUIOBJ_GetDUIRes(DuiObj)\
	DUIOBJ_SetDUIRes(DuiObj)\
	DUIOBJ_GetType(DuiObj)

#define INTERFACE_DUIOBJ_IMPL    INTERFACE_DUIOBJ_IMPL_DEFAULT

#define BEGIN_OBJRESBASE_IMPL(SkinObjResBase) 
#define OBJRESBASE_GetRect(SkinObjResBase) STDMETHODIMP RAW(GetRect)(SkinRect* pRect){return SkinObjResBase->RAW(GetRect)(pRect);}
#define OBJRESBASE_SetRect(SkinObjResBase) STDMETHODIMP RAW(SetRect)(SkinRect rect){return SkinObjResBase->RAW(SetRect)(rect);}
//#define OBJRESBASE_GetDirectUI(SkinObjResBase) STDMETHODIMP RAW(GetDirectUI)(IDispatch** pDirectUI){return SkinObjResBase->RAW(GetDirectUI)(pDirectUI);}
#define END_OBJRESBASE_IMPL(SkinObjResBase)

#define INTERFACE_SKINOBJRESBASE_IMPL_DEFAULT(SkinObjResBase)\
	OBJRESBASE_GetRect(SkinObjResBase)\
	OBJRESBASE_SetRect(SkinObjResBase)//\
//	OBJRESBASE_GetDirectUI(SkinObjResBase)

#define INTERFACE_SKINOBJRESBASE_IMPL    INTERFACE_SKINOBJRESBASE_IMPL_DEFAULT

#define	DECLARE_OBJRESBASE_DEFAULT() \
	IDUIObj *m_pDUIObj;\
	ISkinObjResBase *m_pObjResBase;\
	INTERFACE_DUIOBJ_IMPL_DEFAULT(m_pDUIObj)\
	INTERFACE_SKINOBJRESBASE_IMPL_DEFAULT(m_pObjResBase)/*\
	OBJRESBASE_AccessConfig(m_pDUIObj)*/

#define	DECLARE_OBJRESBASE   DECLARE_OBJRESBASE_DEFAULT

#define IMPLEMENT_OBJRESBASE() \
	m_pObjResBase = NULL;\
	CSkinObjResBase::CreateInstance(&m_pObjResBase);\
	m_pDUIObj = ((CSkinObjResBase*)m_pObjResBase)->m_pDUIObj;

#define BEGIN_PROPBASE_IMPL(PropBase) 
#define PROPBASE_SetName(PropBase) STDMETHODIMP RAW(SetName)(BSTR strName){return PropBase->RAW(SetName)(strName);}
#define PROPBASE_GetName(PropBase) STDMETHODIMP RAW(GetName)(BSTR *pStrName){return PropBase->RAW(GetName)(pStrName);}
#define PROPBASE_SetHelp(PropBase) STDMETHODIMP RAW(SetHelp)(BSTR strHelp){return PropBase->RAW(SetHelp)(strHelp);}
#define PROPBASE_GetHelp(PropBase) STDMETHODIMP RAW(GetHelp)(BSTR *pStrHelp){return PropBase->RAW(GetHelp)(pStrHelp);}
#define PROPBASE_SetType(PropBase) STDMETHODIMP RAW(SetType)(enumPropType eType){return PropBase->RAW(SetType)(eType);}
#define PROPBASE_GetType(PropBase) STDMETHODIMP RAW(GetType)(enumPropType *pResult){return PropBase->RAW(GetType)(pResult);}
#define PROPBASE_SetVariant(PropBase) STDMETHODIMP RAW(SetVariant)(VARIANT variant){return PropBase->RAW(SetVariant)(variant);}
#define PROPBASE_GetVariant(PropBase) STDMETHODIMP RAW(GetVariant)(VARIANT *pVariant){return PropBase->RAW(GetVariant)(pVariant);}
#define PROPBASE_AccessConfig(PropBase) STDMETHODIMP RAW(AccessConfig)(OLE_HANDLE pXmlEle,BSTR strKeyName,VARIANT_BOOL bRead,VARIANT_BOOL bCompleteUseKey,VARIANT_BOOL *pbResult){return PropBase->RAW(AccessConfig)(pXmlEle,strKeyName,bRead,bCompleteUseKey,pbResult);}
#define PROPBASE_GetPropTypePtr(PropBase) STDMETHODIMP RAW(GetPropTypePtr)(IDUIPropType **ppDUIPropType){return PropBase->RAW(GetPropTypePtr)(ppDUIPropType);}
#define END_PROPBASE_IMPL(PropBase)

#define INTERFACE_PROP_BASE_IMPL_DEFAULT(PropBase) \
	PROPBASE_SetName(PropBase)\
	PROPBASE_GetName(PropBase)\
	PROPBASE_SetHelp(PropBase)\
	PROPBASE_GetHelp(PropBase)\
	PROPBASE_SetType(PropBase)\
	PROPBASE_GetType(PropBase)\
	PROPBASE_SetVariant(PropBase)\
	PROPBASE_GetVariant(PropBase)\
	PROPBASE_AccessConfig(PropBase)\
	PROPBASE_GetPropTypePtr(PropBase)
	
#define INTERFACE_PROP_BASE_IMPL_NOSETRENDERDEVICE(PropBase) \
	PROPBASE_SetName(PropBase)\
	PROPBASE_GetName(PropBase)\
	PROPBASE_SetHelp(PropBase)\
	PROPBASE_GetHelp(PropBase)\
	PROPBASE_SetType(PropBase)\
	PROPBASE_GetType(PropBase)\
	PROPBASE_SetVariant(PropBase)\
	PROPBASE_GetVariant(PropBase)\
	PROPBASE_AccessConfig(PropBase)
	
#define IMPLEMENT_PROP_BASE(PropBase) \
	PropBase = NULL;\
	CDUIPropBase::CreateInstance(&PropBase);\
	((CDUIPropType*)(((CDUIPropBase*)PropBase)->m_comDUIPropType.p))->m_pPropOwner = this;


#endif//_DIRECTUISUPPORT_INC_H_