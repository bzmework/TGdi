#include "utility.h"

//#pragma region 字符串操作

//字符串匹配
bool Utility::match(const tchar* text, const tchar* filter)
{
	if(text == NULL || filter == NULL)
	{
		return false;
	}

	const tchar* cp = NULL;
	const tchar* mp = NULL;
	while((*text) && (*filter != _T('*')))
	{
		if ((*filter != *text) && (*filter != _T('?'))) return false;
		filter++;
		text++;
	}

	while (*text) 
	{
		if (*filter == _T('*')) 
		{
			if (!*++filter) return true;
			mp = filter;
			cp = text + 1;
		} 
		else if ((*filter == *text) || (*filter == _T('?'))) 
		{
			filter++;
			text++;
		}
		else 
		{
			filter = mp;
			text = cp++;
		}
	}

	while (*filter == _T('*')) 
	{
		filter++;
	}

	return !*filter;
}

uint32 Utility::strlen(const tchar* str)
{
	/*
	const tchar* eos = str;
	while (*eos++);
	return (int) (eos - str - 1);
	*/

	const tchar* char_ptr;
	const ulong* longword_ptr;
	ulong longword, magic_bits, himagic, lomagic;

	/* Handle the first few characters by reading one character at a time.
	   Do this until CHAR_PTR is aligned on a longword boundary.  */
	for (char_ptr = str; ((ulong) char_ptr & (sizeof(longword) - 1)) != 0; ++char_ptr)
		if (*char_ptr == NUL)
			return char_ptr - str;

	/* All these elucidatory comments refer to 4-byte longwords,
       but the theory applies equally well to 8-byte longwords.  */
	longword_ptr = (ulong*) char_ptr;

	/* Bits 31, 24, 16, and 8 of this number are zero.  Call these bits
	   the "holes."  Note that there is a hole just to the left of
	   each byte, with an extra at the end:

	   bits:  01111110 11111110 11111110 11111111
	   bytes: AAAAAAAA BBBBBBBB CCCCCCCC DDDDDDDD

       The 1-bits make sure that carries propagate to the next 0-bit.
	   The 0-bits provide holes for carries to fall into.  */
	magic_bits = 0x7efefeffL;
	himagic = 0x80808080L;
	lomagic = 0x01010101L;
	if (sizeof(longword) > 4)
    {
		/* 64-bit version of the magic.  */
		/* Do the shift in two steps to avoid a warning if long has 32 bits.  */
		magic_bits = ((0x7efefefeL << 16) << 16) | 0xfefefeffL;
		himagic = ((himagic << 16) << 16) | himagic;
		lomagic = ((lomagic << 16) << 16) | lomagic;
    }
	//if (sizeof (longword) > 8)
	//	abort();

	/* Instead of the traditional loop which tests each character,
	   we will test a longword at a time.  The tricky part is testing
       if *any of the four* bytes in the longword in question are zero.  */
	for (;;)
    {
		/* We tentatively exit the loop if adding MAGIC_BITS to
		   LONGWORD fails to change any of the hole bits of LONGWORD.

		   1) Is this safe?  Will it catch all the zero bytes?
		   Suppose there is a byte with all zeros.  Any carry bits
		   propagating from its left will fall into the hole at its
		   least significant bit and stop.  Since there will be no
		   carry from its most significant bit, the LSB of the
		   byte to the left will be unchanged, and the zero will be
		   detected.

		   2) Is this worthwhile?  Will it ignore everything except
		   zero bytes?  Suppose every byte of LONGWORD has a bit set
		   somewhere.  There will be a carry into bit 8.  If bit 8
		   is set, this will carry into bit 16.  If bit 8 is clear,
		   one of bits 9-15 must be set, so there will be a carry
		   into bit 16.  Similarly, there will be a carry into bit
		   24.  If one of bits 24-30 is set, there will be a carry
		   into bit 31, so all of the hole bits will be changed.

		   The one misfire occurs when bits 24-30 are clear and bit
		   31 is set; in this case, the hole at bit 31 is not
		   changed.  If we had access to the processor carry flag,
		   we could close this loophole by putting the fourth hole
		   at bit 32!

		   So it ignores everything except 128's, when they're aligned
		   properly.  */

		longword = *longword_ptr++;

		if (
			#if 0
				  /* Add MAGIC_BITS to LONGWORD.  */
				  (((longword + magic_bits)

					/* Set those bits that were unchanged by the addition.  */
					^ ~longword)

				   /* Look at only the hole bits.  If any of the hole bits
					  are unchanged, most likely one of the bytes was a
					  zero.  */
				   & ~magic_bits)
			#else
				  ((longword - lomagic) & himagic)
			#endif
		!= 0)
		{
			/* Which of the bytes was the zero?  If none of them were, it was
			   a misfire; continue the search.  */

			const tchar* cp = (const tchar*) (longword_ptr - 1);

			if (cp[0] == 0)
				return cp - str;
			if (cp[1] == 0)
				return cp - str + 1;
			if (cp[2] == 0)
				return cp - str + 2;
			if (cp[3] == 0)
				return cp - str + 3;
			if (sizeof (longword) > 4)
			{
				if (cp[4] == 0)
					return cp - str + 4;
				if (cp[5] == 0)
					return cp - str + 5;
				if (cp[6] == 0)
					return cp - str + 6;
				if (cp[7] == 0)
					return cp - str + 7;
			}
		}
    }
}

