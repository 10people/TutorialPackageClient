﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>
struct Dictionary_2_t192;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t5685;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>
struct ICollection_1_t10906;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>
struct List_1_t434;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>
struct KeyCollection_t10907;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>
struct ValueCollection_t10908;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t9158;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>[]
struct KeyValuePair_2U5BU5D_t10909;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>>
struct IEnumerator_1_t10911;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_110.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__101.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::.ctor()
 void Dictionary_2__ctor_m4617 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m76962 (Dictionary_2_t192 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::.ctor(System.Int32)
 void Dictionary_2__ctor_m76963 (Dictionary_2_t192 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m76964 (Dictionary_2_t192 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m76965 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m76966 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m76967 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m76968 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m76969 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m76970 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m76971 (Dictionary_2_t192 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m76972 (Dictionary_2_t192 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m76973 (Dictionary_2_t192 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m76974 (Dictionary_2_t192 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m76975 (Dictionary_2_t192 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m76976 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m76977 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m76978 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m76979 (Dictionary_2_t192 * __this, KeyValuePair_2_t10910  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m76980 (Dictionary_2_t192 * __this, KeyValuePair_2_t10910  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m76981 (Dictionary_2_t192 * __this, KeyValuePair_2U5BU5D_t10909* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m76982 (Dictionary_2_t192 * __this, KeyValuePair_2_t10910  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m76983 (Dictionary_2_t192 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m76984 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m76985 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m76986 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::get_Count()
 int32_t Dictionary_2_get_Count_m5789 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::get_Item(TKey)
 List_1_t434 * Dictionary_2_get_Item_m5791 (Dictionary_2_t192 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m76987 (Dictionary_2_t192 * __this, int32_t ___key, List_1_t434 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m76988 (Dictionary_2_t192 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m76989 (Dictionary_2_t192 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m76990 (Dictionary_2_t192 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::make_pair(TKey,TValue)
 KeyValuePair_2_t10910  Dictionary_2_make_pair_m76991 (Object_t * __this/* static, unused */, int32_t ___key, List_1_t434 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::pick_key(TKey,TValue)
 int32_t Dictionary_2_pick_key_m76992 (Object_t * __this/* static, unused */, int32_t ___key, List_1_t434 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::pick_value(TKey,TValue)
 List_1_t434 * Dictionary_2_pick_value_m76993 (Object_t * __this/* static, unused */, int32_t ___key, List_1_t434 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m76994 (Dictionary_2_t192 * __this, KeyValuePair_2U5BU5D_t10909* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::Resize()
 void Dictionary_2_Resize_m76995 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::Add(TKey,TValue)
 void Dictionary_2_Add_m4987 (Dictionary_2_t192 * __this, int32_t ___key, List_1_t434 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::Clear()
 void Dictionary_2_Clear_m4984 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m5790 (Dictionary_2_t192 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m76996 (Dictionary_2_t192 * __this, List_1_t434 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m76997 (Dictionary_2_t192 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m76998 (Dictionary_2_t192 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::Remove(TKey)
 bool Dictionary_2_Remove_m76999 (Dictionary_2_t192 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m77000 (Dictionary_2_t192 * __this, int32_t ___key, List_1_t434 ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::get_Keys()
 KeyCollection_t10907 * Dictionary_2_get_Keys_m77001 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::get_Values()
 ValueCollection_t10908 * Dictionary_2_get_Values_m77002 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::ToTKey(System.Object)
 int32_t Dictionary_2_ToTKey_m77003 (Dictionary_2_t192 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::ToTValue(System.Object)
 List_1_t434 * Dictionary_2_ToTValue_m77004 (Dictionary_2_t192 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m77005 (Dictionary_2_t192 * __this, KeyValuePair_2_t10910  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::GetEnumerator()
 Enumerator_t10912  Dictionary_2_GetEnumerator_m77006 (Dictionary_2_t192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1066  Dictionary_2_U3CCopyToU3Em__0_m77007 (Object_t * __this/* static, unused */, int32_t ___key, List_1_t434 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
