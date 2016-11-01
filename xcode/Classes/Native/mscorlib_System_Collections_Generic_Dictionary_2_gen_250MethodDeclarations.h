#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>
struct Dictionary_2_t5754;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t5685;
// System.Collections.Generic.ICollection`1<AutoSearchAgent/PathNodeInfo>
struct ICollection_1_t20979;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// AutoSearchAgent/PathNodeInfo
struct PathNodeInfo_t4535;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,AutoSearchAgent/PathNodeInfo>
struct KeyCollection_t20980;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,AutoSearchAgent/PathNodeInfo>
struct ValueCollection_t20981;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t9158;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.Int32,AutoSearchAgent/PathNodeInfo>[]
struct KeyValuePair_2U5BU5D_t20982;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,AutoSearchAgent/PathNodeInfo>>
struct IEnumerator_1_t20984;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,AutoSearchAgent/PathNodeInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_263.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,AutoSearchAgent/PathNodeInfo>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__255.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::.ctor()
 void Dictionary_2__ctor_m40793 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m152836 (Dictionary_2_t5754 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::.ctor(System.Int32)
 void Dictionary_2__ctor_m152837 (Dictionary_2_t5754 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m152838 (Dictionary_2_t5754 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m152839 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m152840 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m152841 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m152842 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m152843 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m152844 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m152845 (Dictionary_2_t5754 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m152846 (Dictionary_2_t5754 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m152847 (Dictionary_2_t5754 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m152848 (Dictionary_2_t5754 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m152849 (Dictionary_2_t5754 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m152850 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m152851 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m152852 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m152853 (Dictionary_2_t5754 * __this, KeyValuePair_2_t20983  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m152854 (Dictionary_2_t5754 * __this, KeyValuePair_2_t20983  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m152855 (Dictionary_2_t5754 * __this, KeyValuePair_2U5BU5D_t20982* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m152856 (Dictionary_2_t5754 * __this, KeyValuePair_2_t20983  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m152857 (Dictionary_2_t5754 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m152858 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m152859 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m152860 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::get_Count()
 int32_t Dictionary_2_get_Count_m152861 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::get_Item(TKey)
 PathNodeInfo_t4535 * Dictionary_2_get_Item_m40796 (Dictionary_2_t5754 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m152862 (Dictionary_2_t5754 * __this, int32_t ___key, PathNodeInfo_t4535 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m152863 (Dictionary_2_t5754 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m152864 (Dictionary_2_t5754 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m152865 (Dictionary_2_t5754 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::make_pair(TKey,TValue)
 KeyValuePair_2_t20983  Dictionary_2_make_pair_m152866 (Object_t * __this/* static, unused */, int32_t ___key, PathNodeInfo_t4535 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::pick_key(TKey,TValue)
 int32_t Dictionary_2_pick_key_m152867 (Object_t * __this/* static, unused */, int32_t ___key, PathNodeInfo_t4535 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::pick_value(TKey,TValue)
 PathNodeInfo_t4535 * Dictionary_2_pick_value_m152868 (Object_t * __this/* static, unused */, int32_t ___key, PathNodeInfo_t4535 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m152869 (Dictionary_2_t5754 * __this, KeyValuePair_2U5BU5D_t20982* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::Resize()
 void Dictionary_2_Resize_m152870 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::Add(TKey,TValue)
 void Dictionary_2_Add_m40795 (Dictionary_2_t5754 * __this, int32_t ___key, PathNodeInfo_t4535 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::Clear()
 void Dictionary_2_Clear_m152871 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m40794 (Dictionary_2_t5754 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m152872 (Dictionary_2_t5754 * __this, PathNodeInfo_t4535 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m152873 (Dictionary_2_t5754 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m152874 (Dictionary_2_t5754 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::Remove(TKey)
 bool Dictionary_2_Remove_m152875 (Dictionary_2_t5754 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m152876 (Dictionary_2_t5754 * __this, int32_t ___key, PathNodeInfo_t4535 ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::get_Keys()
 KeyCollection_t20980 * Dictionary_2_get_Keys_m152877 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::get_Values()
 ValueCollection_t20981 * Dictionary_2_get_Values_m152878 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::ToTKey(System.Object)
 int32_t Dictionary_2_ToTKey_m152879 (Dictionary_2_t5754 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::ToTValue(System.Object)
 PathNodeInfo_t4535 * Dictionary_2_ToTValue_m152880 (Dictionary_2_t5754 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m152881 (Dictionary_2_t5754 * __this, KeyValuePair_2_t20983  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::GetEnumerator()
 Enumerator_t20985  Dictionary_2_GetEnumerator_m152882 (Dictionary_2_t5754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,AutoSearchAgent/PathNodeInfo>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1066  Dictionary_2_U3CCopyToU3Em__0_m152883 (Object_t * __this/* static, unused */, int32_t ___key, PathNodeInfo_t4535 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
