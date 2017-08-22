

/* this ALWAYS GENERATED file contains the proxy stub code */


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


#include "DirectUICom.h"

#define TYPE_FORMAT_STRING_SIZE   1381                              
#define PROC_FORMAT_STRING_SIZE   2649                              
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

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


extern const MIDL_SERVER_INFO IDUIObj_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDUIObj_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDUIRes_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDUIRes_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISkinObjResBase_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISkinObjResBase_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDirectUI_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDirectUI_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDUIControlBase_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDUIControlBase_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDUIRenderDC_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDUIRenderDC_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ICtrlPluginProp_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ICtrlPluginProp_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDUIPropBase_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDUIPropBase_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDUIRenderImage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDUIRenderImage_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDUIPropType_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDUIPropType_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IImageSecProp_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IImageSecProp_ProxyInfo;


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

	/* Procedure SetName */


	/* Procedure SetName */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter strName */


	/* Parameter strName */

/* 16 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 18 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */


	/* Return value */

/* 22 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 24 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 26 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetObjPtr */

/* 28 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 30 */	NdrFcLong( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0x8 ),	/* 8 */
/* 36 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	NdrFcShort( 0x8 ),	/* 8 */
/* 42 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pObjPtr */

/* 44 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 46 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 48 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 50 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 52 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 54 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetObjPtr */

/* 56 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 58 */	NdrFcLong( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x9 ),	/* 9 */
/* 64 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x24 ),	/* 36 */
/* 70 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pObjPtr */

/* 72 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetHelp */


	/* Procedure GetName */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0xa ),	/* 10 */
/* 92 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x8 ),	/* 8 */
/* 98 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pResult */


	/* Parameter pResult */

/* 100 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 104 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */


	/* Return value */

/* 106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetType */

/* 112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0xb ),	/* 11 */
/* 120 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x22 ),	/* 34 */
/* 126 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pType */

/* 128 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 130 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 132 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 134 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 136 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDUIRes */

/* 140 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0xc ),	/* 12 */
/* 148 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 154 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pDUIRes */

/* 156 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 160 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Return value */

/* 162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDUIRes */

/* 168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0xd ),	/* 13 */
/* 176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 182 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppResult */

/* 184 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 186 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 188 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Return value */

/* 190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 192 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDUIResObjPtr */

/* 196 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x7 ),	/* 7 */
/* 204 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x24 ),	/* 36 */
/* 210 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter plResObjPtr */

/* 212 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenSkin */

/* 224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x22 ),	/* 34 */
/* 238 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pbResult */

/* 240 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 244 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CloseSkin */

/* 252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x9 ),	/* 9 */
/* 260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x22 ),	/* 34 */
/* 266 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pbResult */

/* 268 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 270 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 272 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 276 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateDirectUI */

/* 280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0xa ),	/* 10 */
/* 288 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 294 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x3,		/* 3 */

	/* Parameter hWnd */

/* 296 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 298 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pResult */

/* 302 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 304 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 306 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 310 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateControl */

/* 314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0xb ),	/* 11 */
/* 322 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 328 */	0x7,		/* Oi2 Flags:  srv must size, clt must size, has return, */
			0x4,		/* 4 */

	/* Parameter pDirectUI */

/* 330 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 334 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter strCLSID */

/* 336 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 340 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter pResult */

/* 342 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 344 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 346 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadImage */

/* 354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0xc ),	/* 12 */
/* 362 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 368 */	0x7,		/* Oi2 Flags:  srv must size, clt must size, has return, */
			0x3,		/* 3 */

	/* Parameter strImagePath */

/* 370 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 372 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 374 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter ppResult */

/* 376 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 378 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 380 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetRect */

/* 388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 394 */	NdrFcShort( 0xe ),	/* 14 */
/* 396 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 398 */	NdrFcShort( 0x20 ),	/* 32 */
/* 400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 402 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter rect */

/* 404 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 408 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */

	/* Return value */

/* 410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 412 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRect */

/* 416 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 422 */	NdrFcShort( 0xf ),	/* 15 */
/* 424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x3c ),	/* 60 */
/* 430 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pRect */

/* 432 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 436 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */

	/* Return value */

/* 438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Create */

/* 444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x10 ),	/* 16 */
/* 452 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 454 */	NdrFcShort( 0x28 ),	/* 40 */
/* 456 */	NdrFcShort( 0x22 ),	/* 34 */
/* 458 */	0x4,		/* Oi2 Flags:  has return, */
			0x4,		/* 4 */

	/* Parameter hWnd */

/* 460 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 462 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rect */

/* 466 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 468 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 470 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */

	/* Parameter pbResult */

/* 472 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 474 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 476 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 480 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetHwnd */

/* 484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x11 ),	/* 17 */
/* 492 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x24 ),	/* 36 */
/* 498 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter phResult */

/* 500 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 502 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 508 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateProps */

/* 512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x10 ),	/* 16 */
/* 520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x22 ),	/* 34 */
/* 526 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pbResult */

/* 528 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 530 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 532 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 536 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RenderDrawObject */

/* 540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x11 ),	/* 17 */
/* 548 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 550 */	NdrFcShort( 0x34 ),	/* 52 */
/* 552 */	NdrFcShort( 0x22 ),	/* 34 */
/* 554 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x4,		/* 4 */

	/* Parameter pDC */

/* 556 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 558 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 560 */	NdrFcShort( 0xa8 ),	/* Type Offset=168 */

	/* Parameter rect */

/* 562 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 564 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 566 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */

	/* Parameter pbResult */

/* 568 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 570 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 572 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 574 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 576 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EventNotify */

/* 580 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x12 ),	/* 18 */
/* 588 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x22 ),	/* 34 */
/* 594 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x3,		/* 3 */

	/* Parameter peVentNotify */

/* 596 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 600 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */

	/* Parameter pbResult */

/* 602 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 604 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 606 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 608 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 610 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetControlTypeName */

/* 614 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x13 ),	/* 19 */
/* 622 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 628 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pstrResult */

/* 630 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 634 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAuthorInfo */

/* 642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x14 ),	/* 20 */
/* 650 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 656 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x5,		/* 5 */

	/* Parameter pbstrAuthorName */

/* 658 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 660 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 662 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter pbstrCompany */

/* 664 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 666 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 668 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter pbstrUrl */

/* 670 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 672 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 674 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter pbstrVersion */

/* 676 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 678 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 680 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 684 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetControlIcon */

/* 688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x15 ),	/* 21 */
/* 696 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 698 */	NdrFcShort( 0x10 ),	/* 16 */
/* 700 */	NdrFcShort( 0x24 ),	/* 36 */
/* 702 */	0x4,		/* Oi2 Flags:  has return, */
			0x4,		/* 4 */

	/* Parameter nWidth */

/* 704 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 706 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 710 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 712 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phIcon */

/* 716 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 718 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 724 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAddinPropCount */


	/* Procedure GetDragCursor */

/* 728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x16 ),	/* 22 */
/* 736 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x24 ),	/* 36 */
/* 742 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter plResult */


	/* Parameter phCursor */

/* 744 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 746 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 752 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetClassId */

/* 756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x17 ),	/* 23 */
/* 764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 770 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter clsId */

/* 772 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 774 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 776 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 780 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClassId */

/* 784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x18 ),	/* 24 */
/* 792 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 798 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter clsId */

/* 800 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 802 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 804 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCategoryName */

/* 812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x19 ),	/* 25 */
/* 820 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 826 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pstrResult */

/* 828 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 830 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 832 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 836 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateGroupProp */

/* 840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x1a ),	/* 26 */
/* 848 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 850 */	NdrFcShort( 0x6 ),	/* 6 */
/* 852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 854 */	0x7,		/* Oi2 Flags:  srv must size, clt must size, has return, */
			0x5,		/* 5 */

	/* Parameter pParentProp */

