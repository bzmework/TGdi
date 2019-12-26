
#include "dictionary.h"

CDictionary::CDictionary()
{
	m_dic = Dictionary_New(0);
}

CDictionary::CDictionary(int size)
{
	m_dic = Dictionary_New(size);
}

CDictionary::~CDictionary()
{
	Dictionary_Del();
	m_dic = NULL;
}

/*
@name:		dictionary_new
@memo:		Create a new dictionary object.
@param:		size Optional initial size of the dictionary.
@return:	1 newly allocated dictionary objet.
@doc

This function allocates a new dictionary object of given size and returns it. 
If you do not know in advance (roughly) the number of entries in the dictionary, give size=0.
这个函数分配一个给定大小的新dictionary对象并返回它。如果您事先(粗略地)不知道字典的大小, 则设置size=0。
*/
dictionary* CDictionary::Dictionary_New(int size)
{
	dictionary*	d = NULL;

	/* 
	If no size was specified, allocate space for one variable 
	如果没有指定大小，则为一个变量分配空间
	*/
	if (size < 1) size = 1;
	d = (dictionary*) malloc(sizeof(dictionary));
	d->n = 0;
	d->size = size;
	d->val = (tchar **)malloc(size * sizeof(tchar*));
	d->key = (tchar **)malloc(size * sizeof(tchar*));
	d->hash = (uint*) malloc(size * sizeof(uint));
	return d;
}

//
// 函数：Dictionary_Del
// 功能：销毁字典
// 参数：无
// 返回：无
//
void CDictionary::Dictionary_Del()
{
	int	i = 0;

	if (m_dic == NULL) return;
	
	//循环字典项目，释放每个项目占用的内存空间
	for (i=0; i<m_dic->n; i++) 
	{
		if (m_dic->val[i] != NULL)
			free(m_dic->val[i]);
		if (m_dic->key[i] != NULL)
			free(m_dic->key[i]);
	}
	free(m_dic->val);
	free(m_dic->key);
	free(m_dic->hash);
	free(m_dic);
}

//
// 函数：Clear
// 功能：清除字典对象，并释放内存
// 参数：无
// 返回：无
//
void CDictionary::Clear()
{
	Dictionary_Del();
	m_dic = Dictionary_New(0);
}

//
// 函数：Count
// 功能：返回字典中项目的数量
// 参数：无
// 返回：无
//
int CDictionary::Count() const
{
	return ((m_dic->n != 0)?m_dic->n:0);
}
 
//
// 函数：Item
// 功能：获取字典项目
// 参数：key，关键字
// 返回：字典项目或NULL
//
tchar* CDictionary::Item(tchar* key)
{
	uint hash = 0;
	int	i = 0;

	hash = Dictionary_Hash(key);
	for (i=0; i<m_dic->n; i++) 
	{
		if (hash == m_dic->hash[i]) 
		{
			if (key[0] == m_dic->key[i][0]) 
			{
				return m_dic->val[i] ;
			}
		}
	}
	return NULL;
}

