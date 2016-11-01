#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// System.UInt64[]
struct UInt64U5BU5D_t8143;
// Relation[]
struct RelationU5BU5D_t17574;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t17424;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,Relation,System.Collections.DictionaryEntry>
struct Transform_1_t17575;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.UInt64,Relation>
struct Dictionary_2_t4804  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.UInt64,Relation>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.UInt64,Relation>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.UInt64,Relation>::keySlots
	UInt64U5BU5D_t8143* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.UInt64,Relation>::valueSlots
	RelationU5BU5D_t17574* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,Relation>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,Relation>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,Relation>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,Relation>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,Relation>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.UInt64,Relation>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,Relation>::generation
	int32_t ___generation;
};
struct Dictionary_2_t4804_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,Relation>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.UInt64,Relation>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,Relation>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,Relation>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.UInt64,Relation>::<>f__am$cacheB
	Transform_1_t17575 * ___U3CU3Ef__am$cacheB;
};