/* 856 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 860 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Parameter strPropName */

/* 862 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 864 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 866 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter bExpand */

/* 868 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 870 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 872 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppProp */

/* 874 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 876 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 878 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 880 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 882 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateProp */

/* 886 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x1b ),	/* 27 */
/* 894 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 896 */	NdrFcShort( 0xc ),	/* 12 */
/* 898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 900 */	0x7,		/* Oi2 Flags:  srv must size, clt must size, has return, */
			0x7,		/* 7 */

	/* Parameter pPropParent */

/* 902 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 904 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 906 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Parameter eType */

/* 908 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 910 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 912 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter strPropName */

/* 914 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 916 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 918 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter strPropHelp */

/* 920 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 922 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 924 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter bIsStyle */

/* 926 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 928 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 930 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppProp */

/* 932 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 934 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 936 */	NdrFcShort( 0xea ),	/* Type Offset=234 */

	/* Return value */

/* 938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 940 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddProp */

/* 944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x1c ),	/* 28 */
/* 952 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 958 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pProp */

/* 960 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 964 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Return value */

/* 966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 968 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPropList */

/* 972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x1d ),	/* 29 */
/* 980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 982 */	NdrFcShort( 0x1c ),	/* 28 */
/* 984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 986 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pPropList */

/* 988 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 990 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 994 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 996 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetRealCtrlPtr */

/* 1000 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1008 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1012 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1014 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pCtrlBase */

/* 1016 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1020 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */

	/* Return value */

/* 1022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRealCtrlPtr */

/* 1028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1034 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1036 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1042 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppCtrlBase */

/* 1044 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1048 */	NdrFcShort( 0x116 ),	/* Type Offset=278 */

	/* Return value */

/* 1050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1052 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FinalCreate */

/* 1056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1066 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1070 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter bNewObject */

/* 1072 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1074 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1076 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1078 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1080 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetInterface */

/* 1084 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1092 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1098 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x3,		/* 3 */

	/* Parameter pIID */

/* 1100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppResult */

/* 1106 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1110 */	NdrFcShort( 0x11a ),	/* Type Offset=282 */

	/* Return value */

/* 1112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1114 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetRenderDCPtr */

/* 1118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1124 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1126 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1132 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pRenderDC */

/* 1134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1136 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRenderDCPtr */

/* 1146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1154 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1158 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1160 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pRenderDC */

/* 1162 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_bGroup */

/* 1174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1188 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1190 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1194 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1198 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_bGroup */

/* 1202 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1210 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1212 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1216 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 1218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1220 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1222 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1224 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1226 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_strName */


	/* Procedure get_strName */

/* 1230 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1238 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1244 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1246 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1250 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */


	/* Return value */

/* 1252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_strName */


	/* Procedure put_strName */

/* 1258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1264 */	NdrFcShort( 0xa ),	/* 10 */
/* 1266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1272 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 1274 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1276 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1278 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */


	/* Return value */

/* 1280 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1282 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddSkinProp */

/* 1286 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0xb ),	/* 11 */
/* 1294 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1300 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pSkinProp */

/* 1302 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1304 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1306 */	NdrFcShort( 0x130 ),	/* Type Offset=304 */

	/* Return value */

/* 1308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1310 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveSkinProp */

/* 1314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1320 */	NdrFcShort( 0xc ),	/* 12 */
/* 1322 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1328 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pSkinProp */

/* 1330 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1334 */	NdrFcShort( 0x130 ),	/* Type Offset=304 */

	/* Return value */

/* 1336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddProp */

/* 1342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0xd ),	/* 13 */
/* 1350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1356 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pSubProp */

/* 1358 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1360 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1362 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Return value */

/* 1364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1366 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveProp */

/* 1370 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0xe ),	/* 14 */
/* 1378 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1384 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pSubProp */

/* 1386 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1388 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1390 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Return value */

/* 1392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1394 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AccessConfig */

/* 1398 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0xf ),	/* 15 */
/* 1406 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1408 */	NdrFcShort( 0xe ),	/* 14 */
/* 1410 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1412 */	0x4,		/* Oi2 Flags:  has return, */
			0x4,		/* 4 */

	/* Parameter pXmlEle */

/* 1414 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bRead */

/* 1420 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1424 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pbResult */

/* 1426 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1430 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1434 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Expand */

/* 1438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1444 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1448 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1452 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter bExpand */

/* 1454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1456 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1458 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1460 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1462 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsExpand */

/* 1466 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1472 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1474 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1480 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pbResult */

/* 1482 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1484 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1486 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1488 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1490 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetParentProp */


	/* Procedure SetParent */

/* 1494 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1496 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1500 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1502 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1508 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pProp */


	/* Parameter pParent */

/* 1510 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1514 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Return value */


	/* Return value */

/* 1516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetParent */

/* 1522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1528 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1530 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1536 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pProp */

/* 1538 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1540 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1542 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 1544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1546 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSkinPropTypeCount */

/* 1550 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1558 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1562 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1564 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter plResult */

/* 1566 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1568 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1572 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1574 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSkinPropTypeFromIndex */

/* 1578 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1584 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1586 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1590 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1592 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x3,		/* 3 */

	/* Parameter nIndex */

/* 1594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPropType */

/* 1600 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1604 */	NdrFcShort( 0x142 ),	/* Type Offset=322 */

	/* Return value */

/* 1606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAddinPropByIndex */

/* 1612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1620 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1626 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x3,		/* 3 */

	/* Parameter nIndex */

/* 1628 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1630 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAddinProp */

/* 1634 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1636 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1638 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 1640 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1642 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDUIRes */

/* 1646 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1652 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1654 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1660 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppDUIRes */

/* 1662 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1664 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1666 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 1668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1670 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDUIRes */

/* 1674 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1680 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1682 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1688 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pDUIRes */

/* 1690 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1692 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1694 */	NdrFcShort( 0x14a ),	/* Type Offset=330 */

	/* Return value */

/* 1696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1698 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetControlBasePtr */

/* 1702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1708 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1710 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1716 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppResult */

/* 1718 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1720 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1722 */	NdrFcShort( 0x116 ),	/* Type Offset=278 */

	/* Return value */

/* 1724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1726 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetControlBasePtr */

/* 1730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1736 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1738 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1744 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pCtrlBase */

/* 1746 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1748 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1750 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */

	/* Return value */

/* 1752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1754 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AccessConfig2 */

/* 1758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1764 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1766 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1768 */	NdrFcShort( 0xe ),	/* 14 */
/* 1770 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1772 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x5,		/* 5 */

	/* Parameter strParentName */

/* 1774 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1778 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter pXmlEle */

/* 1780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bRead */

/* 1786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1790 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pbResult */

/* 1792 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1794 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1796 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1800 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddPropBase */

/* 1804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1812 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1816 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1818 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pProp */

/* 1820 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1822 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1824 */	NdrFcShort( 0xee ),	/* Type Offset=238 */

	/* Return value */

/* 1826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1828 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemovePropBase */

/* 1832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1840 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1846 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pProp */

/* 1848 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1850 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1852 */	NdrFcShort( 0xee ),	/* Type Offset=238 */

	/* Return value */

/* 1854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1856 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveAllPropBase */

/* 1860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1868 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1874 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */

/* 1876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPropBaseCount */

/* 1882 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1888 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1890 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1894 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1896 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pResult */

/* 1898 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1900 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1906 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAtPropBase */

/* 1910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1916 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1918 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1924 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x3,		/* 3 */

	/* Parameter nIndex */

/* 1926 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1928 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppResult */

/* 1932 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1934 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1936 */	NdrFcShort( 0xea ),	/* Type Offset=234 */

	/* Return value */

/* 1938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1940 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AccessConfig3 */

/* 1944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1950 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1952 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1954 */	NdrFcShort( 0xe ),	/* 14 */
/* 1956 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1958 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x5,		/* 5 */

	/* Parameter strParentName */

/* 1960 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1964 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter pXmlEle */

/* 1966 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1968 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bRead */

/* 1972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1974 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1976 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pbResult */

/* 1978 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1980 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1982 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1986 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 1990 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1998 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2004 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pResult */

/* 2006 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2008 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2010 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 2012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2014 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetHelp */

/* 2018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2024 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2026 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2032 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter strHelp */

/* 2034 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2036 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2038 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 2040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2042 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetType */

/* 2046 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2052 */	NdrFcShort( 0xb ),	/* 11 */
/* 2054 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2056 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2060 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter eType */

/* 2062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2066 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 2068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetType */

/* 2074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2080 */	NdrFcShort( 0xc ),	/* 12 */
/* 2082 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2086 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2088 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pResult */

/* 2090 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 2092 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2094 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 2096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2098 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetVariant */

/* 2102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2108 */	NdrFcShort( 0xd ),	/* 13 */
/* 2110 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2116 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter vt */

/* 2118 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2120 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2122 */	NdrFcShort( 0x512 ),	/* Type Offset=1298 */

	/* Return value */

/* 2124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2126 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetVariant */

/* 2130 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0xe ),	/* 14 */
/* 2138 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2144 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pResult */

/* 2146 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2148 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2150 */	NdrFcShort( 0x524 ),	/* Type Offset=1316 */

	/* Return value */

/* 2152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2154 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AccessConfig */

/* 2158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2164 */	NdrFcShort( 0xf ),	/* 15 */
/* 2166 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2168 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2170 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2172 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x6,		/* 6 */

	/* Parameter pXmlEle */

/* 2174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strKeyName */

/* 2180 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2184 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter bRead */

/* 2186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2190 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bCompleteUseKey */

/* 2192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2194 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2196 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pbResult */

/* 2198 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2200 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2202 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2206 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPropTypePtr */

/* 2210 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2216 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2218 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2224 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppDUIPropType */

/* 2226 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2228 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2230 */	NdrFcShort( 0x142 ),	/* Type Offset=322 */

	/* Return value */

/* 2232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2234 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_eType */

/* 2238 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2244 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2246 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2250 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2252 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2254 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 2256 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2258 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 2260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2262 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_eType */

/* 2266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2274 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2276 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2280 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 2282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2286 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 2288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_vtValue */

/* 2294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2300 */	NdrFcShort( 0xb ),	/* 11 */
/* 2302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2308 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2310 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2312 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2314 */	NdrFcShort( 0x524 ),	/* Type Offset=1316 */

	/* Return value */

/* 2316 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2318 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_vtValue */

/* 2322 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2328 */	NdrFcShort( 0xc ),	/* 12 */
/* 2330 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2336 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 2338 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2340 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2342 */	NdrFcShort( 0x512 ),	/* Type Offset=1298 */

	/* Return value */

/* 2344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2346 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_strValue */

/* 2350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2356 */	NdrFcShort( 0xd ),	/* 13 */
/* 2358 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2364 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2366 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2370 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 2372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_strValue */

/* 2378 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2384 */	NdrFcShort( 0xe ),	/* 14 */
/* 2386 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2392 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 2394 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2396 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2398 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 2400 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2402 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPropBase */

/* 2406 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2412 */	NdrFcShort( 0xf ),	/* 15 */
/* 2414 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2420 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pResult */

/* 2422 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2424 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2426 */	NdrFcShort( 0xea ),	/* Type Offset=234 */

	/* Return value */

/* 2428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2430 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPropBase */

/* 2434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2440 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2442 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2448 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pPropBase */

/* 2450 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2452 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2454 */	NdrFcShort( 0xee ),	/* Type Offset=238 */

	/* Return value */

/* 2456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2458 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetParentProp */

/* 2462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2468 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2470 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2476 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pResult */

/* 2478 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 2480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2482 */	NdrFcShort( 0x52e ),	/* Type Offset=1326 */

	/* Return value */

/* 2484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2486 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_bAccess */

/* 2490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2496 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2498 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2502 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2504 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2506 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2510 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2514 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_bAccess */

/* 2518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2524 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2526 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2528 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2530 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2532 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 2534 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2538 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2542 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RenderDraw */

/* 2546 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2552 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2554 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2556 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2558 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2560 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x4,		/* 4 */

	/* Parameter pDC */

/* 2562 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2564 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2566 */	NdrFcShort( 0x532 ),	/* Type Offset=1330 */

	/* Parameter rect */

/* 2568 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2570 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2572 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */

	/* Parameter pbResult */

/* 2574 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2576 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2578 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2582 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetImageBase */

/* 2586 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2592 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2594 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2598 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2600 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x3,		/* 3 */

	/* Parameter pImgbase */

/* 2602 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2604 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2606 */	NdrFcShort( 0x548 ),	/* Type Offset=1352 */

	/* Parameter pbResult */

/* 2608 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2610 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2612 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2616 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetImageBase */

/* 2620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2626 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2628 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2634 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pImgbase */

/* 2636 */	NdrFcShort( 0xa113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=40 */
/* 2638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2640 */	NdrFcShort( 0x548 ),	/* Type Offset=1352 */

	/* Return value */

/* 2642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2646 */	0x8,		/* FC_LONG */
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
/* 38 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 40 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 42 */	NdrFcShort( 0x6 ),	/* Offset= 6 (48) */
/* 44 */	
			0x13, 0x0,	/* FC_OP */
/* 46 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (16) */
/* 48 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x4 ),	/* 4 */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (44) */
/* 58 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 60 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 62 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 64 */	NdrFcLong( 0x5ab7feec ),	/* 1522007788 */
/* 68 */	NdrFcShort( 0xba1b ),	/* -17893 */
/* 70 */	NdrFcShort( 0x494c ),	/* 18764 */
/* 72 */	0xa4,		/* 164 */
			0x93,		/* 147 */
/* 74 */	0x4d,		/* 77 */
			0x96,		/* 150 */
/* 76 */	0xf8,		/* 248 */
			0x4a,		/* 74 */
/* 78 */	0xf8,		/* 248 */
			0x4,		/* 4 */
/* 80 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 82 */	NdrFcShort( 0xffec ),	/* Offset= -20 (62) */
/* 84 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 86 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 88 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 90 */	NdrFcShort( 0x2 ),	/* Offset= 2 (92) */
/* 92 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 94 */	NdrFcLong( 0x3309ffe ),	/* 53518334 */
/* 98 */	NdrFcShort( 0x2d3 ),	/* 723 */
/* 100 */	NdrFcShort( 0x4805 ),	/* 18437 */
/* 102 */	0x81,		/* 129 */
			0x28,		/* 40 */
/* 104 */	0x93,		/* 147 */
			0xa1,		/* 161 */
/* 106 */	0x9b,		/* 155 */
			0x70,		/* 112 */
/* 108 */	0xd9,		/* 217 */
			0x16,		/* 22 */
/* 110 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 112 */	NdrFcShort( 0x2 ),	/* Offset= 2 (114) */
/* 114 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 116 */	NdrFcLong( 0xf47017b7 ),	/* -193980489 */
/* 120 */	NdrFcShort( 0x3d4b ),	/* 15691 */
/* 122 */	NdrFcShort( 0x4972 ),	/* 18802 */
/* 124 */	0xa5,		/* 165 */
			0x92,		/* 146 */
/* 126 */	0x6,		/* 6 */
			0x98,		/* 152 */
/* 128 */	0xf8,		/* 248 */
			0x4c,		/* 76 */
/* 130 */	0xcb,		/* 203 */
			0x1a,		/* 26 */
/* 132 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 134 */	NdrFcShort( 0x2 ),	/* Offset= 2 (136) */
/* 136 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 138 */	NdrFcLong( 0x9dfcb11f ),	/* -1644383969 */
/* 142 */	NdrFcShort( 0xe48e ),	/* -7026 */
/* 144 */	NdrFcShort( 0x4c77 ),	/* 19575 */
/* 146 */	0xb5,		/* 181 */
			0x81,		/* 129 */
/* 148 */	0x44,		/* 68 */
			0xc,		/* 12 */
/* 150 */	0x3e,		/* 62 */
			0xe1,		/* 225 */
/* 152 */	0x84,		/* 132 */
			0x18,		/* 24 */
/* 154 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 156 */	NdrFcShort( 0x10 ),	/* 16 */
/* 158 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 160 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 162 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 164 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 166 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (154) */
/* 168 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 170 */	NdrFcLong( 0xc9f3161d ),	/* -906815971 */
/* 174 */	NdrFcShort( 0x6f06 ),	/* 28422 */
/* 176 */	NdrFcShort( 0x4295 ),	/* 17045 */
/* 178 */	0xac,		/* 172 */
			0x1b,		/* 27 */
/* 180 */	0x84,		/* 132 */
			0xd5,		/* 213 */
/* 182 */	0x87,		/* 135 */
			0x22,		/* 34 */
/* 184 */	0x1c,		/* 28 */
			0xe1,		/* 225 */
/* 186 */	
			0x11, 0x0,	/* FC_RP */
/* 188 */	NdrFcShort( 0xffde ),	/* Offset= -34 (154) */
/* 190 */	
			0x11, 0x0,	/* FC_RP */
/* 192 */	NdrFcShort( 0x2 ),	/* Offset= 2 (194) */
/* 194 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 196 */	NdrFcShort( 0x20 ),	/* 32 */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x0 ),	/* Offset= 0 (200) */
/* 202 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 204 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 206 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 208 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 210 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 212 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 214 */	NdrFcLong( 0x2a574773 ),	/* 710362995 */
/* 218 */	NdrFcShort( 0x9f1c ),	/* -24804 */
/* 220 */	NdrFcShort( 0x4f03 ),	/* 20227 */
/* 222 */	0x82,		/* 130 */
			0xfd,		/* 253 */
