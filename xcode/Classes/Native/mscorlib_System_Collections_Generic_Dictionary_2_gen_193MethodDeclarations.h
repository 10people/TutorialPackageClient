#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,JsonData>
struct Dictionary_2_t5469;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t945;
// System.Collections.Generic.ICollection`1<JsonData>
struct ICollection_1_t5465;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// JsonData
struct JsonData_t1057;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,JsonData>
struct KeyCollection_t16268;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,JsonData>
struct ValueCollection_t16269;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t8568;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.String,JsonData>[]
struct KeyValuePair_2U5BU5D_t16270;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>
struct IEnumerator_1_t1064;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,JsonData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,JsonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__224.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_283MethodDeclarations.h"
#define Dictionary_2__ctor_m38747(__this, method) (void)Dictionary_2__ctor_m59356_gshared((Dictionary_2_t8794 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m121356(__this, ___comparer, method) (void)Dictionary_2__ctor_m59358_gshared((Dictionary_2_t8794 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::.ctor(System.Int32)
#define Dictionary_2__ctor_m121357(__this, ___capacity, method) (void)Dictionary_2__ctor_m59360_gshared((Dictionary_2_t8794 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m121358(__this, ___info, ___context, method) (void)Dictionary_2__ctor_m59362_gshared((Dictionary_2_t8794 *)__this, (SerializationInfo_t6402 *)___info, (StreamingContext_t6414 )___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m121359(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m59364_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m121360(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m59366_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m121361(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Keys_m59368_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m121362(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Values_m59370_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.IDictionary.get_IsFixedSize()
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m121363(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m59372_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.IDictionary.get_IsReadOnly()
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m121364(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m59374_gshared((Dictionary_2_t8794 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m121365(__this, ___key, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Item_m59376_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m121366(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_set_Item_m59378_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m121367(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_Add_m59380_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m121368(__this, ___key, method) (bool)Dictionary_2_System_Collections_IDictionary_Contains_m59382_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m121369(__this, ___key, method) (void)Dictionary_2_System_Collections_IDictionary_Remove_m59384_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m121370(__this, method) (bool)Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m59386_gshared((Dictionary_2_t8794 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m121371(__this, method) (Object_t *)Dictionary_2_System_Collections_ICollection_get_SyncRoot_m59388_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m121372(__this, method) (bool)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m59390_gshared((Dictionary_2_t8794 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m121373 (Dictionary_2_t5469 * __this, KeyValuePair_2_t5463  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m121374 (Dictionary_2_t5469 * __this, KeyValuePair_2_t5463  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m121375(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59394_gshared((Dictionary_2_t8794 *)__this, (KeyValuePair_2U5BU5D_t8795*)___array, (int32_t)___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m121376 (Dictionary_2_t5469 * __this, KeyValuePair_2_t5463  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m121377(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_ICollection_CopyTo_m59397_gshared((Dictionary_2_t8794 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m121378(__this, method) (Object_t *)Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m59399_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m121379(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m59401_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,JsonData>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m121380(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_GetEnumerator_m59403_gshared((Dictionary_2_t8794 *)__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,JsonData>::get_Count()
#define Dictionary_2_get_Count_m121381(__this, method) (int32_t)Dictionary_2_get_Count_m59405_gshared((Dictionary_2_t8794 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,JsonData>::get_Item(TKey)
#define Dictionary_2_get_Item_m121382(__this, ___key, method) (JsonData_t1057 *)Dictionary_2_get_Item_m59407_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m121383(__this, ___key, ___value, method) (void)Dictionary_2_set_Item_m59409_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m121384(__this, ___capacity, ___hcp, method) (void)Dictionary_2_Init_m59411_gshared((Dictionary_2_t8794 *)__this, (int32_t)___capacity, (Object_t*)___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m121385(__this, ___size, method) (void)Dictionary_2_InitArrays_m59413_gshared((Dictionary_2_t8794 *)__this, (int32_t)___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m121386(__this, ___array, ___index, method) (void)Dictionary_2_CopyToCheck_m59415_gshared((Dictionary_2_t8794 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,JsonData>::make_pair(TKey,TValue)
 KeyValuePair_2_t5463  Dictionary_2_make_pair_m121387 (Object_t * __this/* static, unused */, String_t* ___key, JsonData_t1057 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.String,JsonData>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m121388(__this/* static, unused */, ___key, ___value, method) (String_t*)Dictionary_2_pick_key_m59418_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,JsonData>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m121389(__this/* static, unused */, ___key, ___value, method) (JsonData_t1057 *)Dictionary_2_pick_value_m59420_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m121390(__this, ___array, ___index, method) (void)Dictionary_2_CopyTo_m59422_gshared((Dictionary_2_t8794 *)__this, (KeyValuePair_2U5BU5D_t8795*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::Resize()
#define Dictionary_2_Resize_m121391(__this, method) (void)Dictionary_2_Resize_m59424_gshared((Dictionary_2_t8794 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::Add(TKey,TValue)
#define Dictionary_2_Add_m121392(__this, ___key, ___value, method) (void)Dictionary_2_Add_m59426_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::Clear()
#define Dictionary_2_Clear_m121393(__this, method) (void)Dictionary_2_Clear_m59428_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,JsonData>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m121394(__this, ___key, method) (bool)Dictionary_2_ContainsKey_m59430_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,JsonData>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m121395(__this, ___value, method) (bool)Dictionary_2_ContainsValue_m59432_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m121396(__this, ___info, ___context, method) (void)Dictionary_2_GetObjectData_m59434_gshared((Dictionary_2_t8794 *)__this, (SerializationInfo_t6402 *)___info, (StreamingContext_t6414 )___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,JsonData>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m121397(__this, ___sender, method) (void)Dictionary_2_OnDeserialization_m59436_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,JsonData>::Remove(TKey)
#define Dictionary_2_Remove_m121398(__this, ___key, method) (bool)Dictionary_2_Remove_m59438_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,JsonData>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m121399(__this, ___key, ___value, method) (bool)Dictionary_2_TryGetValue_m59440_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,JsonData>::get_Keys()
#define Dictionary_2_get_Keys_m121400(__this, method) (KeyCollection_t16268 *)Dictionary_2_get_Keys_m59442_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,JsonData>::get_Values()
#define Dictionary_2_get_Values_m121401(__this, method) (ValueCollection_t16269 *)Dictionary_2_get_Values_m59444_gshared((Dictionary_2_t8794 *)__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,JsonData>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m121402(__this, ___key, method) (String_t*)Dictionary_2_ToTKey_m59446_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,JsonData>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m121403(__this, ___value, method) (JsonData_t1057 *)Dictionary_2_ToTValue_m59448_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,JsonData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m121404 (Dictionary_2_t5469 * __this, KeyValuePair_2_t5463  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,JsonData>::GetEnumerator()
 Enumerator_t16271  Dictionary_2_GetEnumerator_m121405 (Dictionary_2_t5469 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,JsonData>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m121406(__this/* static, unused */, ___key, ___value, method) (DictionaryEntry_t1066 )Dictionary_2_U3CCopyToU3Em__0_m59452_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
