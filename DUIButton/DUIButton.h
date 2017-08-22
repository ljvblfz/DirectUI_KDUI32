

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Sat Jan 12 16:47:50 2013
 */
/* Compiler settings for .\DUIButton.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __DUIButton_h__
#define __DUIButton_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICommandButton_FWD_DEFINED__
#define __ICommandButton_FWD_DEFINED__
typedef interface ICommandButton ICommandButton;
#endif 	/* __ICommandButton_FWD_DEFINED__ */


#ifndef ___ICommandButtonEvents_FWD_DEFINED__
#define ___ICommandButtonEvents_FWD_DEFINED__
typedef interface _ICommandButtonEvents _ICommandButtonEvents;
#endif 	/* ___ICommandButtonEvents_FWD_DEFINED__ */


#ifndef __CommandButton_FWD_DEFINED__
#define __CommandButton_FWD_DEFINED__

#ifdef __cplusplus
typedef class CommandButton CommandButton;
#else
typedef struct CommandButton CommandButton;
#endif /* __cplusplus */

#endif 	/* __CommandButton_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "DirectUICom.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_DUIButton_0000 */
/* [local] */ 

#pragma once
typedef /* [public][helpstring][version][uuid] */  DECLSPEC_UUID("38889806-C593-4993-9433-F99F180A7B47") 
enum eDUI_BUTTON_STATUS
    {	DUI_BUTTON_STATUS_NORMAL	= 0,
	DUI_BUTTON_STATUS_HOT	= DUI_BUTTON_STATUS_NORMAL + 1,
	DUI_BUTTON_STATUS_PRESS	= DUI_BUTTON_STATUS_HOT + 1,
	DUI_BUTTON_STATUS_DISABLE	= DUI_BUTTON_STATUS_PRESS + 1,
	DUI_BUTTON_STATUS_FOCUS	= DUI_BUTTON_STATUS_DISABLE + 1,
	DUI_BUTTON_STATUS_LAST	= DUI_BUTTON_STATUS_FOCUS + 1
    } 	eDUI_BUTTON_STATUS;



extern RPC_IF_HANDLE __MIDL_itf_DUIButton_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_DUIButton_0000_v0_0_s_ifspec;

#ifndef __ICommandButton_INTERFACE_DEFINED__
#define __ICommandButton_INTERFACE_DEFINED__