/* 224 */	0xb7,		/* 183 */
			0x59,		/* 89 */
/* 226 */	0x7,		/* 7 */
			0x62,		/* 98 */
/* 228 */	0x51,		/* 81 */
			0x7d,		/* 125 */
/* 230 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 232 */	NdrFcShort( 0xffec ),	/* Offset= -20 (212) */
/* 234 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 236 */	NdrFcShort( 0x2 ),	/* Offset= 2 (238) */
/* 238 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 240 */	NdrFcLong( 0xc6a1ab1d ),	/* -962483427 */
/* 244 */	NdrFcShort( 0xa87c ),	/* -22404 */
/* 246 */	NdrFcShort( 0x4238 ),	/* 16952 */
/* 248 */	0x99,		/* 153 */
			0xc,		/* 12 */
/* 250 */	0x90,		/* 144 */
			0x3d,		/* 61 */
/* 252 */	0xa0,		/* 160 */
			0xb5,		/* 181 */
/* 254 */	0xee,		/* 238 */
			0x8d,		/* 141 */
/* 256 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 258 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 260 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 262 */	NdrFcLong( 0xf47017b7 ),	/* -193980489 */
/* 266 */	NdrFcShort( 0x3d4b ),	/* 15691 */
/* 268 */	NdrFcShort( 0x4972 ),	/* 18802 */
/* 270 */	0xa5,		/* 165 */
			0x92,		/* 146 */
/* 272 */	0x6,		/* 6 */
			0x98,		/* 152 */
/* 274 */	0xf8,		/* 248 */
			0x4c,		/* 76 */
/* 276 */	0xcb,		/* 203 */
			0x1a,		/* 26 */
/* 278 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 280 */	NdrFcShort( 0xffec ),	/* Offset= -20 (260) */
/* 282 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 284 */	NdrFcShort( 0x2 ),	/* Offset= 2 (286) */
/* 286 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 288 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 298 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 300 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 302 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 304 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 306 */	NdrFcLong( 0xc108259d ),	/* -1056430691 */
/* 310 */	NdrFcShort( 0x728 ),	/* 1832 */
/* 312 */	NdrFcShort( 0x453b ),	/* 17723 */
/* 314 */	0xbb,		/* 187 */
			0xf0,		/* 240 */
/* 316 */	0xb6,		/* 182 */
			0xd6,		/* 214 */
/* 318 */	0x57,		/* 87 */
			0x2c,		/* 44 */
/* 320 */	0x5f,		/* 95 */
			0xd2,		/* 210 */
/* 322 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 324 */	NdrFcShort( 0xffec ),	/* Offset= -20 (304) */
/* 326 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 328 */	NdrFcShort( 0x2 ),	/* Offset= 2 (330) */
/* 330 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 332 */	NdrFcLong( 0x5ab7feec ),	/* 1522007788 */
/* 336 */	NdrFcShort( 0xba1b ),	/* -17893 */
/* 338 */	NdrFcShort( 0x494c ),	/* 18764 */
/* 340 */	0xa4,		/* 164 */
			0x93,		/* 147 */
/* 342 */	0x4d,		/* 77 */
			0x96,		/* 150 */
/* 344 */	0xf8,		/* 248 */
			0x4a,		/* 74 */
/* 346 */	0xf8,		/* 248 */
			0x4,		/* 4 */
/* 348 */	
			0x12, 0x0,	/* FC_UP */
