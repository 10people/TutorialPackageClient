#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// Games.AwardActivity.OnlineAwardLine[]
struct OnlineAwardLineU5BU5D_t18100;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t9158;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.OnlineAwardLine,System.Collections.DictionaryEntry>
struct Transform_1_t18101;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>
struct Dictionary_2_t4543  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>::keySlots
	Int32U5BU5D_t116* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>::valueSlots
	OnlineAwardLineU5BU5D_t18100* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>::generation
	int32_t ___generation;
};
struct Dictionary_2_t4543_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>::<>f__am$cacheB
	Transform_1_t18101 * ___U3CU3Ef__am$cacheB;
};