uint32 Utility::strnlen(const tchar* str, uint32 maxlen)
{
	/*
	const tchar* sc;
	for (sc = s; *sc != NUL && maxlen--; ++sc);
	return sc - s;
	*/

	const tchar* char_ptr;
	const tchar* end_ptr = str + maxlen;
	const ulong* longword_ptr;
	ulong longword, magic_bits, himagic, lomagic;

	if (maxlen == 0)
		return 0;

	/* Handle the first few characters by reading one character at a time.
	   Do this until CHAR_PTR is aligned on a longword boundary.  */
	for (char_ptr = str; ((ulong) char_ptr & (sizeof(longword) - 1)) != 0; ++char_ptr)
	{
		if (*char_ptr == NUL)
		{
			if (char_ptr > end_ptr)
				char_ptr = end_ptr;
			return char_ptr - str;
		}
	}
	
	/* All these elucidatory comments refer to 4-byte longwords,
       but the theory applies equally well to 8-byte longwords.  */
	longword_ptr = (ulong*) char_ptr;

	/* Bits 31, 24, 16, and 8 of this number are zero.  Call these bits
       the "holes."  Note that there is a hole just to the left of
       each byte, with an extra at the end:

       bits:  01111110 11111110 11111110 11111111
       bytes: AAAAAAAA BBBBBBBB CCCCCCCC DDDDDDDD

       The 1-bits make sure that carries propagate to the next 0-bit.
       The 0-bits provide holes for carries to fall into.  */
	magic_bits = 0x7efefeffL;
	himagic = 0x80808080L;
	lomagic = 0x01010101L;
	if (sizeof (longword) > 4)
    {
		/* 64-bit version of the magic.  */
		/* Do the shift in two steps to avoid a warning if long has 32 bits.  */
		magic_bits = ((0x7efefefeL << 16) << 16) | 0xfefefeffL;
		himagic = ((himagic << 16) << 16) | himagic;
		lomagic = ((lomagic << 16) << 16) | lomagic;
    }
	//if (sizeof (longword) > 8)
	//	abort();

	/* Instead of the traditional loop which tests each character,
       we will test a longword at a time.  The tricky part is testing
       if *any of the four* bytes in the longword in question are zero.  */
	while (longword_ptr < (ulong*) end_ptr)
    {
		/* We tentatively exit the loop if adding MAGIC_BITS to
		   LONGWORD fails to change any of the hole bits of LONGWORD.

		   1) Is this safe?  Will it catch all the zero bytes?
		   Suppose there is a byte with all zeros.  Any carry bits
		   propagating from its left will fall into the hole at its
		   least significant bit and stop.  Since there will be no
		   carry from its most significant bit, the LSB of the
		   byte to the left will be unchanged, and the zero will be
		   detected.

		   2) Is this worthwhile?  Will it ignore everything except
		   zero bytes?  Suppose every byte of LONGWORD has a bit set
		   somewhere.  There will be a carry into bit 8.  If bit 8
		   is set, this will carry into bit 16.  If bit 8 is clear,
		   one of bits 9-15 must be set, so there will be a carry
		   into bit 16.  Similarly, there will be a carry into bit
		   24.  If one of bits 24-30 is set, there will be a carry
		   into bit 31, so all of the hole bits will be changed.

		   The one misfire occurs when bits 24-30 are clear and bit
		   31 is set; in this case, the hole at bit 31 is not
		   changed.  If we had access to the processor carry flag,
		   we could close this loophole by putting the fourth hole
		   at bit 32!

	       So it ignores everything except 128's, when they're aligned
		   properly.  */

		longword = *longword_ptr++;

		if ((longword - lomagic) & himagic)
		{
			/* Which of the bytes was the zero?  If none of them were, it was
			   a misfire; continue the search.  */

			const tchar* cp = (const tchar*) (longword_ptr - 1);

			char_ptr = cp;
			if (cp[0] == 0)
				break;
			char_ptr = cp + 1;
			if (cp[1] == 0)
				break;
			char_ptr = cp + 2;
			if (cp[2] == 0)
				break;
			char_ptr = cp + 3;
			if (cp[3] == 0)
				break;
			if (sizeof(longword) > 4)
			{
				char_ptr = cp + 4;
				if (cp[4] == 0)
					break;
				char_ptr = cp + 5;
				if (cp[5] == 0)
					break;
				char_ptr = cp + 6;
				if (cp[6] == 0)
					break;
				char_ptr = cp + 7;
				if (cp[7] == 0)
					break;
			}
		}
		char_ptr = end_ptr;
    }

	if (char_ptr > end_ptr)
		char_ptr = end_ptr;
	return char_ptr - str;
}