/* 350 */	NdrFcShort( 0x3a0 ),	/* Offset= 928 (1278) */
/* 352 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 354 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 356 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 358 */	NdrFcShort( 0x2 ),	/* Offset= 2 (360) */
/* 360 */	NdrFcShort( 0x10 ),	/* 16 */
/* 362 */	NdrFcShort( 0x2f ),	/* 47 */
/* 364 */	NdrFcLong( 0x14 ),	/* 20 */
/* 368 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 370 */	NdrFcLong( 0x3 ),	/* 3 */
/* 374 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 376 */	NdrFcLong( 0x11 ),	/* 17 */
/* 380 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 382 */	NdrFcLong( 0x2 ),	/* 2 */
/* 386 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 388 */	NdrFcLong( 0x4 ),	/* 4 */
/* 392 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 394 */	NdrFcLong( 0x5 ),	/* 5 */
/* 398 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 400 */	NdrFcLong( 0xb ),	/* 11 */
/* 404 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 406 */	NdrFcLong( 0xa ),	/* 10 */
/* 410 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 412 */	NdrFcLong( 0x6 ),	/* 6 */
/* 416 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (648) */
/* 418 */	NdrFcLong( 0x7 ),	/* 7 */
/* 422 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 424 */	NdrFcLong( 0x8 ),	/* 8 */
/* 428 */	NdrFcShort( 0xfe56 ),	/* Offset= -426 (2) */
/* 430 */	NdrFcLong( 0xd ),	/* 13 */
/* 434 */	NdrFcShort( 0xdc ),	/* Offset= 220 (654) */
/* 436 */	NdrFcLong( 0x9 ),	/* 9 */
/* 440 */	NdrFcShort( 0xff66 ),	/* Offset= -154 (286) */
/* 442 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 446 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (672) */
/* 448 */	NdrFcLong( 0x24 ),	/* 36 */
/* 452 */	NdrFcShort( 0x2f0 ),	/* Offset= 752 (1204) */
/* 454 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 458 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (1204) */
/* 460 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 464 */	NdrFcShort( 0x2e8 ),	/* Offset= 744 (1208) */
/* 466 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 470 */	NdrFcShort( 0x2e6 ),	/* Offset= 742 (1212) */
/* 472 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 476 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (1216) */
/* 478 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 482 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (1220) */
/* 484 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 488 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (1224) */
/* 490 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 494 */	NdrFcShort( 0x2de ),	/* Offset= 734 (1228) */
/* 496 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 500 */	NdrFcShort( 0x2c8 ),	/* Offset= 712 (1212) */
/* 502 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 506 */	NdrFcShort( 0x2c6 ),	/* Offset= 710 (1216) */
/* 508 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 512 */	NdrFcShort( 0x2d0 ),	/* Offset= 720 (1232) */
/* 514 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 518 */	NdrFcShort( 0x2c6 ),	/* Offset= 710 (1228) */
/* 520 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 524 */	NdrFcShort( 0x2c8 ),	/* Offset= 712 (1236) */
/* 526 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 530 */	NdrFcShort( 0x2c6 ),	/* Offset= 710 (1240) */
/* 532 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 536 */	NdrFcShort( 0x2c4 ),	/* Offset= 708 (1244) */
/* 538 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 542 */	NdrFcShort( 0x2c2 ),	/* Offset= 706 (1248) */
/* 544 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 548 */	NdrFcShort( 0x2c0 ),	/* Offset= 704 (1252) */
/* 550 */	NdrFcLong( 0x10 ),	/* 16 */
/* 554 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 556 */	NdrFcLong( 0x12 ),	/* 18 */
/* 560 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 562 */	NdrFcLong( 0x13 ),	/* 19 */
/* 566 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 568 */	NdrFcLong( 0x15 ),	/* 21 */
/* 572 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 574 */	NdrFcLong( 0x16 ),	/* 22 */
/* 578 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 580 */	NdrFcLong( 0x17 ),	/* 23 */
/* 584 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 586 */	NdrFcLong( 0xe ),	/* 14 */
/* 590 */	NdrFcShort( 0x29e ),	/* Offset= 670 (1260) */
/* 592 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 596 */	NdrFcShort( 0x2a2 ),	/* Offset= 674 (1270) */
/* 598 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 602 */	NdrFcShort( 0x2a0 ),	/* Offset= 672 (1274) */
/* 604 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 608 */	NdrFcShort( 0x25c ),	/* Offset= 604 (1212) */
/* 610 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 614 */	NdrFcShort( 0x25a ),	/* Offset= 602 (1216) */
/* 616 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 620 */	NdrFcShort( 0x258 ),	/* Offset= 600 (1220) */
/* 622 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 626 */	NdrFcShort( 0x24e ),	/* Offset= 590 (1216) */
/* 628 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 632 */	NdrFcShort( 0x248 ),	/* Offset= 584 (1216) */
/* 634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 638 */	NdrFcShort( 0x0 ),	/* Offset= 0 (638) */
/* 640 */	NdrFcLong( 0x1 ),	/* 1 */
/* 644 */	NdrFcShort( 0x0 ),	/* Offset= 0 (644) */
/* 646 */	NdrFcShort( 0xffff ),	/* Offset= -1 (645) */
/* 648 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 652 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 654 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 666 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 668 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 670 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 672 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 674 */	NdrFcShort( 0x2 ),	/* Offset= 2 (676) */
/* 676 */	
			0x12, 0x0,	/* FC_UP */
/* 678 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (1186) */
/* 680 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 682 */	NdrFcShort( 0x18 ),	/* 24 */
/* 684 */	NdrFcShort( 0xa ),	/* 10 */
/* 686 */	NdrFcLong( 0x8 ),	/* 8 */
/* 690 */	NdrFcShort( 0x58 ),	/* Offset= 88 (778) */
/* 692 */	NdrFcLong( 0xd ),	/* 13 */
/* 696 */	NdrFcShort( 0x78 ),	/* Offset= 120 (816) */
/* 698 */	NdrFcLong( 0x9 ),	/* 9 */
/* 702 */	NdrFcShort( 0x94 ),	/* Offset= 148 (850) */
/* 704 */	NdrFcLong( 0xc ),	/* 12 */
/* 708 */	NdrFcShort( 0xbc ),	/* Offset= 188 (896) */
/* 710 */	NdrFcLong( 0x24 ),	/* 36 */
/* 714 */	NdrFcShort( 0x114 ),	/* Offset= 276 (990) */
/* 716 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 720 */	NdrFcShort( 0x130 ),	/* Offset= 304 (1024) */
/* 722 */	NdrFcLong( 0x10 ),	/* 16 */
/* 726 */	NdrFcShort( 0x148 ),	/* Offset= 328 (1054) */
/* 728 */	NdrFcLong( 0x2 ),	/* 2 */
/* 732 */	NdrFcShort( 0x160 ),	/* Offset= 352 (1084) */
/* 734 */	NdrFcLong( 0x3 ),	/* 3 */
/* 738 */	NdrFcShort( 0x178 ),	/* Offset= 376 (1114) */
/* 740 */	NdrFcLong( 0x14 ),	/* 20 */
/* 744 */	NdrFcShort( 0x190 ),	/* Offset= 400 (1144) */
/* 746 */	NdrFcShort( 0xffff ),	/* Offset= -1 (745) */
/* 748 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 750 */	NdrFcShort( 0x4 ),	/* 4 */
/* 752 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 758 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 760 */	NdrFcShort( 0x4 ),	/* 4 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x1 ),	/* 1 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	0x12, 0x0,	/* FC_UP */
/* 772 */	NdrFcShort( 0xfd0c ),	/* Offset= -756 (16) */
/* 774 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 776 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 778 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 782 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 784 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 786 */	NdrFcShort( 0x4 ),	/* 4 */
/* 788 */	NdrFcShort( 0x4 ),	/* 4 */
/* 790 */	0x11, 0x0,	/* FC_RP */
/* 792 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (748) */
/* 794 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 796 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 798 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 810 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 812 */	NdrFcShort( 0xff62 ),	/* Offset= -158 (654) */
/* 814 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 816 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x6 ),	/* Offset= 6 (828) */
/* 824 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 826 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 828 */	
			0x11, 0x0,	/* FC_RP */
/* 830 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (798) */
/* 832 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 844 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 846 */	NdrFcShort( 0xfdd0 ),	/* Offset= -560 (286) */
/* 848 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 850 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x6 ),	/* Offset= 6 (862) */
/* 858 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 860 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 862 */	
			0x11, 0x0,	/* FC_RP */
/* 864 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (832) */
/* 866 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 868 */	NdrFcShort( 0x4 ),	/* 4 */
/* 870 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 876 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 878 */	NdrFcShort( 0x4 ),	/* 4 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x1 ),	/* 1 */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 888 */	0x12, 0x0,	/* FC_UP */
/* 890 */	NdrFcShort( 0x184 ),	/* Offset= 388 (1278) */
/* 892 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 894 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 896 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 902 */	NdrFcShort( 0x6 ),	/* Offset= 6 (908) */
/* 904 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 906 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 908 */	
			0x11, 0x0,	/* FC_RP */
/* 910 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (866) */
/* 912 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 914 */	NdrFcLong( 0x2f ),	/* 47 */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 924 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 926 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 928 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 930 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 932 */	NdrFcShort( 0x1 ),	/* 1 */
/* 934 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 936 */	NdrFcShort( 0x4 ),	/* 4 */
/* 938 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 940 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 942 */	NdrFcShort( 0x10 ),	/* 16 */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 946 */	NdrFcShort( 0xa ),	/* Offset= 10 (956) */
/* 948 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 950 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 952 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (912) */
/* 954 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 956 */	
			0x12, 0x0,	/* FC_UP */
