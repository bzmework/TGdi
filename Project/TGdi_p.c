

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "TGdi.h"

#define TYPE_FORMAT_STRING_SIZE   1223                              
#define PROC_FORMAT_STRING_SIZE   4531                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _TGdi_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } TGdi_MIDL_TYPE_FORMAT_STRING;

typedef struct _TGdi_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } TGdi_MIDL_PROC_FORMAT_STRING;

typedef struct _TGdi_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } TGdi_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const TGdi_MIDL_TYPE_FORMAT_STRING TGdi__MIDL_TypeFormatString;
extern const TGdi_MIDL_PROC_FORMAT_STRING TGdi__MIDL_ProcFormatString;
extern const TGdi_MIDL_EXPR_FORMAT_STRING TGdi__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWinGdi_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWinGdi_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWinGdip_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWinGdip_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const TGdi_MIDL_PROC_FORMAT_STRING TGdi__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure AboutMe */


	/* Procedure AboutMe */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 16 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 24 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HasStarted */


	/* Procedure IsWinNT */

/* 30 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 32 */	NdrFcLong( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x8 ),	/* 8 */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x22 ),	/* 34 */
/* 44 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 46 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */


	/* Parameter retVal */

/* 54 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 56 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 58 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 60 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 62 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SelectObject */

/* 66 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 68 */	NdrFcLong( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x9 ),	/* 9 */
/* 74 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 76 */	NdrFcShort( 0x10 ),	/* 16 */
/* 78 */	NdrFcShort( 0x24 ),	/* 36 */
/* 80 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 82 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 90 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 92 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hObject */

/* 96 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 98 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 102 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteObject */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0xa ),	/* 10 */
/* 122 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 126 */	NdrFcShort( 0x22 ),	/* 34 */
/* 128 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 130 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hObject */

/* 138 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 144 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 148 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBrush */

/* 156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0xb ),	/* 11 */
/* 164 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 166 */	NdrFcShort( 0x28 ),	/* 40 */
/* 168 */	NdrFcShort( 0x24 ),	/* 36 */
/* 170 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 172 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enmBrushType */

/* 180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 182 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 184 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter enmBrushStyle */

/* 186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 188 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 190 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter enmBrushHatch */

/* 192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 194 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 196 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter clrColor */

/* 198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 200 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hBitmap */

/* 204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 206 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 210 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 212 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 218 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateFont */

/* 222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0xc ),	/* 12 */
/* 230 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 232 */	NdrFcShort( 0x3e ),	/* 62 */
/* 234 */	NdrFcShort( 0x24 ),	/* 36 */
/* 236 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xc,		/* 12 */
/* 238 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 246 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eFontType */

/* 252 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 256 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter strFontName */

/* 258 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 262 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter nFontSize */

/* 264 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 266 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nFontRotationDegrees */

/* 270 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 272 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bFontBold */

/* 276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 278 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 280 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontItalic */

/* 282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 284 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 286 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontUnderline */

/* 288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 290 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 292 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontStrikethru */

/* 294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 296 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 298 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontHighQuality */

/* 300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 302 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 304 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 306 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 308 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 314 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CalcTextArea */

/* 318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0xd ),	/* 13 */
/* 326 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 328 */	NdrFcShort( 0x48 ),	/* 72 */
/* 330 */	NdrFcShort( 0x40 ),	/* 64 */
/* 332 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 334 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strText */

/* 348 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 352 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter nWidth */

/* 354 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 360 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 362 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hFont */

/* 366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 368 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 374 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TextWidth */

/* 378 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0xe ),	/* 14 */
/* 386 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 390 */	NdrFcShort( 0x24 ),	/* 36 */
/* 392 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 394 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x1 ),	/* 1 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 402 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 404 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strText */

/* 408 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 410 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 412 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter retVal */

/* 414 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 416 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 422 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TextHeight */

/* 426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0xf ),	/* 15 */
/* 434 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 436 */	NdrFcShort( 0x8 ),	/* 8 */
/* 438 */	NdrFcShort( 0x24 ),	/* 36 */
/* 440 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 442 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0x1 ),	/* 1 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 450 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 452 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strText */

/* 456 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 458 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 460 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter retVal */

/* 462 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 464 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 470 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawText */

/* 474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x10 ),	/* 16 */
/* 482 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 484 */	NdrFcShort( 0x7a ),	/* 122 */
/* 486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 488 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x14,		/* 20 */
/* 490 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x1 ),	/* 1 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 500 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strText */

/* 504 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 508 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter X */

/* 510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 518 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 524 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 530 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrTextColor */

/* 534 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 536 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eFormat */

/* 540 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 542 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 544 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter bEnabled */

/* 546 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 548 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 550 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bUseCustomFont */

/* 552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 554 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 556 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter eFontType */

/* 558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 560 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 562 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter strFontName */

/* 564 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 566 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 568 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter nFontSize */

/* 570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 572 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nFontRotationDegrees */

/* 576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 578 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bFontBold */

/* 582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 584 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 586 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontItalic */

/* 588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 590 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 592 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontUnderline */

/* 594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 596 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 598 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontStrikethru */

/* 600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 602 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 604 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontHighQuality */

/* 606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 608 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 610 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 614 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawControl */

/* 618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x11 ),	/* 17 */
/* 626 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 628 */	NdrFcShort( 0x38 ),	/* 56 */
/* 630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 632 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x8,		/* 8 */
/* 634 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 644 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 648 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 650 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 654 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 662 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 666 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 668 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eType */

/* 672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 674 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 676 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eState */

/* 678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 680 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 682 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 686 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawControlEdge */

/* 690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x12 ),	/* 18 */
/* 698 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 700 */	NdrFcShort( 0x38 ),	/* 56 */
/* 702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 704 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x8,		/* 8 */
/* 706 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 716 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 722 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 734 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 740 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eStyle */

/* 744 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 746 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 748 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eFlags */

/* 750 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 752 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 754 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 758 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawLine */

/* 762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x13 ),	/* 19 */
/* 770 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 772 */	NdrFcShort( 0x48 ),	/* 72 */
/* 774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 776 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
/* 778 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 788 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X1 */

/* 792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 794 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y1 */

/* 798 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 800 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X2 */

/* 804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 806 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y2 */

/* 810 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 812 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrLineColor */

/* 816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 818 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ePenType */

/* 822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 824 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 826 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 830 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 832 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 836 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 842 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawCircle */

/* 846 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x14 ),	/* 20 */
/* 854 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 856 */	NdrFcShort( 0x68 ),	/* 104 */
/* 858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 860 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xe,		/* 14 */
/* 862 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 876 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 882 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 884 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 888 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 890 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 894 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 896 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 902 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 908 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 914 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 916 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushStyle */

/* 918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 920 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 922 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 926 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 928 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenType */

/* 930 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 932 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 934 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 936 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 938 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 940 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 944 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 950 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawBorder */

/* 954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x15 ),	/* 21 */
/* 962 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 964 */	NdrFcShort( 0x48 ),	/* 72 */
/* 966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 968 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
/* 970 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 980 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 986 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 990 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 992 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 998 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1002 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1004 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter crBorderColor */

/* 1008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1010 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ePenType */

/* 1014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1016 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1018 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 1020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1022 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1024 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nBorderWidth */

/* 1026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1028 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1034 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawArea */

/* 1038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1046 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1048 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1052 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xb,		/* 11 */
/* 1054 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1076 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1082 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1086 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1088 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrAreaColor */

/* 1092 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1094 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 1098 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1100 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1102 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushStyle */

/* 1104 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1106 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1108 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 1110 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1112 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1114 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter hAreaBitmap */

/* 1116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1118 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1124 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyArea */

/* 1128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1136 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1138 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1142 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xb,		/* 11 */
/* 1144 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDestDC */

/* 1152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1172 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1176 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1178 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hSrcDC */

/* 1182 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1184 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SrcX */

/* 1188 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1190 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SrcY */

/* 1194 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1196 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSrcWidth */

/* 1200 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1202 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSrcHeight */

/* 1206 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1208 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1214 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawBox */

/* 1218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1226 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 1228 */	NdrFcShort( 0x70 ),	/* 112 */
/* 1230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1232 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xf,		/* 15 */
/* 1234 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1244 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1248 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1250 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1254 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1256 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1260 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1262 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1268 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 1272 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1274 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 1278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1280 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 1284 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1286 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1288 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushStyle */

/* 1290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1292 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1294 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 1296 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1298 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1300 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenType */

/* 1302 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1304 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1306 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 1308 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1310 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1312 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter hFillBitmap */

/* 1314 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1316 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nBorderWidth */

/* 1320 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1322 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1326 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1328 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 1330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawAlphaBox */

/* 1332 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1338 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1340 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 1342 */	NdrFcShort( 0x75 ),	/* 117 */
/* 1344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1346 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x10,		/* 16 */
/* 1348 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1356 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1358 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1362 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1364 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1368 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1370 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1376 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1380 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1382 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 1386 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1388 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 1392 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1394 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 1398 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1400 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1402 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushStyle */

/* 1404 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1406 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1408 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 1410 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1412 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1414 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenType */

/* 1416 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1418 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1420 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 1422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1424 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1426 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter hFillBitmap */

/* 1428 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1430 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nBorderWidth */

/* 1434 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1436 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 1440 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1442 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 1444 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Return value */

/* 1446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1448 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 1450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawRoundBorder */

/* 1452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1458 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1460 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1462 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1466 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xb,		/* 11 */
/* 1468 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1476 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1482 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1484 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1490 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1494 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1496 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1500 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1502 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nRoundValue */

/* 1506 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1508 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter crBorderColor */

/* 1512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1514 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ePenType */

/* 1518 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1520 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1522 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 1524 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1526 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1528 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nBorderWidth */

/* 1530 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1532 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1536 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1538 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawRoundArea */

/* 1542 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1548 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1550 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1552 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1556 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xc,		/* 12 */
/* 1558 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1564 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1566 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1568 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1574 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1578 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1580 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1586 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1590 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1592 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nRoundValue */

/* 1596 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1598 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrAreaColor */

/* 1602 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1604 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 1608 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1610 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1612 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushStyle */

/* 1614 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1616 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1618 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 1620 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1622 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1624 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter hAreaBitmap */

/* 1626 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1628 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1634 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawRoundBox */

/* 1638 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1644 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1646 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 1648 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1652 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x10,		/* 16 */
/* 1654 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1660 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1662 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1664 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1670 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1674 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1676 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1680 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1682 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1686 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1688 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nRoundValue */

/* 1692 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1694 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 1698 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1700 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 1704 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1706 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 1710 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1712 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1714 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushStyle */

/* 1716 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1718 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1720 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 1722 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1724 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1726 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenType */

/* 1728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1730 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1732 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 1734 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1736 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1738 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter hFillBitmap */

/* 1740 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1742 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nBorderWidth */

/* 1746 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1748 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 1750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1754 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 1756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawAlphaRoundBox */

/* 1758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1764 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1766 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 1768 */	NdrFcShort( 0x7d ),	/* 125 */
/* 1770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1772 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x11,		/* 17 */
/* 1774 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1782 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1784 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1788 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1790 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1796 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1800 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1802 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1806 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1808 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nRoundValue */

/* 1812 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1814 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 1818 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1820 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 1824 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1826 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 1830 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1832 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1834 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushStyle */

/* 1836 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1838 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1840 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 1842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1844 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1846 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenType */

/* 1848 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1850 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1852 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 1854 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1856 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1858 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter hFillBitmap */

/* 1860 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1862 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nBorderWidth */

/* 1866 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1868 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 1870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 1872 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1874 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 1876 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Return value */

/* 1878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1880 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 1882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawPolyArea */

/* 1884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1892 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1894 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1898 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1900 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1904 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1906 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1908 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1910 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tPt */

