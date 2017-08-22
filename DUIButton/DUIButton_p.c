

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */
#pragma warning( disable: 4211 )  /* redefine extent to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 440
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "DUIButton.h"

#define TYPE_FORMAT_STRING_SIZE   79                                
#define PROC_FORMAT_STRING_SIZE   75                                
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ICommandButton_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ICommandButton_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT40_OR_LATER)
#error You need a Windows NT 4.0 or later to run this stub because it uses these features:
#error   -Oif or -Oicf, [wire_marshal] or [user_marshal] attribute.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure SetText */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x22 ),	/* 34 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x22 ),	/* 34 */
/* 14 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x3,		/* 3 */

	/* Parameter strText */

/* 16 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 18 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter pbResult */

/* 22 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 24 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 26 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 28 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 30 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 32 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetBackImage */

/* 34 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 36 */	NdrFcLong( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x23 ),	/* 35 */
/* 42 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 44 */	NdrFcShort( 0x6 ),	/* 6 */
/* 46 */	NdrFcShort( 0x22 ),	/* 34 */
/* 48 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x4,		/* 4 */

	/* Parameter pImageBase */

/* 50 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 52 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 54 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Parameter eStatus */

/* 56 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 58 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 60 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pbResult */

/* 62 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 64 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 66 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 68 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 70 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 72 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0xc ),	/* Offset= 12 (16) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 16 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 18 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20 */	NdrFcShort( 0xfff2 ),	/* Offset= -14 (6) */
/* 22 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 24 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 26 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */
/* 30 */	NdrFcShort( 0x4 ),	/* 4 */
/* 32 */	NdrFcShort( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (2) */
/* 36 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 38 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 40 */	
			0x11, 0x0,	/* FC_RP */
/* 42 */	NdrFcShort( 0xc ),	/* Offset= 12 (54) */
/* 44 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 46 */	NdrFcShort( 0x10 ),	/* 16 */
/* 48 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 50 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 52 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 54 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 56 */	NdrFcShort( 0x28 ),	/* 40 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* Offset= 0 (60) */
/* 62 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 64 */	NdrFcShort( 0xffda ),	/* Offset= -38 (26) */
/* 66 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 68 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (44) */
/* 70 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 72 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (44) */
/* 74 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 76 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            }

        };



/* Standard interface: __MIDL_itf_DUIButton_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDUIObj, ver. 0.0,
   GUID={0xB86ED3F4,0xD992,0x4BE0,{0x8B,0xCC,0xEC,0x98,0xF7,0x07,0xD5,0xB8}} */


/* Object interface: ISkinObjResBase, ver. 0.0,
   GUID={0x14B2ECE4,0x0F5D,0x4908,{0xB9,0x3E,0x31,0x17,0x1E,0x55,0x62,0x3A}} */


/* Object interface: IDUIControlBase, ver. 0.0,
   GUID={0xF47017B7,0x3D4B,0x4972,{0xA5,0x92,0x06,0x98,0xF8,0x4C,0xCB,0x1A}} */


/* Object interface: ICommandButton, ver. 0.0,
   GUID={0x0EA328C4,0xC227,0x4010,{0xAD,0xF7,0xB2,0xAF,0x77,0x1A,0x0F,0x83}} */

#pragma code_seg(".orpc")
static const unsigned short ICommandButton_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    34
    };

static const MIDL_STUBLESS_PROXY_INFO ICommandButton_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ICommandButton_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ICommandButton_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ICommandButton_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(36) _ICommandButtonProxyVtbl = 
{
    &ICommandButton_ProxyInfo,
    &IID_ICommandButton,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIObj::SetName */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIObj::SetObjPtr */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIObj::GetObjPtr */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIObj::GetName */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIObj::GetType */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIObj::SetDUIRes */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIObj::GetDUIRes */ ,
    0 /* (void *) (INT_PTR) -1 /* ISkinObjResBase::SetRect */ ,
    0 /* (void *) (INT_PTR) -1 /* ISkinObjResBase::GetRect */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::CreateProps */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::RenderDrawObject */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::EventNotify */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::GetControlTypeName */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::GetAuthorInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::GetControlIcon */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::GetDragCursor */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::SetClassId */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::GetClassId */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::GetCategoryName */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::CreateGroupProp */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::CreateProp */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::AddProp */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::GetPropList */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::SetRealCtrlPtr */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::GetRealCtrlPtr */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::FinalCreate */ ,
    0 /* (void *) (INT_PTR) -1 /* IDUIControlBase::GetInterface */ ,
    (void *) (INT_PTR) -1 /* ICommandButton::SetText */ ,
    (void *) (INT_PTR) -1 /* ICommandButton::SetBackImage */
};


static const PRPC_STUB_FUNCTION ICommandButton_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ICommandButtonStubVtbl =
{
    &IID_ICommandButton,
    &ICommandButton_ServerInfo,
    36,
    &ICommandButton_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x600016e, /* MIDL Version 6.0.366 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0   /* Reserved5 */
    };

const CInterfaceProxyVtbl * _DUIButton_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ICommandButtonProxyVtbl,
    0
};

const CInterfaceStubVtbl * _DUIButton_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ICommandButtonStubVtbl,
    0
};

PCInterfaceName const _DUIButton_InterfaceNamesList[] = 
{
    "ICommandButton",
    0
};

const IID *  _DUIButton_BaseIIDList[] = 
{
    &IID_IDUIControlBase,
    0
};


#define _DUIButton_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _DUIButton, pIID, n)

int __stdcall _DUIButton_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_DUIButton_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo DUIButton_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _DUIButton_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _DUIButton_StubVtblList,
    (const PCInterfaceName * ) & _DUIButton_InterfaceNamesList,
    (const IID ** ) & _DUIButton_BaseIIDList,
    & _DUIButton_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

