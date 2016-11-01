#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>
struct Dictionary_2_t4953;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t5685;
// System.Collections.Generic.ICollection`1<Games.AwardActivity.ActivityRewardData>
struct ICollection_1_t19435;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Games.AwardActivity.ActivityRewardData>
struct KeyCollection_t19436;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Games.AwardActivity.ActivityRewardData>
struct ValueCollection_t19437;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t9158;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.ActivityRewardData>[]
struct KeyValuePair_2U5BU5D_t19438;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.ActivityRewardData>>
struct IEnumerator_1_t19440;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// Games.AwardActivity.ActivityRewardData
#include "AssemblyU2DCSharp_Games_AwardActivity_ActivityRewardData.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.ActivityRewardData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_251.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Games.AwardActivity.ActivityRewardData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__243.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::.ctor()
 void Dictionary_2__ctor_m41147 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m141600 (Dictionary_2_t4953 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::.ctor(System.Int32)
 void Dictionary_2__ctor_m141601 (Dictionary_2_t4953 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m141602 (Dictionary_2_t4953 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m141603 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m141604 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m141605 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m141606 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m141607 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m141608 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m141609 (Dictionary_2_t4953 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m141610 (Dictionary_2_t4953 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m141611 (Dictionary_2_t4953 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m141612 (Dictionary_2_t4953 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m141613 (Dictionary_2_t4953 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m141614 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m141615 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m141616 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m141617 (Dictionary_2_t4953 * __this, KeyValuePair_2_t19439  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m141618 (Dictionary_2_t4953 * __this, KeyValuePair_2_t19439  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m141619 (Dictionary_2_t4953 * __this, KeyValuePair_2U5BU5D_t19438* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m141620 (Dictionary_2_t4953 * __this, KeyValuePair_2_t19439  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m141621 (Dictionary_2_t4953 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m141622 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m141623 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m141624 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::get_Count()
 int32_t Dictionary_2_get_Count_m39943 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::get_Item(TKey)
 ActivityRewardData_t2067  Dictionary_2_get_Item_m40092 (Dictionary_2_t4953 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m40097 (Dictionary_2_t4953 * __this, int32_t ___key, ActivityRewardData_t2067  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m141625 (Dictionary_2_t4953 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m141626 (Dictionary_2_t4953 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m141627 (Dictionary_2_t4953 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::make_pair(TKey,TValue)
 KeyValuePair_2_t19439  Dictionary_2_make_pair_m141628 (Object_t * __this/* static, unused */, int32_t ___key, ActivityRewardData_t2067  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::pick_key(TKey,TValue)
 int32_t Dictionary_2_pick_key_m141629 (Object_t * __this/* static, unused */, int32_t ___key, ActivityRewardData_t2067  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::pick_value(TKey,TValue)
 ActivityRewardData_t2067  Dictionary_2_pick_value_m141630 (Object_t * __this/* static, unused */, int32_t ___key, ActivityRewardData_t2067  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m141631 (Dictionary_2_t4953 * __this, KeyValuePair_2U5BU5D_t19438* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::Resize()
 void Dictionary_2_Resize_m141632 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::Add(TKey,TValue)
 void Dictionary_2_Add_m41156 (Dictionary_2_t4953 * __this, int32_t ___key, ActivityRewardData_t2067  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::Clear()
 void Dictionary_2_Clear_m141633 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m40091 (Dictionary_2_t4953 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m141634 (Dictionary_2_t4953 * __this, ActivityRewardData_t2067  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m141635 (Dictionary_2_t4953 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m141636 (Dictionary_2_t4953 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::Remove(TKey)
 bool Dictionary_2_Remove_m141637 (Dictionary_2_t4953 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m141638 (Dictionary_2_t4953 * __this, int32_t ___key, ActivityRewardData_t2067 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::get_Keys()
 KeyCollection_t19436 * Dictionary_2_get_Keys_m141639 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::get_Values()
 ValueCollection_t19437 * Dictionary_2_get_Values_m141640 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::ToTKey(System.Object)
 int32_t Dictionary_2_ToTKey_m141641 (Dictionary_2_t4953 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::ToTValue(System.Object)
 ActivityRewardData_t2067  Dictionary_2_ToTValue_m141642 (Dictionary_2_t4953 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m141643 (Dictionary_2_t4953 * __this, KeyValuePair_2_t19439  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::GetEnumerator()
 Enumerator_t19441  Dictionary_2_GetEnumerator_m141644 (Dictionary_2_t4953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1066  Dictionary_2_U3CCopyToU3Em__0_m141645 (Object_t * __this/* static, unused */, int32_t ___key, ActivityRewardData_t2067  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
