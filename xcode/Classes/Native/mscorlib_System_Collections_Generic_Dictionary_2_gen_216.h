#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// System.UInt64[]
struct UInt64U5BU5D_t8143;
// MasterMember[]
struct MasterMemberU5BU5D_t17827;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t17424;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MasterMember,System.Collections.DictionaryEntry>
struct Transform_1_t17828;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>
struct Dictionary_2_t4777  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>::keySlots
	UInt64U5BU5D_t8143* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>::valueSlots
	MasterMemberU5BU5D_t17827* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>::generation
	int32_t ___generation;
};
struct Dictionary_2_t4777_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>::<>f__am$cacheB
	Transform_1_t17828 * ___U3CU3Ef__am$cacheB;
};
