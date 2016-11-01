#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>
struct Dictionary_2_t1680;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t5685;
// System.Collections.Generic.ICollection`1<QianKunDaiLogic/ProductInfo>
struct ICollection_1_t18423;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// QianKunDaiLogic/ProductInfo
struct ProductInfo_t1678;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,QianKunDaiLogic/ProductInfo>
struct KeyCollection_t18424;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,QianKunDaiLogic/ProductInfo>
struct ValueCollection_t18425;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t9158;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.Int32,QianKunDaiLogic/ProductInfo>[]
struct KeyValuePair_2U5BU5D_t18426;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,QianKunDaiLogic/ProductInfo>>
struct IEnumerator_1_t18428;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,QianKunDaiLogic/ProductInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_247.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,QianKunDaiLogic/ProductInfo>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__239.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::.ctor()
 void Dictionary_2__ctor_m39615 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m135708 (Dictionary_2_t1680 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::.ctor(System.Int32)
 void Dictionary_2__ctor_m135709 (Dictionary_2_t1680 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m135710 (Dictionary_2_t1680 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m135711 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m135712 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m135713 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m135714 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m135715 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m135716 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m135717 (Dictionary_2_t1680 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m135718 (Dictionary_2_t1680 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m135719 (Dictionary_2_t1680 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m135720 (Dictionary_2_t1680 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m135721 (Dictionary_2_t1680 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m135722 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m135723 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m135724 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m135725 (Dictionary_2_t1680 * __this, KeyValuePair_2_t18427  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m135726 (Dictionary_2_t1680 * __this, KeyValuePair_2_t18427  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m135727 (Dictionary_2_t1680 * __this, KeyValuePair_2U5BU5D_t18426* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m135728 (Dictionary_2_t1680 * __this, KeyValuePair_2_t18427  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m135729 (Dictionary_2_t1680 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m135730 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m135731 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m135732 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::get_Count()
 int32_t Dictionary_2_get_Count_m135733 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::get_Item(TKey)
 ProductInfo_t1678 * Dictionary_2_get_Item_m39623 (Dictionary_2_t1680 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m135734 (Dictionary_2_t1680 * __this, int32_t ___key, ProductInfo_t1678 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m135735 (Dictionary_2_t1680 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m135736 (Dictionary_2_t1680 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m135737 (Dictionary_2_t1680 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::make_pair(TKey,TValue)
 KeyValuePair_2_t18427  Dictionary_2_make_pair_m135738 (Object_t * __this/* static, unused */, int32_t ___key, ProductInfo_t1678 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::pick_key(TKey,TValue)
 int32_t Dictionary_2_pick_key_m135739 (Object_t * __this/* static, unused */, int32_t ___key, ProductInfo_t1678 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::pick_value(TKey,TValue)
 ProductInfo_t1678 * Dictionary_2_pick_value_m135740 (Object_t * __this/* static, unused */, int32_t ___key, ProductInfo_t1678 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m135741 (Dictionary_2_t1680 * __this, KeyValuePair_2U5BU5D_t18426* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::Resize()
 void Dictionary_2_Resize_m135742 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::Add(TKey,TValue)
 void Dictionary_2_Add_m39625 (Dictionary_2_t1680 * __this, int32_t ___key, ProductInfo_t1678 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::Clear()
 void Dictionary_2_Clear_m39616 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m39622 (Dictionary_2_t1680 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m135743 (Dictionary_2_t1680 * __this, ProductInfo_t1678 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m135744 (Dictionary_2_t1680 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m135745 (Dictionary_2_t1680 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::Remove(TKey)
 bool Dictionary_2_Remove_m39624 (Dictionary_2_t1680 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m135746 (Dictionary_2_t1680 * __this, int32_t ___key, ProductInfo_t1678 ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::get_Keys()
 KeyCollection_t18424 * Dictionary_2_get_Keys_m135747 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::get_Values()
 ValueCollection_t18425 * Dictionary_2_get_Values_m135748 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::ToTKey(System.Object)
 int32_t Dictionary_2_ToTKey_m135749 (Dictionary_2_t1680 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::ToTValue(System.Object)
 ProductInfo_t1678 * Dictionary_2_ToTValue_m135750 (Dictionary_2_t1680 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m135751 (Dictionary_2_t1680 * __this, KeyValuePair_2_t18427  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::GetEnumerator()
 Enumerator_t18429  Dictionary_2_GetEnumerator_m135752 (Dictionary_2_t1680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1066  Dictionary_2_U3CCopyToU3Em__0_m135753 (Object_t * __this/* static, unused */, int32_t ___key, ProductInfo_t1678 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
