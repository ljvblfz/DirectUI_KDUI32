

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Sat Jan 12 16:48:01 2013
 */
/* Compiler settings for .\DirectUICom.idl:
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

#ifndef __DirectUICom_h__
#define __DirectUICom_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDUIObj_FWD_DEFINED__
#define __IDUIObj_FWD_DEFINED__
typedef interface IDUIObj IDUIObj;
#endif 	/* __IDUIObj_FWD_DEFINED__ */


#ifndef __IDUIRes_FWD_DEFINED__
#define __IDUIRes_FWD_DEFINED__
typedef interface IDUIRes IDUIRes;
#endif 	/* __IDUIRes_FWD_DEFINED__ */


#ifndef __ISkinObjResBase_FWD_DEFINED__
#define __ISkinObjResBase_FWD_DEFINED__
typedef interface ISkinObjResBase ISkinObjResBase;
#endif 	/* __ISkinObjResBase_FWD_DEFINED__ */


#ifndef __IDirectUI_FWD_DEFINED__
#define __IDirectUI_FWD_DEFINED__
typedef interface IDirectUI IDirectUI;
#endif 	/* __IDirectUI_FWD_DEFINED__ */


#ifndef __IDUIControlBase_FWD_DEFINED__
#define __IDUIControlBase_FWD_DEFINED__
typedef interface IDUIControlBase IDUIControlBase;
#endif 	/* __IDUIControlBase_FWD_DEFINED__ */


#ifndef __IDUIRenderDC_FWD_DEFINED__
#define __IDUIRenderDC_FWD_DEFINED__
typedef interface IDUIRenderDC IDUIRenderDC;
#endif 	/* __IDUIRenderDC_FWD_DEFINED__ */


#ifndef __ICtrlPluginProp_FWD_DEFINED__
#define __ICtrlPluginProp_FWD_DEFINED__
typedef interface ICtrlPluginProp ICtrlPluginProp;
#endif 	/* __ICtrlPluginProp_FWD_DEFINED__ */


#ifndef __IDUIPropBase_FWD_DEFINED__
#define __IDUIPropBase_FWD_DEFINED__
typedef interface IDUIPropBase IDUIPropBase;
#endif 	/* __IDUIPropBase_FWD_DEFINED__ */


#ifndef __IDUIRenderImage_FWD_DEFINED__
#define __IDUIRenderImage_FWD_DEFINED__
typedef interface IDUIRenderImage IDUIRenderImage;
#endif 	/* __IDUIRenderImage_FWD_DEFINED__ */


#ifndef __IDUIPropType_FWD_DEFINED__
#define __IDUIPropType_FWD_DEFINED__
typedef interface IDUIPropType IDUIPropType;
#endif 	/* __IDUIPropType_FWD_DEFINED__ */


#ifndef __IImageSecProp_FWD_DEFINED__
#define __IImageSecProp_FWD_DEFINED__
typedef interface IImageSecProp IImageSecProp;
#endif 	/* __IImageSecProp_FWD_DEFINED__ */


#ifndef __DUIObj_FWD_DEFINED__
#define __DUIObj_FWD_DEFINED__

#ifdef __cplusplus
typedef class DUIObj DUIObj;
#else
typedef struct DUIObj DUIObj;
#endif /* __cplusplus */

#endif 	/* __DUIObj_FWD_DEFINED__ */


#ifndef __DUIRes_FWD_DEFINED__
#define __DUIRes_FWD_DEFINED__

#ifdef __cplusplus
typedef class DUIRes DUIRes;
#else
typedef struct DUIRes DUIRes;
#endif /* __cplusplus */

#endif 	/* __DUIRes_FWD_DEFINED__ */


#ifndef ___ISkinObjResBaseEvents_FWD_DEFINED__
#define ___ISkinObjResBaseEvents_FWD_DEFINED__
typedef interface _ISkinObjResBaseEvents _ISkinObjResBaseEvents;
#endif 	/* ___ISkinObjResBaseEvents_FWD_DEFINED__ */


#ifndef __SkinObjResBase_FWD_DEFINED__
#define __SkinObjResBase_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkinObjResBase SkinObjResBase;
#else
typedef struct SkinObjResBase SkinObjResBase;
#endif /* __cplusplus */

#endif 	/* __SkinObjResBase_FWD_DEFINED__ */


#ifndef ___IDirectUIEvents_FWD_DEFINED__
#define ___IDirectUIEvents_FWD_DEFINED__
typedef interface _IDirectUIEvents _IDirectUIEvents;
#endif 	/* ___IDirectUIEvents_FWD_DEFINED__ */


#ifndef __DirectUI_FWD_DEFINED__
#define __DirectUI_FWD_DEFINED__

#ifdef __cplusplus
typedef class DirectUI DirectUI;
#else
typedef struct DirectUI DirectUI;
#endif /* __cplusplus */

#endif 	/* __DirectUI_FWD_DEFINED__ */


#ifndef ___IDUIControlBaseEvents_FWD_DEFINED__
#define ___IDUIControlBaseEvents_FWD_DEFINED__
typedef interface _IDUIControlBaseEvents _IDUIControlBaseEvents;
#endif 	/* ___IDUIControlBaseEvents_FWD_DEFINED__ */


#ifndef __DUIControlBase_FWD_DEFINED__
#define __DUIControlBase_FWD_DEFINED__

#ifdef __cplusplus
typedef class DUIControlBase DUIControlBase;
#else
typedef struct DUIControlBase DUIControlBase;
#endif /* __cplusplus */

#endif 	/* __DUIControlBase_FWD_DEFINED__ */


#ifndef ___IDUIRenderDCEvents_FWD_DEFINED__
#define ___IDUIRenderDCEvents_FWD_DEFINED__
typedef interface _IDUIRenderDCEvents _IDUIRenderDCEvents;
#endif 	/* ___IDUIRenderDCEvents_FWD_DEFINED__ */


#ifndef __DUIRenderDC_FWD_DEFINED__
#define __DUIRenderDC_FWD_DEFINED__

#ifdef __cplusplus
typedef class DUIRenderDC DUIRenderDC;
#else
typedef struct DUIRenderDC DUIRenderDC;
#endif /* __cplusplus */

#endif 	/* __DUIRenderDC_FWD_DEFINED__ */


#ifndef ___ICtrlPluginPropEvents_FWD_DEFINED__
#define ___ICtrlPluginPropEvents_FWD_DEFINED__
typedef interface _ICtrlPluginPropEvents _ICtrlPluginPropEvents;
#endif 	/* ___ICtrlPluginPropEvents_FWD_DEFINED__ */


#ifndef __CtrlPluginProp_FWD_DEFINED__
#define __CtrlPluginProp_FWD_DEFINED__

#ifdef __cplusplus
typedef class CtrlPluginProp CtrlPluginProp;
#else
typedef struct CtrlPluginProp CtrlPluginProp;
#endif /* __cplusplus */

#endif 	/* __CtrlPluginProp_FWD_DEFINED__ */


#ifndef ___IDUIPropBaseEvents_FWD_DEFINED__
#define ___IDUIPropBaseEvents_FWD_DEFINED__
typedef interface _IDUIPropBaseEvents _IDUIPropBaseEvents;
#endif 	/* ___IDUIPropBaseEvents_FWD_DEFINED__ */


#ifndef __DUIPropBase_FWD_DEFINED__
#define __DUIPropBase_FWD_DEFINED__

#ifdef __cplusplus
typedef class DUIPropBase DUIPropBase;
#else
typedef struct DUIPropBase DUIPropBase;
#endif /* __cplusplus */

#endif 	/* __DUIPropBase_FWD_DEFINED__ */


#ifndef ___IDUIRenderImageEvents_FWD_DEFINED__
#define ___IDUIRenderImageEvents_FWD_DEFINED__
typedef interface _IDUIRenderImageEvents _IDUIRenderImageEvents;
#endif 	/* ___IDUIRenderImageEvents_FWD_DEFINED__ */


#ifndef __DUIRenderImage_FWD_DEFINED__
#define __DUIRenderImage_FWD_DEFINED__

#ifdef __cplusplus
typedef class DUIRenderImage DUIRenderImage;
#else
typedef struct DUIRenderImage DUIRenderImage;
#endif /* __cplusplus */

#endif 	/* __DUIRenderImage_FWD_DEFINED__ */


#ifndef ___IDUIPropTypeEvents_FWD_DEFINED__
#define ___IDUIPropTypeEvents_FWD_DEFINED__
typedef interface _IDUIPropTypeEvents _IDUIPropTypeEvents;
#endif 	/* ___IDUIPropTypeEvents_FWD_DEFINED__ */


#ifndef __DUIPropType_FWD_DEFINED__
#define __DUIPropType_FWD_DEFINED__

#ifdef __cplusplus
typedef class DUIPropType DUIPropType;
#else
typedef struct DUIPropType DUIPropType;
#endif /* __cplusplus */

#endif 	/* __DUIPropType_FWD_DEFINED__ */


#ifndef ___IImageSecPropEvents_FWD_DEFINED__
#define ___IImageSecPropEvents_FWD_DEFINED__
typedef interface _IImageSecPropEvents _IImageSecPropEvents;
#endif 	/* ___IImageSecPropEvents_FWD_DEFINED__ */


#ifndef __ImageSecProp_FWD_DEFINED__
#define __ImageSecProp_FWD_DEFINED__

#ifdef __cplusplus
typedef class ImageSecProp ImageSecProp;
#else
typedef struct ImageSecProp ImageSecProp;
#endif /* __cplusplus */

#endif 	/* __ImageSecProp_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_DirectUICom_0000 */
/* [local] */ 

#pragma once








typedef /* [public][helpstring][version][uuid] */  DECLSPEC_UUID("18BB3B96-185D-4bd2-9745-BE277F6B2B50") 
enum enumDUIObjType
    {	DUI_OBJTYPE_UNDEFINED	= 100,
	DUI_OBJTYPE_IMAGE	= DUI_OBJTYPE_UNDEFINED + 1,
	DUI_OBJTYPE_IMAGEBASE	= DUI_OBJTYPE_IMAGE + 1,
	DUI_OBJTYPE_TEXTSTYLE	= DUI_OBJTYPE_IMAGEBASE + 1,
	DUI_OBJTYPE_FONTEX	= DUI_OBJTYPE_TEXTSTYLE + 1,
	DUI_OBJTYPE_DIRECTUI	= DUI_OBJTYPE_FONTEX + 1,
	DUI_OBJTYPE_CONTROL	= DUI_OBJTYPE_DIRECTUI + 1,
	DUI_OBJTYPE_LAST	= DUI_OBJTYPE_CONTROL + 1
    } 	enumDUIObjType;

typedef /* [public][helpstring][version][uuid] */  DECLSPEC_UUID("BBE08163-E8B9-4d5a-884F-C06FE15A4164") 
enum enumPropType
    {	_PROPTYPE_IMAGESECTION	= 0,
	_PROPTYPE_TEXTSTYLE	= _PROPTYPE_IMAGESECTION + 1,
	_PROPTYPE_INT	= _PROPTYPE_TEXTSTYLE + 1,
	_PROPTYPE_LONG	= _PROPTYPE_INT + 1,
	_PROPTYPE_BOOL	= _PROPTYPE_LONG + 1,
	_PROPTYPE_COMBO	= _PROPTYPE_BOOL + 1,
	_PROPTYPE_STRING	= _PROPTYPE_COMBO + 1,
	_PROPTYPE_FONT	= _PROPTYPE_STRING + 1,
	_PROPTYPE_COLOR	= _PROPTYPE_FONT + 1,
	_PROPTYPE_PLUGIN	= _PROPTYPE_COLOR + 1,
	_PROPTYPE_CURSOR	= _PROPTYPE_PLUGIN + 1,
	_PROPTYPE_FLOAT	= _PROPTYPE_CURSOR + 1,
	_PROPTYPE_HOTKEY	= _PROPTYPE_FLOAT + 1,
	_PROPTYPE_FILLCOLOR	= _PROPTYPE_HOTKEY + 1
    } 	enumPropType;