/* 1914 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1916 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1918 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Parameter clrFillColor */

/* 1920 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1922 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 1926 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1928 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nBorderWidth */

/* 1932 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1934 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1940 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawFocus */

/* 1944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1950 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1952 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1954 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1958 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 1960 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1970 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1980 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1982 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1986 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1988 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1992 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1994 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2000 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawCheck */

/* 2004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2012 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2014 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2018 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x8,		/* 8 */
/* 2020 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2026 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2028 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2030 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2034 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2036 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2042 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 2046 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2048 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 2052 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2054 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrColor */

/* 2058 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2060 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 2064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2066 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2072 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawArrow */

/* 2076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2084 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2086 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2090 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x8,		/* 8 */
/* 2092 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2112 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2114 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 2118 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2120 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 2124 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2126 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eDirection */

/* 2130 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2132 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2134 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter clrColor */

/* 2136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2138 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2144 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawClose */

/* 2148 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2154 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2156 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2158 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2162 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 2164 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2172 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2174 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2178 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2180 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2184 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2186 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSize */

/* 2190 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2192 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrColor */

/* 2196 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2198 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 2202 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2204 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2210 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawRestore */

/* 2214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2220 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2222 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2224 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2228 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 2230 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2240 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2244 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2246 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2250 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSize */

/* 2256 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2258 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrColor */

/* 2262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2264 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 2268 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2270 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2276 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawMax */

/* 2280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2286 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2288 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2290 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2294 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 2296 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2304 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2310 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2316 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2318 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSize */

/* 2322 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2324 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrColor */

/* 2328 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2330 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 2334 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2336 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2342 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawMin */

/* 2346 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2352 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2354 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2356 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2360 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 2362 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2372 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2376 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2378 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2382 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSize */

/* 2388 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2390 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrColor */

/* 2394 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2396 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 2400 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2402 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2408 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawDigit */

/* 2412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2418 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2420 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2422 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2426 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 2428 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2436 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2438 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2442 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2444 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2448 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2450 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nDigit */

/* 2454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2456 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 2460 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2462 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrColor */

/* 2466 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2468 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2472 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2474 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawCharacter */

/* 2478 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2484 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2486 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2488 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2492 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2494 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2498 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2500 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2502 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2504 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2508 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2510 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2514 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2516 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strLetter */

/* 2520 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2522 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2524 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter clrColor */

/* 2526 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2528 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2534 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawGradient */

/* 2538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2544 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2546 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2548 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2552 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x9,		/* 9 */
/* 2554 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2562 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2564 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2568 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2570 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2574 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2576 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 2580 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2582 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 2586 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2588 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrStartColor */

/* 2592 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2594 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrEndColor */

/* 2598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2600 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eDirection */

/* 2604 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2606 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2608 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 2610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2612 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawAlphaGradient */

/* 2616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2622 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2624 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2626 */	NdrFcShort( 0x45 ),	/* 69 */
/* 2628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2630 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
/* 2632 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2642 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2646 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2648 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2652 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2654 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 2658 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2660 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 2664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2666 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrStartColor */

/* 2670 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2672 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrEndColor */

/* 2676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2678 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eDirection */

/* 2682 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2684 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2686 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 2688 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2690 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2692 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Return value */

/* 2694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2696 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TransparentPaintImage */

/* 2700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2706 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2708 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2710 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2714 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 2716 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDestDC */

/* 2724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2726 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xDest */

/* 2730 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2732 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter yDest */

/* 2736 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2738 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hImage */

/* 2742 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2744 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hMask */

/* 2748 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2750 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2754 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2756 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TransparentPaintArea */

/* 2760 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2766 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2768 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 2770 */	NdrFcShort( 0x58 ),	/* 88 */
/* 2772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2774 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xc,		/* 12 */
/* 2776 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDestDC */

/* 2784 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2786 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xDest */

/* 2790 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2792 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter yDest */

/* 2796 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2798 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nDestWidth */

/* 2802 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2804 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nDestHeight */

/* 2808 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2810 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hSrcDC */

/* 2814 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2816 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xSrc */

/* 2820 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2822 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ySrc */

/* 2826 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2828 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSrcWidth */

/* 2832 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2834 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSrcHeight */

/* 2838 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2840 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrTransparentColor */

/* 2844 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2846 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2850 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2852 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TransparentPaintAlpha */

/* 2856 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2862 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2864 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 2866 */	NdrFcShort( 0x55 ),	/* 85 */
/* 2868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2870 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xc,		/* 12 */
/* 2872 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDestDC */

/* 2880 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2882 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xDest */

/* 2886 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2888 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter yDest */

/* 2892 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2894 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nDestWidth */

/* 2898 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2900 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nDestHeight */

/* 2904 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2906 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hSrcDC */

/* 2910 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2912 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xSrc */

/* 2916 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2918 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ySrc */

/* 2922 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2924 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSrcWidth */

/* 2928 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2930 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSrcHeight */

/* 2934 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2936 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 2940 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2942 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2944 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Return value */

/* 2946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2948 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawIcon */

/* 2952 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2960 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2962 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2966 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 2968 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2974 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2976 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2978 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hIcon */

/* 2982 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2984 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2988 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2990 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2994 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2996 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bEnabled */

/* 3000 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3002 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3004 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter clrDisabledColor */

/* 3006 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3008 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3014 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawImage */

/* 3018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3024 */	NdrFcShort( 0x2e ),	/* 46 */
/* 3026 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3028 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3032 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x8,		/* 8 */
/* 3034 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 3042 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3044 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hImage */

/* 3048 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3050 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 3054 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3056 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 3060 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3062 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 3066 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3068 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 3072 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3074 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eLayout */

/* 3078 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3080 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3082 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 3084 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3086 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawPic */

/* 3090 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3096 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3098 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3100 */	NdrFcShort( 0x46 ),	/* 70 */
/* 3102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3104 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
/* 3106 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 3114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3116 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hPic */

