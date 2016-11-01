#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// System.String[]
struct StringU5BU5D_t333;
// PVPSkillListItem[]
struct PVPSkillListItemU5BU5D_t19759;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t8568;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,PVPSkillListItem,System.Collections.DictionaryEntry>
struct Transform_1_t19760;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>
struct Dictionary_2_t5656  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>::keySlots
	StringU5BU5D_t333* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>::valueSlots
	PVPSkillListItemU5BU5D_t19759* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>::generation
	int32_t ___generation;
};
struct Dictionary_2_t5656_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,PVPSkillListItem>::<>f__am$cacheB
	Transform_1_t19760 * ___U3CU3Ef__am$cacheB;
};
