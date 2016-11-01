#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>
struct Dictionary_2_t4731;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t5564;
// System.Collections.Generic.ICollection`1<GuildMember>
struct ICollection_1_t17518;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// GuildMember
struct GuildMember_t1444;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,GuildMember>
struct KeyCollection_t17519;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,GuildMember>
struct ValueCollection_t17520;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t17424;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>[]
struct KeyValuePair_2U5BU5D_t17521;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>
struct IEnumerator_1_t17522;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,GuildMember>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::.ctor()
 void Dictionary_2__ctor_m40913 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m130167 (Dictionary_2_t4731 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::.ctor(System.Int32)
 void Dictionary_2__ctor_m130168 (Dictionary_2_t4731 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m130169 (Dictionary_2_t4731 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m130170 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m130171 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m130172 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m130173 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m130174 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m130175 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m130176 (Dictionary_2_t4731 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m130177 (Dictionary_2_t4731 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m130178 (Dictionary_2_t4731 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m130179 (Dictionary_2_t4731 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m130180 (Dictionary_2_t4731 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m130181 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m130182 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m130183 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m130184 (Dictionary_2_t4731 * __this, KeyValuePair_2_t4736  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m130185 (Dictionary_2_t4731 * __this, KeyValuePair_2_t4736  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m130186 (Dictionary_2_t4731 * __this, KeyValuePair_2U5BU5D_t17521* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m130187 (Dictionary_2_t4731 * __this, KeyValuePair_2_t4736  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m130188 (Dictionary_2_t4731 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m130189 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m130190 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m130191 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::get_Count()
 int32_t Dictionary_2_get_Count_m130192 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::get_Item(TKey)
 GuildMember_t1444 * Dictionary_2_get_Item_m130193 (Dictionary_2_t4731 * __this, uint64_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m130194 (Dictionary_2_t4731 * __this, uint64_t ___key, GuildMember_t1444 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m130195 (Dictionary_2_t4731 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m130196 (Dictionary_2_t4731 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m130197 (Dictionary_2_t4731 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::make_pair(TKey,TValue)
 KeyValuePair_2_t4736  Dictionary_2_make_pair_m130198 (Object_t * __this/* static, unused */, uint64_t ___key, GuildMember_t1444 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::pick_key(TKey,TValue)
 uint64_t Dictionary_2_pick_key_m130199 (Object_t * __this/* static, unused */, uint64_t ___key, GuildMember_t1444 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::pick_value(TKey,TValue)
 GuildMember_t1444 * Dictionary_2_pick_value_m130200 (Object_t * __this/* static, unused */, uint64_t ___key, GuildMember_t1444 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m130201 (Dictionary_2_t4731 * __this, KeyValuePair_2U5BU5D_t17521* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::Resize()
 void Dictionary_2_Resize_m130202 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::Add(TKey,TValue)
 void Dictionary_2_Add_m40918 (Dictionary_2_t4731 * __this, uint64_t ___key, GuildMember_t1444 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::Clear()
 void Dictionary_2_Clear_m40914 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m40927 (Dictionary_2_t4731 * __this, uint64_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m130203 (Dictionary_2_t4731 * __this, GuildMember_t1444 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m130204 (Dictionary_2_t4731 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m130205 (Dictionary_2_t4731 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::Remove(TKey)
 bool Dictionary_2_Remove_m130206 (Dictionary_2_t4731 * __this, uint64_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m39596 (Dictionary_2_t4731 * __this, uint64_t ___key, GuildMember_t1444 ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::get_Keys()
 KeyCollection_t17519 * Dictionary_2_get_Keys_m130207 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::get_Values()
 ValueCollection_t17520 * Dictionary_2_get_Values_m130208 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::ToTKey(System.Object)
 uint64_t Dictionary_2_ToTKey_m130209 (Dictionary_2_t4731 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::ToTValue(System.Object)
 GuildMember_t1444 * Dictionary_2_ToTValue_m130210 (Dictionary_2_t4731 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m130211 (Dictionary_2_t4731 * __this, KeyValuePair_2_t4736  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::GetEnumerator()
 Enumerator_t5561  Dictionary_2_GetEnumerator_m39345 (Dictionary_2_t4731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1066  Dictionary_2_U3CCopyToU3Em__0_m130212 (Object_t * __this/* static, unused */, uint64_t ___key, GuildMember_t1444 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