tchar* Utility::strdup(const tchar* s)
{
	tchar *t;
	int32 len;

	if (!s) return NULL;
	len = strlen(s);
	t = (tchar*) malloc(len + 1);
	memcpy(t, s, len + 1);
	return t;
}

tchar* Utility::strcpy(tchar* dst, const tchar* src)
{
	/*
	tchar* cp = dst;
	while (*cp++ = *src++);
	return dst;
	*/

	register tchar c;
	tchar* s = (tchar*) src;
	const uint32 off = dst - s - 1;
	uint32 n;

	do
	{
		c = *s++;
		s[off] = c;
    }
	while (c != NUL);

	n = s - src;

	return dst;
}

tchar* Utility::strncpy(tchar* dst, const tchar* src, uint32 n)
{
	/*
	tchar* start = dst;
	while (n && (*dst++ = *src++)) n--;
	if (n) while (--count) *dest++ = NUL;
	return start;
	*/

	register tchar c;
	tchar *s = dst;

	--dst;

	if (n >= 4)
    {
		uint32 n4 = n >> 2;

		for (;;)
		{
			c = *src++;
			*++dst = c;
			if (c == NUL) 
				break;

			c = *src++;
			*++dst = c;
			if (c == NUL)
				break;

			c = *src++;
			*++dst = c;
			if (c == NUL)
				break;
	  
			c = *src++;
			*++dst = c;
			if (c == NUL)
				break;

			if (--n4 == 0)
				goto last_chars;
		}
		n = n - (dst - s) - 1;
		if (n == 0)
			return s;
		goto zero_fill;
    }

 last_chars:
	n &= 3;
	if (n == 0)
		return s;

	do
	{
		c = *src++;
		*++dst = c;
		if (--n == 0)
			return s;
	}
	while (c != NUL);

zero_fill:
	do
		*++dst = NUL;
	while (--n > 0);

	return s;
}

/* Append SRC on the end of DEST.  */
tchar* Utility::strcat(tchar* dst, const tchar* src)
{
	/*	
	tchar* cp = dst;
	while (*cp) cp++;
	while (*cp++ = *src++);
	return dst;
	*/

	tchar *s1 = dst;
	const tchar *s2 = src;
	register tchar c;

	//Find the end of the string.
	do
		c = *s1++;
	while (c != NUL);

	//Make S1 point before the next character, so we can increment
	//it while memory is read (wins on pipelined cpus).
	s1 -= 2;

	do
	{
		c = *s2++;
		*++s1 = c;
	}
	while (c != NUL);

	return dst;
}


tchar* Utility::strncat(tchar* dst, const tchar* src, uint32 n)
{
	/*	
	tchar* start = dst;

	while (*dst++);
	dst--;

	while (n--)
	{
		if (!(*dst++ = *src++)) return start;
	}

	*dst = NUL;
	return start;
	*/

	register tchar c;
	tchar *s = dst;

	//Find the end of dst.
	do
		c = *dst++;
	while (c != NUL);

	//Make dst point before next character, so we can increment
    //it while memory is read (wins on pipelined cpus).
	dst -= 2;

	if (n >= 4)
    {
		uint32 n4 = n >> 2;
		do
		{
			c = *src++;
			*++dst = c;
			if (c == NUL)
				return s;

			c = *src++;
			*++dst = c;
			if (c == NUL)
				return s;

			c = *src++;
			*++dst = c;
			if (c == NUL)
				return s;

			c = *src++;
			*++dst = c;
			if (c == NUL)
				return s;
		} while (--n4 > 0);
		n &= 3;
    }

	while (n > 0)
    {
		c = *src++;
		*++dst = c;
		if (c == NUL)
			return s;
		n--;
    }

	if (c != NUL)
		*++dst = NUL;

	return s;
}

