#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// System.String[]
struct StringU5BU5D_t333;
// Games.YuanBaoShopData.ShoppingCart[]
struct ShoppingCartU5BU5D_t21496;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t8568;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Games.YuanBaoShopData.ShoppingCart,System.Collections.DictionaryEntry>
struct Transform_1_t21497;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>
struct Dictionary_2_t4980  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>::keySlots
	StringU5BU5D_t333* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>::valueSlots
	ShoppingCartU5BU5D_t21496* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>::generation
	int32_t ___generation;
};
struct Dictionary_2_t4980_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>::<>f__am$cacheB
	Transform_1_t21497 * ___U3CU3Ef__am$cacheB;
};