//
// 函数：Add
// 功能：向字典中增加一个字符串值
// 参数：key，关键字
// 返回：字典项目或NULL
//
void CDictionary::Add(tchar* key, tchar* val)
{
	int	i = 0;
	uint hash = 0;

	if (m_dic == NULL || key == NULL) return;
	
	/* 
	Compute hash for this key 
	计算此键的哈希值
	*/
	hash = Dictionary_Hash(key) ;

	/* 
	Find if value is already in blackboard 
	查找黑板中是否已有值
	*/
	if (m_dic->n>0) 
	{
		for (i=0; i<m_dic->n; i++) 
		{
			if (hash == m_dic->hash[i]) //找到
			{  
				if (key[0] == m_dic->key[i][0]) 
				{
					if (m_dic->val[i] != NULL)
						free(m_dic->val[i]);
					if (val != NULL) 
						m_dic->val[i] = Utility::strdup(val); //_tstrdup(val);
					else 
						m_dic->val[i] = NULL;
					return;
				}
			}
		}
	}

	/* 
	Add a new value 
	添加一个新值
	*/

	/*
	See if dictionary needs allocation 
	查看dictionary是否需要分配空间
	*/
	if (m_dic->n == m_dic->size) 
	{
		/* 
		Reached maximum size: reallocate blackboard 
		达到最大尺寸:重新分配黑板
		*/
		m_dic->val = (tchar**) MemCopyDouble(m_dic->val, m_dic->size * sizeof(tchar*)) ;
		m_dic->key = (tchar**) MemCopyDouble(m_dic->key, m_dic->size * sizeof(tchar*)) ;
		m_dic->hash = (uint*) MemCopyDouble(m_dic->hash, m_dic->size * sizeof(uint)) ;

		/* 
		Double size 
		两倍大小
		*/
		m_dic->size *= 2 ;
	}

	/* 
	Copy key 
	复制键
	*/
	m_dic->key[m_dic->n] = Utility::strdup(key); //_tstrdup(key);
	if (val != NULL) 
	{
		m_dic->val[m_dic->n] = Utility::strdup(val); //_tstrdup(val);
	} else 
	{
		m_dic->val[m_dic->n] = NULL;
	}
	m_dic->hash[m_dic->n] = hash;

	/* 
	字典项目+1
	*/
	m_dic->n++;
}


//
// 函数：Add
// 功能：向字典中增加一个整型值
// 参数：key，关键字
// 返回：字典项目或NULL
//
void CDictionary::Add(tchar* key, int val)
{
	tchar sval[MAXVALSZ];
	//_tsprintf_s(sval, _T("%d"), val);
	Utility::format(sval, _T("%d"), val);
	Add(key, sval);
}

//
// 函数：Add
// 功能：向字典中增加一个双精度值
// 参数：key，关键字
// 返回：字典项目或NULL
//
void CDictionary::Add(tchar* key, double val)
{
	tchar sval[MAXVALSZ];
	//_tsprintf_s(sval, _T("%g"), val);
	Utility::format(sval, _T("%g"), val);
	Add(key, sval);
}

//
// 函数：Add
// 功能：向字典中增加一个双精度值
// 参数：key，关键字
// 返回：字典项目或NULL
//
//void CDictionary::Ddictionary_Dump(dictionary* d, FILE* out)
//{
//	int	i = 0;
//
//	if (d==NULL || out==NULL) return ;
//	if (d->n<1) 
//	{
//		fprintf(out, "empty dictionary\n");
//		return ;
//	}
//	for (i=0 ; i<d->n ; i++) {
//		fprintf(out, "%20s\t[%s]\n", d->key[i], d->val[i]);
//	}
//}

/* 
Doubles the allocated size associated to a pointer
'size' is the current allocated size.
将分配给指针的大小加倍
“size”是当前分配的大小。
*/
void* CDictionary::MemCopyDouble(void * ptr, int size)
{
    void* newptr = NULL;
 
    newptr = calloc(2*size, 1);
    Utility::memcpy(newptr, ptr, size);
    free(ptr);
    return newptr ;
}

/*
@name		dictionary_hash
@memo		Compute the hash key for a string.
@param	key		Character string to use for key.
@return	1 unsigned int on at least 32 bits.
@doc

This hash function has been taken from an Article in Dr Dobbs Journal.
This is normally a collision-free function, distributing keys evenly.
The key is stored anyway in the struct so that collision can be avoided
by comparing the key itself in last resort.
这个哈希函数是从Dobbs博士期刊上的一篇文章中摘录的。
这通常是一个无碰撞的函数，均匀地分布键。
键以任何方式存储在struct中，这样就可以通过最后比较键本身来避免冲突。
*/
unsigned int CDictionary::Dictionary_Hash(tchar * key)
{
	uint len = 0;
	uint hash = 0;
	uint i = 0;

	len = Utility::strlen(key); //_tstrlen(key);
	for (hash=0, i=0; i<len; i++) 
	{
		hash += (uint)key[i];
		hash += (hash<<10);
		hash ^= (hash>>6);
	}
	hash += (hash <<3);
	hash ^= (hash >>11);
	hash += (hash <<15);
	return hash;
}