/* Compare S1 and S2, returning less than, equal to or
   greater than zero if S1 is lexicographically less than,
   equal to or greater than S2.  */
int32 Utility::strcmp(const tchar* str1, const tchar* str2)
{
	/*	
	int32 ret = 0;
	while (!(ret = *(utchar*) str1 - *(utchar*) str2) && *str2) 
	  ++str1, ++str2;

	if (ret < 0)
		ret = -1;
	else if (ret > 0)
		ret = 1 ;

	return ret;
	*/

	register const utchar* s1 = (const utchar*) str1;
	register const utchar* s2 = (const utchar*) str2;
	register utchar c1, c2;

	do
    {
		c1 = (utchar) *s1++;
		c2 = (utchar) *s2++;
		if (c1 == NUL)
			return c1 - c2;
    }
	while (c1 == c2);

	return c1 - c2;
}

/* Compare no more than N characters of S1 and S2,
   returning less than, equal to or greater than zero
   if S1 is lexicographically less than, equal to or
   greater than S2.  */
int32 Utility::strncmp(const tchar* str1, const tchar* str2, uint32 n)
{
	/*
	if (!n) return 0;
	while (--n && *str1 && *str2 == *s2)
	{
		s1++;
		s2++;
	}
	return *(utchar*) str1 - *(utchar*) str2;
	*/

	register utchar c1 = NUL;
	register utchar c2 = NUL;

	if (n >= 4)
    {
		uint32 n4 = n >> 2;
		do
		{
			c1 = (utchar) *str1++;
			c2 = (utchar) *str2++;
			if (c1 == NUL || c1 != c2)
				return c1 - c2;

			c1 = (utchar) *str1++;
			c2 = (utchar) *str2++;
			if (c1 == NUL || c1 != c2)
				return c1 - c2;
	  
			c1 = (utchar) *str1++;
			c2 = (utchar) *str2++;
			if (c1 == NUL || c1 != c2)
				return c1 - c2;
	  
			c1 = (utchar) *str1++;
			c2 = (utchar) *str2++;
			if (c1 == NUL || c1 != c2)
			return c1 - c2;
		} while (--n4 > 0);
		n &= 3;
    }

	while (n > 0)
    {
		c1 = (utchar) *str1++;
		c2 = (utchar) *str2++;
		if (c1 == NUL || c1 != c2)
			return c1 - c2;
		n--;
    }

	return c1 - c2;
}

int32 Utility::stricmp(const tchar* str1, const tchar* str2)
{
	tchar f, l;

	do 
	{
		f = ((*str1 <= _T('Z')) && (*str1 >= _T('A'))) ? *str1 + _T('a') - _T('A') : *str1;
		l = ((*str2 <= _T('Z')) && (*str2 >= _T('A'))) ? *str2 + _T('a') - _T('A') : *str2;
		str1++;
		str2++;
	} while ((f) && (f == l));

	return (int32) (f - l);
}

int32 Utility::strnicmp(const tchar* str1, const tchar* str2, uint32 n)
{
	int32 f, l;

	do 
	{
		if (((f = (utchar)(*(str1++))) >= _T('A')) && (f <= _T('Z'))) f -= _T('A') - _T('a');
		if (((l = (utchar)(*(str2++))) >= _T('A')) && (l <= _T('Z'))) l -= _T('A') - _T('a');
	} while (--n && f && (f == l));

	return f - l;
}

void* Utility::memmove(void* dst, const void* src, uint32 n)
{
	void* ret = dst;

	if (dst <= src || (tchar*) dst >= ((tchar*) src + n)) 
	{
		//Non-Overlapping Buffers
		//copy from lower addresses to higher addresses
		while(n--) 
		{
			*(tchar*) dst = *(tchar*) src;
			dst = (tchar*) dst + 1;
			src = (tchar*) src + 1;
		}
	}
	else 
	{
		//Overlapping Buffers
		//copy from higher addresses to lower addresses
		dst = (tchar*) dst + n - 1;
		src = (tchar*) src + n - 1;

		while(n--) 
		{
		  *(tchar*) dst = *(tchar*) src;
		  dst = (tchar*) dst - 1;
		  src = (tchar*) src - 1;
		}
	}

	return ret;
}

