#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Text.RegularExpressions.MRUList
struct MRUList_t7274;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t7267  : public Object_t
{
	// System.Int32 System.Text.RegularExpressions.FactoryCache::capacity
	int32_t ___capacity;
	// System.Collections.Hashtable System.Text.RegularExpressions.FactoryCache::factories
	Hashtable_t4372 * ___factories;
	// System.Text.RegularExpressions.MRUList System.Text.RegularExpressions.FactoryCache::mru_list
	MRUList_t7274 * ___mru_list;
};
