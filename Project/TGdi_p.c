

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
#define PROC_FORMAT_STRING_SIZE   4597                              
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

	/* Procedure Startup */


	/* Procedure IsWinXpOrLater */

/* 66 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 68 */	NdrFcLong( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x9 ),	/* 9 */
/* 74 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x22 ),	/* 34 */
/* 80 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 82 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */


	/* Parameter retVal */

/* 90 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 92 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 94 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 96 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 98 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SelectObject */

/* 102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0xa ),	/* 10 */
/* 110 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 112 */	NdrFcShort( 0x10 ),	/* 16 */
/* 114 */	NdrFcShort( 0x24 ),	/* 36 */
/* 116 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 118 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 126 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 128 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hObject */

/* 132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 134 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 138 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 146 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteObject */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0xb ),	/* 11 */
/* 158 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 162 */	NdrFcShort( 0x22 ),	/* 34 */
/* 164 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 166 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hObject */

/* 174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 180 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 184 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBrush */

/* 192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0xc ),	/* 12 */
/* 200 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 202 */	NdrFcShort( 0x28 ),	/* 40 */
/* 204 */	NdrFcShort( 0x24 ),	/* 36 */
/* 206 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 208 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enmBrushType */

/* 216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 220 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter enmBrushStyle */

/* 222 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 226 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter enmBrushHatch */

/* 228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 232 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter clrColor */

/* 234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 236 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hBitmap */

/* 240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 242 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 246 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 248 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 254 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateFont */

/* 258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0xd ),	/* 13 */
/* 266 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 268 */	NdrFcShort( 0x3e ),	/* 62 */
/* 270 */	NdrFcShort( 0x24 ),	/* 36 */
/* 272 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xc,		/* 12 */
/* 274 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x1 ),	/* 1 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eFontType */

/* 288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 292 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter strFontName */

/* 294 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 298 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter nFontSize */

/* 300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 302 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nFontRotationDegrees */

/* 306 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 308 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bFontBold */

/* 312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 314 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 316 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontItalic */

/* 318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 320 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 322 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontUnderline */

/* 324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 326 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 328 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontStrikethru */

/* 330 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 332 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 334 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontHighQuality */

/* 336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 338 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 340 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 342 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 344 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CalcTextArea */

/* 354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0xe ),	/* 14 */
/* 362 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 364 */	NdrFcShort( 0x48 ),	/* 72 */
/* 366 */	NdrFcShort( 0x40 ),	/* 64 */
/* 368 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 370 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x1 ),	/* 1 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strText */

/* 384 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 388 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter nWidth */

/* 390 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 396 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 398 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hFont */

/* 402 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 404 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 410 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TextWidth */

/* 414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0xf ),	/* 15 */
/* 422 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 426 */	NdrFcShort( 0x24 ),	/* 36 */
/* 428 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 430 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 434 */	NdrFcShort( 0x1 ),	/* 1 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strText */

/* 444 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 446 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 448 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter retVal */

/* 450 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 458 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TextHeight */

/* 462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x10 ),	/* 16 */
/* 470 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 474 */	NdrFcShort( 0x24 ),	/* 36 */
/* 476 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 478 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 486 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strText */

/* 492 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 496 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter retVal */

/* 498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 506 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawText */

/* 510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x11 ),	/* 17 */
/* 518 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 520 */	NdrFcShort( 0x7a ),	/* 122 */
/* 522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 524 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x14,		/* 20 */
/* 526 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 530 */	NdrFcShort( 0x1 ),	/* 1 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 534 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strText */

/* 540 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 542 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 544 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter X */

/* 546 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 548 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 554 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 560 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 564 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 566 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrTextColor */

/* 570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 572 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eFormat */

/* 576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 578 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 580 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter bEnabled */

/* 582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 584 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 586 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bUseCustomFont */

/* 588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 590 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 592 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter eFontType */

/* 594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 596 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 598 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter strFontName */