/* 958 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (930) */
/* 960 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 962 */	NdrFcShort( 0x4 ),	/* 4 */
/* 964 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 970 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 972 */	NdrFcShort( 0x4 ),	/* 4 */
/* 974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 976 */	NdrFcShort( 0x1 ),	/* 1 */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	0x12, 0x0,	/* FC_UP */
/* 984 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (940) */
/* 986 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 988 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 990 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 992 */	NdrFcShort( 0x8 ),	/* 8 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1002) */
/* 998 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1000 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1002 */	
			0x11, 0x0,	/* FC_RP */
/* 1004 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (960) */
/* 1006 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1010 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1012 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1014 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1016 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1018 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1020 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (1006) */
			0x5b,		/* FC_END */
/* 1024 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1026 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0xa ),	/* Offset= 10 (1040) */
/* 1032 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1034 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1036 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (1012) */
/* 1038 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1040 */	
			0x11, 0x0,	/* FC_RP */
/* 1042 */	NdrFcShort( 0xff0c ),	/* Offset= -244 (798) */
/* 1044 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1048 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1054 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1056 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1058 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1060 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1062 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1064 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1066 */	0x12, 0x0,	/* FC_UP */
/* 1068 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (1044) */
/* 1070 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1072 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1074 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1076 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1078 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1082 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1084 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1090 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1092 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1094 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1096 */	0x12, 0x0,	/* FC_UP */
/* 1098 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (1074) */
/* 1100 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1102 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1104 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1106 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1108 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1114 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1118 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1120 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1122 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1124 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1126 */	0x12, 0x0,	/* FC_UP */
/* 1128 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (1104) */
/* 1130 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1132 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1134 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1138 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1142 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1144 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1148 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1150 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1152 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1154 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1156 */	0x12, 0x0,	/* FC_UP */
/* 1158 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (1134) */
/* 1160 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1162 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1164 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1168 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1170 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1172 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1176 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1178 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1180 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1182 */	NdrFcShort( 0xffee ),	/* Offset= -18 (1164) */
/* 1184 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1186 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1188 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1190 */	NdrFcShort( 0xffee ),	/* Offset= -18 (1172) */
/* 1192 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1192) */
/* 1194 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1196 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1198 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1200 */	NdrFcShort( 0xfdf8 ),	/* Offset= -520 (680) */
/* 1202 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1204 */	
			0x12, 0x0,	/* FC_UP */
/* 1206 */	NdrFcShort( 0xfef6 ),	/* Offset= -266 (940) */
/* 1208 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1210 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1212 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1214 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1216 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1218 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1220 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1222 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1224 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1226 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1228 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1230 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1232 */	
			0x12, 0x0,	/* FC_UP */
/* 1234 */	NdrFcShort( 0xfdb6 ),	/* Offset= -586 (648) */
/* 1236 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1238 */	NdrFcShort( 0xfb2c ),	/* Offset= -1236 (2) */
/* 1240 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1242 */	NdrFcShort( 0xfdb4 ),	/* Offset= -588 (654) */
/* 1244 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1246 */	NdrFcShort( 0xfc40 ),	/* Offset= -960 (286) */
/* 1248 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1250 */	NdrFcShort( 0xfdbe ),	/* Offset= -578 (672) */
/* 1252 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1254 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1256) */
/* 1256 */	
			0x12, 0x0,	/* FC_UP */
/* 1258 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1278) */
/* 1260 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1262 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1264 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1266 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1268 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1270 */	
			0x12, 0x0,	/* FC_UP */
/* 1272 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1260) */
/* 1274 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1276 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1278 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1280 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1284) */
/* 1286 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1288 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1290 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1292 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1294 */	NdrFcShort( 0xfc52 ),	/* Offset= -942 (352) */
/* 1296 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1298 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1302 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1306 */	NdrFcShort( 0xfc42 ),	/* Offset= -958 (348) */
/* 1308 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1310 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1316) */
/* 1312 */	
			0x13, 0x0,	/* FC_OP */
/* 1314 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1278) */
/* 1316 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1318 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1320 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1312) */
/* 1326 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1328 */	NdrFcShort( 0xfba4 ),	/* Offset= -1116 (212) */
/* 1330 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1332 */	NdrFcLong( 0xc9f3161d ),	/* -906815971 */
/* 1336 */	NdrFcShort( 0x6f06 ),	/* 28422 */
/* 1338 */	NdrFcShort( 0x4295 ),	/* 17045 */
/* 1340 */	0xac,		/* 172 */
			0x1b,		/* 27 */
/* 1342 */	0x84,		/* 132 */
			0xd5,		/* 213 */
/* 1344 */	0x87,		/* 135 */
			0x22,		/* 34 */
/* 1346 */	0x1c,		/* 28 */
			0xe1,		/* 225 */
/* 1348 */	
			0x11, 0x0,	/* FC_RP */
/* 1350 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1352) */
/* 1352 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1354 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1358 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1358) */
/* 1360 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1362 */	NdrFcShort( 0xfac8 ),	/* Offset= -1336 (26) */
/* 1364 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1366 */	NdrFcShort( 0xfb44 ),	/* Offset= -1212 (154) */
/* 1368 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1370 */	NdrFcShort( 0xfb40 ),	/* Offset= -1216 (154) */
/* 1372 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 1374 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1376 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1378 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1352) */

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
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Standard interface: __MIDL_itf_DirectUICom_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDUIObj, ver. 0.0,
   GUID={0xB86ED3F4,0xD992,0x4BE0,{0x8B,0xCC,0xEC,0x98,0xF7,0x07,0xD5,0xB8}} */

#pragma code_seg(".orpc")
static const unsigned short IDUIObj_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    28,
    56,
    84,
    112,
    140,
    168
    };

static const MIDL_STUBLESS_PROXY_INFO IDUIObj_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDUIObj_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IDUIObj_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDUIObj_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IDUIObjProxyVtbl = 
{
    &IDUIObj_ProxyInfo,
    &IID_IDUIObj,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::SetName */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::SetObjPtr */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::GetObjPtr */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::GetName */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::GetType */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::SetDUIRes */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::GetDUIRes */
};


static const PRPC_STUB_FUNCTION IDUIObj_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDUIObjStubVtbl =
{
    &IID_IDUIObj,
    &IDUIObj_ServerInfo,
    14,
    &IDUIObj_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IDUIRes, ver. 0.0,
   GUID={0x5AB7FEEC,0xBA1B,0x494C,{0xA4,0x93,0x4D,0x96,0xF8,0x4A,0xF8,0x04}} */

#pragma code_seg(".orpc")
static const unsigned short IDUIRes_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    196,
    224,
    252,
    280,
    314,
    354
    };

static const MIDL_STUBLESS_PROXY_INFO IDUIRes_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDUIRes_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IDUIRes_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDUIRes_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IDUIResProxyVtbl = 
{
    &IDUIRes_ProxyInfo,
    &IID_IDUIRes,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDUIRes::GetDUIResObjPtr */ ,
    (void *) (INT_PTR) -1 /* IDUIRes::OpenSkin */ ,
    (void *) (INT_PTR) -1 /* IDUIRes::CloseSkin */ ,
    (void *) (INT_PTR) -1 /* IDUIRes::CreateDirectUI */ ,
    (void *) (INT_PTR) -1 /* IDUIRes::CreateControl */ ,
    (void *) (INT_PTR) -1 /* IDUIRes::LoadImage */
};