void* Utility::memcpy(void* dst, const void* src, uint32 n)
{
	void* ret = dst;

	while (n--)
	{
		*(tchar*)dst = *(tchar*)src;
		dst = (tchar*) dst + 1;
		src = (tchar*) src + 1;
	}

	return ret;
	

	//asm volatile("movl %0, %%edi \n"
 //                "movl %1, %%esi \n"
 //                "movl %2, %%ecx \n"
 //                "cld            \n"
 //                "rep            \n"
 //                "movsb          \n"
 //                : /* no output */
 //                : "m"(dst), "m"(src), "m"(n)
 //                : "edi", "esi", "ecx");

    return dst;
}

void* Utility::memset(void* dst, int32 c, uint32 n)
{
	tchar* pb = (tchar*) dst;
	tchar* pbend = pb + n;
	while (pb != pbend) *pb++ = c;
	return dst;
}

int32 Utility::memcmp(const void* dst, const void* src, uint32 n)
{
	if (!n) return 0;

	while (--n && *(tchar*) dst == *(tchar*) src)
	{
		dst = (tchar*) dst + 1;
		src = (tchar*) src + 1;
	}

	return *((utchar*) dst) - 
		*((utchar*) src);
}

//#pragma endregion

//#pragma region 字符串格式化

tchar* Utility::digits = _T("0123456789abcdefghijklmnopqrstuvwxyz");
tchar* Utility::upperdigits = _T("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ");

tchar* Utility::cvt(double arg, int32 ndigits, int32* decpt, int32* sign, tchar* buf, int32 eflag)
{
	int32 r2;
	double fi, fj;
	tchar *p, *p1;

	if (ndigits < 0) ndigits = 0;
	if (ndigits >= CVTBUFSIZE - 1) ndigits = CVTBUFSIZE - 2;

	r2 = 0;
	*sign = 0;
	p = &buf[0];
	if (arg < 0)
	{
		*sign = 1;
		arg = -arg;
	}
	arg = modf(arg, &fi);
	p1 = &buf[CVTBUFSIZE];

	if (fi != 0) 
	{
		p1 = &buf[CVTBUFSIZE];
		while (fi != 0) 
		{
			fj = modf(fi / 10, &fi);
			*--p1 = (int32)((fj + .03) * 10) + _T('0');
			r2++;
		}
		while (p1 < &buf[CVTBUFSIZE]) 
			*p++ = *p1++;
	} 
	else if (arg > 0)
	{
		while ((fj = arg * 10) < 1) 
		{
			arg = fj;
			r2--;
		}
	}
	p1 = &buf[ndigits];
	if (eflag == 0) p1 += r2;
	*decpt = r2;
	if (p1 < &buf[0]) 
	{
		buf[0] = NUL;
		return buf;
	}
	while (p <= p1 && p < &buf[CVTBUFSIZE])
	{
		arg *= 10;
		arg = modf(arg, &fj);
		*p++ = (int) fj + _T('0');
	}
	if (p1 >= &buf[CVTBUFSIZE]) 
	{
		buf[CVTBUFSIZE - 1] = _T('\0');
		return buf;
	}
	p = p1;
	*p1 += 5;
	while (*p1 > _T('9')) 
	{
		*p1 = _T('0');
		if (p1 > buf)
			++*--p1;
		else 
		{
			*p1 = _T('1');
			(*decpt)++;
			if (eflag == 0) 
			{
				if (p > buf) *p = _T('0');
				p++;
			}
		}
	}
	*p = NUL;
	return buf;
}

tchar* Utility::ecvtbuf(double arg, int32 ndigits, int32* decpt, int32* sign, tchar* buf)
{
	return cvt(arg, ndigits, decpt, sign, buf, 1);
}

tchar* Utility::fcvtbuf(double arg, int32 ndigits, int32* decpt, int32* sign, tchar* buf)
{
	return cvt(arg, ndigits, decpt, sign, buf, 0);
}