/* 600 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 602 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 604 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter nFontSize */

/* 606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 608 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nFontRotationDegrees */

/* 612 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 614 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bFontBold */

/* 618 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 620 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 622 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontItalic */

/* 624 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 626 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 628 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontUnderline */

/* 630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 632 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 634 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontStrikethru */

/* 636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 638 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 640 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontHighQuality */

/* 642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 644 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 646 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 650 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawControl */

/* 654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x12 ),	/* 18 */
/* 662 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 664 */	NdrFcShort( 0x38 ),	/* 56 */
/* 666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 668 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x8,		/* 8 */
/* 670 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 696 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 698 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 704 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eType */

/* 708 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 710 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 712 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eState */

/* 714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 716 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 718 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 722 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawControlEdge */

/* 726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x13 ),	/* 19 */
/* 734 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 736 */	NdrFcShort( 0x38 ),	/* 56 */
/* 738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 740 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x8,		/* 8 */
/* 742 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 750 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 752 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 758 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 770 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 776 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eStyle */

/* 780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 782 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 784 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eFlags */

/* 786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 788 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 790 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 794 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawLine */

/* 798 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x14 ),	/* 20 */
/* 806 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 808 */	NdrFcShort( 0x48 ),	/* 72 */
/* 810 */	NdrFcShort( 0x8 ),	/* 8 */
/* 812 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
/* 814 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 824 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X1 */

/* 828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 830 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y1 */

/* 834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 836 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X2 */

/* 840 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 842 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y2 */

/* 846 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 848 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrLineColor */

/* 852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 854 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ePenType */

/* 858 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 860 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 862 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 864 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 866 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 868 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 872 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 878 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawCircle */

/* 882 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0x15 ),	/* 21 */
/* 890 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 892 */	NdrFcShort( 0x68 ),	/* 104 */
/* 894 */	NdrFcShort( 0x8 ),	/* 8 */
/* 896 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xe,		/* 14 */
/* 898 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 908 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 914 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 926 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 930 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 932 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 936 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 938 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 944 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 948 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 950 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 952 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushStyle */

/* 954 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 956 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 958 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 962 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 964 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenType */

/* 966 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 968 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 970 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 974 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 976 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 980 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 986 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawBorder */

/* 990 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x16 ),	/* 22 */
/* 998 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1000 */	NdrFcShort( 0x48 ),	/* 72 */
/* 1002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1004 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
/* 1006 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1016 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1022 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1032 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1034 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1040 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter crBorderColor */

/* 1044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1046 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ePenType */

/* 1050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1052 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1054 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 1056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1058 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1060 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nBorderWidth */

/* 1062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1064 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1070 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawArea */

/* 1074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1082 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1084 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xb,		/* 11 */
/* 1090 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1098 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1104 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1110 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1112 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1118 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1122 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1124 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrAreaColor */

/* 1128 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1130 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 1134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1136 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1138 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushStyle */

/* 1140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1142 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1144 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 1146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1148 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1150 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter hAreaBitmap */

/* 1152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1154 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1160 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyArea */

/* 1164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1172 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1174 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1178 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xb,		/* 11 */
/* 1180 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDestDC */

/* 1188 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1194 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1196 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1200 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1202 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1206 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1208 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1212 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1214 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hSrcDC */

/* 1218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1220 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SrcX */

/* 1224 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1226 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SrcY */

/* 1230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1232 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSrcWidth */

/* 1236 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1238 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSrcHeight */

/* 1242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1244 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1250 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawBox */

/* 1254 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1260 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1262 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 1264 */	NdrFcShort( 0x70 ),	/* 112 */
/* 1266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1268 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xf,		/* 15 */
/* 1270 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1276 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1280 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1284 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1286 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1292 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1296 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1298 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1302 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1304 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 1308 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1310 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 1314 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1316 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 1320 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1322 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1324 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushStyle */

