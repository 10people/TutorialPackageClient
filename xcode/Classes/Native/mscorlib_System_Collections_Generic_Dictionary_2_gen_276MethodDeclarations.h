#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>
struct Dictionary_2_t6344;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t945;
// System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>
struct ICollection_1_t6346;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,LitJson.PropertyMetadata>
struct KeyCollection_t23844;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,LitJson.PropertyMetadata>
struct ValueCollection_t23845;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t8568;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.PropertyMetadata>[]
struct KeyValuePair_2U5BU5D_t23846;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.PropertyMetadata>>
struct IEnumerator_1_t23847;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// LitJson.PropertyMetadata
#include "LitJson_LitJson_PropertyMetadata.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.PropertyMetadata>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_280.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.PropertyMetadata>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__278.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::.ctor()
 void Dictionary_2__ctor_m44526 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m173309 (Dictionary_2_t6344 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::.ctor(System.Int32)
 void Dictionary_2__ctor_m173310 (Dictionary_2_t6344 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m173311 (Dictionary_2_t6344 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m173312 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m173313 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m173314 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m173315 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m173316 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m173317 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m173318 (Dictionary_2_t6344 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m173319 (Dictionary_2_t6344 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m173320 (Dictionary_2_t6344 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m173321 (Dictionary_2_t6344 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m173322 (Dictionary_2_t6344 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m173323 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m173324 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m173325 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m173326 (Dictionary_2_t6344 * __this, KeyValuePair_2_t23736  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m173327 (Dictionary_2_t6344 * __this, KeyValuePair_2_t23736  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m173328 (Dictionary_2_t6344 * __this, KeyValuePair_2U5BU5D_t23846* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m173329 (Dictionary_2_t6344 * __this, KeyValuePair_2_t23736  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m173330 (Dictionary_2_t6344 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m173331 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m173332 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m173333 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::get_Count()
 int32_t Dictionary_2_get_Count_m173334 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::get_Item(TKey)
 PropertyMetadata_t6294  Dictionary_2_get_Item_m173335 (Dictionary_2_t6344 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m173336 (Dictionary_2_t6344 * __this, String_t* ___key, PropertyMetadata_t6294  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m173337 (Dictionary_2_t6344 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m173338 (Dictionary_2_t6344 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m173339 (Dictionary_2_t6344 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::make_pair(TKey,TValue)
 KeyValuePair_2_t23736  Dictionary_2_make_pair_m173340 (Object_t * __this/* static, unused */, String_t* ___key, PropertyMetadata_t6294  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::pick_key(TKey,TValue)
 String_t* Dictionary_2_pick_key_m173341 (Object_t * __this/* static, unused */, String_t* ___key, PropertyMetadata_t6294  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::pick_value(TKey,TValue)
 PropertyMetadata_t6294  Dictionary_2_pick_value_m173342 (Object_t * __this/* static, unused */, String_t* ___key, PropertyMetadata_t6294  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m173343 (Dictionary_2_t6344 * __this, KeyValuePair_2U5BU5D_t23846* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::Resize()
 void Dictionary_2_Resize_m173344 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::Add(TKey,TValue)
 void Dictionary_2_Add_m173345 (Dictionary_2_t6344 * __this, String_t* ___key, PropertyMetadata_t6294  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::Clear()
 void Dictionary_2_Clear_m173346 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m173347 (Dictionary_2_t6344 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m173348 (Dictionary_2_t6344 * __this, PropertyMetadata_t6294  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m173349 (Dictionary_2_t6344 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m173350 (Dictionary_2_t6344 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::Remove(TKey)
 bool Dictionary_2_Remove_m173351 (Dictionary_2_t6344 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m173352 (Dictionary_2_t6344 * __this, String_t* ___key, PropertyMetadata_t6294 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::get_Keys()
 KeyCollection_t23844 * Dictionary_2_get_Keys_m173353 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::get_Values()
 ValueCollection_t23845 * Dictionary_2_get_Values_m173354 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::ToTKey(System.Object)
 String_t* Dictionary_2_ToTKey_m173355 (Dictionary_2_t6344 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::ToTValue(System.Object)
 PropertyMetadata_t6294  Dictionary_2_ToTValue_m173356 (Dictionary_2_t6344 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m173357 (Dictionary_2_t6344 * __this, KeyValuePair_2_t23736  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::GetEnumerator()
 Enumerator_t23848  Dictionary_2_GetEnumerator_m173358 (Dictionary_2_t6344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1066  Dictionary_2_U3CCopyToU3Em__0_m173359 (Object_t * __this/* static, unused */, String_t* ___key, PropertyMetadata_t6294  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