/* 3120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3122 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 3126 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3128 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 3132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3134 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 3138 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3140 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 3144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3146 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrMaskColor */

/* 3150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3152 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrDisabledColor */

/* 3156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3158 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bEnabled */

/* 3162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3164 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3166 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3170 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BlendColor */

/* 3174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3180 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3182 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3184 */	NdrFcShort( 0x15 ),	/* 21 */
/* 3186 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3188 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 3190 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clrForeColor */

/* 3198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBackColor */

/* 3204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3206 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 3210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3214 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 3216 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3218 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3224 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AlphaColor */

/* 3228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3234 */	NdrFcShort( 0x31 ),	/* 49 */
/* 3236 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3238 */	NdrFcShort( 0xd ),	/* 13 */
/* 3240 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3242 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3244 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clrColor */

/* 3252 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 3258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3262 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 3264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3272 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReverseColor */

/* 3276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3282 */	NdrFcShort( 0x32 ),	/* 50 */
/* 3284 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3288 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3290 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3292 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clrColor */

/* 3300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 3306 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TranslateColor */

/* 3318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3324 */	NdrFcShort( 0x33 ),	/* 51 */
/* 3326 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3328 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3330 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3332 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3334 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clrColor */

/* 3342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hPal */

/* 3348 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 3354 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3362 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Startup */

/* 3366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3372 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3378 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3380 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3382 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3390 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3394 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Shutdown */

/* 3402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3408 */	NdrFcShort( 0xa ),	/* 10 */
/* 3410 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3416 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3418 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3428 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSmoothingMode */

/* 3432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3438 */	NdrFcShort( 0xb ),	/* 11 */
/* 3440 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3446 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3448 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eMode */

/* 3456 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3458 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3460 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 3462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3464 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawCircle */

/* 3468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3474 */	NdrFcShort( 0xc ),	/* 12 */
/* 3476 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 3478 */	NdrFcShort( 0x6d ),	/* 109 */
/* 3480 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3482 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xf,		/* 15 */
/* 3484 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 3492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3494 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 3498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 3504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3506 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 3510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3512 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 3516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3518 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 3522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3524 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 3528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3530 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrHatchColor */

/* 3534 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3536 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 3540 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3542 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3544 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 3546 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3548 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3550 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 3552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3554 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3556 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 3558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3560 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fAngle */

/* 3564 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3566 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 3568 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 3570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3572 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 3574 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 3576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3578 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 3580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawLine */

/* 3582 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3588 */	NdrFcShort( 0xd ),	/* 13 */
/* 3590 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 3592 */	NdrFcShort( 0x55 ),	/* 85 */
/* 3594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3596 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xc,		/* 12 */
/* 3598 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 3606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3608 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X1 */

/* 3612 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3614 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y1 */

/* 3618 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X2 */

/* 3624 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3626 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y2 */

/* 3630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3632 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrLineColor */

/* 3636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3638 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 3642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3644 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3646 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eStartCap */

/* 3648 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3650 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3652 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eEndCap */

/* 3654 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3656 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3658 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 3660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3662 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 3666 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3668 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3670 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 3672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3674 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawArc */

/* 3678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3684 */	NdrFcShort( 0xe ),	/* 14 */
/* 3686 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 3688 */	NdrFcShort( 0x55 ),	/* 85 */
/* 3690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3692 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xc,		/* 12 */
/* 3694 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 3702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3704 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 3708 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3710 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 3714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3716 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 3720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3722 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 3726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3728 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fStartAngle */

/* 3732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3734 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3736 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter fSweepAngle */

/* 3738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3740 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3742 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter clrLineColor */

/* 3744 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3746 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 3750 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3752 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3754 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 3756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3758 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 3762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3764 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3766 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 3768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3770 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawBezier */

/* 3774 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3780 */	NdrFcShort( 0xf ),	/* 15 */
/* 3782 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 3784 */	NdrFcShort( 0x65 ),	/* 101 */
/* 3786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3788 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xe,		/* 14 */
/* 3790 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 3798 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3800 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X1 */

/* 3804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3806 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y1 */

/* 3810 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3812 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X2 */

/* 3816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3818 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y2 */

/* 3822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3824 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X3 */

/* 3828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3830 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y3 */

/* 3834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3836 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X4 */

/* 3840 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3842 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y4 */

/* 3846 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3848 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrLineColor */

/* 3852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3854 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 3858 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3860 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3862 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 3864 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3866 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 3870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3872 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 3874 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 3876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3878 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 3880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawPie */

/* 3882 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3888 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3890 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 3892 */	NdrFcShort( 0x7d ),	/* 125 */
/* 3894 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3896 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x11,		/* 17 */
/* 3898 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3904 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 3906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3908 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 3912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3914 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 3918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 3924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3926 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 3930 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3932 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fStartAngle */

/* 3936 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3938 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3940 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter fSweepAngle */

/* 3942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3944 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3946 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 3948 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3950 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 3954 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3956 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrHatchColor */

/* 3960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3962 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 3966 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3968 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3970 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 3972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3974 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3976 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 3978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3980 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 3982 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 3984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3986 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 3988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fAngle */

/* 3990 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3992 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 3994 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 3996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3998 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 4000 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 4002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4004 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 4006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawArea */

/* 4008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4014 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4016 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 4018 */	NdrFcShort( 0x4d ),	/* 77 */
/* 4020 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4022 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xb,		/* 11 */
/* 4024 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 4032 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4034 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 4038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4040 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 4044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4046 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 4050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4052 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 4056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4058 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 4062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4064 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrHatchColor */

/* 4068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4070 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 4074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4076 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4078 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 4080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4082 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4084 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 4086 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4088 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4090 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 4092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4094 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawBorder */

/* 4098 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4104 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4106 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4108 */	NdrFcShort( 0x45 ),	/* 69 */
/* 4110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4112 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
/* 4114 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4120 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 4122 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4124 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 4128 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4130 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 4134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 4140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4142 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 4146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4148 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 4152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4154 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 4158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4160 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4162 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 4164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4166 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 4170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4172 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4174 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 4176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4178 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawBox */

/* 4182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4188 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4190 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 4192 */	NdrFcShort( 0x6d ),	/* 109 */
/* 4194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4196 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xf,		/* 15 */
/* 4198 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4204 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 4206 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4208 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 4212 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4214 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 4218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4220 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 4224 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4226 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 4230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4232 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 4236 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4238 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 4242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4244 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrHatchColor */

/* 4248 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4250 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 4254 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4256 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4258 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 4260 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4262 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4264 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 4266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4268 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4270 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 4272 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4274 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 4276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fAngle */

/* 4278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4280 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 4282 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 4284 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4286 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 4288 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 4290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4292 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 4294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawGradient */

/* 4296 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4302 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4304 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 4306 */	NdrFcShort( 0x4d ),	/* 77 */
/* 4308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4310 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xb,		/* 11 */
/* 4312 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 4320 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4322 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 4326 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4328 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 4332 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4334 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 4338 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4340 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 4344 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4346 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrStartColor */

/* 4350 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4352 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrEndColor */

/* 4356 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4358 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eDirection */

/* 4362 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4364 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4366 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter fAngle */

/* 4368 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4370 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4372 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 4374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4376 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4378 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 4380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4382 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawText */

/* 4386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4392 */	NdrFcShort( 0x15 ),	/* 21 */
/* 4394 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 4396 */	NdrFcShort( 0x7b ),	/* 123 */
/* 4398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4400 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x14,		/* 20 */
/* 4402 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4406 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 4410 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strText */

/* 4416 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4418 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4420 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter X */

/* 4422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 4428 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4430 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 4434 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4436 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 4440 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4442 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrTextColor */

/* 4446 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4448 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eFormat */

/* 4452 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4454 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4456 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eHAlignment */

/* 4458 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4460 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4462 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eVAlignment */

/* 4464 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4466 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4468 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter strFontName */

/* 4470 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4472 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4474 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter nFontSize */

/* 4476 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4478 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 4480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nFontRotationDegrees */

/* 4482 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4484 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 4486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bFontBold */

/* 4488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4490 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 4492 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontItalic */

/* 4494 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4496 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 4498 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontUnderline */

/* 4500 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4502 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 4504 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontStrikethru */

/* 4506 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4508 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 4510 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontHighQuality */

/* 4512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4514 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 4516 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 4518 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4520 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 4522 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 4524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4526 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 4528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const TGdi_MIDL_TYPE_FORMAT_STRING TGdi__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  8 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x12, 0x0,	/* FC_UP */
/* 12 */	NdrFcShort( 0x18 ),	/* Offset= 24 (36) */
/* 14 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 16 */	NdrFcShort( 0x2 ),	/* 2 */
/* 18 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 20 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 22 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 24 */	0x0 , 
			0x0,		/* 0 */
/* 26 */	NdrFcLong( 0x0 ),	/* 0 */
/* 30 */	NdrFcLong( 0x0 ),	/* 0 */
/* 34 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 36 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (14) */
/* 42 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 44 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 46 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (10) */
/* 56 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 58 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 60 */	
			0x11, 0x0,	/* FC_RP */
/* 62 */	NdrFcShort( 0x47e ),	/* Offset= 1150 (1212) */
/* 64 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 66 */	NdrFcShort( 0x2 ),	/* Offset= 2 (68) */
/* 68 */	
			0x12, 0x0,	/* FC_UP */
/* 70 */	NdrFcShort( 0x464 ),	/* Offset= 1124 (1194) */
/* 72 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 74 */	NdrFcShort( 0x18 ),	/* 24 */
/* 76 */	NdrFcShort( 0xa ),	/* 10 */
/* 78 */	NdrFcLong( 0x8 ),	/* 8 */
/* 82 */	NdrFcShort( 0x64 ),	/* Offset= 100 (182) */
/* 84 */	NdrFcLong( 0xd ),	/* 13 */
/* 88 */	NdrFcShort( 0xae ),	/* Offset= 174 (262) */
/* 90 */	NdrFcLong( 0x9 ),	/* 9 */
/* 94 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (338) */
/* 96 */	NdrFcLong( 0xc ),	/* 12 */
/* 100 */	NdrFcShort( 0x30c ),	/* Offset= 780 (880) */
/* 102 */	NdrFcLong( 0x24 ),	/* 36 */
/* 106 */	NdrFcShort( 0x340 ),	/* Offset= 832 (938) */
/* 108 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 112 */	NdrFcShort( 0x35c ),	/* Offset= 860 (972) */
/* 114 */	NdrFcLong( 0x10 ),	/* 16 */
/* 118 */	NdrFcShort( 0x380 ),	/* Offset= 896 (1014) */
/* 120 */	NdrFcLong( 0x2 ),	/* 2 */
/* 124 */	NdrFcShort( 0x3a4 ),	/* Offset= 932 (1056) */
/* 126 */	NdrFcLong( 0x3 ),	/* 3 */
/* 130 */	NdrFcShort( 0x3c8 ),	/* Offset= 968 (1098) */
/* 132 */	NdrFcLong( 0x14 ),	/* 20 */
/* 136 */	NdrFcShort( 0x3ec ),	/* Offset= 1004 (1140) */
/* 138 */	NdrFcShort( 0xffff ),	/* Offset= -1 (137) */
/* 140 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 142 */	NdrFcShort( 0x4 ),	/* 4 */
/* 144 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 150 */	0x0 , 
			0x0,		/* 0 */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 160 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 162 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 164 */	NdrFcShort( 0x4 ),	/* 4 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x1 ),	/* 1 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	0x12, 0x0,	/* FC_UP */
/* 176 */	NdrFcShort( 0xff74 ),	/* Offset= -140 (36) */
/* 178 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 180 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 182 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 186 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 188 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 190 */	NdrFcShort( 0x4 ),	/* 4 */
/* 192 */	NdrFcShort( 0x4 ),	/* 4 */
/* 194 */	0x11, 0x0,	/* FC_RP */
/* 196 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (140) */
/* 198 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 200 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 202 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 214 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 216 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 218 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 220 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 230 */	0x0 , 
			0x0,		/* 0 */