void Utility::cfltcvt(double value, tchar* buffer, tchar fmt, int32 precision)
{
	int32 decpt, sign, exp, pos;
	tchar* digits = NULL;
	tchar cvtbuf[80];
	int32 capexp = 0;
	int32 magnitude;

	if (fmt == _T('G') || fmt == _T('E'))
	{
		capexp = 1;
		fmt += _T('a') - _T('A');
	}

	if (fmt == _T('g'))
	{
		digits = ecvtbuf(value, precision, &decpt, &sign, cvtbuf);
		magnitude = decpt - 1;
		if (magnitude < -4  ||  magnitude > precision - 1)
		{
			fmt = _T('e');
			precision -= 1;
		}
		else
		{
			fmt = _T('f');
			precision -= decpt;
		}
	}

	if (fmt == _T('e'))
	{
		digits = ecvtbuf(value, precision + 1, &decpt, &sign, cvtbuf);

		if (sign) *buffer++ = _T('-');
			*buffer++ = *digits;
		if (precision > 0) 
			*buffer++ = _T('.');
		memcpy(buffer, digits + 1, precision);
		buffer += precision;
		*buffer++ = capexp ? _T('E') : _T('e');

		if (decpt == 0)
		{
			if (value == 0.0)
				exp = 0;
			else
				exp = -1;
		}
		else
			exp = decpt - 1;

		if (exp < 0)
		{
			*buffer++ = _T('-');
			exp = -exp;
		}
		else
			*buffer++ = _T('+');

		buffer[2] = (exp % 10) + _T('0');
		exp = exp / 10;
		buffer[1] = (exp % 10) + _T('0');
		exp = exp / 10;
		buffer[0] = (exp % 10) + _T('0');
		buffer += 3;
	}
	else if (fmt == _T('f'))
	{
		digits = fcvtbuf(value, precision, &decpt, &sign, cvtbuf);
		if (sign) 
			*buffer++ = _T('-');
		if (*digits)
		{
			if (decpt <= 0)
			{	
				*buffer++ = _T('0');
				*buffer++ = _T('.');
				for (pos = 0; pos < -decpt; pos++) 
					*buffer++ = _T('0');
				while (*digits) 
					*buffer++ = *digits++;
			}
			else
			{
				pos = 0;
				while (*digits)
				{
					if (pos++ == decpt) 
						*buffer++ = _T('.');
					*buffer++ = *digits++;
				}
			}
		}
		else
		{
			*buffer++ = _T('0');
			if (precision > 0)
			{
				*buffer++ = _T('.');
				for (pos = 0; pos < precision; pos++) 
					*buffer++ = _T('0');
			}
		}
	}

	*buffer = NUL;
}

void Utility::forcdecpt(tchar* buffer)
{
	while (*buffer)
	{
		if (*buffer == _T('.')) return;
		if (*buffer == _T('e') || *buffer == _T('E')) break;
		buffer++;
	}

	if (*buffer)
	{
		int n = strlen(buffer);
		while (n > 0) 
		{
			buffer[n + 1] = buffer[n];
			n--;
		}

		*buffer = _T('.');
	}
	else
	{
		*buffer++ = _T('.');
		*buffer = NUL;
	}
}

void Utility::cropzeros(tchar* buffer)
{
	tchar* stop;

	while (*buffer && *buffer != _T('.')) 
		buffer++;
	if (*buffer++)
	{
		while (*buffer && *buffer != _T('e') && *buffer != _T('E')) 
			buffer++;
		stop = buffer--;
		while (*buffer == _T('0')) 
			buffer--;
		if (*buffer == _T('.')) 
			buffer--;
		while (*++buffer = *stop++);
	}
}

tchar* Utility::flt(tchar* str, double num, int32 size, int32 precision, tchar fmt, int32 flags)
{
	tchar tmp[80];
	tchar c, sign;
	int32 n, i;

	// Left align means no zero padding
	if (flags & LEFT) flags &= ~ZEROPAD;

	// Determine padding and sign char
	c = (flags & ZEROPAD) ? _T('0') : _T(' ');
	sign = 0;
	if (flags & SIGN)
	{
		if (num < 0.0)
		{
			sign = _T('-');
			num = -num;
			size--;
		}
		else if (flags & PLUS)
		{
			sign = _T('+');
			size--;
		}
		else if (flags & SPACE)
		{
			sign = _T(' ');
			size--;
		}
	}

	// Compute the precision value
	if (precision < 0)
		precision = 6; // Default precision: 6
	else if (precision == 0 && fmt == _T('g'))
		precision = 1; // ANSI specified

	// Convert floating point number to text
	cfltcvt(num, tmp, fmt, precision);

	// '#' and precision == 0 means force a decimal point
	if ((flags & SPECIAL) && precision == 0) forcdecpt(tmp);

	// 'g' format means crop zero unless '#' given
	if (fmt == _T('g') && !(flags & SPECIAL)) cropzeros(tmp);

	n = strlen(tmp);

	// Output number with alignment and padding
	size -= n;
	if (!(flags & (ZEROPAD | LEFT))) while (size-- > 0) *str++ = _T(' ');
	if (sign) *str++ = sign;
	if (!(flags & LEFT)) while (size-- > 0) *str++ = c;
	for (i = 0; i < n; i++) *str++ = tmp[i];
	while (size-- > 0) *str++ = _T(' ');

	return str;
}