/* 1326 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1328 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1330 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 1332 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1334 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1336 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenType */

/* 1338 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1340 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1342 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 1344 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1346 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1348 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter hFillBitmap */

/* 1350 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1352 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nBorderWidth */

/* 1356 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1358 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1364 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawAlphaBox */

/* 1368 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1376 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 1378 */	NdrFcShort( 0x75 ),	/* 117 */
/* 1380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1382 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x10,		/* 16 */
/* 1384 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1392 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1394 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1398 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1400 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1404 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1406 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1410 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1412 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1416 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1418 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 1422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1424 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 1428 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1430 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 1434 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1436 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1438 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushStyle */

/* 1440 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1442 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1444 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 1446 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1448 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1450 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenType */

/* 1452 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1454 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1456 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 1458 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1460 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1462 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter hFillBitmap */

/* 1464 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1466 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nBorderWidth */

/* 1470 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1472 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 1476 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1478 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 1480 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Return value */

/* 1482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1484 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 1486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawRoundBorder */

/* 1488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1496 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1498 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1502 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xb,		/* 11 */
/* 1504 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1518 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1524 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1526 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1530 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1532 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1536 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1538 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nRoundValue */

/* 1542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1544 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter crBorderColor */

/* 1548 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1550 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ePenType */

/* 1554 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1556 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1558 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 1560 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1562 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1564 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nBorderWidth */

/* 1566 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1568 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1572 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1574 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawRoundArea */

/* 1578 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1584 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1586 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1588 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1590 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1592 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xc,		/* 12 */
/* 1594 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1600 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1602 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1604 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1608 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1610 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1614 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1616 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1620 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1622 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1626 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1628 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nRoundValue */

/* 1632 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1634 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrAreaColor */

/* 1638 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1640 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 1644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1646 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1648 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushStyle */

/* 1650 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1652 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1654 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 1656 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1658 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1660 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter hAreaBitmap */

/* 1662 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1664 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1670 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawRoundBox */

/* 1674 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1680 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1682 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 1684 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1688 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x10,		/* 16 */
/* 1690 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1698 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1700 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1704 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1706 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1710 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1716 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1718 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1722 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1724 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nRoundValue */

/* 1728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1730 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 1734 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1736 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 1740 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1742 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 1746 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1748 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1750 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushStyle */

/* 1752 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1754 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1756 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 1758 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1760 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1762 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenType */

/* 1764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1766 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1768 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 1770 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1772 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1774 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter hFillBitmap */

/* 1776 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1778 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nBorderWidth */

/* 1782 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1784 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 1786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1790 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 1792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawAlphaRoundBox */

/* 1794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1800 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1802 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 1804 */	NdrFcShort( 0x7d ),	/* 125 */
/* 1806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1808 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x11,		/* 17 */
/* 1810 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1818 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1820 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 1824 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1826 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 1830 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1832 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 1836 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1838 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 1842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1844 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nRoundValue */

/* 1848 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1850 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 1854 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1856 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 1860 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1862 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 1866 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1868 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1870 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushStyle */

/* 1872 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1874 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1876 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 1878 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1880 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1882 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenType */

/* 1884 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1886 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1888 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 1890 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1892 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1894 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter hFillBitmap */

/* 1896 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1898 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nBorderWidth */

/* 1902 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1904 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 1906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 1908 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1910 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 1912 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Return value */

/* 1914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1916 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 1918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawPolyArea */

/* 1920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1926 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1928 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1930 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1934 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1936 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1940 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 1944 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tPt */

/* 1950 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1954 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Parameter clrFillColor */

/* 1956 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1958 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 1962 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1964 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nBorderWidth */

/* 1968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1970 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1976 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawFocus */

/* 1980 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1986 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1988 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1990 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1992 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1994 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 1996 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2004 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2006 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2010 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2012 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2016 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2018 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 2022 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2024 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 2028 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2030 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2036 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawCheck */

