#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// System.String[]
struct StringU5BU5D_t333;
// RechargeData/GoodInfo[]
struct GoodInfoU5BU5D_t18851;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t8568;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,RechargeData/GoodInfo,System.Collections.DictionaryEntry>
struct Transform_1_t18852;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>
struct Dictionary_2_t4958  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>::keySlots
	StringU5BU5D_t333* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>::valueSlots
	GoodInfoU5BU5D_t18851* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>::generation
	int32_t ___generation;
};
struct Dictionary_2_t4958_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,RechargeData/GoodInfo>::<>f__am$cacheB
	Transform_1_t18852 * ___U3CU3Ef__am$cacheB;
};