/* interface ICommandButton */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICommandButton;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0EA328C4-C227-4010-ADF7-B2AF771A0F83")
    ICommandButton : public IDUIControlBase
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetText( 
            /* [in] */ BSTR strText,
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetBackImage( 
            /* [in] */ DUIImageBase *pImageBase,
            /* [in] */ eDUI_BUTTON_STATUS eStatus,
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICommandButtonVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICommandButton * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICommandButton * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICommandButton * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICommandButton * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICommandButton * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICommandButton * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICommandButton * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            ICommandButton * This,
            /* [in] */ BSTR strName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetObjPtr )( 
            ICommandButton * This,
            /* [in] */ OLE_HANDLE pObjPtr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjPtr )( 
            ICommandButton * This,
            /* [retval][out] */ OLE_HANDLE *pObjPtr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            ICommandButton * This,
            /* [retval][out] */ BSTR *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetType )( 
            ICommandButton * This,
            /* [retval][out] */ enumDUIObjType *pType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDUIRes )( 
            ICommandButton * This,
            /* [in] */ IDUIRes *pDUIRes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDUIRes )( 
            ICommandButton * This,
            /* [retval][out] */ IDUIRes **ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetRect )( 
            ICommandButton * This,
            /* [in] */ SkinRect rect);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRect )( 
            ICommandButton * This,
            /* [retval][out] */ SkinRect *pRect);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateProps )( 
            ICommandButton * This,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RenderDrawObject )( 
            ICommandButton * This,
            /* [in] */ IDUIRenderDC *pDC,
            /* [in] */ SkinRect *rect,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EventNotify )( 
            ICommandButton * This,
            /* [in] */ DUINotify *peVentNotify,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetControlTypeName )( 
            ICommandButton * This,
            /* [retval][out] */ BSTR *pstrResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAuthorInfo )( 
            ICommandButton * This,
            /* [out] */ BSTR *pbstrAuthorName,
            /* [out] */ BSTR *pbstrCompany,
            /* [out] */ BSTR *pbstrUrl,
            /* [out] */ BSTR *pbstrVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetControlIcon )( 
            ICommandButton * This,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [retval][out] */ OLE_HANDLE *phIcon);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDragCursor )( 
            ICommandButton * This,
            /* [retval][out] */ OLE_HANDLE *phCursor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetClassId )( 
            ICommandButton * This,
            /* [in] */ BSTR clsId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetClassId )( 
            ICommandButton * This,
            /* [retval][out] */ BSTR *clsId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCategoryName )( 
            ICommandButton * This,
            /* [retval][out] */ BSTR *pstrResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateGroupProp )( 
            ICommandButton * This,
            /* [in] */ ICtrlPluginProp *pParentProp,
            /* [in] */ BSTR strPropName,
            /* [in] */ VARIANT_BOOL bExpand,
            /* [retval][out] */ ICtrlPluginProp **ppProp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateProp )( 
            ICommandButton * This,
            /* [in] */ ICtrlPluginProp *pPropParent,
            /* [in] */ enumPropType eType,
            /* [in] */ BSTR strPropName,
            /* [in] */ BSTR strPropHelp,
            /* [in] */ VARIANT_BOOL bIsStyle,
            /* [retval][out] */ IDUIPropBase **ppProp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddProp )( 
            ICommandButton * This,
            ICtrlPluginProp *pProp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPropList )( 
            ICommandButton * This,
            OLE_HANDLE *pPropList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetRealCtrlPtr )( 
            ICommandButton * This,
            /* [in] */ IDUIControlBase *pCtrlBase);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRealCtrlPtr )( 
            ICommandButton * This,
            /* [retval][out] */ IDUIControlBase **ppCtrlBase);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FinalCreate )( 
            ICommandButton * This,
            VARIANT_BOOL bNewObject);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInterface )( 
            ICommandButton * This,
            /* [in] */ OLE_HANDLE pIID,
            /* [retval][out] */ IDispatch **ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ICommandButton * This,
            /* [in] */ BSTR strText,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetBackImage )( 
            ICommandButton * This,
            /* [in] */ DUIImageBase *pImageBase,
            /* [in] */ eDUI_BUTTON_STATUS eStatus,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        END_INTERFACE
    } ICommandButtonVtbl;

    interface ICommandButton
    {
        CONST_VTBL struct ICommandButtonVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICommandButton_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICommandButton_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICommandButton_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICommandButton_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICommandButton_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICommandButton_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICommandButton_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICommandButton_SetName(This,strName)	\
    (This)->lpVtbl -> SetName(This,strName)

#define ICommandButton_SetObjPtr(This,pObjPtr)	\
    (This)->lpVtbl -> SetObjPtr(This,pObjPtr)

#define ICommandButton_GetObjPtr(This,pObjPtr)	\
    (This)->lpVtbl -> GetObjPtr(This,pObjPtr)

#define ICommandButton_GetName(This,pResult)	\
    (This)->lpVtbl -> GetName(This,pResult)

#define ICommandButton_GetType(This,pType)	\
    (This)->lpVtbl -> GetType(This,pType)

#define ICommandButton_SetDUIRes(This,pDUIRes)	\
    (This)->lpVtbl -> SetDUIRes(This,pDUIRes)

#define ICommandButton_GetDUIRes(This,ppResult)	\
    (This)->lpVtbl -> GetDUIRes(This,ppResult)


#define ICommandButton_SetRect(This,rect)	\
    (This)->lpVtbl -> SetRect(This,rect)

#define ICommandButton_GetRect(This,pRect)	\
    (This)->lpVtbl -> GetRect(This,pRect)


#define ICommandButton_CreateProps(This,pbResult)	\
    (This)->lpVtbl -> CreateProps(This,pbResult)

#define ICommandButton_RenderDrawObject(This,pDC,rect,pbResult)	\
    (This)->lpVtbl -> RenderDrawObject(This,pDC,rect,pbResult)

#define ICommandButton_EventNotify(This,peVentNotify,pbResult)	\
    (This)->lpVtbl -> EventNotify(This,peVentNotify,pbResult)

#define ICommandButton_GetControlTypeName(This,pstrResult)	\
    (This)->lpVtbl -> GetControlTypeName(This,pstrResult)

#define ICommandButton_GetAuthorInfo(This,pbstrAuthorName,pbstrCompany,pbstrUrl,pbstrVersion)	\
    (This)->lpVtbl -> GetAuthorInfo(This,pbstrAuthorName,pbstrCompany,pbstrUrl,pbstrVersion)

#define ICommandButton_GetControlIcon(This,nWidth,nHeight,phIcon)	\
    (This)->lpVtbl -> GetControlIcon(This,nWidth,nHeight,phIcon)

#define ICommandButton_GetDragCursor(This,phCursor)	\
    (This)->lpVtbl -> GetDragCursor(This,phCursor)

#define ICommandButton_SetClassId(This,clsId)	\
    (This)->lpVtbl -> SetClassId(This,clsId)

#define ICommandButton_GetClassId(This,clsId)	\
    (This)->lpVtbl -> GetClassId(This,clsId)

#define ICommandButton_GetCategoryName(This,pstrResult)	\
    (This)->lpVtbl -> GetCategoryName(This,pstrResult)

#define ICommandButton_CreateGroupProp(This,pParentProp,strPropName,bExpand,ppProp)	\
    (This)->lpVtbl -> CreateGroupProp(This,pParentProp,strPropName,bExpand,ppProp)

#define ICommandButton_CreateProp(This,pPropParent,eType,strPropName,strPropHelp,bIsStyle,ppProp)	\
    (This)->lpVtbl -> CreateProp(This,pPropParent,eType,strPropName,strPropHelp,bIsStyle,ppProp)

#define ICommandButton_AddProp(This,pProp)	\
    (This)->lpVtbl -> AddProp(This,pProp)

#define ICommandButton_GetPropList(This,pPropList)	\
    (This)->lpVtbl -> GetPropList(This,pPropList)

#define ICommandButton_SetRealCtrlPtr(This,pCtrlBase)	\
    (This)->lpVtbl -> SetRealCtrlPtr(This,pCtrlBase)

#define ICommandButton_GetRealCtrlPtr(This,ppCtrlBase)	\
    (This)->lpVtbl -> GetRealCtrlPtr(This,ppCtrlBase)

#define ICommandButton_FinalCreate(This,bNewObject)	\
    (This)->lpVtbl -> FinalCreate(This,bNewObject)

#define ICommandButton_GetInterface(This,pIID,ppResult)	\
    (This)->lpVtbl -> GetInterface(This,pIID,ppResult)


#define ICommandButton_SetText(This,strText,pbResult)	\
    (This)->lpVtbl -> SetText(This,strText,pbResult)

#define ICommandButton_SetBackImage(This,pImageBase,eStatus,pbResult)	\
    (This)->lpVtbl -> SetBackImage(This,pImageBase,eStatus,pbResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICommandButton_SetText_Proxy( 
    ICommandButton * This,
    /* [in] */ BSTR strText,
    /* [retval][out] */ VARIANT_BOOL *pbResult);


void __RPC_STUB ICommandButton_SetText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICommandButton_SetBackImage_Proxy( 
    ICommandButton * This,
    /* [in] */ DUIImageBase *pImageBase,
    /* [in] */ eDUI_BUTTON_STATUS eStatus,
    /* [retval][out] */ VARIANT_BOOL *pbResult);


void __RPC_STUB ICommandButton_SetBackImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICommandButton_INTERFACE_DEFINED__ */



#ifndef __DUIButtonLib_LIBRARY_DEFINED__
#define __DUIButtonLib_LIBRARY_DEFINED__

/* library DUIButtonLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_DUIButtonLib;

#ifndef ___ICommandButtonEvents_DISPINTERFACE_DEFINED__
#define ___ICommandButtonEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ICommandButtonEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__ICommandButtonEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0B4DD27C-0F9E-4409-81F0-348A2560DAA9")
    _ICommandButtonEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ICommandButtonEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ICommandButtonEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ICommandButtonEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ICommandButtonEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ICommandButtonEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ICommandButtonEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ICommandButtonEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ICommandButtonEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _ICommandButtonEventsVtbl;

    interface _ICommandButtonEvents
    {
        CONST_VTBL struct _ICommandButtonEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ICommandButtonEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _ICommandButtonEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _ICommandButtonEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _ICommandButtonEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _ICommandButtonEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _ICommandButtonEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _ICommandButtonEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ICommandButtonEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CommandButton;

#ifdef __cplusplus

class DECLSPEC_UUID("579147B8-9D94-481A-B200-C1CBD03FA01C")
CommandButton;
#endif
#endif /* __DUIButtonLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


