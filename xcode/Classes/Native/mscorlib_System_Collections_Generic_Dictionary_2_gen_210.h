#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// Games.AwardActivity.DaySignInItem[]
struct DaySignInItemU5BU5D_t17309;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t9158;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.DaySignInItem,System.Collections.DictionaryEntry>
struct Transform_1_t17310;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>
struct Dictionary_2_t1377  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>::keySlots
	Int32U5BU5D_t116* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>::valueSlots
	DaySignInItemU5BU5D_t17309* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>::generation
	int32_t ___generation;
};
struct Dictionary_2_t1377_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>::<>f__am$cacheB
	Transform_1_t17310 * ___U3CU3Ef__am$cacheB;
};
