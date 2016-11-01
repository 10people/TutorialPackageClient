#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// System.UInt64[]
struct UInt64U5BU5D_t8143;
// PVPData/OpponentInfo[]
struct OpponentInfoU5BU5D_t19737;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t17424;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,PVPData/OpponentInfo,System.Collections.DictionaryEntry>
struct Transform_1_t19738;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>
struct Dictionary_2_t4932  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::keySlots
	UInt64U5BU5D_t8143* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::valueSlots
	OpponentInfoU5BU5D_t19737* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::generation
	int32_t ___generation;
};
struct Dictionary_2_t4932_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::<>f__am$cacheB
	Transform_1_t19738 * ___U3CU3Ef__am$cacheB;
};