static const PRPC_STUB_FUNCTION IDUIRes_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDUIResStubVtbl =
{
    &IID_IDUIRes,
    &IDUIRes_ServerInfo,
    13,
    &IDUIRes_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ISkinObjResBase, ver. 0.0,
   GUID={0x14B2ECE4,0x0F5D,0x4908,{0xB9,0x3E,0x31,0x17,0x1E,0x55,0x62,0x3A}} */

#pragma code_seg(".orpc")
static const unsigned short ISkinObjResBase_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    28,
    56,
    84,
    112,
    140,
    168,
    388,
    416
    };

static const MIDL_STUBLESS_PROXY_INFO ISkinObjResBase_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISkinObjResBase_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISkinObjResBase_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISkinObjResBase_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) _ISkinObjResBaseProxyVtbl = 
{
    &ISkinObjResBase_ProxyInfo,
    &IID_ISkinObjResBase,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::SetName */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::SetObjPtr */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::GetObjPtr */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::GetName */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::GetType */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::SetDUIRes */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::GetDUIRes */ ,
    (void *) (INT_PTR) -1 /* ISkinObjResBase::SetRect */ ,
    (void *) (INT_PTR) -1 /* ISkinObjResBase::GetRect */
};


static const PRPC_STUB_FUNCTION ISkinObjResBase_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ISkinObjResBaseStubVtbl =
{
    &IID_ISkinObjResBase,
    &ISkinObjResBase_ServerInfo,
    16,
    &ISkinObjResBase_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IDirectUI, ver. 0.0,
   GUID={0x03309FFE,0x02D3,0x4805,{0x81,0x28,0x93,0xA1,0x9B,0x70,0xD9,0x16}} */

#pragma code_seg(".orpc")
static const unsigned short IDirectUI_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    28,
    56,
    84,
    112,
    140,
    168,
    388,
    416,
    444,
    484
    };

static const MIDL_STUBLESS_PROXY_INFO IDirectUI_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDirectUI_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IDirectUI_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDirectUI_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _IDirectUIProxyVtbl = 
{
    &IDirectUI_ProxyInfo,
    &IID_IDirectUI,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::SetName */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::SetObjPtr */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::GetObjPtr */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::GetName */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::GetType */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::SetDUIRes */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::GetDUIRes */ ,
    (void *) (INT_PTR) -1 /* ISkinObjResBase::SetRect */ ,
    (void *) (INT_PTR) -1 /* ISkinObjResBase::GetRect */ ,
    (void *) (INT_PTR) -1 /* IDirectUI::Create */ ,
    (void *) (INT_PTR) -1 /* IDirectUI::GetHwnd */
};


static const PRPC_STUB_FUNCTION IDirectUI_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDirectUIStubVtbl =
{
    &IID_IDirectUI,
    &IDirectUI_ServerInfo,
    18,
    &IDirectUI_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IDUIControlBase, ver. 0.0,
   GUID={0xF47017B7,0x3D4B,0x4972,{0xA5,0x92,0x06,0x98,0xF8,0x4C,0xCB,0x1A}} */

#pragma code_seg(".orpc")
static const unsigned short IDUIControlBase_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    28,
    56,
    84,
    112,
    140,
    168,
    388,
    416,
    512,
    540,
    580,
    614,
    642,
    688,
    728,
    756,
    784,
    812,
    840,
    886,
    944,
    972,
    1000,
    1028,
    1056,
    1084
    };

static const MIDL_STUBLESS_PROXY_INFO IDUIControlBase_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDUIControlBase_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IDUIControlBase_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDUIControlBase_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(34) _IDUIControlBaseProxyVtbl = 
{
    &IDUIControlBase_ProxyInfo,
    &IID_IDUIControlBase,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::SetName */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::SetObjPtr */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::GetObjPtr */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::GetName */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::GetType */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::SetDUIRes */ ,
    (void *) (INT_PTR) -1 /* IDUIObj::GetDUIRes */ ,
    (void *) (INT_PTR) -1 /* ISkinObjResBase::SetRect */ ,
    (void *) (INT_PTR) -1 /* ISkinObjResBase::GetRect */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::CreateProps */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::RenderDrawObject */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::EventNotify */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::GetControlTypeName */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::GetAuthorInfo */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::GetControlIcon */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::GetDragCursor */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::SetClassId */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::GetClassId */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::GetCategoryName */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::CreateGroupProp */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::CreateProp */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::AddProp */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::GetPropList */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::SetRealCtrlPtr */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::GetRealCtrlPtr */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::FinalCreate */ ,
    (void *) (INT_PTR) -1 /* IDUIControlBase::GetInterface */
};


static const PRPC_STUB_FUNCTION IDUIControlBase_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDUIControlBaseStubVtbl =
{
    &IID_IDUIControlBase,
    &IDUIControlBase_ServerInfo,
    34,
    &IDUIControlBase_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IDUIRenderDC, ver. 0.0,
   GUID={0xC9F3161D,0x6F06,0x4295,{0xAC,0x1B,0x84,0xD5,0x87,0x22,0x1C,0xE1}} */

#pragma code_seg(".orpc")
static const unsigned short IDUIRenderDC_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1118,
    1146
    };

static const MIDL_STUBLESS_PROXY_INFO IDUIRenderDC_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDUIRenderDC_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IDUIRenderDC_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDUIRenderDC_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IDUIRenderDCProxyVtbl = 
{
    &IDUIRenderDC_ProxyInfo,
    &IID_IDUIRenderDC,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDUIRenderDC::SetRenderDCPtr */ ,
    (void *) (INT_PTR) -1 /* IDUIRenderDC::GetRenderDCPtr */
};


static const PRPC_STUB_FUNCTION IDUIRenderDC_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDUIRenderDCStubVtbl =
{
    &IID_IDUIRenderDC,
    &IDUIRenderDC_ServerInfo,
    9,
    &IDUIRenderDC_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ICtrlPluginProp, ver. 0.0,
   GUID={0x2A574773,0x9F1C,0x4F03,{0x82,0xFD,0xB7,0x59,0x07,0x62,0x51,0x7D}} */

#pragma code_seg(".orpc")
static const unsigned short ICtrlPluginProp_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1174,
    1202,
    1230,
    1258,
    1286,
    1314,
    1342,
    1370,
    1398,
    1438,
    1466,
    1494,
    1522,
    1550,
    1578,
    728,
    1612,
    1646,
    1674,
    1702,
    1730,
    1758,
    1804,
    1832,
    1860,
    1882,
    1910,
    1944
    };

static const MIDL_STUBLESS_PROXY_INFO ICtrlPluginProp_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ICtrlPluginProp_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ICtrlPluginProp_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ICtrlPluginProp_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(35) _ICtrlPluginPropProxyVtbl = 
{
    &ICtrlPluginProp_ProxyInfo,
    &IID_ICtrlPluginProp,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::get_bGroup */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::put_bGroup */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::get_strName */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::put_strName */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::AddSkinProp */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::RemoveSkinProp */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::AddProp */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::RemoveProp */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::AccessConfig */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::Expand */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::IsExpand */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::SetParent */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::GetParent */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::GetSkinPropTypeCount */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::GetSkinPropTypeFromIndex */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::GetAddinPropCount */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::GetAddinPropByIndex */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::GetDUIRes */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::SetDUIRes */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::GetControlBasePtr */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::SetControlBasePtr */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::AccessConfig2 */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::AddPropBase */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::RemovePropBase */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::RemoveAllPropBase */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::GetPropBaseCount */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::GetAtPropBase */ ,
    (void *) (INT_PTR) -1 /* ICtrlPluginProp::AccessConfig3 */
};


static const PRPC_STUB_FUNCTION ICtrlPluginProp_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ICtrlPluginPropStubVtbl =
{
    &IID_ICtrlPluginProp,
    &ICtrlPluginProp_ServerInfo,
    35,
    &ICtrlPluginProp_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IDUIPropBase, ver. 0.0,
   GUID={0xC6A1AB1D,0xA87C,0x4238,{0x99,0x0C,0x90,0x3D,0xA0,0xB5,0xEE,0x8D}} */

#pragma code_seg(".orpc")
static const unsigned short IDUIPropBase_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    1990,
    2018,
    84,
    2046,
    2074,
    2102,
    2130,
    2158,
    2210
    };