int32 Utility::strnlen(const tchar* str, int32 count)
{
	const tchar* sc;
	for (sc = str; *sc != NUL && count--; ++sc);
	return sc - str;
}

int32 Utility::skipatoi(const tchar** s)
{
	int32 i = 0;
	while (isdigit(**s)) 
		i = i*10 + *((*s)++) - _T('0');
	return i;
}

tchar* Utility::number(tchar* str, long32 num, int32 base, int32 size, int32 precision, int32 type)
{
	tchar c, sign, tmp[66];
	tchar *dig = digits;
	int32 i;

	if (type & LARGE)  dig = upperdigits;
	if (type & LEFT) type &= ~ZEROPAD;
	if (base < 2 || base > 36) return 0;
  
	c = (type & ZEROPAD) ? _T('0') : _T(' ');
	sign = 0;
	if (type & SIGN)
	{
		if (num < 0)
		{
			sign = _T('-');
			num = -num;
			size--;
		}
		else if (type & PLUS)
		{
			sign = _T('+');
			size--;
		}
		else if (type & SPACE)
		{
			sign =	_T(' ');
			size--;
		}	
	}

	if (type & SPECIAL)
	{
		if (base == 16)
			size -= 2;
		else if (base == 8)
			size--;
	}

	i = 0;

	if (num == 0)
		tmp[i++] = _T('0');
	else
	{
		while (num != 0)
		{
			tmp[i++] = dig[((ulong32) num) % (unsigned) base];
			num = ((ulong) num) / (unsigned) base;
		}
	}

	if (i > precision) precision = i;
		size -= precision;
	if (!(type & (ZEROPAD | LEFT))) 
		while (size-- > 0) 
			*str++ = _T(' ');
	if (sign) *str++ = sign;
  
	if (type & SPECIAL)
	{
		if (base == 8)
			*str++ = _T('0');
		else if (base == 16)
		{
			*str++ = _T('0');
			*str++ = digits[33];
		}
	}

	if (!(type & LEFT)) 
		while (size-- > 0) 
			*str++ = c;
	while (i < precision--) 
		*str++ = _T('0');
	while (i-- > 0) 
		*str++ = tmp[i];
	while (size-- > 0) 
		*str++ = _T(' ');

	return str;
}

tchar* Utility::eaddr(tchar* str, utchar* addr, int32 size, int32 precision, int32 type)
{
	tchar tmp[24];
	tchar* dig = digits;
	int32 i, len;

	if (type & LARGE)  
		dig = upperdigits;
  
	len = 0;
	for (i = 0; i < 6; i++)
	{
		if (i != 0) tmp[len++] = _T(':');
		tmp[len++] = dig[addr[i] >> 4];
		tmp[len++] = dig[addr[i] & 0x0F];
	}

	if (!(type & LEFT)) 
		while (len < size--) 
			*str++ = _T(' ');
	for (i = 0; i < len; ++i) 
		*str++ = tmp[i];
	while (len < size--) 
		*str++ = _T(' ');

	return str;
}

tchar* Utility::iaddr(tchar* str, utchar* addr, int32 size, int32 precision, int32 type)
{
	tchar tmp[24];
	int32 i, n, len;

	len = 0;
	for (i = 0; i < 4; i++)
	{
		if (i != 0) tmp[len++] = _T('.');
			n = addr[i];
    
		if (n == 0)
			tmp[len++] = digits[0];
		else
		{
			if (n >= 100) 
			{
				tmp[len++] = digits[n / 100];
				n = n % 100;
				tmp[len++] = digits[n / 10];
				n = n % 10;
			}
			else if (n >= 10) 
			{
				tmp[len++] = digits[n / 10];
				n = n % 10;
			}

			tmp[len++] = digits[n];
		}
	}

	if (!(type & LEFT)) 
		while (len < size--) 
			*str++ = _T(' ');
	for (i = 0; i < len; ++i) 
		*str++ = tmp[i];
	while (len < size--) 
		*str++ = _T(' ');

	return str;
}

