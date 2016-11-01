#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// UnityEngine.Camera[]
struct CameraU5BU5D_t37;
// System.Boolean[]
struct BooleanU5BU5D_t102;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Camera>
struct IEqualityComparer_1_t16174;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t16175;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>
struct Dictionary_2_t935  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::keySlots
	CameraU5BU5D_t37* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::valueSlots
	BooleanU5BU5D_t102* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::generation
	int32_t ___generation;
};
struct Dictionary_2_t935_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::<>f__am$cacheB
	Transform_1_t16175 * ___U3CU3Ef__am$cacheB;
};
