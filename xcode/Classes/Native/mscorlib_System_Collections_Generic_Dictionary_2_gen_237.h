﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// System.String[]
struct StringU5BU5D_t333;
// UnityEngine.AssetBundle[]
struct AssetBundleU5BU5D_t20330;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t8568;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.AssetBundle,System.Collections.DictionaryEntry>
struct Transform_1_t20362;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>
struct Dictionary_2_t2166  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>::keySlots
	StringU5BU5D_t333* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>::valueSlots
	AssetBundleU5BU5D_t20330* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>::generation
	int32_t ___generation;
};
struct Dictionary_2_t2166_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>::<>f__am$cacheB
	Transform_1_t20362 * ___U3CU3Ef__am$cacheB;
};
