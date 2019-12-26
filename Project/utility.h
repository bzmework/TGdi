#ifndef __UTILITY_H__
#define __UTILITY_H__

#include<stdarg.h>
#include<stdio.h>
#include<malloc.h>
#include<math.h>
#include "typedef.h"

#define ZEROPAD	1		// Pad with zero
#define SIGN	2		// Unsigned/signed long
#define PLUS	4		// Show plus
#define SPACE	8		// Space if plus
#define LEFT	16		// Left justified
#define SPECIAL	32		// 0x
#define LARGE	64		// Use 'ABCDEF' instead of 'abcdef'

#define CVTBUFSIZE		(309 + 43)

class Utility
{
public:

	static int32 hiword(int32 n) { return ((n >> 0x10) & 0xffff); }
	static int32 loword(int32 n) { return (n & 0xffff); }
	static int32 signedhiword(int32 n) { return (int16) ((n >> 0x10) & 0xffff); }
	static int32 signedloword(int32 n) { return (int16) (n & 0xffff); }
	static int32 makelong(int32 low, int32 high) { return ((high << 0x10) | (low & 0xffff)); }

	static bool isdigit(tchar c) { return ((c) >= _T('0') && (c) <= _T('9')); }
	
	static bool match(const tchar* text, const tchar* filter);

	static uint32 strlen(const tchar* str);
	static uint32 strnlen(const tchar* str, uint32 maxlen);

	static tchar* strdup(const tchar* s);

	static tchar* strcpy(tchar* dst, const tchar* src);
	static tchar* strncpy(tchar* dst, const tchar* src, uint32 n);

	static tchar* strcat(tchar* dst, const tchar* src);
	static tchar* strncat(tchar* dst, const tchar* src, uint32 n);

	static int32 strcmp(const tchar* str1, const tchar* str2);
	static int32 strncmp(const tchar* str1, const tchar* str2, uint32 n);

	static int32 stricmp(const tchar* str1, const tchar* str2);
	static int32 strnicmp(const tchar* str1, const tchar* str2, uint32 n);

	static void* memmove(void* dst, const void* src, uint32 n);
	static void* memcpy(void* dst, const void* src, uint32 n);
	static void* memset(void* dst, int32 c, uint32 n);
	static int32 memcmp(const void* dst, const void* src, uint32 n);

	static int32 format(tchar* dst, const tchar* fmt, ...);

private:
	static tchar* digits;
	static tchar* upperdigits;
	
	static tchar* cvt(double arg, int32 ndigits, int32* decpt, int32* sign, tchar* buf, int32 eflag);
	static tchar* ecvtbuf(double arg, int32 ndigits, int32* decpt, int32* sign, tchar* buf);
	static tchar* fcvtbuf(double arg, int32 ndigits, int32* decpt, int32* sign, tchar* buf);
	
	static void cfltcvt(double value, tchar* buffer, tchar fmt, int32 precision);
	static void forcdecpt(tchar* buffer);
	static void cropzeros(tchar* buffer);
	static tchar* flt(tchar* str, double num, int32 size, int32 precision, tchar fmt, int32 flags);

	static int32 strnlen(const tchar* str, int32 count);
	static int32 skipatoi(const tchar** s);
	static tchar* number(tchar* str, long32 num, int32 base, int32 size, int32 precision, int32 type);
	static tchar* eaddr(tchar* str, utchar* addr, int32 size, int32 precision, int32 type);
	static tchar* iaddr(tchar* str, utchar* addr, int32 size, int32 precision, int32 type);
	static int32 vsprintf(tchar* buf, const tchar* fmt, va_list args);
};
#endif  //__UTILITY_H__