/* 232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 240 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 244 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 246 */	0x0 , 
			0x0,		/* 0 */
/* 248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 256 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 258 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (202) */
/* 260 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 262 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x6 ),	/* Offset= 6 (274) */
/* 270 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 272 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 274 */	
			0x11, 0x0,	/* FC_RP */
/* 276 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (220) */
/* 278 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 280 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 290 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 292 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 294 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 296 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 306 */	0x0 , 
			0x0,		/* 0 */
/* 308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 316 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 320 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 322 */	0x0 , 
			0x0,		/* 0 */
/* 324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 332 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 334 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (278) */
/* 336 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 338 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x6 ),	/* Offset= 6 (350) */
/* 346 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 348 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 350 */	
			0x11, 0x0,	/* FC_RP */
/* 352 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (296) */
/* 354 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 356 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 358 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 360 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 362 */	0x0 , 
			0x0,		/* 0 */
/* 364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x2 ),	/* Offset= 2 (374) */
/* 374 */	NdrFcShort( 0x10 ),	/* 16 */
/* 376 */	NdrFcShort( 0x2f ),	/* 47 */
/* 378 */	NdrFcLong( 0x14 ),	/* 20 */
/* 382 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 384 */	NdrFcLong( 0x3 ),	/* 3 */
/* 388 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 390 */	NdrFcLong( 0x11 ),	/* 17 */
/* 394 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 396 */	NdrFcLong( 0x2 ),	/* 2 */
/* 400 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 402 */	NdrFcLong( 0x4 ),	/* 4 */
/* 406 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 408 */	NdrFcLong( 0x5 ),	/* 5 */
/* 412 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 414 */	NdrFcLong( 0xb ),	/* 11 */
/* 418 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 420 */	NdrFcLong( 0xa ),	/* 10 */
/* 424 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 426 */	NdrFcLong( 0x6 ),	/* 6 */
/* 430 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (662) */
/* 432 */	NdrFcLong( 0x7 ),	/* 7 */
/* 436 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 438 */	NdrFcLong( 0x8 ),	/* 8 */
/* 442 */	NdrFcShort( 0xfe50 ),	/* Offset= -432 (10) */
/* 444 */	NdrFcLong( 0xd ),	/* 13 */
/* 448 */	NdrFcShort( 0xff0a ),	/* Offset= -246 (202) */
/* 450 */	NdrFcLong( 0x9 ),	/* 9 */
/* 454 */	NdrFcShort( 0xff50 ),	/* Offset= -176 (278) */
/* 456 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 460 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (668) */
/* 462 */	NdrFcLong( 0x24 ),	/* 36 */
/* 466 */	NdrFcShort( 0xd2 ),	/* Offset= 210 (676) */
/* 468 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 472 */	NdrFcShort( 0xcc ),	/* Offset= 204 (676) */
/* 474 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 478 */	NdrFcShort( 0x106 ),	/* Offset= 262 (740) */
/* 480 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 484 */	NdrFcShort( 0x104 ),	/* Offset= 260 (744) */
/* 486 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 490 */	NdrFcShort( 0x102 ),	/* Offset= 258 (748) */
/* 492 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 496 */	NdrFcShort( 0x100 ),	/* Offset= 256 (752) */
/* 498 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 502 */	NdrFcShort( 0xfe ),	/* Offset= 254 (756) */
/* 504 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 508 */	NdrFcShort( 0xfc ),	/* Offset= 252 (760) */
/* 510 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 514 */	NdrFcShort( 0xe6 ),	/* Offset= 230 (744) */
/* 516 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 520 */	NdrFcShort( 0xe4 ),	/* Offset= 228 (748) */
/* 522 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 526 */	NdrFcShort( 0xee ),	/* Offset= 238 (764) */
/* 528 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 532 */	NdrFcShort( 0xe4 ),	/* Offset= 228 (760) */
/* 534 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 538 */	NdrFcShort( 0xe6 ),	/* Offset= 230 (768) */
/* 540 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 544 */	NdrFcShort( 0xe4 ),	/* Offset= 228 (772) */
/* 546 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 550 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (776) */
/* 552 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 556 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (780) */
/* 558 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 562 */	NdrFcShort( 0xe6 ),	/* Offset= 230 (792) */
/* 564 */	NdrFcLong( 0x10 ),	/* 16 */
/* 568 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 570 */	NdrFcLong( 0x12 ),	/* 18 */
/* 574 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 576 */	NdrFcLong( 0x13 ),	/* 19 */
/* 580 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 582 */	NdrFcLong( 0x15 ),	/* 21 */
/* 586 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 588 */	NdrFcLong( 0x16 ),	/* 22 */
/* 592 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 594 */	NdrFcLong( 0x17 ),	/* 23 */
/* 598 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 600 */	NdrFcLong( 0xe ),	/* 14 */
/* 604 */	NdrFcShort( 0xc4 ),	/* Offset= 196 (800) */
/* 606 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 610 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (810) */
/* 612 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 616 */	NdrFcShort( 0xc6 ),	/* Offset= 198 (814) */
/* 618 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 622 */	NdrFcShort( 0x7a ),	/* Offset= 122 (744) */
/* 624 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 628 */	NdrFcShort( 0x78 ),	/* Offset= 120 (748) */
/* 630 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 634 */	NdrFcShort( 0x76 ),	/* Offset= 118 (752) */
/* 636 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 640 */	NdrFcShort( 0x6c ),	/* Offset= 108 (748) */
/* 642 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 646 */	NdrFcShort( 0x66 ),	/* Offset= 102 (748) */
/* 648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 652 */	NdrFcShort( 0x0 ),	/* Offset= 0 (652) */
/* 654 */	NdrFcLong( 0x1 ),	/* 1 */
/* 658 */	NdrFcShort( 0x0 ),	/* Offset= 0 (658) */
/* 660 */	NdrFcShort( 0xffff ),	/* Offset= -1 (659) */
/* 662 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 666 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 668 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 670 */	NdrFcShort( 0x2 ),	/* Offset= 2 (672) */
/* 672 */	
			0x12, 0x0,	/* FC_UP */