int32 Utility::vsprintf(tchar* buf, const tchar* fmt, va_list args)
{
	int32 len;
	ulong num;
	int32 i, base;
	tchar* str;
	tchar* s;

	int32 flags;            // Flags to number()

	int32 field_width;	// Width of output field
	int32 precision;	// Min. # of digits for integers; max number of chars for from string
	int32 qualifier;	// 'h', 'l', or 'L' for integer fields

	for (str = buf; *fmt; fmt++)
	{
		if (*fmt != _T('%'))
		{
			*str++ = *fmt;
			continue;
		}
		  
		// Process flags
		flags = 0;
repeat:
		fmt++; // This also skips first '%'
		switch (*fmt)
		{
		case _T('-'): flags |= LEFT; goto repeat;
		case _T('+'): flags |= PLUS; goto repeat;
		case _T(' '): flags |= SPACE; goto repeat;
		case _T('#'): flags |= SPECIAL; goto repeat;
		case _T('0'): flags |= ZEROPAD; goto repeat;
		}
	  
		// Get field width
		field_width = -1;
		if (isdigit(*fmt))
			field_width = skipatoi(&fmt);
		else if (*fmt == _T('*'))
		{
			fmt++;
			field_width = va_arg(args, int32);
			if (field_width < 0)
			{
				field_width = -field_width;
				flags |= LEFT;
			}
		}

		// Get the precision
		precision = -1;
		if (*fmt == _T('.'))
		{
			++fmt;	
			if (isdigit(*fmt))
				precision = skipatoi(&fmt);
			else if (*fmt == _T('*'))
			{
				++fmt;
				precision = va_arg(args, int32);
			}
			if (precision < 0) precision = 0;
		}

		// Get the conversion qualifier
		qualifier = -1;
		if (*fmt == _T('h') || *fmt == _T('l') || *fmt == _T('L'))
		{
			qualifier = *fmt;
			fmt++;
		}

		// Default base
		base = 10;

		switch (*fmt)
		{
		case _T('c'):
			if (!(flags & LEFT)) while (--field_width > 0) *str++ = _T(' ');
			*str++ = (utchar) va_arg(args, int32);
			while (--field_width > 0) *str++ = _T(' ');
			continue;

		case _T('s'):
			s = va_arg(args, tchar*);
			if (!s)	s = _T("<NULL>");
			len = strnlen(s, precision);
			if (!(flags & LEFT)) while (len < field_width--) *str++ = _T(' ');
			for (i = 0; i < len; ++i) *str++ = *s++;
			while (len < field_width--) *str++ = _T(' ');
			continue;

		case _T('p'):
			if (field_width == -1)
			{
				field_width = 2 * sizeof(void *);
				flags |= ZEROPAD;
			}
			str = number(str, (ulong) va_arg(args, void*), 16, field_width, precision, flags);
			continue;

		case _T('n'):
			if (qualifier == _T('l'))
			{
				long32* ip = va_arg(args, long32*);
				*ip = (str - buf);
			}
			else
			{
				int32 *ip = va_arg(args, int32*);
				*ip = (str - buf);
			}
			continue;

		case _T('A'):
			flags |= LARGE;

		case _T('a'):
			if (qualifier == _T('l'))
				str = eaddr(str, va_arg(args, utchar*), field_width, precision, flags);
			else
				str = iaddr(str, va_arg(args, utchar*), field_width, precision, flags);
			continue;

		// Integer number formats - set up the flags and "break"
		case _T('o'):
			base = 8;
			break;

		case _T('X'):
			flags |= LARGE;

		case _T('x'):
			base = 16;
			break;

		case _T('d'):
		case _T('i'):
			flags |= SIGN;

		case _T('u'):
			break;

		case _T('E'):
		case _T('G'):
		case _T('e'):
		case _T('f'):
		case _T('g'):
			str = flt(str, va_arg(args, double), field_width, precision, *fmt, flags | SIGN);
			continue;

		default:
			if (*fmt != _T('%')) *str++ = _T('%');
			if (*fmt)
				*str++ = *fmt;
			else
				--fmt;
			continue;
		}

		if (qualifier == _T('l'))
			num = va_arg(args, ulong);
		else if (qualifier == _T('h'))
		{
			if (flags & SIGN)
				num = va_arg(args, int16);
			else
				num = va_arg(args, uint16);
		}
		else if (flags & SIGN)
			num = va_arg(args, int32);
		else
			num = va_arg(args, uint32);

		str = number(str, num, base, field_width, precision, flags);
	}

	*str = NUL;
	return str - buf;
}

int32 Utility::format(tchar* dst, const tchar* fmt, ...)
{
	va_list args;
	int32 n;

	va_start(args, fmt);
	n = vsprintf(dst, fmt, args);
	va_end(args);

	return n;
}

//#pragma endregion