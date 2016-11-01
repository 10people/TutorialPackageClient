#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.HashSet`1/Link<System.Int32>[]
struct LinkU5BU5D_t19064;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t9158;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t5627  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<System.Int32>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<System.Int32>::links
	LinkU5BU5D_t19064* ___links;
	// T[] System.Collections.Generic.HashSet`1<System.Int32>::slots
	Int32U5BU5D_t116* ___slots;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::touched
	int32_t ___touched;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::empty_slot
	int32_t ___empty_slot;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<System.Int32>::comparer
	Object_t* ___comparer;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<System.Int32>::si
	SerializationInfo_t6402 * ___si;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::generation
	int32_t ___generation;
};