typedef /* [helpstring][version][uuid] */  DECLSPEC_UUID("FE329505-1827-44aa-B28E-2703C99F4D91") struct SkinRect
    {
    long left;
    long top;
    long right;
    long bottom;
    } 	SkinRect;

typedef /* [public][helpstring][version][uuid] */  DECLSPEC_UUID("3BACA356-E219-4257-8131-151957AB9FA5") 
enum DUIMsgID
    {	DUISM_RESKIN	= 0x400 + 0x1,
	DUISM_REFRESH	= 0x400 + 0x2,
	DUISM_LBUTTONDOWN	= 0x400 + 0x3,
	DUISM_LBUTTONUP	= 0x400 + 0x4,
	DUISM_COMMAND	= 0x400 + 0x5,
	DUISM_TABITEMSELECTCHANGED	= 0x400 + 0x7d5,
	DUISM_RBUTTONDOWN	= 0x400 + 0x7d6,
	DUISM_RBUTTONUP	= 0x400 + 0x7d7,
	DUISM_SETTOOPTIP	= 0x400 + 0x7d8,
	DUISM_ONSETFOCUS	= 0x400 + 0x7d9,
	DUISM_ONKILLFOCUS	= 0x400 + 0x7da,
	DUISM_INITOBJECT	= 0x400 + 0x331,
	DUISM_INITDIALOG	= 0x400 + 0x332,
	DUISM_DESTROYING	= 0x400 + 0x333,
	DUISM_ENABLEOBJECT	= 0x400 + 0x334,
	DUISM_CREATEPROP	= 0x400 + 0x335,
	DUISM_ACCESSCONFIGED	= 0x400 + 0x336,
	DUISM_EXPORTCONFIGED	= 0x400 + 0x337,
	DUISM_CLONED	= 0x400 + 0x338,
	DUISM_GETDRAGCURSOR	= 0x400 + 0x339,
	DUISM_GETCONTROLICON	= 0x400 + 0x340,
	DUISM_GETAUTHORINFO	= 0x400 + 0x341,
	DUISM_GETCONTROLTYPENAME	= 0x400 + 0x342,
	DUISM_GETCATEGORYNAME	= 0x400 + 0x343,
	DUISM_DESTROYBMPPERPIXEL	= 0x400 + 0x344,
	DUISM_MOUSEMOVE	= 0x400 + 0x345,
	DUISM_LBUTTONDBCLICK	= 0x400 + 0x346,
	DUISM_MOUSELEAVE	= 0x400 + 0x347,
	DUISM_NOTIFYCHILDREN	= 0x400 + 0x348,
	DUISM_SIZE	= 0x400 + 0x350,
	DUISM_TIMER	= 0x400 + 0x351,
	DUISM_CALLPROP	= 0x400 + 0x352,
	DUISM_DESIGNSTATUSCHANGED	= 0x400 + 0x353,
	DUISM_DRAWPREVIEW	= 0x400 + 0x354,
	DUISM_FINALCREATE	= 0x400 + 0x355,
	DUISM_IMPORTCONFIG	= 0x400 + 0x356,
	DUISM_ISDRAGABLED	= 0x400 + 0x357,
	DUISM_PROPCHANGEDNOTIFY	= 0x400 + 0x358,
	DUISM_GETTABINFO	= 0x400 + 0x359,
	DUISM_SETFOCUS	= 0x400 + 0x360,
	DUISM_KBHOOKPROC	= 0x400 + 0x361,
	DUISM_HOOKPROC	= 0x400 + 0x362,
	DUISM_MOUSEENTER	= 0x400 + 0x363,
	DUISM_AUTORESIZE	= 0x400 + 0x364,
	DUISM_DISPOSEMOUSEMOVE	= 0x400 + 0x366,
	DUISM_CHANGESKIN	= 0x400 + 0x367,
	DUISM_STARTDRAG	= 0x400 + 0x368,
	DUISM_ENDDRAG	= 0x400 + 0x369,
	DUISM_DRAGING	= 0x400 + 0x370,
	DUISM_CHANGESKINSTART	= 0x400 + 0x371,
	DUISM_CHANGELANGUAGE	= 0x400 + 0x372,
	DUISM_AUTOLOADINIT	= 0x400 + 0x373,
	DUISM_DUI_MESSAGE	= 0x400 + 0x374,
	DUISM_SETRENDERDEVICED	= 0x400 + 0x375
    } 	DUIMsgID;

typedef /* [public][helpstring][version][uuid] */  DECLSPEC_UUID("58F2344A-34D9-4cc8-BE07-850091601448") struct DUINotify
    {
    DUIMsgID eDuiMsgId;
    LONG eWinMsgId;
    OLE_HANDLE lParam1;
    OLE_HANDLE lParam2;
    OLE_HANDLE lParam3;
    OLE_HANDLE lParam4;
    OLE_HANDLE lParam5;
    VARIANT_BOOL bChildren;
    } 	DUINotify;

typedef /* [helpstring][version][uuid] */  DECLSPEC_UUID("0F82FEC6-B850-419a-AB30-8C66B54A57D9") struct DUIImageBase
    {
    BSTR strImagePath;
    SkinRect rect;
    SkinRect rcBorder;
    VARIANT_BOOL bStretch;
    } 	DUIImageBase;



extern RPC_IF_HANDLE __MIDL_itf_DirectUICom_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_DirectUICom_0000_v0_0_s_ifspec;

#ifndef __IDUIObj_INTERFACE_DEFINED__
#define __IDUIObj_INTERFACE_DEFINED__

