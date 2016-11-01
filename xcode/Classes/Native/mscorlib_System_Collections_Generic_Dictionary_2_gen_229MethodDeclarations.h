#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>
struct Dictionary_2_t4730;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t5685;
// System.Collections.Generic.ICollection`1<Games.FlyWing.FlyWingData>
struct ICollection_1_t19478;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// Games.FlyWing.FlyWingData
struct FlyWingData_t4729;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Games.FlyWing.FlyWingData>
struct KeyCollection_t19479;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Games.FlyWing.FlyWingData>
struct ValueCollection_t19480;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t9158;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Games.FlyWing.FlyWingData>[]
struct KeyValuePair_2U5BU5D_t19481;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Games.FlyWing.FlyWingData>>
struct IEnumerator_1_t19482;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Games.FlyWing.FlyWingData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_28.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Games.FlyWing.FlyWingData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__26.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::.ctor()
 void Dictionary_2__ctor_m40906 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m141915 (Dictionary_2_t4730 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::.ctor(System.Int32)
 void Dictionary_2__ctor_m141916 (Dictionary_2_t4730 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m141917 (Dictionary_2_t4730 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m141918 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m141919 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m141920 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m141921 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m141922 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m141923 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m141924 (Dictionary_2_t4730 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m141925 (Dictionary_2_t4730 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m141926 (Dictionary_2_t4730 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m141927 (Dictionary_2_t4730 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m141928 (Dictionary_2_t4730 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m141929 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m141930 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m141931 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m141932 (Dictionary_2_t4730 * __this, KeyValuePair_2_t5642  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m141933 (Dictionary_2_t4730 * __this, KeyValuePair_2_t5642  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m141934 (Dictionary_2_t4730 * __this, KeyValuePair_2U5BU5D_t19481* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m141935 (Dictionary_2_t4730 * __this, KeyValuePair_2_t5642  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m141936 (Dictionary_2_t4730 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m141937 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m141938 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m141939 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::get_Count()
 int32_t Dictionary_2_get_Count_m39945 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::get_Item(TKey)
 FlyWingData_t4729 * Dictionary_2_get_Item_m141940 (Dictionary_2_t4730 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m141941 (Dictionary_2_t4730 * __this, int32_t ___key, FlyWingData_t4729 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m141942 (Dictionary_2_t4730 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m141943 (Dictionary_2_t4730 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m141944 (Dictionary_2_t4730 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::make_pair(TKey,TValue)
 KeyValuePair_2_t5642  Dictionary_2_make_pair_m141945 (Object_t * __this/* static, unused */, int32_t ___key, FlyWingData_t4729 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::pick_key(TKey,TValue)
 int32_t Dictionary_2_pick_key_m141946 (Object_t * __this/* static, unused */, int32_t ___key, FlyWingData_t4729 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::pick_value(TKey,TValue)
 FlyWingData_t4729 * Dictionary_2_pick_value_m141947 (Object_t * __this/* static, unused */, int32_t ___key, FlyWingData_t4729 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m141948 (Dictionary_2_t4730 * __this, KeyValuePair_2U5BU5D_t19481* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::Resize()
 void Dictionary_2_Resize_m141949 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::Add(TKey,TValue)
 void Dictionary_2_Add_m40908 (Dictionary_2_t4730 * __this, int32_t ___key, FlyWingData_t4729 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::Clear()
 void Dictionary_2_Clear_m40909 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m40907 (Dictionary_2_t4730 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m141950 (Dictionary_2_t4730 * __this, FlyWingData_t4729 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m141951 (Dictionary_2_t4730 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m141952 (Dictionary_2_t4730 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::Remove(TKey)
 bool Dictionary_2_Remove_m40910 (Dictionary_2_t4730 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m141953 (Dictionary_2_t4730 * __this, int32_t ___key, FlyWingData_t4729 ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::get_Keys()
 KeyCollection_t19479 * Dictionary_2_get_Keys_m141954 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::get_Values()
 ValueCollection_t19480 * Dictionary_2_get_Values_m141955 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::ToTKey(System.Object)
 int32_t Dictionary_2_ToTKey_m141956 (Dictionary_2_t4730 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::ToTValue(System.Object)
 FlyWingData_t4729 * Dictionary_2_ToTValue_m141957 (Dictionary_2_t4730 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m141958 (Dictionary_2_t4730 * __this, KeyValuePair_2_t5642  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::GetEnumerator()
 Enumerator_t5641  Dictionary_2_GetEnumerator_m39946 (Dictionary_2_t4730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1066  Dictionary_2_U3CCopyToU3Em__0_m141959 (Object_t * __this/* static, unused */, int32_t ___key, FlyWingData_t4729 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
