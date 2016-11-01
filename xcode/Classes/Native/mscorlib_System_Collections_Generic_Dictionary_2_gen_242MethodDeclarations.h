#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>
struct Dictionary_2_t4398;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t945;
// System.Collections.Generic.ICollection`1<GameRes.SCachedBundleData>
struct ICollection_1_t20604;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,GameRes.SCachedBundleData>
struct KeyCollection_t20605;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,GameRes.SCachedBundleData>
struct ValueCollection_t20606;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t8568;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.String,GameRes.SCachedBundleData>[]
struct KeyValuePair_2U5BU5D_t20607;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,GameRes.SCachedBundleData>>
struct IEnumerator_1_t20608;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// GameRes.SCachedBundleData
#include "AssemblyU2DCSharp_GameRes_SCachedBundleData.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,GameRes.SCachedBundleData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,GameRes.SCachedBundleData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__37.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::.ctor()
 void Dictionary_2__ctor_m40517 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m150237 (Dictionary_2_t4398 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::.ctor(System.Int32)
 void Dictionary_2__ctor_m150238 (Dictionary_2_t4398 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m150239 (Dictionary_2_t4398 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m150240 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m150241 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m150242 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m150243 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m150244 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m150245 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m150246 (Dictionary_2_t4398 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m150247 (Dictionary_2_t4398 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m150248 (Dictionary_2_t4398 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m150249 (Dictionary_2_t4398 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m150250 (Dictionary_2_t4398 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m150251 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m150252 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m150253 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m150254 (Dictionary_2_t4398 * __this, KeyValuePair_2_t5724  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m150255 (Dictionary_2_t4398 * __this, KeyValuePair_2_t5724  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m150256 (Dictionary_2_t4398 * __this, KeyValuePair_2U5BU5D_t20607* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m150257 (Dictionary_2_t4398 * __this, KeyValuePair_2_t5724  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m150258 (Dictionary_2_t4398 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m150259 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m150260 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m150261 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::get_Count()
 int32_t Dictionary_2_get_Count_m150262 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::get_Item(TKey)
 SCachedBundleData_t4397  Dictionary_2_get_Item_m40520 (Dictionary_2_t4398 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m40526 (Dictionary_2_t4398 * __this, String_t* ___key, SCachedBundleData_t4397  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m150263 (Dictionary_2_t4398 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m150264 (Dictionary_2_t4398 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m150265 (Dictionary_2_t4398 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::make_pair(TKey,TValue)
 KeyValuePair_2_t5724  Dictionary_2_make_pair_m150266 (Object_t * __this/* static, unused */, String_t* ___key, SCachedBundleData_t4397  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::pick_key(TKey,TValue)
 String_t* Dictionary_2_pick_key_m150267 (Object_t * __this/* static, unused */, String_t* ___key, SCachedBundleData_t4397  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::pick_value(TKey,TValue)
 SCachedBundleData_t4397  Dictionary_2_pick_value_m150268 (Object_t * __this/* static, unused */, String_t* ___key, SCachedBundleData_t4397  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m150269 (Dictionary_2_t4398 * __this, KeyValuePair_2U5BU5D_t20607* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::Resize()
 void Dictionary_2_Resize_m150270 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::Add(TKey,TValue)
 void Dictionary_2_Add_m40519 (Dictionary_2_t4398 * __this, String_t* ___key, SCachedBundleData_t4397  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::Clear()
 void Dictionary_2_Clear_m40527 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m40518 (Dictionary_2_t4398 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m150271 (Dictionary_2_t4398 * __this, SCachedBundleData_t4397  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m150272 (Dictionary_2_t4398 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m150273 (Dictionary_2_t4398 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::Remove(TKey)
 bool Dictionary_2_Remove_m40528 (Dictionary_2_t4398 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m150274 (Dictionary_2_t4398 * __this, String_t* ___key, SCachedBundleData_t4397 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::get_Keys()
 KeyCollection_t20605 * Dictionary_2_get_Keys_m150275 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::get_Values()
 ValueCollection_t20606 * Dictionary_2_get_Values_m150276 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::ToTKey(System.Object)
 String_t* Dictionary_2_ToTKey_m150277 (Dictionary_2_t4398 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::ToTValue(System.Object)
 SCachedBundleData_t4397  Dictionary_2_ToTValue_m150278 (Dictionary_2_t4398 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m150279 (Dictionary_2_t4398 * __this, KeyValuePair_2_t5724  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::GetEnumerator()
 Enumerator_t5723  Dictionary_2_GetEnumerator_m40521 (Dictionary_2_t4398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1066  Dictionary_2_U3CCopyToU3Em__0_m150280 (Object_t * __this/* static, unused */, String_t* ___key, SCachedBundleData_t4397  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