/* 2040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2048 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2050 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2052 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2054 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x8,		/* 8 */
/* 2056 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2066 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2070 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2072 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2076 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2078 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 2082 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2084 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 2088 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2090 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrColor */

/* 2094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2096 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 2100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2102 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2108 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawArrow */

/* 2112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2118 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2120 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2122 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2126 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x8,		/* 8 */
/* 2128 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2142 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2148 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2150 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 2154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2156 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 2160 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2162 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eDirection */

/* 2166 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2168 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2170 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter clrColor */

/* 2172 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2174 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2180 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawClose */

/* 2184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2192 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2194 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2198 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 2200 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2208 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2214 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2220 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2222 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSize */

/* 2226 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2228 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrColor */

/* 2232 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2234 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 2238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2240 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2246 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawRestore */

/* 2250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2256 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2258 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2260 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2264 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 2266 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2272 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2274 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2276 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2280 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2282 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2286 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2288 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSize */

/* 2292 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2294 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrColor */

/* 2298 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2300 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 2304 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2306 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2312 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawMax */

/* 2316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2322 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2324 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2326 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2330 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 2332 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2340 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2342 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2346 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2348 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2352 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2354 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSize */

/* 2358 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2360 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrColor */

/* 2364 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2366 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 2370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2372 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2378 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawMin */

/* 2382 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2388 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2390 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2392 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2396 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 2398 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2406 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2408 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2412 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2414 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2418 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2420 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSize */

/* 2424 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2426 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrColor */

/* 2430 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2432 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 2436 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2438 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2444 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawDigit */

/* 2448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2454 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2456 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2458 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2462 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 2464 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2472 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2478 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2484 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2486 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nDigit */

/* 2490 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2492 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 2496 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2498 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrColor */

/* 2502 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2504 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2508 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2510 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawCharacter */

/* 2514 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2520 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2522 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2524 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2528 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2530 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2536 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2538 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2540 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2544 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2546 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2550 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2552 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strLetter */

/* 2556 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2558 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2560 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter clrColor */

/* 2562 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2564 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2570 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawGradient */

/* 2574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2582 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2584 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2588 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x9,		/* 9 */
/* 2590 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2600 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2604 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2606 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2610 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2612 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 2616 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2618 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 2622 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2624 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrStartColor */

/* 2628 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2630 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrEndColor */

/* 2634 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2636 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eDirection */

/* 2640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2642 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2644 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 2646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2648 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawAlphaGradient */

/* 2652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2658 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2660 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2662 */	NdrFcShort( 0x45 ),	/* 69 */
/* 2664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2666 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
/* 2668 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 2676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2678 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 2682 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2684 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 2688 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2690 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 2694 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2696 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 2700 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2702 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrStartColor */

/* 2706 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2708 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrEndColor */

/* 2712 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2714 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eDirection */

/* 2718 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2720 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2722 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 2724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2726 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2728 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Return value */

/* 2730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2732 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TransparentPaintImage */

/* 2736 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2744 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2746 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2750 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 2752 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDestDC */

/* 2760 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xDest */

/* 2766 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2768 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter yDest */

/* 2772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2774 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hImage */

/* 2778 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2780 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hMask */

/* 2784 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2786 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2792 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TransparentPaintArea */

/* 2796 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2802 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2804 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 2806 */	NdrFcShort( 0x58 ),	/* 88 */
/* 2808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2810 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xc,		/* 12 */
/* 2812 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDestDC */

/* 2820 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2822 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xDest */

/* 2826 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2828 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter yDest */

/* 2832 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2834 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nDestWidth */

/* 2838 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2840 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nDestHeight */

/* 2844 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2846 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hSrcDC */

/* 2850 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2852 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xSrc */

/* 2856 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2858 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ySrc */

/* 2862 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2864 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSrcWidth */

/* 2868 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2870 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSrcHeight */

/* 2874 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2876 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrTransparentColor */

/* 2880 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2882 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2886 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2888 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TransparentPaintAlpha */

