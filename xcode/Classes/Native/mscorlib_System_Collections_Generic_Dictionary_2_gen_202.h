#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// System.Type[]
struct TypeU5BU5D_t1042;
// ImporterFunc[]
struct ImporterFuncU5BU5D_t16485;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t16320;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ImporterFunc,System.Collections.DictionaryEntry>
struct Transform_1_t16486;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>
struct Dictionary_2_t5500  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>::keySlots
	TypeU5BU5D_t1042* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>::valueSlots
	ImporterFuncU5BU5D_t16485* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>::generation
	int32_t ___generation;
};
struct Dictionary_2_t5500_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Type,ImporterFunc>::<>f__am$cacheB
	Transform_1_t16486 * ___U3CU3Ef__am$cacheB;
};