/* 674 */	NdrFcShort( 0x208 ),	/* Offset= 520 (1194) */
/* 676 */	
			0x12, 0x0,	/* FC_UP */
/* 678 */	NdrFcShort( 0x2a ),	/* Offset= 42 (720) */
/* 680 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 682 */	NdrFcLong( 0x2f ),	/* 47 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 692 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 694 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 696 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 698 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 700 */	NdrFcShort( 0x1 ),	/* 1 */
/* 702 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 704 */	NdrFcShort( 0x4 ),	/* 4 */
/* 706 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 708 */	0x0 , 
			0x0,		/* 0 */
/* 710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 718 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 720 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 722 */	NdrFcShort( 0x10 ),	/* 16 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0xa ),	/* Offset= 10 (736) */
/* 728 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 730 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 732 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (680) */
/* 734 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 736 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 738 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (698) */
/* 740 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 742 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 744 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 746 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 748 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 750 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 752 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 754 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 756 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 758 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 760 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 762 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 764 */	
			0x12, 0x0,	/* FC_UP */
/* 766 */	NdrFcShort( 0xff98 ),	/* Offset= -104 (662) */
/* 768 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 770 */	NdrFcShort( 0xfd08 ),	/* Offset= -760 (10) */
/* 772 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 774 */	NdrFcShort( 0xfdc4 ),	/* Offset= -572 (202) */
/* 776 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 778 */	NdrFcShort( 0xfe0c ),	/* Offset= -500 (278) */
/* 780 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 782 */	NdrFcShort( 0x2 ),	/* Offset= 2 (784) */
/* 784 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 786 */	NdrFcShort( 0x2 ),	/* Offset= 2 (788) */
/* 788 */	
			0x12, 0x0,	/* FC_UP */
/* 790 */	NdrFcShort( 0x194 ),	/* Offset= 404 (1194) */
/* 792 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 794 */	NdrFcShort( 0x2 ),	/* Offset= 2 (796) */
/* 796 */	
			0x12, 0x0,	/* FC_UP */
/* 798 */	NdrFcShort( 0x14 ),	/* Offset= 20 (818) */
/* 800 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 802 */	NdrFcShort( 0x10 ),	/* 16 */
/* 804 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 806 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 808 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 810 */	
			0x12, 0x0,	/* FC_UP */
/* 812 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (800) */
/* 814 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 816 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 818 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 820 */	NdrFcShort( 0x20 ),	/* 32 */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 824 */	NdrFcShort( 0x0 ),	/* Offset= 0 (824) */
/* 826 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 828 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 830 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 832 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 834 */	NdrFcShort( 0xfe20 ),	/* Offset= -480 (354) */
/* 836 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 838 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 840 */	NdrFcShort( 0x4 ),	/* 4 */
/* 842 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 848 */	0x0 , 
			0x0,		/* 0 */
/* 850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 858 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 860 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 862 */	NdrFcShort( 0x4 ),	/* 4 */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x1 ),	/* 1 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	0x12, 0x0,	/* FC_UP */
/* 874 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (818) */
/* 876 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 878 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 880 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x6 ),	/* Offset= 6 (892) */
/* 888 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 890 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 892 */	
			0x11, 0x0,	/* FC_RP */
/* 894 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (838) */
/* 896 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 898 */	NdrFcShort( 0x4 ),	/* 4 */
/* 900 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 906 */	0x0 , 
			0x0,		/* 0 */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 916 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 918 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 920 */	NdrFcShort( 0x4 ),	/* 4 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x1 ),	/* 1 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	0x12, 0x0,	/* FC_UP */
/* 932 */	NdrFcShort( 0xff2c ),	/* Offset= -212 (720) */
/* 934 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 936 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 938 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 940 */	NdrFcShort( 0x8 ),	/* 8 */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x6 ),	/* Offset= 6 (950) */
/* 946 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 948 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 950 */	
			0x11, 0x0,	/* FC_RP */
/* 952 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (896) */
/* 954 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 958 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 960 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 962 */	NdrFcShort( 0x10 ),	/* 16 */
/* 964 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 966 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 968 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (954) */
			0x5b,		/* FC_END */
/* 972 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 974 */	NdrFcShort( 0x18 ),	/* 24 */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0xa ),	/* Offset= 10 (988) */
/* 980 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 982 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 984 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (960) */
/* 986 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 988 */	
			0x11, 0x0,	/* FC_RP */
/* 990 */	NdrFcShort( 0xfcfe ),	/* Offset= -770 (220) */
/* 992 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 994 */	NdrFcShort( 0x1 ),	/* 1 */
/* 996 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1002 */	0x0 , 
			0x0,		/* 0 */
/* 1004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1008 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1012 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1014 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1018 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1020 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1022 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1024 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1026 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1028 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (992) */
/* 1030 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1032 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1034 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1036 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1038 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1044 */	0x0 , 
			0x0,		/* 0 */
/* 1046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1054 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1056 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1060 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1062 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1064 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1066 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1068 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1070 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1034) */
/* 1072 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1074 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1076 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1078 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1080 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1086 */	0x0 , 
			0x0,		/* 0 */
/* 1088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1096 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1098 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1102 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1104 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1106 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1108 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1110 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1112 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1076) */
/* 1114 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1116 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1118 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1122 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1128 */	0x0 , 
			0x0,		/* 0 */
/* 1130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1138 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1140 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1144 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1146 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1148 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1150 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1152 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1154 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1118) */
/* 1156 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1158 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1160 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1164 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1166 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1168 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1172 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1174 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1176 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1178 */	0x0 , 
			0x0,		/* 0 */