/* 2892 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2898 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2900 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 2902 */	NdrFcShort( 0x55 ),	/* 85 */
/* 2904 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2906 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xc,		/* 12 */
/* 2908 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2914 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDestDC */

/* 2916 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2918 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xDest */

/* 2922 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2924 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter yDest */

/* 2928 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2930 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nDestWidth */

/* 2934 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2936 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nDestHeight */

/* 2940 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2942 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hSrcDC */

/* 2946 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2948 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xSrc */

/* 2952 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2954 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ySrc */

/* 2958 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2960 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSrcWidth */

/* 2964 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2966 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nSrcHeight */

/* 2970 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2972 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 2976 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2978 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2980 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Return value */

/* 2982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2984 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawResIcon */

/* 2988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2994 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2996 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2998 */	NdrFcShort( 0x2e ),	/* 46 */
/* 3000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3002 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 3004 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 3012 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 3018 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3020 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 3024 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3026 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 3030 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3032 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 3036 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3038 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eIconName */

/* 3042 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3044 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3046 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 3048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3050 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawIcon */

/* 3054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3060 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3062 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3064 */	NdrFcShort( 0x2e ),	/* 46 */
/* 3066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3068 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 3070 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 3078 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3080 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hIcon */

/* 3084 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3086 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 3090 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3092 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 3096 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3098 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bEnabled */

/* 3102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3104 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3106 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter clrDisabledColor */

/* 3108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3110 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3116 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawImage */

/* 3120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3126 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3128 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3130 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3134 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x8,		/* 8 */
/* 3136 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 3144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3146 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hImage */

/* 3150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3152 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 3156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3158 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 3162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3164 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 3168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3170 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 3174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3176 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eLayout */

/* 3180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3182 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3184 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 3186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3188 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawPic */

/* 3192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3198 */	NdrFcShort( 0x31 ),	/* 49 */
/* 3200 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3202 */	NdrFcShort( 0x46 ),	/* 70 */
/* 3204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3206 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
/* 3208 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 3216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hPic */

/* 3222 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 3228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 3234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3236 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 3240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3242 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 3246 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3248 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrMaskColor */

/* 3252 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3254 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrDisabledColor */

/* 3258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3260 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bEnabled */

/* 3264 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3266 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3268 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3272 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BlendColor */

/* 3276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3282 */	NdrFcShort( 0x32 ),	/* 50 */
/* 3284 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3286 */	NdrFcShort( 0x15 ),	/* 21 */
/* 3288 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3290 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 3292 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clrForeColor */

/* 3300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBackColor */

/* 3306 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 3312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3316 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 3318 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3326 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AlphaColor */

/* 3330 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3336 */	NdrFcShort( 0x33 ),	/* 51 */
/* 3338 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3340 */	NdrFcShort( 0xd ),	/* 13 */
/* 3342 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3344 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3346 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3352 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clrColor */

/* 3354 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3356 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 3360 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3362 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3364 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 3366 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3368 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3374 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReverseColor */

/* 3378 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3384 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3386 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3390 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3392 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3394 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clrColor */

/* 3402 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3404 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 3408 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3410 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3416 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TranslateColor */

/* 3420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0x35 ),	/* 53 */
/* 3428 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3430 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3432 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3434 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3436 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clrColor */

/* 3444 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hPal */

/* 3450 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 3456 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3464 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Shutdown */

/* 3468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3474 */	NdrFcShort( 0xa ),	/* 10 */
/* 3476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3480 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3482 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3484 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3494 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSmoothingMode */

/* 3498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3504 */	NdrFcShort( 0xb ),	/* 11 */
/* 3506 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3512 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3514 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eMode */

/* 3522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3526 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 3528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawCircle */

/* 3534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3540 */	NdrFcShort( 0xc ),	/* 12 */
/* 3542 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 3544 */	NdrFcShort( 0x6d ),	/* 109 */
/* 3546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3548 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xf,		/* 15 */
/* 3550 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 3558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3560 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 3564 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3566 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 3570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 3576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3578 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 3582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3584 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 3588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3590 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 3594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3596 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrHatchColor */

/* 3600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3602 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 3606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3608 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3610 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 3612 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3614 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3616 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 3618 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3620 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3622 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 3624 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3626 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fAngle */

/* 3630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3632 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 3634 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 3636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3638 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 3640 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 3642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3644 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 3646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawLine */

/* 3648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3654 */	NdrFcShort( 0xd ),	/* 13 */
/* 3656 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 3658 */	NdrFcShort( 0x55 ),	/* 85 */
/* 3660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xc,		/* 12 */
/* 3664 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 3672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X1 */

/* 3678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y1 */

/* 3684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X2 */

/* 3690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3692 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y2 */

/* 3696 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3698 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrLineColor */

/* 3702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3704 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 3708 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3710 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3712 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eStartCap */

/* 3714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3716 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3718 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eEndCap */

/* 3720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3722 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3724 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 3726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3728 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 3732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3734 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3736 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 3738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3740 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawArc */

/* 3744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3750 */	NdrFcShort( 0xe ),	/* 14 */
/* 3752 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 3754 */	NdrFcShort( 0x55 ),	/* 85 */
/* 3756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xc,		/* 12 */
/* 3760 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 3768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 3774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 3780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3782 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 3786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 3792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3794 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fStartAngle */

/* 3798 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3800 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3802 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter fSweepAngle */

/* 3804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3806 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3808 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter clrLineColor */

/* 3810 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3812 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 3816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3818 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3820 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 3822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3824 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 3828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3830 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3832 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 3834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3836 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawBezier */

/* 3840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3846 */	NdrFcShort( 0xf ),	/* 15 */
/* 3848 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 3850 */	NdrFcShort( 0x65 ),	/* 101 */
/* 3852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3854 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xe,		/* 14 */
/* 3856 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 3864 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X1 */

/* 3870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3872 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y1 */

/* 3876 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3878 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X2 */

/* 3882 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3884 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y2 */

/* 3888 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3890 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X3 */

/* 3894 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3896 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y3 */

/* 3900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3902 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X4 */

/* 3906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3908 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y4 */

/* 3912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3914 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrLineColor */

/* 3918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3920 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 3924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3926 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3928 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 3930 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3932 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 3936 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3938 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 3940 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 3942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3944 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 3946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawPie */

/* 3948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3954 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3956 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 3958 */	NdrFcShort( 0x7d ),	/* 125 */
/* 3960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3962 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x11,		/* 17 */
/* 3964 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 3972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 3978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3980 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 3984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3986 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 3990 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3992 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 3996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3998 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fStartAngle */

/* 4002 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4004 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4006 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter fSweepAngle */

/* 4008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4010 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4012 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 4014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4016 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 4020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4022 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrHatchColor */

/* 4026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4028 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 4032 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4034 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4036 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 4038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4040 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 4042 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 4044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4046 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 4048 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 4050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4052 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 4054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fAngle */

/* 4056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4058 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 4060 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 4062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4064 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 4066 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 4068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4070 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 4072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawArea */

/* 4074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4080 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4082 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 4084 */	NdrFcShort( 0x4d ),	/* 77 */
/* 4086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4088 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xb,		/* 11 */
/* 4090 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 4098 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 4104 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 4110 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4112 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 4116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4118 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 4122 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4124 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 4128 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4130 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrHatchColor */

/* 4134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4136 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 4140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4142 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4144 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 4146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4148 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4150 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 4152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4154 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4156 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 4158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4160 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawBorder */

/* 4164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4170 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4172 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4174 */	NdrFcShort( 0x45 ),	/* 69 */
/* 4176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4178 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
/* 4180 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 4188 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 4194 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4196 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 4200 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4202 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 4206 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4208 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 4212 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4214 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 4218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4220 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 4224 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4226 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4228 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 4230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4232 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 4236 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4238 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4240 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 4242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4244 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawBox */

