

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for TGdi.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



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
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IWinGdi,0xBF3DE9B1,0x07D6,0x40D5,0xAF,0x6C,0xFA,0x3A,0xA0,0xD9,0xD8,0xFB);


MIDL_DEFINE_GUID(IID, IID_IWinGdip,0xB78B3955,0xF0C3,0x47d3,0xA2,0xE3,0x38,0x81,0xA2,0xDF,0x7A,0xF1);


MIDL_DEFINE_GUID(IID, LIBID_TGdi,0x6063AA6A,0x7531,0x4193,0xA1,0x64,0xDF,0xCF,0x60,0xD9,0xA0,0x21);


MIDL_DEFINE_GUID(CLSID, CLSID_WinGdi,0xF968F3E8,0x4AB0,0x451D,0xB1,0x76,0x69,0x99,0xE7,0x05,0xA3,0xFD);


MIDL_DEFINE_GUID(CLSID, CLSID_WinGdip,0xFBE5E37F,0xC78C,0x4383,0x87,0x88,0xE6,0xD4,0xDE,0xB1,0xE6,0xE2);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