/* interface IDUIObj */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDUIObj;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B86ED3F4-D992-4BE0-8BCC-EC98F707D5B8")
    IDUIObj : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ BSTR strName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetObjPtr( 
            /* [in] */ OLE_HANDLE pObjPtr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjPtr( 
            /* [retval][out] */ OLE_HANDLE *pObjPtr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][out] */ BSTR *pResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetType( 
            /* [retval][out] */ enumDUIObjType *pType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetDUIRes( 
            /* [in] */ IDUIRes *pDUIRes) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDUIRes( 
            /* [retval][out] */ IDUIRes **ppResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDUIObjVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDUIObj * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDUIObj * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDUIObj * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDUIObj * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDUIObj * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDUIObj * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDUIObj * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IDUIObj * This,
            /* [in] */ BSTR strName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetObjPtr )( 
            IDUIObj * This,
            /* [in] */ OLE_HANDLE pObjPtr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjPtr )( 
            IDUIObj * This,
            /* [retval][out] */ OLE_HANDLE *pObjPtr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IDUIObj * This,
            /* [retval][out] */ BSTR *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IDUIObj * This,
            /* [retval][out] */ enumDUIObjType *pType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDUIRes )( 
            IDUIObj * This,
            /* [in] */ IDUIRes *pDUIRes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDUIRes )( 
            IDUIObj * This,
            /* [retval][out] */ IDUIRes **ppResult);
        
        END_INTERFACE
    } IDUIObjVtbl;

    interface IDUIObj
    {
        CONST_VTBL struct IDUIObjVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDUIObj_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDUIObj_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDUIObj_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDUIObj_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDUIObj_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDUIObj_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDUIObj_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDUIObj_SetName(This,strName)	\
    (This)->lpVtbl -> SetName(This,strName)

#define IDUIObj_SetObjPtr(This,pObjPtr)	\
    (This)->lpVtbl -> SetObjPtr(This,pObjPtr)

#define IDUIObj_GetObjPtr(This,pObjPtr)	\
    (This)->lpVtbl -> GetObjPtr(This,pObjPtr)

#define IDUIObj_GetName(This,pResult)	\
    (This)->lpVtbl -> GetName(This,pResult)

#define IDUIObj_GetType(This,pType)	\
    (This)->lpVtbl -> GetType(This,pType)

#define IDUIObj_SetDUIRes(This,pDUIRes)	\
    (This)->lpVtbl -> SetDUIRes(This,pDUIRes)

#define IDUIObj_GetDUIRes(This,ppResult)	\
    (This)->lpVtbl -> GetDUIRes(This,ppResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIObj_SetName_Proxy( 
    IDUIObj * This,
    /* [in] */ BSTR strName);


void __RPC_STUB IDUIObj_SetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIObj_SetObjPtr_Proxy( 
    IDUIObj * This,
    /* [in] */ OLE_HANDLE pObjPtr);


void __RPC_STUB IDUIObj_SetObjPtr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIObj_GetObjPtr_Proxy( 
    IDUIObj * This,
    /* [retval][out] */ OLE_HANDLE *pObjPtr);


void __RPC_STUB IDUIObj_GetObjPtr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIObj_GetName_Proxy( 
    IDUIObj * This,
    /* [retval][out] */ BSTR *pResult);


void __RPC_STUB IDUIObj_GetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIObj_GetType_Proxy( 
    IDUIObj * This,
    /* [retval][out] */ enumDUIObjType *pType);


void __RPC_STUB IDUIObj_GetType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIObj_SetDUIRes_Proxy( 
    IDUIObj * This,
    /* [in] */ IDUIRes *pDUIRes);


void __RPC_STUB IDUIObj_SetDUIRes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIObj_GetDUIRes_Proxy( 
    IDUIObj * This,
    /* [retval][out] */ IDUIRes **ppResult);


void __RPC_STUB IDUIObj_GetDUIRes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDUIObj_INTERFACE_DEFINED__ */


#ifndef __IDUIRes_INTERFACE_DEFINED__
#define __IDUIRes_INTERFACE_DEFINED__

/* interface IDUIRes */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDUIRes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5AB7FEEC-BA1B-494C-A493-4D96F84AF804")
    IDUIRes : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDUIResObjPtr( 
            /* [retval][out] */ OLE_HANDLE *plResObjPtr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenSkin( 
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CloseSkin( 
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateDirectUI( 
            /* [in] */ OLE_HANDLE hWnd,
            /* [retval][out] */ IDirectUI **pResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateControl( 
            /* [in] */ IDirectUI *pDirectUI,
            /* [in] */ BSTR strCLSID,
            /* [retval][out] */ IDUIControlBase **pResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadImage( 
            /* [in] */ BSTR strImagePath,
            /* [retval][out] */ IDUIRenderImage **ppResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDUIResVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDUIRes * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDUIRes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDUIRes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDUIRes * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDUIRes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDUIRes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDUIRes * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDUIResObjPtr )( 
            IDUIRes * This,
            /* [retval][out] */ OLE_HANDLE *plResObjPtr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenSkin )( 
            IDUIRes * This,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CloseSkin )( 
            IDUIRes * This,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateDirectUI )( 
            IDUIRes * This,
            /* [in] */ OLE_HANDLE hWnd,
            /* [retval][out] */ IDirectUI **pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateControl )( 
            IDUIRes * This,
            /* [in] */ IDirectUI *pDirectUI,
            /* [in] */ BSTR strCLSID,
            /* [retval][out] */ IDUIControlBase **pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadImage )( 
            IDUIRes * This,
            /* [in] */ BSTR strImagePath,
            /* [retval][out] */ IDUIRenderImage **ppResult);
        
        END_INTERFACE
    } IDUIResVtbl;

    interface IDUIRes
    {
        CONST_VTBL struct IDUIResVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDUIRes_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDUIRes_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDUIRes_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDUIRes_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDUIRes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDUIRes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDUIRes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDUIRes_GetDUIResObjPtr(This,plResObjPtr)	\
    (This)->lpVtbl -> GetDUIResObjPtr(This,plResObjPtr)

#define IDUIRes_OpenSkin(This,pbResult)	\
    (This)->lpVtbl -> OpenSkin(This,pbResult)

#define IDUIRes_CloseSkin(This,pbResult)	\
    (This)->lpVtbl -> CloseSkin(This,pbResult)

#define IDUIRes_CreateDirectUI(This,hWnd,pResult)	\
    (This)->lpVtbl -> CreateDirectUI(This,hWnd,pResult)

#define IDUIRes_CreateControl(This,pDirectUI,strCLSID,pResult)	\
    (This)->lpVtbl -> CreateControl(This,pDirectUI,strCLSID,pResult)

#define IDUIRes_LoadImage(This,strImagePath,ppResult)	\
    (This)->lpVtbl -> LoadImage(This,strImagePath,ppResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIRes_GetDUIResObjPtr_Proxy( 
    IDUIRes * This,
    /* [retval][out] */ OLE_HANDLE *plResObjPtr);


void __RPC_STUB IDUIRes_GetDUIResObjPtr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIRes_OpenSkin_Proxy( 
    IDUIRes * This,
    /* [retval][out] */ VARIANT_BOOL *pbResult);


void __RPC_STUB IDUIRes_OpenSkin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIRes_CloseSkin_Proxy( 
    IDUIRes * This,
    /* [retval][out] */ VARIANT_BOOL *pbResult);


void __RPC_STUB IDUIRes_CloseSkin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIRes_CreateDirectUI_Proxy( 
    IDUIRes * This,
    /* [in] */ OLE_HANDLE hWnd,
    /* [retval][out] */ IDirectUI **pResult);


void __RPC_STUB IDUIRes_CreateDirectUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIRes_CreateControl_Proxy( 
    IDUIRes * This,
    /* [in] */ IDirectUI *pDirectUI,
    /* [in] */ BSTR strCLSID,
    /* [retval][out] */ IDUIControlBase **pResult);


void __RPC_STUB IDUIRes_CreateControl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIRes_LoadImage_Proxy( 
    IDUIRes * This,
    /* [in] */ BSTR strImagePath,
    /* [retval][out] */ IDUIRenderImage **ppResult);


void __RPC_STUB IDUIRes_LoadImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDUIRes_INTERFACE_DEFINED__ */


#ifndef __ISkinObjResBase_INTERFACE_DEFINED__
#define __ISkinObjResBase_INTERFACE_DEFINED__

/* interface ISkinObjResBase */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISkinObjResBase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("14B2ECE4-0F5D-4908-B93E-31171E55623A")
    ISkinObjResBase : public IDUIObj
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetRect( 
            /* [in] */ SkinRect rect) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRect( 
            /* [retval][out] */ SkinRect *pRect) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkinObjResBaseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkinObjResBase * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkinObjResBase * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkinObjResBase * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISkinObjResBase * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISkinObjResBase * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISkinObjResBase * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISkinObjResBase * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            ISkinObjResBase * This,
            /* [in] */ BSTR strName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetObjPtr )( 
            ISkinObjResBase * This,
            /* [in] */ OLE_HANDLE pObjPtr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjPtr )( 
            ISkinObjResBase * This,
            /* [retval][out] */ OLE_HANDLE *pObjPtr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            ISkinObjResBase * This,
            /* [retval][out] */ BSTR *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetType )( 
            ISkinObjResBase * This,
            /* [retval][out] */ enumDUIObjType *pType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDUIRes )( 
            ISkinObjResBase * This,
            /* [in] */ IDUIRes *pDUIRes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDUIRes )( 
            ISkinObjResBase * This,
            /* [retval][out] */ IDUIRes **ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetRect )( 
            ISkinObjResBase * This,
            /* [in] */ SkinRect rect);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRect )( 
            ISkinObjResBase * This,
            /* [retval][out] */ SkinRect *pRect);
        
        END_INTERFACE
    } ISkinObjResBaseVtbl;

    interface ISkinObjResBase
    {
        CONST_VTBL struct ISkinObjResBaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkinObjResBase_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkinObjResBase_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkinObjResBase_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkinObjResBase_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISkinObjResBase_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISkinObjResBase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISkinObjResBase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISkinObjResBase_SetName(This,strName)	\
    (This)->lpVtbl -> SetName(This,strName)

#define ISkinObjResBase_SetObjPtr(This,pObjPtr)	\
    (This)->lpVtbl -> SetObjPtr(This,pObjPtr)

#define ISkinObjResBase_GetObjPtr(This,pObjPtr)	\
    (This)->lpVtbl -> GetObjPtr(This,pObjPtr)

#define ISkinObjResBase_GetName(This,pResult)	\
    (This)->lpVtbl -> GetName(This,pResult)

#define ISkinObjResBase_GetType(This,pType)	\
    (This)->lpVtbl -> GetType(This,pType)

#define ISkinObjResBase_SetDUIRes(This,pDUIRes)	\
    (This)->lpVtbl -> SetDUIRes(This,pDUIRes)

#define ISkinObjResBase_GetDUIRes(This,ppResult)	\
    (This)->lpVtbl -> GetDUIRes(This,ppResult)


#define ISkinObjResBase_SetRect(This,rect)	\
    (This)->lpVtbl -> SetRect(This,rect)

#define ISkinObjResBase_GetRect(This,pRect)	\
    (This)->lpVtbl -> GetRect(This,pRect)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISkinObjResBase_SetRect_Proxy( 
    ISkinObjResBase * This,
    /* [in] */ SkinRect rect);


void __RPC_STUB ISkinObjResBase_SetRect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISkinObjResBase_GetRect_Proxy( 
    ISkinObjResBase * This,
    /* [retval][out] */ SkinRect *pRect);


void __RPC_STUB ISkinObjResBase_GetRect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkinObjResBase_INTERFACE_DEFINED__ */


#ifndef __IDirectUI_INTERFACE_DEFINED__
#define __IDirectUI_INTERFACE_DEFINED__

/* interface IDirectUI */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDirectUI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("03309FFE-02D3-4805-8128-93A19B70D916")
    IDirectUI : public ISkinObjResBase
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ OLE_HANDLE hWnd,
            /* [in] */ SkinRect rect,
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetHwnd( 
            /* [retval][out] */ OLE_HANDLE *phResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDirectUIVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDirectUI * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDirectUI * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDirectUI * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDirectUI * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDirectUI * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDirectUI * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDirectUI * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IDirectUI * This,
            /* [in] */ BSTR strName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetObjPtr )( 
            IDirectUI * This,
            /* [in] */ OLE_HANDLE pObjPtr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjPtr )( 
            IDirectUI * This,
            /* [retval][out] */ OLE_HANDLE *pObjPtr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IDirectUI * This,
            /* [retval][out] */ BSTR *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IDirectUI * This,
            /* [retval][out] */ enumDUIObjType *pType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDUIRes )( 
            IDirectUI * This,
            /* [in] */ IDUIRes *pDUIRes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDUIRes )( 
            IDirectUI * This,
            /* [retval][out] */ IDUIRes **ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetRect )( 
            IDirectUI * This,
            /* [in] */ SkinRect rect);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRect )( 
            IDirectUI * This,
            /* [retval][out] */ SkinRect *pRect);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IDirectUI * This,
            /* [in] */ OLE_HANDLE hWnd,
            /* [in] */ SkinRect rect,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHwnd )( 
            IDirectUI * This,
            /* [retval][out] */ OLE_HANDLE *phResult);
        
        END_INTERFACE
    } IDirectUIVtbl;

    interface IDirectUI
    {
        CONST_VTBL struct IDirectUIVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDirectUI_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDirectUI_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDirectUI_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDirectUI_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDirectUI_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDirectUI_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDirectUI_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDirectUI_SetName(This,strName)	\
    (This)->lpVtbl -> SetName(This,strName)

#define IDirectUI_SetObjPtr(This,pObjPtr)	\
    (This)->lpVtbl -> SetObjPtr(This,pObjPtr)

#define IDirectUI_GetObjPtr(This,pObjPtr)	\
    (This)->lpVtbl -> GetObjPtr(This,pObjPtr)

#define IDirectUI_GetName(This,pResult)	\
    (This)->lpVtbl -> GetName(This,pResult)

#define IDirectUI_GetType(This,pType)	\
    (This)->lpVtbl -> GetType(This,pType)

#define IDirectUI_SetDUIRes(This,pDUIRes)	\
    (This)->lpVtbl -> SetDUIRes(This,pDUIRes)

#define IDirectUI_GetDUIRes(This,ppResult)	\
    (This)->lpVtbl -> GetDUIRes(This,ppResult)


#define IDirectUI_SetRect(This,rect)	\
    (This)->lpVtbl -> SetRect(This,rect)

#define IDirectUI_GetRect(This,pRect)	\
    (This)->lpVtbl -> GetRect(This,pRect)


#define IDirectUI_Create(This,hWnd,rect,pbResult)	\
    (This)->lpVtbl -> Create(This,hWnd,rect,pbResult)

#define IDirectUI_GetHwnd(This,phResult)	\
    (This)->lpVtbl -> GetHwnd(This,phResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDirectUI_Create_Proxy( 
    IDirectUI * This,
    /* [in] */ OLE_HANDLE hWnd,
    /* [in] */ SkinRect rect,
    /* [retval][out] */ VARIANT_BOOL *pbResult);


void __RPC_STUB IDirectUI_Create_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDirectUI_GetHwnd_Proxy( 
    IDirectUI * This,
    /* [retval][out] */ OLE_HANDLE *phResult);


void __RPC_STUB IDirectUI_GetHwnd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDirectUI_INTERFACE_DEFINED__ */


#ifndef __IDUIControlBase_INTERFACE_DEFINED__
#define __IDUIControlBase_INTERFACE_DEFINED__

/* interface IDUIControlBase */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDUIControlBase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F47017B7-3D4B-4972-A592-0698F84CCB1A")
    IDUIControlBase : public ISkinObjResBase
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateProps( 
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RenderDrawObject( 
            /* [in] */ IDUIRenderDC *pDC,
            /* [in] */ SkinRect *rect,
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EventNotify( 
            /* [in] */ DUINotify *peVentNotify,
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetControlTypeName( 
            /* [retval][out] */ BSTR *pstrResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAuthorInfo( 
            /* [out] */ BSTR *pbstrAuthorName,
            /* [out] */ BSTR *pbstrCompany,
            /* [out] */ BSTR *pbstrUrl,
            /* [out] */ BSTR *pbstrVersion) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetControlIcon( 
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [retval][out] */ OLE_HANDLE *phIcon) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDragCursor( 
            /* [retval][out] */ OLE_HANDLE *phCursor) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetClassId( 
            /* [in] */ BSTR clsId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetClassId( 
            /* [retval][out] */ BSTR *clsId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCategoryName( 
            /* [retval][out] */ BSTR *pstrResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateGroupProp( 
            /* [in] */ ICtrlPluginProp *pParentProp,
            /* [in] */ BSTR strPropName,
            /* [in] */ VARIANT_BOOL bExpand,
            /* [retval][out] */ ICtrlPluginProp **ppProp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateProp( 
            /* [in] */ ICtrlPluginProp *pPropParent,
            /* [in] */ enumPropType eType,
            /* [in] */ BSTR strPropName,
            /* [in] */ BSTR strPropHelp,
            /* [in] */ VARIANT_BOOL bIsStyle,
            /* [retval][out] */ IDUIPropBase **ppProp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddProp( 
            ICtrlPluginProp *pProp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPropList( 
            OLE_HANDLE *pPropList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetRealCtrlPtr( 
            /* [in] */ IDUIControlBase *pCtrlBase) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRealCtrlPtr( 
            /* [retval][out] */ IDUIControlBase **ppCtrlBase) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FinalCreate( 
            VARIANT_BOOL bNewObject) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInterface( 
            /* [in] */ OLE_HANDLE pIID,
            /* [retval][out] */ IDispatch **ppResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDUIControlBaseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDUIControlBase * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDUIControlBase * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDUIControlBase * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDUIControlBase * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDUIControlBase * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDUIControlBase * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDUIControlBase * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IDUIControlBase * This,
            /* [in] */ BSTR strName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetObjPtr )( 
            IDUIControlBase * This,
            /* [in] */ OLE_HANDLE pObjPtr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjPtr )( 
            IDUIControlBase * This,
            /* [retval][out] */ OLE_HANDLE *pObjPtr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IDUIControlBase * This,
            /* [retval][out] */ BSTR *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IDUIControlBase * This,
            /* [retval][out] */ enumDUIObjType *pType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDUIRes )( 
            IDUIControlBase * This,
            /* [in] */ IDUIRes *pDUIRes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDUIRes )( 
            IDUIControlBase * This,
            /* [retval][out] */ IDUIRes **ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetRect )( 
            IDUIControlBase * This,
            /* [in] */ SkinRect rect);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRect )( 
            IDUIControlBase * This,
            /* [retval][out] */ SkinRect *pRect);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateProps )( 
            IDUIControlBase * This,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RenderDrawObject )( 
            IDUIControlBase * This,
            /* [in] */ IDUIRenderDC *pDC,
            /* [in] */ SkinRect *rect,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EventNotify )( 
            IDUIControlBase * This,
            /* [in] */ DUINotify *peVentNotify,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetControlTypeName )( 
            IDUIControlBase * This,
            /* [retval][out] */ BSTR *pstrResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAuthorInfo )( 
            IDUIControlBase * This,
            /* [out] */ BSTR *pbstrAuthorName,
            /* [out] */ BSTR *pbstrCompany,
            /* [out] */ BSTR *pbstrUrl,
            /* [out] */ BSTR *pbstrVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetControlIcon )( 
            IDUIControlBase * This,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [retval][out] */ OLE_HANDLE *phIcon);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDragCursor )( 
            IDUIControlBase * This,
            /* [retval][out] */ OLE_HANDLE *phCursor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetClassId )( 
            IDUIControlBase * This,
            /* [in] */ BSTR clsId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetClassId )( 
            IDUIControlBase * This,
            /* [retval][out] */ BSTR *clsId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCategoryName )( 
            IDUIControlBase * This,
            /* [retval][out] */ BSTR *pstrResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateGroupProp )( 
            IDUIControlBase * This,
            /* [in] */ ICtrlPluginProp *pParentProp,
            /* [in] */ BSTR strPropName,
            /* [in] */ VARIANT_BOOL bExpand,
            /* [retval][out] */ ICtrlPluginProp **ppProp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateProp )( 
            IDUIControlBase * This,
            /* [in] */ ICtrlPluginProp *pPropParent,
            /* [in] */ enumPropType eType,
            /* [in] */ BSTR strPropName,
            /* [in] */ BSTR strPropHelp,
            /* [in] */ VARIANT_BOOL bIsStyle,
            /* [retval][out] */ IDUIPropBase **ppProp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddProp )( 
            IDUIControlBase * This,
            ICtrlPluginProp *pProp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPropList )( 
            IDUIControlBase * This,
            OLE_HANDLE *pPropList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetRealCtrlPtr )( 
            IDUIControlBase * This,
            /* [in] */ IDUIControlBase *pCtrlBase);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRealCtrlPtr )( 
            IDUIControlBase * This,
            /* [retval][out] */ IDUIControlBase **ppCtrlBase);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FinalCreate )( 
            IDUIControlBase * This,
            VARIANT_BOOL bNewObject);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInterface )( 
            IDUIControlBase * This,
            /* [in] */ OLE_HANDLE pIID,
            /* [retval][out] */ IDispatch **ppResult);
        
        END_INTERFACE
    } IDUIControlBaseVtbl;

    interface IDUIControlBase
    {
        CONST_VTBL struct IDUIControlBaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDUIControlBase_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDUIControlBase_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDUIControlBase_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDUIControlBase_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDUIControlBase_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDUIControlBase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDUIControlBase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDUIControlBase_SetName(This,strName)	\
    (This)->lpVtbl -> SetName(This,strName)

#define IDUIControlBase_SetObjPtr(This,pObjPtr)	\
    (This)->lpVtbl -> SetObjPtr(This,pObjPtr)

#define IDUIControlBase_GetObjPtr(This,pObjPtr)	\
    (This)->lpVtbl -> GetObjPtr(This,pObjPtr)

#define IDUIControlBase_GetName(This,pResult)	\
    (This)->lpVtbl -> GetName(This,pResult)

#define IDUIControlBase_GetType(This,pType)	\
    (This)->lpVtbl -> GetType(This,pType)

#define IDUIControlBase_SetDUIRes(This,pDUIRes)	\
    (This)->lpVtbl -> SetDUIRes(This,pDUIRes)

#define IDUIControlBase_GetDUIRes(This,ppResult)	\
    (This)->lpVtbl -> GetDUIRes(This,ppResult)


#define IDUIControlBase_SetRect(This,rect)	\
    (This)->lpVtbl -> SetRect(This,rect)

#define IDUIControlBase_GetRect(This,pRect)	\
    (This)->lpVtbl -> GetRect(This,pRect)


#define IDUIControlBase_CreateProps(This,pbResult)	\
    (This)->lpVtbl -> CreateProps(This,pbResult)

#define IDUIControlBase_RenderDrawObject(This,pDC,rect,pbResult)	\
    (This)->lpVtbl -> RenderDrawObject(This,pDC,rect,pbResult)

#define IDUIControlBase_EventNotify(This,peVentNotify,pbResult)	\
    (This)->lpVtbl -> EventNotify(This,peVentNotify,pbResult)

#define IDUIControlBase_GetControlTypeName(This,pstrResult)	\
    (This)->lpVtbl -> GetControlTypeName(This,pstrResult)

#define IDUIControlBase_GetAuthorInfo(This,pbstrAuthorName,pbstrCompany,pbstrUrl,pbstrVersion)	\
    (This)->lpVtbl -> GetAuthorInfo(This,pbstrAuthorName,pbstrCompany,pbstrUrl,pbstrVersion)

#define IDUIControlBase_GetControlIcon(This,nWidth,nHeight,phIcon)	\
    (This)->lpVtbl -> GetControlIcon(This,nWidth,nHeight,phIcon)

#define IDUIControlBase_GetDragCursor(This,phCursor)	\
    (This)->lpVtbl -> GetDragCursor(This,phCursor)

#define IDUIControlBase_SetClassId(This,clsId)	\
    (This)->lpVtbl -> SetClassId(This,clsId)

#define IDUIControlBase_GetClassId(This,clsId)	\
    (This)->lpVtbl -> GetClassId(This,clsId)

#define IDUIControlBase_GetCategoryName(This,pstrResult)	\
    (This)->lpVtbl -> GetCategoryName(This,pstrResult)

#define IDUIControlBase_CreateGroupProp(This,pParentProp,strPropName,bExpand,ppProp)	\
    (This)->lpVtbl -> CreateGroupProp(This,pParentProp,strPropName,bExpand,ppProp)

#define IDUIControlBase_CreateProp(This,pPropParent,eType,strPropName,strPropHelp,bIsStyle,ppProp)	\
    (This)->lpVtbl -> CreateProp(This,pPropParent,eType,strPropName,strPropHelp,bIsStyle,ppProp)

#define IDUIControlBase_AddProp(This,pProp)	\
    (This)->lpVtbl -> AddProp(This,pProp)

#define IDUIControlBase_GetPropList(This,pPropList)	\
    (This)->lpVtbl -> GetPropList(This,pPropList)

#define IDUIControlBase_SetRealCtrlPtr(This,pCtrlBase)	\
    (This)->lpVtbl -> SetRealCtrlPtr(This,pCtrlBase)

#define IDUIControlBase_GetRealCtrlPtr(This,ppCtrlBase)	\
    (This)->lpVtbl -> GetRealCtrlPtr(This,ppCtrlBase)

#define IDUIControlBase_FinalCreate(This,bNewObject)	\
    (This)->lpVtbl -> FinalCreate(This,bNewObject)

#define IDUIControlBase_GetInterface(This,pIID,ppResult)	\
    (This)->lpVtbl -> GetInterface(This,pIID,ppResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_CreateProps_Proxy( 
    IDUIControlBase * This,
    /* [retval][out] */ VARIANT_BOOL *pbResult);


void __RPC_STUB IDUIControlBase_CreateProps_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_RenderDrawObject_Proxy( 
    IDUIControlBase * This,
    /* [in] */ IDUIRenderDC *pDC,
    /* [in] */ SkinRect *rect,
    /* [retval][out] */ VARIANT_BOOL *pbResult);


void __RPC_STUB IDUIControlBase_RenderDrawObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_EventNotify_Proxy( 
    IDUIControlBase * This,
    /* [in] */ DUINotify *peVentNotify,
    /* [retval][out] */ VARIANT_BOOL *pbResult);


void __RPC_STUB IDUIControlBase_EventNotify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_GetControlTypeName_Proxy( 
    IDUIControlBase * This,
    /* [retval][out] */ BSTR *pstrResult);


void __RPC_STUB IDUIControlBase_GetControlTypeName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_GetAuthorInfo_Proxy( 
    IDUIControlBase * This,
    /* [out] */ BSTR *pbstrAuthorName,
    /* [out] */ BSTR *pbstrCompany,
    /* [out] */ BSTR *pbstrUrl,
    /* [out] */ BSTR *pbstrVersion);


void __RPC_STUB IDUIControlBase_GetAuthorInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_GetControlIcon_Proxy( 
    IDUIControlBase * This,
    /* [in] */ int nWidth,
    /* [in] */ int nHeight,
    /* [retval][out] */ OLE_HANDLE *phIcon);


void __RPC_STUB IDUIControlBase_GetControlIcon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_GetDragCursor_Proxy( 
    IDUIControlBase * This,
    /* [retval][out] */ OLE_HANDLE *phCursor);


void __RPC_STUB IDUIControlBase_GetDragCursor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_SetClassId_Proxy( 
    IDUIControlBase * This,
    /* [in] */ BSTR clsId);


void __RPC_STUB IDUIControlBase_SetClassId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_GetClassId_Proxy( 
    IDUIControlBase * This,
    /* [retval][out] */ BSTR *clsId);


void __RPC_STUB IDUIControlBase_GetClassId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_GetCategoryName_Proxy( 
    IDUIControlBase * This,
    /* [retval][out] */ BSTR *pstrResult);


void __RPC_STUB IDUIControlBase_GetCategoryName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_CreateGroupProp_Proxy( 
    IDUIControlBase * This,
    /* [in] */ ICtrlPluginProp *pParentProp,
    /* [in] */ BSTR strPropName,
    /* [in] */ VARIANT_BOOL bExpand,
    /* [retval][out] */ ICtrlPluginProp **ppProp);


void __RPC_STUB IDUIControlBase_CreateGroupProp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_CreateProp_Proxy( 
    IDUIControlBase * This,
    /* [in] */ ICtrlPluginProp *pPropParent,
    /* [in] */ enumPropType eType,
    /* [in] */ BSTR strPropName,
    /* [in] */ BSTR strPropHelp,
    /* [in] */ VARIANT_BOOL bIsStyle,
    /* [retval][out] */ IDUIPropBase **ppProp);


void __RPC_STUB IDUIControlBase_CreateProp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_AddProp_Proxy( 
    IDUIControlBase * This,
    ICtrlPluginProp *pProp);


void __RPC_STUB IDUIControlBase_AddProp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_GetPropList_Proxy( 
    IDUIControlBase * This,
    OLE_HANDLE *pPropList);


void __RPC_STUB IDUIControlBase_GetPropList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_SetRealCtrlPtr_Proxy( 
    IDUIControlBase * This,
    /* [in] */ IDUIControlBase *pCtrlBase);


void __RPC_STUB IDUIControlBase_SetRealCtrlPtr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_GetRealCtrlPtr_Proxy( 
    IDUIControlBase * This,
    /* [retval][out] */ IDUIControlBase **ppCtrlBase);


void __RPC_STUB IDUIControlBase_GetRealCtrlPtr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_FinalCreate_Proxy( 
    IDUIControlBase * This,
    VARIANT_BOOL bNewObject);


void __RPC_STUB IDUIControlBase_FinalCreate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIControlBase_GetInterface_Proxy( 
    IDUIControlBase * This,
    /* [in] */ OLE_HANDLE pIID,
    /* [retval][out] */ IDispatch **ppResult);


void __RPC_STUB IDUIControlBase_GetInterface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDUIControlBase_INTERFACE_DEFINED__ */


#ifndef __IDUIRenderDC_INTERFACE_DEFINED__
#define __IDUIRenderDC_INTERFACE_DEFINED__

/* interface IDUIRenderDC */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDUIRenderDC;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C9F3161D-6F06-4295-AC1B-84D587221CE1")
    IDUIRenderDC : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetRenderDCPtr( 
            /* [in] */ OLE_HANDLE pRenderDC) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRenderDCPtr( 
            /* [retval][out] */ OLE_HANDLE *pRenderDC) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDUIRenderDCVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDUIRenderDC * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDUIRenderDC * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDUIRenderDC * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDUIRenderDC * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDUIRenderDC * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDUIRenderDC * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDUIRenderDC * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetRenderDCPtr )( 
            IDUIRenderDC * This,
            /* [in] */ OLE_HANDLE pRenderDC);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRenderDCPtr )( 
            IDUIRenderDC * This,
            /* [retval][out] */ OLE_HANDLE *pRenderDC);
        
        END_INTERFACE
    } IDUIRenderDCVtbl;

    interface IDUIRenderDC
    {
        CONST_VTBL struct IDUIRenderDCVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDUIRenderDC_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDUIRenderDC_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDUIRenderDC_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDUIRenderDC_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDUIRenderDC_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDUIRenderDC_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDUIRenderDC_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDUIRenderDC_SetRenderDCPtr(This,pRenderDC)	\
    (This)->lpVtbl -> SetRenderDCPtr(This,pRenderDC)

#define IDUIRenderDC_GetRenderDCPtr(This,pRenderDC)	\
    (This)->lpVtbl -> GetRenderDCPtr(This,pRenderDC)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIRenderDC_SetRenderDCPtr_Proxy( 
    IDUIRenderDC * This,
    /* [in] */ OLE_HANDLE pRenderDC);


void __RPC_STUB IDUIRenderDC_SetRenderDCPtr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIRenderDC_GetRenderDCPtr_Proxy( 
    IDUIRenderDC * This,
    /* [retval][out] */ OLE_HANDLE *pRenderDC);


void __RPC_STUB IDUIRenderDC_GetRenderDCPtr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDUIRenderDC_INTERFACE_DEFINED__ */


#ifndef __ICtrlPluginProp_INTERFACE_DEFINED__
#define __ICtrlPluginProp_INTERFACE_DEFINED__

/* interface ICtrlPluginProp */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICtrlPluginProp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A574773-9F1C-4F03-82FD-B7590762517D")
    ICtrlPluginProp : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_bGroup( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_bGroup( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_strName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_strName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddSkinProp( 
            /* [in] */ IDUIPropType *pSkinProp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveSkinProp( 
            /* [in] */ IDUIPropType *pSkinProp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddProp( 
            /* [in] */ ICtrlPluginProp *pSubProp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveProp( 
            /* [in] */ ICtrlPluginProp *pSubProp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AccessConfig( 
            /* [in] */ OLE_HANDLE pXmlEle,
            /* [in] */ VARIANT_BOOL bRead,
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Expand( 
            /* [in] */ VARIANT_BOOL bExpand) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsExpand( 
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetParent( 
            /* [in] */ ICtrlPluginProp *pParent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetParent( 
            /* [retval][out] */ ICtrlPluginProp **pProp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSkinPropTypeCount( 
            /* [retval][out] */ long *plResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSkinPropTypeFromIndex( 
            /* [in] */ long nIndex,
            /* [retval][out] */ IDUIPropType **pPropType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAddinPropCount( 
            /* [retval][out] */ long *plResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAddinPropByIndex( 
            /* [in] */ long nIndex,
            /* [retval][out] */ ICtrlPluginProp **pAddinProp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDUIRes( 
            /* [retval][out] */ IDUIRes **ppDUIRes) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetDUIRes( 
            /* [in] */ IDUIRes *pDUIRes) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetControlBasePtr( 
            /* [retval][out] */ IDUIControlBase **ppResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetControlBasePtr( 
            /* [in] */ IDUIControlBase *pCtrlBase) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AccessConfig2( 
            /* [in] */ BSTR strParentName,
            /* [in] */ OLE_HANDLE pXmlEle,
            /* [in] */ VARIANT_BOOL bRead,
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddPropBase( 
            /* [in] */ IDUIPropBase *pProp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemovePropBase( 
            /* [in] */ IDUIPropBase *pProp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAllPropBase( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPropBaseCount( 
            /* [retval][out] */ LONG *pResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAtPropBase( 
            /* [in] */ LONG nIndex,
            /* [retval][out] */ IDUIPropBase **ppResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AccessConfig3( 
            /* [in] */ BSTR strParentName,
            /* [in] */ OLE_HANDLE pXmlEle,
            /* [in] */ VARIANT_BOOL bRead,
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICtrlPluginPropVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICtrlPluginProp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICtrlPluginProp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICtrlPluginProp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICtrlPluginProp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICtrlPluginProp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICtrlPluginProp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICtrlPluginProp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_bGroup )( 
            ICtrlPluginProp * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_bGroup )( 
            ICtrlPluginProp * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_strName )( 
            ICtrlPluginProp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_strName )( 
            ICtrlPluginProp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddSkinProp )( 
            ICtrlPluginProp * This,
            /* [in] */ IDUIPropType *pSkinProp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveSkinProp )( 
            ICtrlPluginProp * This,
            /* [in] */ IDUIPropType *pSkinProp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddProp )( 
            ICtrlPluginProp * This,
            /* [in] */ ICtrlPluginProp *pSubProp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveProp )( 
            ICtrlPluginProp * This,
            /* [in] */ ICtrlPluginProp *pSubProp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AccessConfig )( 
            ICtrlPluginProp * This,
            /* [in] */ OLE_HANDLE pXmlEle,
            /* [in] */ VARIANT_BOOL bRead,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Expand )( 
            ICtrlPluginProp * This,
            /* [in] */ VARIANT_BOOL bExpand);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsExpand )( 
            ICtrlPluginProp * This,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetParent )( 
            ICtrlPluginProp * This,
            /* [in] */ ICtrlPluginProp *pParent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            ICtrlPluginProp * This,
            /* [retval][out] */ ICtrlPluginProp **pProp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSkinPropTypeCount )( 
            ICtrlPluginProp * This,
            /* [retval][out] */ long *plResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSkinPropTypeFromIndex )( 
            ICtrlPluginProp * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ IDUIPropType **pPropType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAddinPropCount )( 
            ICtrlPluginProp * This,
            /* [retval][out] */ long *plResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAddinPropByIndex )( 
            ICtrlPluginProp * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ ICtrlPluginProp **pAddinProp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDUIRes )( 
            ICtrlPluginProp * This,
            /* [retval][out] */ IDUIRes **ppDUIRes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDUIRes )( 
            ICtrlPluginProp * This,
            /* [in] */ IDUIRes *pDUIRes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetControlBasePtr )( 
            ICtrlPluginProp * This,
            /* [retval][out] */ IDUIControlBase **ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetControlBasePtr )( 
            ICtrlPluginProp * This,
            /* [in] */ IDUIControlBase *pCtrlBase);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AccessConfig2 )( 
            ICtrlPluginProp * This,
            /* [in] */ BSTR strParentName,
            /* [in] */ OLE_HANDLE pXmlEle,
            /* [in] */ VARIANT_BOOL bRead,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddPropBase )( 
            ICtrlPluginProp * This,
            /* [in] */ IDUIPropBase *pProp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemovePropBase )( 
            ICtrlPluginProp * This,
            /* [in] */ IDUIPropBase *pProp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAllPropBase )( 
            ICtrlPluginProp * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPropBaseCount )( 
            ICtrlPluginProp * This,
            /* [retval][out] */ LONG *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAtPropBase )( 
            ICtrlPluginProp * This,
            /* [in] */ LONG nIndex,
            /* [retval][out] */ IDUIPropBase **ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AccessConfig3 )( 
            ICtrlPluginProp * This,
            /* [in] */ BSTR strParentName,
            /* [in] */ OLE_HANDLE pXmlEle,
            /* [in] */ VARIANT_BOOL bRead,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        END_INTERFACE
    } ICtrlPluginPropVtbl;

    interface ICtrlPluginProp
    {
        CONST_VTBL struct ICtrlPluginPropVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICtrlPluginProp_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICtrlPluginProp_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICtrlPluginProp_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICtrlPluginProp_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICtrlPluginProp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICtrlPluginProp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICtrlPluginProp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICtrlPluginProp_get_bGroup(This,pVal)	\
    (This)->lpVtbl -> get_bGroup(This,pVal)

#define ICtrlPluginProp_put_bGroup(This,newVal)	\
    (This)->lpVtbl -> put_bGroup(This,newVal)

#define ICtrlPluginProp_get_strName(This,pVal)	\
    (This)->lpVtbl -> get_strName(This,pVal)

#define ICtrlPluginProp_put_strName(This,newVal)	\
    (This)->lpVtbl -> put_strName(This,newVal)

#define ICtrlPluginProp_AddSkinProp(This,pSkinProp)	\
    (This)->lpVtbl -> AddSkinProp(This,pSkinProp)

#define ICtrlPluginProp_RemoveSkinProp(This,pSkinProp)	\
    (This)->lpVtbl -> RemoveSkinProp(This,pSkinProp)

#define ICtrlPluginProp_AddProp(This,pSubProp)	\
    (This)->lpVtbl -> AddProp(This,pSubProp)

#define ICtrlPluginProp_RemoveProp(This,pSubProp)	\
    (This)->lpVtbl -> RemoveProp(This,pSubProp)

#define ICtrlPluginProp_AccessConfig(This,pXmlEle,bRead,pbResult)	\
    (This)->lpVtbl -> AccessConfig(This,pXmlEle,bRead,pbResult)

#define ICtrlPluginProp_Expand(This,bExpand)	\
    (This)->lpVtbl -> Expand(This,bExpand)

#define ICtrlPluginProp_IsExpand(This,pbResult)	\
    (This)->lpVtbl -> IsExpand(This,pbResult)

#define ICtrlPluginProp_SetParent(This,pParent)	\
    (This)->lpVtbl -> SetParent(This,pParent)

#define ICtrlPluginProp_GetParent(This,pProp)	\
    (This)->lpVtbl -> GetParent(This,pProp)

#define ICtrlPluginProp_GetSkinPropTypeCount(This,plResult)	\
    (This)->lpVtbl -> GetSkinPropTypeCount(This,plResult)

#define ICtrlPluginProp_GetSkinPropTypeFromIndex(This,nIndex,pPropType)	\
    (This)->lpVtbl -> GetSkinPropTypeFromIndex(This,nIndex,pPropType)

#define ICtrlPluginProp_GetAddinPropCount(This,plResult)	\
    (This)->lpVtbl -> GetAddinPropCount(This,plResult)

#define ICtrlPluginProp_GetAddinPropByIndex(This,nIndex,pAddinProp)	\
    (This)->lpVtbl -> GetAddinPropByIndex(This,nIndex,pAddinProp)

#define ICtrlPluginProp_GetDUIRes(This,ppDUIRes)	\
    (This)->lpVtbl -> GetDUIRes(This,ppDUIRes)

#define ICtrlPluginProp_SetDUIRes(This,pDUIRes)	\
    (This)->lpVtbl -> SetDUIRes(This,pDUIRes)

#define ICtrlPluginProp_GetControlBasePtr(This,ppResult)	\
    (This)->lpVtbl -> GetControlBasePtr(This,ppResult)

#define ICtrlPluginProp_SetControlBasePtr(This,pCtrlBase)	\
    (This)->lpVtbl -> SetControlBasePtr(This,pCtrlBase)

#define ICtrlPluginProp_AccessConfig2(This,strParentName,pXmlEle,bRead,pbResult)	\
    (This)->lpVtbl -> AccessConfig2(This,strParentName,pXmlEle,bRead,pbResult)

#define ICtrlPluginProp_AddPropBase(This,pProp)	\
    (This)->lpVtbl -> AddPropBase(This,pProp)

#define ICtrlPluginProp_RemovePropBase(This,pProp)	\
    (This)->lpVtbl -> RemovePropBase(This,pProp)

#define ICtrlPluginProp_RemoveAllPropBase(This)	\
    (This)->lpVtbl -> RemoveAllPropBase(This)

#define ICtrlPluginProp_GetPropBaseCount(This,pResult)	\
    (This)->lpVtbl -> GetPropBaseCount(This,pResult)

#define ICtrlPluginProp_GetAtPropBase(This,nIndex,ppResult)	\
    (This)->lpVtbl -> GetAtPropBase(This,nIndex,ppResult)

#define ICtrlPluginProp_AccessConfig3(This,strParentName,pXmlEle,bRead,pbResult)	\
    (This)->lpVtbl -> AccessConfig3(This,strParentName,pXmlEle,bRead,pbResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_get_bGroup_Proxy( 
    ICtrlPluginProp * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB ICtrlPluginProp_get_bGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_put_bGroup_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB ICtrlPluginProp_put_bGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_get_strName_Proxy( 
    ICtrlPluginProp * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ICtrlPluginProp_get_strName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_put_strName_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ICtrlPluginProp_put_strName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_AddSkinProp_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ IDUIPropType *pSkinProp);


void __RPC_STUB ICtrlPluginProp_AddSkinProp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_RemoveSkinProp_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ IDUIPropType *pSkinProp);


void __RPC_STUB ICtrlPluginProp_RemoveSkinProp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_AddProp_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ ICtrlPluginProp *pSubProp);


void __RPC_STUB ICtrlPluginProp_AddProp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_RemoveProp_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ ICtrlPluginProp *pSubProp);


void __RPC_STUB ICtrlPluginProp_RemoveProp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_AccessConfig_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ OLE_HANDLE pXmlEle,
    /* [in] */ VARIANT_BOOL bRead,
    /* [retval][out] */ VARIANT_BOOL *pbResult);


void __RPC_STUB ICtrlPluginProp_AccessConfig_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_Expand_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ VARIANT_BOOL bExpand);


void __RPC_STUB ICtrlPluginProp_Expand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_IsExpand_Proxy( 
    ICtrlPluginProp * This,
    /* [retval][out] */ VARIANT_BOOL *pbResult);


void __RPC_STUB ICtrlPluginProp_IsExpand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_SetParent_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ ICtrlPluginProp *pParent);


void __RPC_STUB ICtrlPluginProp_SetParent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_GetParent_Proxy( 
    ICtrlPluginProp * This,
    /* [retval][out] */ ICtrlPluginProp **pProp);


void __RPC_STUB ICtrlPluginProp_GetParent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_GetSkinPropTypeCount_Proxy( 
    ICtrlPluginProp * This,
    /* [retval][out] */ long *plResult);


void __RPC_STUB ICtrlPluginProp_GetSkinPropTypeCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_GetSkinPropTypeFromIndex_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ long nIndex,
    /* [retval][out] */ IDUIPropType **pPropType);


void __RPC_STUB ICtrlPluginProp_GetSkinPropTypeFromIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_GetAddinPropCount_Proxy( 
    ICtrlPluginProp * This,
    /* [retval][out] */ long *plResult);


void __RPC_STUB ICtrlPluginProp_GetAddinPropCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_GetAddinPropByIndex_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ long nIndex,
    /* [retval][out] */ ICtrlPluginProp **pAddinProp);


void __RPC_STUB ICtrlPluginProp_GetAddinPropByIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_GetDUIRes_Proxy( 
    ICtrlPluginProp * This,
    /* [retval][out] */ IDUIRes **ppDUIRes);


void __RPC_STUB ICtrlPluginProp_GetDUIRes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_SetDUIRes_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ IDUIRes *pDUIRes);


void __RPC_STUB ICtrlPluginProp_SetDUIRes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_GetControlBasePtr_Proxy( 
    ICtrlPluginProp * This,
    /* [retval][out] */ IDUIControlBase **ppResult);


void __RPC_STUB ICtrlPluginProp_GetControlBasePtr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_SetControlBasePtr_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ IDUIControlBase *pCtrlBase);


void __RPC_STUB ICtrlPluginProp_SetControlBasePtr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_AccessConfig2_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ BSTR strParentName,
    /* [in] */ OLE_HANDLE pXmlEle,
    /* [in] */ VARIANT_BOOL bRead,
    /* [retval][out] */ VARIANT_BOOL *pbResult);


void __RPC_STUB ICtrlPluginProp_AccessConfig2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_AddPropBase_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ IDUIPropBase *pProp);


void __RPC_STUB ICtrlPluginProp_AddPropBase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_RemovePropBase_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ IDUIPropBase *pProp);


void __RPC_STUB ICtrlPluginProp_RemovePropBase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_RemoveAllPropBase_Proxy( 
    ICtrlPluginProp * This);


void __RPC_STUB ICtrlPluginProp_RemoveAllPropBase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_GetPropBaseCount_Proxy( 
    ICtrlPluginProp * This,
    /* [retval][out] */ LONG *pResult);


void __RPC_STUB ICtrlPluginProp_GetPropBaseCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_GetAtPropBase_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ LONG nIndex,
    /* [retval][out] */ IDUIPropBase **ppResult);


void __RPC_STUB ICtrlPluginProp_GetAtPropBase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICtrlPluginProp_AccessConfig3_Proxy( 
    ICtrlPluginProp * This,
    /* [in] */ BSTR strParentName,
    /* [in] */ OLE_HANDLE pXmlEle,
    /* [in] */ VARIANT_BOOL bRead,
    /* [retval][out] */ VARIANT_BOOL *pbResult);


void __RPC_STUB ICtrlPluginProp_AccessConfig3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICtrlPluginProp_INTERFACE_DEFINED__ */


#ifndef __IDUIPropBase_INTERFACE_DEFINED__
#define __IDUIPropBase_INTERFACE_DEFINED__

/* interface IDUIPropBase */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDUIPropBase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C6A1AB1D-A87C-4238-990C-903DA0B5EE8D")
    IDUIPropBase : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ BSTR strName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][out] */ BSTR *pResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetHelp( 
            /* [in] */ BSTR strHelp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetHelp( 
            /* [retval][out] */ BSTR *pResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetType( 
            /* [in] */ enumPropType eType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetType( 
            /* [retval][out] */ enumPropType *pResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetVariant( 
            /* [in] */ VARIANT vt) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVariant( 
            /* [retval][out] */ VARIANT *pResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AccessConfig( 
            /* [in] */ OLE_HANDLE pXmlEle,
            /* [in] */ BSTR strKeyName,
            /* [in] */ VARIANT_BOOL bRead,
            /* [in] */ VARIANT_BOOL bCompleteUseKey,
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPropTypePtr( 
            /* [retval][out] */ IDUIPropType **ppDUIPropType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDUIPropBaseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDUIPropBase * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDUIPropBase * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDUIPropBase * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDUIPropBase * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDUIPropBase * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDUIPropBase * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDUIPropBase * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IDUIPropBase * This,
            /* [in] */ BSTR strName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IDUIPropBase * This,
            /* [retval][out] */ BSTR *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetHelp )( 
            IDUIPropBase * This,
            /* [in] */ BSTR strHelp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHelp )( 
            IDUIPropBase * This,
            /* [retval][out] */ BSTR *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetType )( 
            IDUIPropBase * This,
            /* [in] */ enumPropType eType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IDUIPropBase * This,
            /* [retval][out] */ enumPropType *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetVariant )( 
            IDUIPropBase * This,
            /* [in] */ VARIANT vt);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVariant )( 
            IDUIPropBase * This,
            /* [retval][out] */ VARIANT *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AccessConfig )( 
            IDUIPropBase * This,
            /* [in] */ OLE_HANDLE pXmlEle,
            /* [in] */ BSTR strKeyName,
            /* [in] */ VARIANT_BOOL bRead,
            /* [in] */ VARIANT_BOOL bCompleteUseKey,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPropTypePtr )( 
            IDUIPropBase * This,
            /* [retval][out] */ IDUIPropType **ppDUIPropType);
        
        END_INTERFACE
    } IDUIPropBaseVtbl;

    interface IDUIPropBase
    {
        CONST_VTBL struct IDUIPropBaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDUIPropBase_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDUIPropBase_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDUIPropBase_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDUIPropBase_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDUIPropBase_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDUIPropBase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDUIPropBase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDUIPropBase_SetName(This,strName)	\
    (This)->lpVtbl -> SetName(This,strName)

#define IDUIPropBase_GetName(This,pResult)	\
    (This)->lpVtbl -> GetName(This,pResult)

#define IDUIPropBase_SetHelp(This,strHelp)	\
    (This)->lpVtbl -> SetHelp(This,strHelp)

#define IDUIPropBase_GetHelp(This,pResult)	\
    (This)->lpVtbl -> GetHelp(This,pResult)

#define IDUIPropBase_SetType(This,eType)	\
    (This)->lpVtbl -> SetType(This,eType)

#define IDUIPropBase_GetType(This,pResult)	\
    (This)->lpVtbl -> GetType(This,pResult)

#define IDUIPropBase_SetVariant(This,vt)	\
    (This)->lpVtbl -> SetVariant(This,vt)

#define IDUIPropBase_GetVariant(This,pResult)	\
    (This)->lpVtbl -> GetVariant(This,pResult)

#define IDUIPropBase_AccessConfig(This,pXmlEle,strKeyName,bRead,bCompleteUseKey,pbResult)	\
    (This)->lpVtbl -> AccessConfig(This,pXmlEle,strKeyName,bRead,bCompleteUseKey,pbResult)

#define IDUIPropBase_GetPropTypePtr(This,ppDUIPropType)	\
    (This)->lpVtbl -> GetPropTypePtr(This,ppDUIPropType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIPropBase_SetName_Proxy( 
    IDUIPropBase * This,
    /* [in] */ BSTR strName);


void __RPC_STUB IDUIPropBase_SetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIPropBase_GetName_Proxy( 
    IDUIPropBase * This,
    /* [retval][out] */ BSTR *pResult);


void __RPC_STUB IDUIPropBase_GetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIPropBase_SetHelp_Proxy( 
    IDUIPropBase * This,
    /* [in] */ BSTR strHelp);


void __RPC_STUB IDUIPropBase_SetHelp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIPropBase_GetHelp_Proxy( 
    IDUIPropBase * This,
    /* [retval][out] */ BSTR *pResult);


void __RPC_STUB IDUIPropBase_GetHelp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIPropBase_SetType_Proxy( 
    IDUIPropBase * This,
    /* [in] */ enumPropType eType);


void __RPC_STUB IDUIPropBase_SetType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIPropBase_GetType_Proxy( 
    IDUIPropBase * This,
    /* [retval][out] */ enumPropType *pResult);


void __RPC_STUB IDUIPropBase_GetType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIPropBase_SetVariant_Proxy( 
    IDUIPropBase * This,
    /* [in] */ VARIANT vt);


void __RPC_STUB IDUIPropBase_SetVariant_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIPropBase_GetVariant_Proxy( 
    IDUIPropBase * This,
    /* [retval][out] */ VARIANT *pResult);


void __RPC_STUB IDUIPropBase_GetVariant_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIPropBase_AccessConfig_Proxy( 
    IDUIPropBase * This,
    /* [in] */ OLE_HANDLE pXmlEle,
    /* [in] */ BSTR strKeyName,
    /* [in] */ VARIANT_BOOL bRead,
    /* [in] */ VARIANT_BOOL bCompleteUseKey,
    /* [retval][out] */ VARIANT_BOOL *pbResult);


void __RPC_STUB IDUIPropBase_AccessConfig_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIPropBase_GetPropTypePtr_Proxy( 
    IDUIPropBase * This,
    /* [retval][out] */ IDUIPropType **ppDUIPropType);


void __RPC_STUB IDUIPropBase_GetPropTypePtr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDUIPropBase_INTERFACE_DEFINED__ */


#ifndef __IDUIRenderImage_INTERFACE_DEFINED__
#define __IDUIRenderImage_INTERFACE_DEFINED__

/* interface IDUIRenderImage */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDUIRenderImage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9DFCB11F-E48E-4C77-B581-440C3EE18418")
    IDUIRenderImage : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IDUIRenderImageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDUIRenderImage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDUIRenderImage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDUIRenderImage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDUIRenderImage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDUIRenderImage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDUIRenderImage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDUIRenderImage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IDUIRenderImageVtbl;

    interface IDUIRenderImage
    {
        CONST_VTBL struct IDUIRenderImageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDUIRenderImage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDUIRenderImage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDUIRenderImage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDUIRenderImage_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDUIRenderImage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDUIRenderImage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDUIRenderImage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDUIRenderImage_INTERFACE_DEFINED__ */


#ifndef __IDUIPropType_INTERFACE_DEFINED__
#define __IDUIPropType_INTERFACE_DEFINED__

/* interface IDUIPropType */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDUIPropType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C108259D-0728-453B-BBF0-B6D6572C5FD2")
    IDUIPropType : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_eType( 
            /* [retval][out] */ enumPropType *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_eType( 
            /* [in] */ enumPropType newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_strName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_strName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_vtValue( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_vtValue( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_strValue( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_strValue( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPropBase( 
            /* [retval][out] */ IDUIPropBase **pResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPropBase( 
            /* [in] */ IDUIPropBase *pPropBase) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetParentProp( 
            ICtrlPluginProp **pResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetParentProp( 
            /* [in] */ ICtrlPluginProp *pProp) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_bAccess( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_bAccess( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDUIPropTypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDUIPropType * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDUIPropType * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDUIPropType * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDUIPropType * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDUIPropType * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDUIPropType * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDUIPropType * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_eType )( 
            IDUIPropType * This,
            /* [retval][out] */ enumPropType *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_eType )( 
            IDUIPropType * This,
            /* [in] */ enumPropType newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_strName )( 
            IDUIPropType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_strName )( 
            IDUIPropType * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_vtValue )( 
            IDUIPropType * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_vtValue )( 
            IDUIPropType * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_strValue )( 
            IDUIPropType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_strValue )( 
            IDUIPropType * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPropBase )( 
            IDUIPropType * This,
            /* [retval][out] */ IDUIPropBase **pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPropBase )( 
            IDUIPropType * This,
            /* [in] */ IDUIPropBase *pPropBase);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetParentProp )( 
            IDUIPropType * This,
            ICtrlPluginProp **pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetParentProp )( 
            IDUIPropType * This,
            /* [in] */ ICtrlPluginProp *pProp);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bAccess )( 
            IDUIPropType * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_bAccess )( 
            IDUIPropType * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IDUIPropTypeVtbl;

    interface IDUIPropType
    {
        CONST_VTBL struct IDUIPropTypeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDUIPropType_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDUIPropType_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDUIPropType_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDUIPropType_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDUIPropType_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDUIPropType_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDUIPropType_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDUIPropType_get_eType(This,pVal)	\
    (This)->lpVtbl -> get_eType(This,pVal)

#define IDUIPropType_put_eType(This,newVal)	\
    (This)->lpVtbl -> put_eType(This,newVal)

#define IDUIPropType_get_strName(This,pVal)	\
    (This)->lpVtbl -> get_strName(This,pVal)

#define IDUIPropType_put_strName(This,newVal)	\
    (This)->lpVtbl -> put_strName(This,newVal)

#define IDUIPropType_get_vtValue(This,pVal)	\
    (This)->lpVtbl -> get_vtValue(This,pVal)

#define IDUIPropType_put_vtValue(This,newVal)	\
    (This)->lpVtbl -> put_vtValue(This,newVal)

#define IDUIPropType_get_strValue(This,pVal)	\
    (This)->lpVtbl -> get_strValue(This,pVal)

#define IDUIPropType_put_strValue(This,newVal)	\
    (This)->lpVtbl -> put_strValue(This,newVal)

#define IDUIPropType_GetPropBase(This,pResult)	\
    (This)->lpVtbl -> GetPropBase(This,pResult)

#define IDUIPropType_SetPropBase(This,pPropBase)	\
    (This)->lpVtbl -> SetPropBase(This,pPropBase)

#define IDUIPropType_GetParentProp(This,pResult)	\
    (This)->lpVtbl -> GetParentProp(This,pResult)

#define IDUIPropType_SetParentProp(This,pProp)	\
    (This)->lpVtbl -> SetParentProp(This,pProp)

#define IDUIPropType_get_bAccess(This,pVal)	\
    (This)->lpVtbl -> get_bAccess(This,pVal)

#define IDUIPropType_put_bAccess(This,newVal)	\
    (This)->lpVtbl -> put_bAccess(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IDUIPropType_get_eType_Proxy( 
    IDUIPropType * This,
    /* [retval][out] */ enumPropType *pVal);


void __RPC_STUB IDUIPropType_get_eType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IDUIPropType_put_eType_Proxy( 
    IDUIPropType * This,
    /* [in] */ enumPropType newVal);


void __RPC_STUB IDUIPropType_put_eType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IDUIPropType_get_strName_Proxy( 
    IDUIPropType * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IDUIPropType_get_strName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IDUIPropType_put_strName_Proxy( 
    IDUIPropType * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IDUIPropType_put_strName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IDUIPropType_get_vtValue_Proxy( 
    IDUIPropType * This,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IDUIPropType_get_vtValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IDUIPropType_put_vtValue_Proxy( 
    IDUIPropType * This,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IDUIPropType_put_vtValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IDUIPropType_get_strValue_Proxy( 
    IDUIPropType * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IDUIPropType_get_strValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IDUIPropType_put_strValue_Proxy( 
    IDUIPropType * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IDUIPropType_put_strValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIPropType_GetPropBase_Proxy( 
    IDUIPropType * This,
    /* [retval][out] */ IDUIPropBase **pResult);


void __RPC_STUB IDUIPropType_GetPropBase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIPropType_SetPropBase_Proxy( 
    IDUIPropType * This,
    /* [in] */ IDUIPropBase *pPropBase);


void __RPC_STUB IDUIPropType_SetPropBase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIPropType_GetParentProp_Proxy( 
    IDUIPropType * This,
    ICtrlPluginProp **pResult);


void __RPC_STUB IDUIPropType_GetParentProp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDUIPropType_SetParentProp_Proxy( 
    IDUIPropType * This,
    /* [in] */ ICtrlPluginProp *pProp);


void __RPC_STUB IDUIPropType_SetParentProp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IDUIPropType_get_bAccess_Proxy( 
    IDUIPropType * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IDUIPropType_get_bAccess_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IDUIPropType_put_bAccess_Proxy( 
    IDUIPropType * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IDUIPropType_put_bAccess_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDUIPropType_INTERFACE_DEFINED__ */


#ifndef __IImageSecProp_INTERFACE_DEFINED__
#define __IImageSecProp_INTERFACE_DEFINED__

/* interface IImageSecProp */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IImageSecProp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B34B96BC-B2A6-4201-A4A4-42E5F6979D05")
    IImageSecProp : public IDUIPropBase
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RenderDraw( 
            /* [in] */ IDUIRenderDC *pDC,
            /* [in] */ SkinRect *rect,
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetImageBase( 
            /* [in] */ DUIImageBase *pImgbase,
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetImageBase( 
            /* [retval][out] */ DUIImageBase *pImgbase) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IImageSecPropVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IImageSecProp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IImageSecProp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IImageSecProp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IImageSecProp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IImageSecProp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IImageSecProp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IImageSecProp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IImageSecProp * This,
            /* [in] */ BSTR strName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IImageSecProp * This,
            /* [retval][out] */ BSTR *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetHelp )( 
            IImageSecProp * This,
            /* [in] */ BSTR strHelp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHelp )( 
            IImageSecProp * This,
            /* [retval][out] */ BSTR *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetType )( 
            IImageSecProp * This,
            /* [in] */ enumPropType eType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IImageSecProp * This,
            /* [retval][out] */ enumPropType *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetVariant )( 
            IImageSecProp * This,
            /* [in] */ VARIANT vt);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVariant )( 
            IImageSecProp * This,
            /* [retval][out] */ VARIANT *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AccessConfig )( 
            IImageSecProp * This,
            /* [in] */ OLE_HANDLE pXmlEle,
            /* [in] */ BSTR strKeyName,
            /* [in] */ VARIANT_BOOL bRead,
            /* [in] */ VARIANT_BOOL bCompleteUseKey,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPropTypePtr )( 
            IImageSecProp * This,
            /* [retval][out] */ IDUIPropType **ppDUIPropType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RenderDraw )( 
            IImageSecProp * This,
            /* [in] */ IDUIRenderDC *pDC,
            /* [in] */ SkinRect *rect,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetImageBase )( 
            IImageSecProp * This,
            /* [in] */ DUIImageBase *pImgbase,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetImageBase )( 
            IImageSecProp * This,
            /* [retval][out] */ DUIImageBase *pImgbase);
        
        END_INTERFACE
    } IImageSecPropVtbl;

    interface IImageSecProp
    {
        CONST_VTBL struct IImageSecPropVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImageSecProp_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IImageSecProp_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IImageSecProp_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IImageSecProp_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IImageSecProp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IImageSecProp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IImageSecProp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IImageSecProp_SetName(This,strName)	\
    (This)->lpVtbl -> SetName(This,strName)

#define IImageSecProp_GetName(This,pResult)	\
    (This)->lpVtbl -> GetName(This,pResult)

#define IImageSecProp_SetHelp(This,strHelp)	\
    (This)->lpVtbl -> SetHelp(This,strHelp)

#define IImageSecProp_GetHelp(This,pResult)	\
    (This)->lpVtbl -> GetHelp(This,pResult)

#define IImageSecProp_SetType(This,eType)	\
    (This)->lpVtbl -> SetType(This,eType)

#define IImageSecProp_GetType(This,pResult)	\
    (This)->lpVtbl -> GetType(This,pResult)

#define IImageSecProp_SetVariant(This,vt)	\
    (This)->lpVtbl -> SetVariant(This,vt)

#define IImageSecProp_GetVariant(This,pResult)	\
    (This)->lpVtbl -> GetVariant(This,pResult)

#define IImageSecProp_AccessConfig(This,pXmlEle,strKeyName,bRead,bCompleteUseKey,pbResult)	\
    (This)->lpVtbl -> AccessConfig(This,pXmlEle,strKeyName,bRead,bCompleteUseKey,pbResult)

#define IImageSecProp_GetPropTypePtr(This,ppDUIPropType)	\
    (This)->lpVtbl -> GetPropTypePtr(This,ppDUIPropType)


#define IImageSecProp_RenderDraw(This,pDC,rect,pbResult)	\
    (This)->lpVtbl -> RenderDraw(This,pDC,rect,pbResult)

#define IImageSecProp_SetImageBase(This,pImgbase,pbResult)	\
    (This)->lpVtbl -> SetImageBase(This,pImgbase,pbResult)

#define IImageSecProp_GetImageBase(This,pImgbase)	\
    (This)->lpVtbl -> GetImageBase(This,pImgbase)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IImageSecProp_RenderDraw_Proxy( 
    IImageSecProp * This,
    /* [in] */ IDUIRenderDC *pDC,
    /* [in] */ SkinRect *rect,
    /* [retval][out] */ VARIANT_BOOL *pbResult);


void __RPC_STUB IImageSecProp_RenderDraw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IImageSecProp_SetImageBase_Proxy( 
    IImageSecProp * This,
    /* [in] */ DUIImageBase *pImgbase,
    /* [retval][out] */ VARIANT_BOOL *pbResult);


void __RPC_STUB IImageSecProp_SetImageBase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IImageSecProp_GetImageBase_Proxy( 
    IImageSecProp * This,
    /* [retval][out] */ DUIImageBase *pImgbase);


void __RPC_STUB IImageSecProp_GetImageBase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IImageSecProp_INTERFACE_DEFINED__ */



#ifndef __DirectUIComLib_LIBRARY_DEFINED__
#define __DirectUIComLib_LIBRARY_DEFINED__

/* library DirectUIComLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_DirectUIComLib;

EXTERN_C const CLSID CLSID_DUIObj;

#ifdef __cplusplus

class DECLSPEC_UUID("94DBF17C-B560-44DC-BDBE-0B643CE06580")
DUIObj;
#endif

EXTERN_C const CLSID CLSID_DUIRes;

#ifdef __cplusplus

class DECLSPEC_UUID("65FF75C4-8FAF-4471-AE5E-F1E931BF3D74")
DUIRes;
#endif

#ifndef ___ISkinObjResBaseEvents_DISPINTERFACE_DEFINED__
#define ___ISkinObjResBaseEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ISkinObjResBaseEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__ISkinObjResBaseEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("DCDA7594-43C0-4A4B-B291-E5D3523BBB34")
    _ISkinObjResBaseEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ISkinObjResBaseEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ISkinObjResBaseEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ISkinObjResBaseEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ISkinObjResBaseEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ISkinObjResBaseEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ISkinObjResBaseEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ISkinObjResBaseEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ISkinObjResBaseEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _ISkinObjResBaseEventsVtbl;

    interface _ISkinObjResBaseEvents
    {
        CONST_VTBL struct _ISkinObjResBaseEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ISkinObjResBaseEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _ISkinObjResBaseEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _ISkinObjResBaseEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _ISkinObjResBaseEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _ISkinObjResBaseEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _ISkinObjResBaseEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _ISkinObjResBaseEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ISkinObjResBaseEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SkinObjResBase;

#ifdef __cplusplus

class DECLSPEC_UUID("7819C697-E25A-423E-A1F5-DD548D9DF78A")
SkinObjResBase;
#endif

#ifndef ___IDirectUIEvents_DISPINTERFACE_DEFINED__
#define ___IDirectUIEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IDirectUIEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IDirectUIEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("9CB33407-27E8-4EF4-A866-9489D425327E")
    _IDirectUIEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IDirectUIEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IDirectUIEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IDirectUIEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IDirectUIEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IDirectUIEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IDirectUIEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IDirectUIEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IDirectUIEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IDirectUIEventsVtbl;

    interface _IDirectUIEvents
    {
        CONST_VTBL struct _IDirectUIEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IDirectUIEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IDirectUIEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IDirectUIEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IDirectUIEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IDirectUIEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IDirectUIEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IDirectUIEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IDirectUIEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_DirectUI;

#ifdef __cplusplus

class DECLSPEC_UUID("CB51E107-2C85-4412-B40E-11AF85606574")
DirectUI;
#endif

#ifndef ___IDUIControlBaseEvents_DISPINTERFACE_DEFINED__
#define ___IDUIControlBaseEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IDUIControlBaseEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IDUIControlBaseEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("92892847-ABE0-4868-9E74-879AE256C3C8")
    _IDUIControlBaseEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IDUIControlBaseEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IDUIControlBaseEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IDUIControlBaseEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IDUIControlBaseEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IDUIControlBaseEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IDUIControlBaseEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IDUIControlBaseEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IDUIControlBaseEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IDUIControlBaseEventsVtbl;

    interface _IDUIControlBaseEvents
    {
        CONST_VTBL struct _IDUIControlBaseEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IDUIControlBaseEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IDUIControlBaseEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IDUIControlBaseEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IDUIControlBaseEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IDUIControlBaseEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IDUIControlBaseEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IDUIControlBaseEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IDUIControlBaseEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_DUIControlBase;

#ifdef __cplusplus

class DECLSPEC_UUID("79A2FA67-7FBB-45EC-B314-FEE65C3B2254")
DUIControlBase;
#endif

#ifndef ___IDUIRenderDCEvents_DISPINTERFACE_DEFINED__
#define ___IDUIRenderDCEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IDUIRenderDCEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IDUIRenderDCEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("F9EEA0FC-6EB0-401B-9814-12723947D06D")
    _IDUIRenderDCEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IDUIRenderDCEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IDUIRenderDCEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IDUIRenderDCEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IDUIRenderDCEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IDUIRenderDCEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IDUIRenderDCEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IDUIRenderDCEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IDUIRenderDCEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IDUIRenderDCEventsVtbl;

    interface _IDUIRenderDCEvents
    {
        CONST_VTBL struct _IDUIRenderDCEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IDUIRenderDCEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IDUIRenderDCEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IDUIRenderDCEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IDUIRenderDCEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IDUIRenderDCEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IDUIRenderDCEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IDUIRenderDCEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IDUIRenderDCEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_DUIRenderDC;

#ifdef __cplusplus

class DECLSPEC_UUID("40F8EA43-94CE-44E0-A54A-B733F7D3DBF5")
DUIRenderDC;
#endif

#ifndef ___ICtrlPluginPropEvents_DISPINTERFACE_DEFINED__
#define ___ICtrlPluginPropEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ICtrlPluginPropEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__ICtrlPluginPropEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("EC5DD864-86F1-47A2-B25F-215C9F408FBB")
    _ICtrlPluginPropEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ICtrlPluginPropEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ICtrlPluginPropEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ICtrlPluginPropEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ICtrlPluginPropEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ICtrlPluginPropEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ICtrlPluginPropEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ICtrlPluginPropEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ICtrlPluginPropEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _ICtrlPluginPropEventsVtbl;

    interface _ICtrlPluginPropEvents
    {
        CONST_VTBL struct _ICtrlPluginPropEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ICtrlPluginPropEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _ICtrlPluginPropEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _ICtrlPluginPropEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _ICtrlPluginPropEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _ICtrlPluginPropEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _ICtrlPluginPropEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _ICtrlPluginPropEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ICtrlPluginPropEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CtrlPluginProp;

#ifdef __cplusplus

class DECLSPEC_UUID("574F6A37-C1F3-49B6-8ACF-F9D6DEC7CD95")
CtrlPluginProp;
#endif

#ifndef ___IDUIPropBaseEvents_DISPINTERFACE_DEFINED__
#define ___IDUIPropBaseEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IDUIPropBaseEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IDUIPropBaseEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("10C526DC-AAF6-4148-8C5B-12A30E0C7AF4")
    _IDUIPropBaseEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IDUIPropBaseEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IDUIPropBaseEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IDUIPropBaseEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IDUIPropBaseEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IDUIPropBaseEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IDUIPropBaseEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IDUIPropBaseEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IDUIPropBaseEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IDUIPropBaseEventsVtbl;

    interface _IDUIPropBaseEvents
    {
        CONST_VTBL struct _IDUIPropBaseEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IDUIPropBaseEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IDUIPropBaseEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IDUIPropBaseEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IDUIPropBaseEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IDUIPropBaseEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IDUIPropBaseEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IDUIPropBaseEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IDUIPropBaseEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_DUIPropBase;

#ifdef __cplusplus

class DECLSPEC_UUID("E79081BC-AEAB-4315-8181-7C1069611966")
DUIPropBase;
#endif

#ifndef ___IDUIRenderImageEvents_DISPINTERFACE_DEFINED__
#define ___IDUIRenderImageEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IDUIRenderImageEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IDUIRenderImageEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("81AC220B-99DF-4713-95D3-B31FA43B27C0")
    _IDUIRenderImageEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IDUIRenderImageEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IDUIRenderImageEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IDUIRenderImageEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IDUIRenderImageEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IDUIRenderImageEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IDUIRenderImageEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IDUIRenderImageEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IDUIRenderImageEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IDUIRenderImageEventsVtbl;

    interface _IDUIRenderImageEvents
    {
        CONST_VTBL struct _IDUIRenderImageEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IDUIRenderImageEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IDUIRenderImageEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IDUIRenderImageEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IDUIRenderImageEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IDUIRenderImageEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IDUIRenderImageEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IDUIRenderImageEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IDUIRenderImageEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_DUIRenderImage;

#ifdef __cplusplus

class DECLSPEC_UUID("03E76D48-BED7-441D-8A59-E9085D1F1D8B")
DUIRenderImage;
#endif

#ifndef ___IDUIPropTypeEvents_DISPINTERFACE_DEFINED__
#define ___IDUIPropTypeEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IDUIPropTypeEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IDUIPropTypeEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A33F4930-2602-47A9-91B3-24CF651FA290")
    _IDUIPropTypeEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IDUIPropTypeEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IDUIPropTypeEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IDUIPropTypeEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IDUIPropTypeEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IDUIPropTypeEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IDUIPropTypeEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IDUIPropTypeEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IDUIPropTypeEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IDUIPropTypeEventsVtbl;

    interface _IDUIPropTypeEvents
    {
        CONST_VTBL struct _IDUIPropTypeEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IDUIPropTypeEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IDUIPropTypeEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IDUIPropTypeEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IDUIPropTypeEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IDUIPropTypeEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IDUIPropTypeEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IDUIPropTypeEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IDUIPropTypeEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_DUIPropType;

#ifdef __cplusplus

class DECLSPEC_UUID("83252221-F552-454B-A7DE-F361136402ED")
DUIPropType;
#endif

#ifndef ___IImageSecPropEvents_DISPINTERFACE_DEFINED__
#define ___IImageSecPropEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IImageSecPropEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IImageSecPropEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("48F0F136-9CAF-41D7-9660-406CC75642DD")
    _IImageSecPropEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IImageSecPropEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IImageSecPropEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IImageSecPropEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IImageSecPropEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IImageSecPropEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IImageSecPropEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IImageSecPropEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IImageSecPropEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IImageSecPropEventsVtbl;

    interface _IImageSecPropEvents
    {
        CONST_VTBL struct _IImageSecPropEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IImageSecPropEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IImageSecPropEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IImageSecPropEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IImageSecPropEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IImageSecPropEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IImageSecPropEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IImageSecPropEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IImageSecPropEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ImageSecProp;

#ifdef __cplusplus

class DECLSPEC_UUID("61EB4F7C-D704-4A63-B99E-B4CAB91DA653")
ImageSecProp;
#endif
#endif /* __DirectUIComLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