/* 4248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4254 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4256 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 4258 */	NdrFcShort( 0x6d ),	/* 109 */
/* 4260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4262 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xf,		/* 15 */
/* 4264 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 4272 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4274 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 4278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 4284 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4286 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 4290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4292 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 4296 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4298 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrFillColor */

/* 4302 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4304 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrBorderColor */

/* 4308 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4310 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrHatchColor */

/* 4314 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4316 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eBrushType */

/* 4320 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4322 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4324 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eBrushHatch */

/* 4326 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4328 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4330 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ePenStyle */

/* 4332 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4334 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4336 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nLineWidth */

/* 4338 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4340 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 4342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fAngle */

/* 4344 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4346 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 4348 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 4350 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4352 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 4354 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 4356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4358 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 4360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawGradient */

/* 4362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4368 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4370 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 4372 */	NdrFcShort( 0x4d ),	/* 77 */
/* 4374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4376 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xb,		/* 11 */
/* 4378 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 4386 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4388 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter X */

/* 4392 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4394 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 4398 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4400 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 4404 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4406 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 4410 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4412 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrStartColor */

/* 4416 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4418 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrEndColor */

/* 4422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4424 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eDirection */

/* 4428 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4430 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4432 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter fAngle */

/* 4434 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4436 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4438 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 4440 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4442 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4444 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 4446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4448 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawText */

/* 4452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4458 */	NdrFcShort( 0x15 ),	/* 21 */
/* 4460 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 4462 */	NdrFcShort( 0x7b ),	/* 123 */
/* 4464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4466 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x14,		/* 20 */
/* 4468 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4472 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDC */

/* 4476 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strText */

/* 4482 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4484 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4486 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter X */

/* 4488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4490 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Y */

/* 4494 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4496 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nWidth */

/* 4500 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4502 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nHeight */

/* 4506 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4508 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clrTextColor */

/* 4512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4514 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eFormat */

/* 4518 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4520 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4522 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eHAlignment */

/* 4524 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4526 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4528 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter eVAlignment */

/* 4530 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4532 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4534 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter strFontName */

/* 4536 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4538 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4540 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter nFontSize */

/* 4542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4544 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 4546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nFontRotationDegrees */

/* 4548 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4550 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 4552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bFontBold */

/* 4554 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4556 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 4558 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontItalic */

/* 4560 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4562 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 4564 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontUnderline */

/* 4566 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4568 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 4570 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontStrikethru */

/* 4572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4574 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 4576 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bFontHighQuality */

/* 4578 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4580 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 4582 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter nAlpha */

/* 4584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4586 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 4588 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 4590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4592 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 4594 */	0x8,		/* FC_LONG */
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
    102,
    150,
    192,
    258,
    354,
    414,
    462,
    510,
    654,
    726,
    798,
    882,
    990,
    1074,
    1164,
    1254,
    1368,
    1488,
    1578,
    1674,
    1794,
    1920,
    1980,
    2040,
    2112,
    2184,
    2250,
    2316,
    2382,
    2448,
    2514,
    2574,
    2652,
    2736,
    2796,
    2892,
    2988,
    3054,
    3120,
    3192,
    3276,
    3330,
    3378,
    3420
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
CINTERFACE_PROXY_VTABLE(54) _IWinGdiProxyVtbl = 
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
    (void *) (INT_PTR) -1 /* IWinGdi::IsWinXpOrLater */ ,
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
    (void *) (INT_PTR) -1 /* IWinGdi::DrawResIcon */ ,
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
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWinGdiStubVtbl =
{
    &IID_IWinGdi,
    &IWinGdi_ServerInfo,
    54,
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
    66,
    3468,
    3498,
    3534,
    3648,
    3744,
    3840,
    3948,
    4074,
    4164,
    4248,
    4362,
    4452
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