/* 1180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1188 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1190 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1160) */
/* 1192 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1194 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1196 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1198 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1168) */
/* 1200 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1200) */
/* 1202 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1204 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1206 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1208 */	NdrFcShort( 0xfb90 ),	/* Offset= -1136 (72) */
/* 1210 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1212 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1216 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0xfb7c ),	/* Offset= -1156 (64) */

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
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IWinGdi, ver. 0.0,
   GUID={0xBF3DE9B1,0x07D6,0x40D5,{0xAF,0x6C,0xFA,0x3A,0xA0,0xD9,0xD8,0xFB}} */

#pragma code_seg(".orpc")
static const unsigned short IWinGdi_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    30,
    66,
    114,
    156,
    222,
    318,
    378,
    426,
    474,
    618,
    690,
    762,
    846,
    954,
    1038,
    1128,
    1218,
    1332,
    1452,
    1542,
    1638,
    1758,
    1884,
    1944,
    2004,
    2076,
    2148,
    2214,
    2280,
    2346,
    2412,
    2478,
    2538,
    2616,
    2700,
    2760,
    2856,
    2952,
    3018,
    3090,
    3174,
    3228,
    3276,
    3318
    };

static const MIDL_STUBLESS_PROXY_INFO IWinGdi_ProxyInfo =
    {
    &Object_StubDesc,
    TGdi__MIDL_ProcFormatString.Format,
    &IWinGdi_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWinGdi_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TGdi__MIDL_ProcFormatString.Format,
    &IWinGdi_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(52) _IWinGdiProxyVtbl = 
{
    &IWinGdi_ProxyInfo,
    &IID_IWinGdi,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::AboutMe */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::IsWinNT */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::SelectObject */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DeleteObject */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::CreateBrush */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::CreateFont */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::CalcTextArea */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::TextWidth */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::TextHeight */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawText */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawControl */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawControlEdge */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawLine */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawCircle */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawBorder */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawArea */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::CopyArea */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawBox */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawAlphaBox */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawRoundBorder */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawRoundArea */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawRoundBox */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawAlphaRoundBox */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawPolyArea */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawFocus */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawCheck */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawArrow */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawClose */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawRestore */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawMax */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawMin */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawDigit */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawCharacter */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawGradient */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawAlphaGradient */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::TransparentPaintImage */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::TransparentPaintArea */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::TransparentPaintAlpha */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawIcon */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawImage */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::DrawPic */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::BlendColor */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::AlphaColor */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::ReverseColor */ ,
    (void *) (INT_PTR) -1 /* IWinGdi::TranslateColor */
};


static const PRPC_STUB_FUNCTION IWinGdi_table[] =
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

CInterfaceStubVtbl _IWinGdiStubVtbl =
{
    &IID_IWinGdi,
    &IWinGdi_ServerInfo,
    52,
    &IWinGdi_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWinGdip, ver. 0.0,
   GUID={0xB78B3955,0xF0C3,0x47d3,{0xA2,0xE3,0x38,0x81,0xA2,0xDF,0x7A,0xF1}} */

#pragma code_seg(".orpc")
static const unsigned short IWinGdip_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    30,
    3366,
    3402,
    3432,
    3468,
    3582,
    3678,
    3774,
    3882,
    4008,
    4098,
    4182,
    4296,
    4386
    };

static const MIDL_STUBLESS_PROXY_INFO IWinGdip_ProxyInfo =
    {
    &Object_StubDesc,
    TGdi__MIDL_ProcFormatString.Format,
    &IWinGdip_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWinGdip_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TGdi__MIDL_ProcFormatString.Format,
    &IWinGdip_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(22) _IWinGdipProxyVtbl = 
{
    &IWinGdip_ProxyInfo,
    &IID_IWinGdip,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWinGdip::AboutMe */ ,
    (void *) (INT_PTR) -1 /* IWinGdip::get_HasStarted */ ,
    (void *) (INT_PTR) -1 /* IWinGdip::Startup */ ,
    (void *) (INT_PTR) -1 /* IWinGdip::Shutdown */ ,
    (void *) (INT_PTR) -1 /* IWinGdip::SetSmoothingMode */ ,
    (void *) (INT_PTR) -1 /* IWinGdip::DrawCircle */ ,
    (void *) (INT_PTR) -1 /* IWinGdip::DrawLine */ ,
    (void *) (INT_PTR) -1 /* IWinGdip::DrawArc */ ,
    (void *) (INT_PTR) -1 /* IWinGdip::DrawBezier */ ,
    (void *) (INT_PTR) -1 /* IWinGdip::DrawPie */ ,
    (void *) (INT_PTR) -1 /* IWinGdip::DrawArea */ ,
    (void *) (INT_PTR) -1 /* IWinGdip::DrawBorder */ ,
    (void *) (INT_PTR) -1 /* IWinGdip::DrawBox */ ,
    (void *) (INT_PTR) -1 /* IWinGdip::DrawGradient */ ,
    (void *) (INT_PTR) -1 /* IWinGdip::DrawText */
};


static const PRPC_STUB_FUNCTION IWinGdip_table[] =
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
    NdrStubCall2
};

CInterfaceStubVtbl _IWinGdipStubVtbl =
{
    &IID_IWinGdip,
    &IWinGdip_ServerInfo,
    22,
    &IWinGdip_table[-3],
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
    TGdi__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _TGdi_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IWinGdipProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWinGdiProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _TGdi_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IWinGdipStubVtbl,
    ( CInterfaceStubVtbl *) &_IWinGdiStubVtbl,
    0
};

PCInterfaceName const _TGdi_InterfaceNamesList[] = 
{
    "IWinGdip",
    "IWinGdi",
    0
};

const IID *  const _TGdi_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _TGdi_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _TGdi, pIID, n)

int __stdcall _TGdi_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _TGdi, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _TGdi, 2, *pIndex )
    
}

const ExtendedProxyFileInfo TGdi_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _TGdi_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _TGdi_StubVtblList,
    (const PCInterfaceName * ) & _TGdi_InterfaceNamesList,
    (const IID ** ) & _TGdi_BaseIIDList,
    & _TGdi_IID_Lookup, 
    2,
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


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