static const MIDL_STUBLESS_PROXY_INFO IDUIPropBase_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDUIPropBase_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IDUIPropBase_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDUIPropBase_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(17) _IDUIPropBaseProxyVtbl = 
{
    &IDUIPropBase_ProxyInfo,
    &IID_IDUIPropBase,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::SetName */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::GetName */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::SetHelp */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::GetHelp */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::SetType */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::GetType */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::SetVariant */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::GetVariant */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::AccessConfig */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::GetPropTypePtr */
};


static const PRPC_STUB_FUNCTION IDUIPropBase_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDUIPropBaseStubVtbl =
{
    &IID_IDUIPropBase,
    &IDUIPropBase_ServerInfo,
    17,
    &IDUIPropBase_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IDUIRenderImage, ver. 0.0,
   GUID={0x9DFCB11F,0xE48E,0x4C77,{0xB5,0x81,0x44,0x0C,0x3E,0xE1,0x84,0x18}} */

#pragma code_seg(".orpc")
static const unsigned short IDUIRenderImage_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IDUIRenderImage_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDUIRenderImage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IDUIRenderImage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDUIRenderImage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IDUIRenderImageProxyVtbl = 
{
    0,
    &IID_IDUIRenderImage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IDUIRenderImage_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IDUIRenderImageStubVtbl =
{
    &IID_IDUIRenderImage,
    &IDUIRenderImage_ServerInfo,
    7,
    &IDUIRenderImage_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IDUIPropType, ver. 0.0,
   GUID={0xC108259D,0x0728,0x453B,{0xBB,0xF0,0xB6,0xD6,0x57,0x2C,0x5F,0xD2}} */

#pragma code_seg(".orpc")
static const unsigned short IDUIPropType_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2238,
    2266,
    1230,
    1258,
    2294,
    2322,
    2350,
    2378,
    2406,
    2434,
    2462,
    1494,
    2490,
    2518
    };

static const MIDL_STUBLESS_PROXY_INFO IDUIPropType_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDUIPropType_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IDUIPropType_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDUIPropType_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(21) _IDUIPropTypeProxyVtbl = 
{
    &IDUIPropType_ProxyInfo,
    &IID_IDUIPropType,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDUIPropType::get_eType */ ,
    (void *) (INT_PTR) -1 /* IDUIPropType::put_eType */ ,
    (void *) (INT_PTR) -1 /* IDUIPropType::get_strName */ ,
    (void *) (INT_PTR) -1 /* IDUIPropType::put_strName */ ,
    (void *) (INT_PTR) -1 /* IDUIPropType::get_vtValue */ ,
    (void *) (INT_PTR) -1 /* IDUIPropType::put_vtValue */ ,
    (void *) (INT_PTR) -1 /* IDUIPropType::get_strValue */ ,
    (void *) (INT_PTR) -1 /* IDUIPropType::put_strValue */ ,
    (void *) (INT_PTR) -1 /* IDUIPropType::GetPropBase */ ,
    (void *) (INT_PTR) -1 /* IDUIPropType::SetPropBase */ ,
    (void *) (INT_PTR) -1 /* IDUIPropType::GetParentProp */ ,
    (void *) (INT_PTR) -1 /* IDUIPropType::SetParentProp */ ,
    (void *) (INT_PTR) -1 /* IDUIPropType::get_bAccess */ ,
    (void *) (INT_PTR) -1 /* IDUIPropType::put_bAccess */
};


static const PRPC_STUB_FUNCTION IDUIPropType_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDUIPropTypeStubVtbl =
{
    &IID_IDUIPropType,
    &IDUIPropType_ServerInfo,
    21,
    &IDUIPropType_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IImageSecProp, ver. 0.0,
   GUID={0xB34B96BC,0xB2A6,0x4201,{0xA4,0xA4,0x42,0xE5,0xF6,0x97,0x9D,0x05}} */

#pragma code_seg(".orpc")
static const unsigned short IImageSecProp_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    1990,
    2018,
    84,
    2046,
    2074,
    2102,
    2130,
    2158,
    2210,
    2546,
    2586,
    2620
    };

static const MIDL_STUBLESS_PROXY_INFO IImageSecProp_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IImageSecProp_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IImageSecProp_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IImageSecProp_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(20) _IImageSecPropProxyVtbl = 
{
    &IImageSecProp_ProxyInfo,
    &IID_IImageSecProp,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::SetName */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::GetName */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::SetHelp */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::GetHelp */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::SetType */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::GetType */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::SetVariant */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::GetVariant */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::AccessConfig */ ,
    (void *) (INT_PTR) -1 /* IDUIPropBase::GetPropTypePtr */ ,
    (void *) (INT_PTR) -1 /* IImageSecProp::RenderDraw */ ,
    (void *) (INT_PTR) -1 /* IImageSecProp::SetImageBase */ ,
    (void *) (INT_PTR) -1 /* IImageSecProp::GetImageBase */
};


static const PRPC_STUB_FUNCTION IImageSecProp_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IImageSecPropStubVtbl =
{
    &IID_IImageSecProp,
    &IImageSecProp_ServerInfo,
    20,
    &IImageSecProp_table[-3],
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

const CInterfaceProxyVtbl * _DirectUICom_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IDUIRenderDCProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDUIPropBaseProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDUIRenderImageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ICtrlPluginPropProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDUIPropTypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDUIControlBaseProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IImageSecPropProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISkinObjResBaseProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDUIResProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDUIObjProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDirectUIProxyVtbl,
    0
};

const CInterfaceStubVtbl * _DirectUICom_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IDUIRenderDCStubVtbl,
    ( CInterfaceStubVtbl *) &_IDUIPropBaseStubVtbl,
    ( CInterfaceStubVtbl *) &_IDUIRenderImageStubVtbl,
    ( CInterfaceStubVtbl *) &_ICtrlPluginPropStubVtbl,
    ( CInterfaceStubVtbl *) &_IDUIPropTypeStubVtbl,
    ( CInterfaceStubVtbl *) &_IDUIControlBaseStubVtbl,
    ( CInterfaceStubVtbl *) &_IImageSecPropStubVtbl,
    ( CInterfaceStubVtbl *) &_ISkinObjResBaseStubVtbl,
    ( CInterfaceStubVtbl *) &_IDUIResStubVtbl,
    ( CInterfaceStubVtbl *) &_IDUIObjStubVtbl,
    ( CInterfaceStubVtbl *) &_IDirectUIStubVtbl,
    0
};

PCInterfaceName const _DirectUICom_InterfaceNamesList[] = 
{
    "IDUIRenderDC",
    "IDUIPropBase",
    "IDUIRenderImage",
    "ICtrlPluginProp",
    "IDUIPropType",
    "IDUIControlBase",
    "IImageSecProp",
    "ISkinObjResBase",
    "IDUIRes",
    "IDUIObj",
    "IDirectUI",
    0
};

const IID *  _DirectUICom_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _DirectUICom_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _DirectUICom, pIID, n)

int __stdcall _DirectUICom_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _DirectUICom, 11, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _DirectUICom, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _DirectUICom, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _DirectUICom, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _DirectUICom, 11, *pIndex )
    
}

const ExtendedProxyFileInfo DirectUICom_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _DirectUICom_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _DirectUICom_StubVtblList,
    (const PCInterfaceName * ) & _DirectUICom_InterfaceNamesList,
    (const IID ** ) & _DirectUICom_BaseIIDList,
    & _DirectUICom_IID_Lookup, 
    11,
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

