

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ICommandButton,0x0EA328C4,0xC227,0x4010,0xAD,0xF7,0xB2,0xAF,0x77,0x1A,0x0F,0x83);


MIDL_DEFINE_GUID(IID, LIBID_DUIButtonLib,0x232589C6,0xADC9,0x4B95,0x8D,0x3F,0xCB,0xBF,0xCA,0xEC,0x59,0x99);


MIDL_DEFINE_GUID(IID, DIID__ICommandButtonEvents,0x0B4DD27C,0x0F9E,0x4409,0x81,0xF0,0x34,0x8A,0x25,0x60,0xDA,0xA9);


MIDL_DEFINE_GUID(CLSID, CLSID_CommandButton,0x579147B8,0x9D94,0x481A,0xB2,0x00,0xC1,0xCB,0xD0,0x3F,0xA0,0x1C);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



