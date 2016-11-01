#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// UICamera/MouseOrTouch[]
struct MouseOrTouchU5BU5D_t5407;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t9158;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UICamera/MouseOrTouch,System.Collections.DictionaryEntry>
struct Transform_1_t22870;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>
struct Dictionary_2_t5408  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>::keySlots
	Int32U5BU5D_t116* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>::valueSlots
	MouseOrTouchU5BU5D_t5407* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>::generation
	int32_t ___generation;
};
struct Dictionary_2_t5408_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>::<>f__am$cacheB
	Transform_1_t22870 * ___U3CU3Ef__am$cacheB;
};
