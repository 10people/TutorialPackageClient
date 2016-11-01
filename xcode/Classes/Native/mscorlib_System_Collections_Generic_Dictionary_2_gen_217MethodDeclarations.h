#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t1530;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t945;
// System.Collections.Generic.ICollection`1<UnityEngine.GameObject>
struct ICollection_1_t16922;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GameObject>
struct KeyCollection_t17933;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>
struct ValueCollection_t17934;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t8568;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>[]
struct KeyValuePair_2U5BU5D_t17935;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>>
struct IEnumerator_1_t17936;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_283MethodDeclarations.h"
#define Dictionary_2__ctor_m39472(__this, method) (void)Dictionary_2__ctor_m59356_gshared((Dictionary_2_t8794 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m132925(__this, ___comparer, method) (void)Dictionary_2__ctor_m59358_gshared((Dictionary_2_t8794 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Int32)
#define Dictionary_2__ctor_m132926(__this, ___capacity, method) (void)Dictionary_2__ctor_m59360_gshared((Dictionary_2_t8794 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m132927(__this, ___info, ___context, method) (void)Dictionary_2__ctor_m59362_gshared((Dictionary_2_t8794 *)__this, (SerializationInfo_t6402 *)___info, (StreamingContext_t6414 )___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m132928(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m59364_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m132929(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m59366_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m132930(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Keys_m59368_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m132931(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Values_m59370_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.get_IsFixedSize()
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m132932(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m59372_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.get_IsReadOnly()
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m132933(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m59374_gshared((Dictionary_2_t8794 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m132934(__this, ___key, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Item_m59376_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m132935(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_set_Item_m59378_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m132936(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_Add_m59380_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m132937(__this, ___key, method) (bool)Dictionary_2_System_Collections_IDictionary_Contains_m59382_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m132938(__this, ___key, method) (void)Dictionary_2_System_Collections_IDictionary_Remove_m59384_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m132939(__this, method) (bool)Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m59386_gshared((Dictionary_2_t8794 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m132940(__this, method) (Object_t *)Dictionary_2_System_Collections_ICollection_get_SyncRoot_m59388_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m132941(__this, method) (bool)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m59390_gshared((Dictionary_2_t8794 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m132942 (Dictionary_2_t1530 * __this, KeyValuePair_2_t5635  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m132943 (Dictionary_2_t1530 * __this, KeyValuePair_2_t5635  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m132944(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59394_gshared((Dictionary_2_t8794 *)__this, (KeyValuePair_2U5BU5D_t8795*)___array, (int32_t)___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m132945 (Dictionary_2_t1530 * __this, KeyValuePair_2_t5635  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m132946(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_ICollection_CopyTo_m59397_gshared((Dictionary_2_t8794 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m132947(__this, method) (Object_t *)Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m59399_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m132948(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m59401_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m132949(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_GetEnumerator_m59403_gshared((Dictionary_2_t8794 *)__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Count()
#define Dictionary_2_get_Count_m39900(__this, method) (int32_t)Dictionary_2_get_Count_m59405_gshared((Dictionary_2_t8794 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Item(TKey)
#define Dictionary_2_get_Item_m39896(__this, ___key, method) (GameObject_t9 *)Dictionary_2_get_Item_m59407_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m40174(__this, ___key, ___value, method) (void)Dictionary_2_set_Item_m59409_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m132950(__this, ___capacity, ___hcp, method) (void)Dictionary_2_Init_m59411_gshared((Dictionary_2_t8794 *)__this, (int32_t)___capacity, (Object_t*)___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m132951(__this, ___size, method) (void)Dictionary_2_InitArrays_m59413_gshared((Dictionary_2_t8794 *)__this, (int32_t)___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m132952(__this, ___array, ___index, method) (void)Dictionary_2_CopyToCheck_m59415_gshared((Dictionary_2_t8794 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::make_pair(TKey,TValue)
 KeyValuePair_2_t5635  Dictionary_2_make_pair_m132953 (Object_t * __this/* static, unused */, String_t* ___key, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m132954(__this/* static, unused */, ___key, ___value, method) (String_t*)Dictionary_2_pick_key_m59418_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m132955(__this/* static, unused */, ___key, ___value, method) (GameObject_t9 *)Dictionary_2_pick_value_m59420_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m132956(__this, ___array, ___index, method) (void)Dictionary_2_CopyTo_m59422_gshared((Dictionary_2_t8794 *)__this, (KeyValuePair_2U5BU5D_t8795*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Resize()
#define Dictionary_2_Resize_m132957(__this, method) (void)Dictionary_2_Resize_m59424_gshared((Dictionary_2_t8794 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Add(TKey,TValue)
#define Dictionary_2_Add_m39897(__this, ___key, ___value, method) (void)Dictionary_2_Add_m59426_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Clear()
#define Dictionary_2_Clear_m39894(__this, method) (void)Dictionary_2_Clear_m59428_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m39895(__this, ___key, method) (bool)Dictionary_2_ContainsKey_m59430_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m132958(__this, ___value, method) (bool)Dictionary_2_ContainsValue_m59432_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m132959(__this, ___info, ___context, method) (void)Dictionary_2_GetObjectData_m59434_gshared((Dictionary_2_t8794 *)__this, (SerializationInfo_t6402 *)___info, (StreamingContext_t6414 )___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m132960(__this, ___sender, method) (void)Dictionary_2_OnDeserialization_m59436_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Remove(TKey)
#define Dictionary_2_Remove_m39898(__this, ___key, method) (bool)Dictionary_2_Remove_m59438_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m132961(__this, ___key, ___value, method) (bool)Dictionary_2_TryGetValue_m59440_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Keys()
#define Dictionary_2_get_Keys_m132962(__this, method) (KeyCollection_t17933 *)Dictionary_2_get_Keys_m59442_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Values()
#define Dictionary_2_get_Values_m132963(__this, method) (ValueCollection_t17934 *)Dictionary_2_get_Values_m59444_gshared((Dictionary_2_t8794 *)__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m132964(__this, ___key, method) (String_t*)Dictionary_2_ToTKey_m59446_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m132965(__this, ___value, method) (GameObject_t9 *)Dictionary_2_ToTValue_m59448_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m132966 (Dictionary_2_t1530 * __this, KeyValuePair_2_t5635  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::GetEnumerator()
 Enumerator_t5634  Dictionary_2_GetEnumerator_m39901 (Dictionary_2_t1530 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m132967(__this/* static, unused */, ___key, ___value, method) (DictionaryEntry_t1066 )Dictionary_2_U3CCopyToU3Em__0_m59452_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
