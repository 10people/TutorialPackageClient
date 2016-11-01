#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// Games.FlyWing.FlyWingData[]
struct FlyWingDataU5BU5D_t19476;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t9158;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.FlyWing.FlyWingData,System.Collections.DictionaryEntry>
struct Transform_1_t19477;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>
struct Dictionary_2_t4730  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::keySlots
	Int32U5BU5D_t116* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::valueSlots
	FlyWingDataU5BU5D_t19476* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::generation
	int32_t ___generation;
};
struct Dictionary_2_t4730_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::<>f__am$cacheB
	Transform_1_t19477 * ___U3CU3Ef__am$cacheB;
};
