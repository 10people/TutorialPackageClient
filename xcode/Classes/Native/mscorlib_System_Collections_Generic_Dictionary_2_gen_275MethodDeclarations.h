#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Dictionary_2_t6343;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t16322;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct ICollection_1_t23827;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>
struct IDictionary_2_t6348;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct KeyCollection_t23828;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct ValueCollection_t23829;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t16320;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>[]
struct KeyValuePair_2U5BU5D_t23830;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>>
struct IEnumerator_1_t23831;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_282.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__277.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_283MethodDeclarations.h"
#define Dictionary_2__ctor_m44522(__this, method) (void)Dictionary_2__ctor_m59356_gshared((Dictionary_2_t8794 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m173173(__this, ___comparer, method) (void)Dictionary_2__ctor_m59358_gshared((Dictionary_2_t8794 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m173174(__this, ___capacity, method) (void)Dictionary_2__ctor_m59360_gshared((Dictionary_2_t8794 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m173175(__this, ___info, ___context, method) (void)Dictionary_2__ctor_m59362_gshared((Dictionary_2_t8794 *)__this, (SerializationInfo_t6402 *)___info, (StreamingContext_t6414 )___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m173176(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m59364_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m173177(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m59366_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m173178(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Keys_m59368_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m173179(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Values_m59370_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.IDictionary.get_IsFixedSize()
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m173180(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m59372_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.IDictionary.get_IsReadOnly()
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m173181(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m59374_gshared((Dictionary_2_t8794 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m173182(__this, ___key, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Item_m59376_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m173183(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_set_Item_m59378_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m173184(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_Add_m59380_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m173185(__this, ___key, method) (bool)Dictionary_2_System_Collections_IDictionary_Contains_m59382_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m173186(__this, ___key, method) (void)Dictionary_2_System_Collections_IDictionary_Remove_m59384_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m173187(__this, method) (bool)Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m59386_gshared((Dictionary_2_t8794 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m173188(__this, method) (Object_t *)Dictionary_2_System_Collections_ICollection_get_SyncRoot_m59388_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m173189(__this, method) (bool)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m59390_gshared((Dictionary_2_t8794 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m173190 (Dictionary_2_t6343 * __this, KeyValuePair_2_t23742  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m173191 (Dictionary_2_t6343 * __this, KeyValuePair_2_t23742  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m173192(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59394_gshared((Dictionary_2_t8794 *)__this, (KeyValuePair_2U5BU5D_t8795*)___array, (int32_t)___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m173193 (Dictionary_2_t6343 * __this, KeyValuePair_2_t23742  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m173194(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_ICollection_CopyTo_m59397_gshared((Dictionary_2_t8794 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m173195(__this, method) (Object_t *)Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m59399_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m173196(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m59401_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m173197(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_GetEnumerator_m59403_gshared((Dictionary_2_t8794 *)__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Count()
#define Dictionary_2_get_Count_m173198(__this, method) (int32_t)Dictionary_2_get_Count_m59405_gshared((Dictionary_2_t8794 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(TKey)
#define Dictionary_2_get_Item_m173199(__this, ___key, method) (Object_t*)Dictionary_2_get_Item_m59407_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m173200(__this, ___key, ___value, method) (void)Dictionary_2_set_Item_m59409_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m173201(__this, ___capacity, ___hcp, method) (void)Dictionary_2_Init_m59411_gshared((Dictionary_2_t8794 *)__this, (int32_t)___capacity, (Object_t*)___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m173202(__this, ___size, method) (void)Dictionary_2_InitArrays_m59413_gshared((Dictionary_2_t8794 *)__this, (int32_t)___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m173203(__this, ___array, ___index, method) (void)Dictionary_2_CopyToCheck_m59415_gshared((Dictionary_2_t8794 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::make_pair(TKey,TValue)
 KeyValuePair_2_t23742  Dictionary_2_make_pair_m173204 (Object_t * __this/* static, unused */, Type_t * ___key, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m173205(__this/* static, unused */, ___key, ___value, method) (Type_t *)Dictionary_2_pick_key_m59418_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m173206(__this/* static, unused */, ___key, ___value, method) (Object_t*)Dictionary_2_pick_value_m59420_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m173207(__this, ___array, ___index, method) (void)Dictionary_2_CopyTo_m59422_gshared((Dictionary_2_t8794 *)__this, (KeyValuePair_2U5BU5D_t8795*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Resize()
#define Dictionary_2_Resize_m173208(__this, method) (void)Dictionary_2_Resize_m59424_gshared((Dictionary_2_t8794 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Add(TKey,TValue)
#define Dictionary_2_Add_m173209(__this, ___key, ___value, method) (void)Dictionary_2_Add_m59426_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Clear()
#define Dictionary_2_Clear_m173210(__this, method) (void)Dictionary_2_Clear_m59428_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m173211(__this, ___key, method) (bool)Dictionary_2_ContainsKey_m59430_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m173212(__this, ___value, method) (bool)Dictionary_2_ContainsValue_m59432_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m173213(__this, ___info, ___context, method) (void)Dictionary_2_GetObjectData_m59434_gshared((Dictionary_2_t8794 *)__this, (SerializationInfo_t6402 *)___info, (StreamingContext_t6414 )___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m173214(__this, ___sender, method) (void)Dictionary_2_OnDeserialization_m59436_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Remove(TKey)
#define Dictionary_2_Remove_m173215(__this, ___key, method) (bool)Dictionary_2_Remove_m59438_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m173216(__this, ___key, ___value, method) (bool)Dictionary_2_TryGetValue_m59440_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Keys()
#define Dictionary_2_get_Keys_m173217(__this, method) (KeyCollection_t23828 *)Dictionary_2_get_Keys_m59442_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Values()
#define Dictionary_2_get_Values_m173218(__this, method) (ValueCollection_t23829 *)Dictionary_2_get_Values_m59444_gshared((Dictionary_2_t8794 *)__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m173219(__this, ___key, method) (Type_t *)Dictionary_2_ToTKey_m59446_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m173220(__this, ___value, method) (Object_t*)Dictionary_2_ToTValue_m59448_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m173221 (Dictionary_2_t6343 * __this, KeyValuePair_2_t23742  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::GetEnumerator()
 Enumerator_t23832  Dictionary_2_GetEnumerator_m173222 (Dictionary_2_t6343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m173223(__this/* static, unused */, ___key, ___value, method) (DictionaryEntry_t1066 )Dictionary_2_U3CCopyToU3Em__0_m59452_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
