// stdafx.h : include file for standard system include files,
//      or project specific include files that are used frequently,
//      but are changed infrequently

#if !defined(AFX_STDAFX_H__39466FB0_F8A2_41F8_81D7_ED6732B17FE6__INCLUDED_)
#define AFX_STDAFX_H__39466FB0_F8A2_41F8_81D7_ED6732B17FE6__INCLUDED_

/***版权标识**********************************/
#define COPYRIGHT _T("版权声明")
#define ABOUTME   _T("关于我们")
static const char *COMPANY = "elong.tech"; 
static const char *AUTHOR = "denglf";
/*********************************************/

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define STRICT
#if _MSC_VER <= 1200 // MFC 6.0 or earlier
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0400
#endif
#endif
#define _ATL_APARTMENT_THREADED

#define IsNT ((DWORD)(LOBYTE(LOWORD(GetVersion))) >= 4)

#include <atlbase.h>
//You may derive a class from CComModule and use it if you want to override
//something, but do not change the name of _Module
extern CComModule _Module;
#include <atlcom.h>

//gdiplus 
#include <comdef.h>//初始化一下com口 
#ifndef ULONG_PTR 
#define ULONG_PTR unsigned long* 
#include <gdiplus.h>
using namespace Gdiplus; 
#endif 

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__39466FB0_F8A2_41F8_81D7_ED6732B17FE6__INCLUDED)
