#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// System.String[]
struct StringU5BU5D_t333;
// GameRes.AssetLoader[]
struct AssetLoaderU5BU5D_t20574;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t8568;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,GameRes.AssetLoader,System.Collections.DictionaryEntry>
struct Transform_1_t20575;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>
struct Dictionary_2_t4385  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>::keySlots
	StringU5BU5D_t333* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>::valueSlots
	AssetLoaderU5BU5D_t20574* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>::generation
	int32_t ___generation;
};
struct Dictionary_2_t4385_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,GameRes.AssetLoader>::<>f__am$cacheB
	Transform_1_t20575 * ___U3CU3Ef__am$cacheB;
};
