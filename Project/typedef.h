#ifndef __TYPEDEF_H__
#define __TYPEDEF_H__

// ·�����ֵ
#ifndef _MAX_PATH
	#define _MAX_PATH 260
#endif

// Ŀ¼�ָ���.Windows:"\";UNIX:"/".
#if defined(WIN32) || defined(OS2) || defined(__DOS__)
	#define DIR_MARKER '\\'
	#define DIR_MARKER_STR "\\"
#else
	#define DIR_MARKER '/'
	#define DIR_MARKER_STR "/"
#endif

// ���з�.Windows:"\r\n";UNIX:"\r".
#if defined(WIN32) || defined(OS2) || defined(__DOS__)
	#define LINE_END_MARKER_STR "\r\n"
#else
	#define LINE_END_MARKER_STR "\n"
#endif

// �����ַ���ת��
#if _UNICODE
	#define _T(x)      L ## x
#else
	#define _T(x)      x
#endif

// NUL����
#ifdef WIN32
	#define NUL 0
#else
	#define NUL '\0'
#endif

// NULL����
#ifndef NULL
	#ifdef  __cplusplus
		#define NULL    0
	#else
		#define NULL    ((void *)0)
	#endif
#endif

// �������Ͷ���
#if _UNICODE
	typedef wchar_t tchar;
	typedef unsigned short utchar;//wchar_t = unsigned short
#else
	typedef char tchar;
	typedef unsigned char utchar;
#endif

typedef signed char			int8;
typedef signed short		int16;
typedef signed int			int32;
typedef signed __int64		int64;

typedef unsigned char		uint8;
typedef unsigned short		uint16;
typedef unsigned int		uint32;
typedef unsigned __int64	uint64;

typedef unsigned short      ushort;
typedef unsigned int		uint;
typedef unsigned long       ulong;

typedef signed long			long32;
typedef unsigned long		ulong32;

typedef unsigned char       byte;
typedef unsigned short      word;
typedef unsigned long       dword;

#endif //__TYPEDEF_H__