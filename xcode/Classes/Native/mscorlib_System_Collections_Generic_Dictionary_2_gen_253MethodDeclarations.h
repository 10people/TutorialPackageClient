#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>
struct Dictionary_2_t4793;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t5685;
// System.Collections.Generic.ICollection`1<Games.Mission.CurOwnMission>
struct ICollection_1_t21255;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// Games.Mission.CurOwnMission
struct CurOwnMission_t4792;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Games.Mission.CurOwnMission>
struct KeyCollection_t21256;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Games.Mission.CurOwnMission>
struct ValueCollection_t21257;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t9158;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Games.Mission.CurOwnMission>[]
struct KeyValuePair_2U5BU5D_t21258;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Games.Mission.CurOwnMission>>
struct IEnumerator_1_t21259;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Games.Mission.CurOwnMission>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_51.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Games.Mission.CurOwnMission>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__45.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::.ctor()
 void Dictionary_2__ctor_m40992 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m155126 (Dictionary_2_t4793 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::.ctor(System.Int32)
 void Dictionary_2__ctor_m155127 (Dictionary_2_t4793 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m155128 (Dictionary_2_t4793 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m155129 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m155130 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m155131 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m155132 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m155133 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m155134 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m155135 (Dictionary_2_t4793 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m155136 (Dictionary_2_t4793 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m155137 (Dictionary_2_t4793 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m155138 (Dictionary_2_t4793 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m155139 (Dictionary_2_t4793 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m155140 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m155141 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m155142 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m155143 (Dictionary_2_t4793 * __this, KeyValuePair_2_t5791  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m155144 (Dictionary_2_t4793 * __this, KeyValuePair_2_t5791  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m155145 (Dictionary_2_t4793 * __this, KeyValuePair_2U5BU5D_t21258* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m155146 (Dictionary_2_t4793 * __this, KeyValuePair_2_t5791  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m155147 (Dictionary_2_t4793 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m155148 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m155149 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m155150 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::get_Count()
 int32_t Dictionary_2_get_Count_m40993 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::get_Item(TKey)
 CurOwnMission_t4792 * Dictionary_2_get_Item_m41006 (Dictionary_2_t4793 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m155151 (Dictionary_2_t4793 * __this, int32_t ___key, CurOwnMission_t4792 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m155152 (Dictionary_2_t4793 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m155153 (Dictionary_2_t4793 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m155154 (Dictionary_2_t4793 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::make_pair(TKey,TValue)
 KeyValuePair_2_t5791  Dictionary_2_make_pair_m155155 (Object_t * __this/* static, unused */, int32_t ___key, CurOwnMission_t4792 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::pick_key(TKey,TValue)
 int32_t Dictionary_2_pick_key_m155156 (Object_t * __this/* static, unused */, int32_t ___key, CurOwnMission_t4792 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::pick_value(TKey,TValue)
 CurOwnMission_t4792 * Dictionary_2_pick_value_m155157 (Object_t * __this/* static, unused */, int32_t ___key, CurOwnMission_t4792 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m155158 (Dictionary_2_t4793 * __this, KeyValuePair_2U5BU5D_t21258* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::Resize()
 void Dictionary_2_Resize_m155159 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::Add(TKey,TValue)
 void Dictionary_2_Add_m41004 (Dictionary_2_t4793 * __this, int32_t ___key, CurOwnMission_t4792 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::Clear()
 void Dictionary_2_Clear_m40994 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m41003 (Dictionary_2_t4793 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m155160 (Dictionary_2_t4793 * __this, CurOwnMission_t4792 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m155161 (Dictionary_2_t4793 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m155162 (Dictionary_2_t4793 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::Remove(TKey)
 bool Dictionary_2_Remove_m41005 (Dictionary_2_t4793 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m155163 (Dictionary_2_t4793 * __this, int32_t ___key, CurOwnMission_t4792 ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::get_Keys()
 KeyCollection_t21256 * Dictionary_2_get_Keys_m155164 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::get_Values()
 ValueCollection_t21257 * Dictionary_2_get_Values_m155165 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::ToTKey(System.Object)
 int32_t Dictionary_2_ToTKey_m155166 (Dictionary_2_t4793 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::ToTValue(System.Object)
 CurOwnMission_t4792 * Dictionary_2_ToTValue_m155167 (Dictionary_2_t4793 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m155168 (Dictionary_2_t4793 * __this, KeyValuePair_2_t5791  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::GetEnumerator()
 Enumerator_t5790  Dictionary_2_GetEnumerator_m41007 (Dictionary_2_t4793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1066  Dictionary_2_U3CCopyToU3Em__0_m155169 (Object_t * __this/* static, unused */, int32_t ___key, CurOwnMission_t4792 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
