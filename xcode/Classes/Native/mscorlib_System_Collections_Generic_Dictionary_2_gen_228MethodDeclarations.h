#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>
struct Dictionary_2_t4954;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t5685;
// System.Collections.Generic.ICollection`1<Games.AwardActivity.JoinNumRewardData>
struct ICollection_1_t19455;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Games.AwardActivity.JoinNumRewardData>
struct KeyCollection_t19456;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Games.AwardActivity.JoinNumRewardData>
struct ValueCollection_t19457;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t9158;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.JoinNumRewardData>[]
struct KeyValuePair_2U5BU5D_t19458;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.JoinNumRewardData>>
struct IEnumerator_1_t19459;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// Games.AwardActivity.JoinNumRewardData
#include "AssemblyU2DCSharp_Games_AwardActivity_JoinNumRewardData.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.JoinNumRewardData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_33.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Games.AwardActivity.JoinNumRewardData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__30.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::.ctor()
 void Dictionary_2__ctor_m41148 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m141749 (Dictionary_2_t4954 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::.ctor(System.Int32)
 void Dictionary_2__ctor_m141750 (Dictionary_2_t4954 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m141751 (Dictionary_2_t4954 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m141752 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m141753 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m141754 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m141755 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m141756 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m141757 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m141758 (Dictionary_2_t4954 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m141759 (Dictionary_2_t4954 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m141760 (Dictionary_2_t4954 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m141761 (Dictionary_2_t4954 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m141762 (Dictionary_2_t4954 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m141763 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m141764 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m141765 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m141766 (Dictionary_2_t4954 * __this, KeyValuePair_2_t5662  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m141767 (Dictionary_2_t4954 * __this, KeyValuePair_2_t5662  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m141768 (Dictionary_2_t4954 * __this, KeyValuePair_2U5BU5D_t19458* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m141769 (Dictionary_2_t4954 * __this, KeyValuePair_2_t5662  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m141770 (Dictionary_2_t4954 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m141771 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m141772 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m141773 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::get_Count()
 int32_t Dictionary_2_get_Count_m39944 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::get_Item(TKey)
 JoinNumRewardData_t2071  Dictionary_2_get_Item_m40089 (Dictionary_2_t4954 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m40096 (Dictionary_2_t4954 * __this, int32_t ___key, JoinNumRewardData_t2071  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m141774 (Dictionary_2_t4954 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m141775 (Dictionary_2_t4954 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m141776 (Dictionary_2_t4954 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::make_pair(TKey,TValue)
 KeyValuePair_2_t5662  Dictionary_2_make_pair_m141777 (Object_t * __this/* static, unused */, int32_t ___key, JoinNumRewardData_t2071  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::pick_key(TKey,TValue)
 int32_t Dictionary_2_pick_key_m141778 (Object_t * __this/* static, unused */, int32_t ___key, JoinNumRewardData_t2071  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::pick_value(TKey,TValue)
 JoinNumRewardData_t2071  Dictionary_2_pick_value_m141779 (Object_t * __this/* static, unused */, int32_t ___key, JoinNumRewardData_t2071  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m141780 (Dictionary_2_t4954 * __this, KeyValuePair_2U5BU5D_t19458* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::Resize()
 void Dictionary_2_Resize_m141781 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::Add(TKey,TValue)
 void Dictionary_2_Add_m41157 (Dictionary_2_t4954 * __this, int32_t ___key, JoinNumRewardData_t2071  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::Clear()
 void Dictionary_2_Clear_m141782 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m40087 (Dictionary_2_t4954 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m141783 (Dictionary_2_t4954 * __this, JoinNumRewardData_t2071  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m141784 (Dictionary_2_t4954 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m141785 (Dictionary_2_t4954 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::Remove(TKey)
 bool Dictionary_2_Remove_m141786 (Dictionary_2_t4954 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m141787 (Dictionary_2_t4954 * __this, int32_t ___key, JoinNumRewardData_t2071 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::get_Keys()
 KeyCollection_t19456 * Dictionary_2_get_Keys_m141788 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::get_Values()
 ValueCollection_t19457 * Dictionary_2_get_Values_m141789 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::ToTKey(System.Object)
 int32_t Dictionary_2_ToTKey_m141790 (Dictionary_2_t4954 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::ToTValue(System.Object)
 JoinNumRewardData_t2071  Dictionary_2_ToTValue_m141791 (Dictionary_2_t4954 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m141792 (Dictionary_2_t4954 * __this, KeyValuePair_2_t5662  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::GetEnumerator()
 Enumerator_t5661  Dictionary_2_GetEnumerator_m40100 (Dictionary_2_t4954 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1066  Dictionary_2_U3CCopyToU3Em__0_m141793 (Object_t * __this/* static, unused */, int32_t ___key, JoinNumRewardData_t2071  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
