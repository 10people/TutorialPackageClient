#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>
struct Dictionary_2_t4932;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t5564;
// System.Collections.Generic.ICollection`1<PVPData/OpponentInfo>
struct ICollection_1_t19739;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,PVPData/OpponentInfo>
struct KeyCollection_t5655;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,PVPData/OpponentInfo>
struct ValueCollection_t19740;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t17424;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,PVPData/OpponentInfo>[]
struct KeyValuePair_2U5BU5D_t19741;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,PVPData/OpponentInfo>>
struct IEnumerator_1_t19742;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// PVPData/OpponentInfo
#include "AssemblyU2DCSharp_PVPData_OpponentInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,PVPData/OpponentInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_252.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,PVPData/OpponentInfo>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__244.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::.ctor()
 void Dictionary_2__ctor_m41132 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m143842 (Dictionary_2_t4932 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::.ctor(System.Int32)
 void Dictionary_2__ctor_m143843 (Dictionary_2_t4932 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m143844 (Dictionary_2_t4932 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m143845 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m143846 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m143847 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m143848 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m143849 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m143850 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m143851 (Dictionary_2_t4932 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m143852 (Dictionary_2_t4932 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m143853 (Dictionary_2_t4932 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m143854 (Dictionary_2_t4932 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m143855 (Dictionary_2_t4932 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m143856 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m143857 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m143858 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m143859 (Dictionary_2_t4932 * __this, KeyValuePair_2_t19736  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m143860 (Dictionary_2_t4932 * __this, KeyValuePair_2_t19736  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m143861 (Dictionary_2_t4932 * __this, KeyValuePair_2U5BU5D_t19741* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m143862 (Dictionary_2_t4932 * __this, KeyValuePair_2_t19736  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m143863 (Dictionary_2_t4932 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m143864 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m143865 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m143866 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::get_Count()
 int32_t Dictionary_2_get_Count_m40026 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::get_Item(TKey)
 OpponentInfo_t1910  Dictionary_2_get_Item_m40024 (Dictionary_2_t4932 * __this, uint64_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m143867 (Dictionary_2_t4932 * __this, uint64_t ___key, OpponentInfo_t1910  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m143868 (Dictionary_2_t4932 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m143869 (Dictionary_2_t4932 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m143870 (Dictionary_2_t4932 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::make_pair(TKey,TValue)
 KeyValuePair_2_t19736  Dictionary_2_make_pair_m143871 (Object_t * __this/* static, unused */, uint64_t ___key, OpponentInfo_t1910  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::pick_key(TKey,TValue)
 uint64_t Dictionary_2_pick_key_m143872 (Object_t * __this/* static, unused */, uint64_t ___key, OpponentInfo_t1910  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::pick_value(TKey,TValue)
 OpponentInfo_t1910  Dictionary_2_pick_value_m143873 (Object_t * __this/* static, unused */, uint64_t ___key, OpponentInfo_t1910  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m143874 (Dictionary_2_t4932 * __this, KeyValuePair_2U5BU5D_t19741* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::Resize()
 void Dictionary_2_Resize_m143875 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::Add(TKey,TValue)
 void Dictionary_2_Add_m41137 (Dictionary_2_t4932 * __this, uint64_t ___key, OpponentInfo_t1910  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::Clear()
 void Dictionary_2_Clear_m41136 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m143876 (Dictionary_2_t4932 * __this, uint64_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m143877 (Dictionary_2_t4932 * __this, OpponentInfo_t1910  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m143878 (Dictionary_2_t4932 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m143879 (Dictionary_2_t4932 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::Remove(TKey)
 bool Dictionary_2_Remove_m143880 (Dictionary_2_t4932 * __this, uint64_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m143881 (Dictionary_2_t4932 * __this, uint64_t ___key, OpponentInfo_t1910 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::get_Keys()
 KeyCollection_t5655 * Dictionary_2_get_Keys_m40021 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::get_Values()
 ValueCollection_t19740 * Dictionary_2_get_Values_m143882 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::ToTKey(System.Object)
 uint64_t Dictionary_2_ToTKey_m143883 (Dictionary_2_t4932 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::ToTValue(System.Object)
 OpponentInfo_t1910  Dictionary_2_ToTValue_m143884 (Dictionary_2_t4932 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m143885 (Dictionary_2_t4932 * __this, KeyValuePair_2_t19736  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::GetEnumerator()
 Enumerator_t19735  Dictionary_2_GetEnumerator_m143886 (Dictionary_2_t4932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1066  Dictionary_2_U3CCopyToU3Em__0_m143887 (Object_t * __this/* static, unused */, uint64_t ___key, OpponentInfo_t1910  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
