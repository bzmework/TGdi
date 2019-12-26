#ifndef __DICTIONARY_H__
#define __DICTIONARY_H__

#include <stdlib.h>
#include "typedef.h"
#include "utility.h"

/* 
The following defines a maximum value size for integers and doubles. 
下面为整数和双精度数定义了最大值大小。
*/
#define MAXVALSZ 1024

typedef struct _dictionary
{
	int n;
	int size;
	tchar** val;
	tchar** key;
	uint* hash;
} dictionary;

class CDictionary
{
private:
	dictionary*	m_dic;
	inline void* MemCopyDouble(void* ptr, int size);
	inline uint Dictionary_Hash(tchar* key);
	inline dictionary* Dictionary_New(int size);	
	inline void Dictionary_Del();

public:
	CDictionary();
	CDictionary(int size);
	virtual ~CDictionary();

	/*inline*/ int Count() const;
	/*inline*/ tchar* Item(tchar* key);

	/*inline*/ void Add(tchar* key, tchar* val);
	/*inline*/ void Add(tchar* key, int val);
	/*inline*/ void Add(tchar* key, double val);
	/*inline*/ void Remove(tchar* key);
	/*inline*/ void Clear();

	/*inline*/ tchar* operator [](tchar* key){return Item(key);}
};

#endif //__DICTIONARY_H__
