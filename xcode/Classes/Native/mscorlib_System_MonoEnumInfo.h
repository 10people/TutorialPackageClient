#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String[]
struct StringU5BU5D_t333;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Object
struct Object_t;
// System.MonoEnumInfo/SByteComparer
struct SByteComparer_t8237;
// System.MonoEnumInfo/ShortComparer
struct ShortComparer_t8238;
// System.MonoEnumInfo/IntComparer
struct IntComparer_t8239;
// System.MonoEnumInfo/LongComparer
struct LongComparer_t8240;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.MonoEnumInfo
struct MonoEnumInfo_t8241 
{
	// System.Type System.MonoEnumInfo::utype
	Type_t * ___utype;
	// System.Array System.MonoEnumInfo::values
	Array_t * ___values;
	// System.String[] System.MonoEnumInfo::names
	StringU5BU5D_t333* ___names;
	// System.Collections.Hashtable System.MonoEnumInfo::name_hash
	Hashtable_t4372 * ___name_hash;
};
struct MonoEnumInfo_t8241_StaticFields{
	// System.Collections.Hashtable System.MonoEnumInfo::global_cache
	Hashtable_t4372 * ___global_cache;
	// System.Object System.MonoEnumInfo::global_cache_monitor
	Object_t * ___global_cache_monitor;
	// System.MonoEnumInfo/SByteComparer System.MonoEnumInfo::sbyte_comparer
	SByteComparer_t8237 * ___sbyte_comparer;
	// System.MonoEnumInfo/ShortComparer System.MonoEnumInfo::short_comparer
	ShortComparer_t8238 * ___short_comparer;
	// System.MonoEnumInfo/IntComparer System.MonoEnumInfo::int_comparer
	IntComparer_t8239 * ___int_comparer;
	// System.MonoEnumInfo/LongComparer System.MonoEnumInfo::long_comparer
	LongComparer_t8240 * ___long_comparer;
};
struct MonoEnumInfo_t8241_ThreadStaticFields{
	// System.Collections.Hashtable System.MonoEnumInfo::cache
	Hashtable_t4372 * ___cache;
};
