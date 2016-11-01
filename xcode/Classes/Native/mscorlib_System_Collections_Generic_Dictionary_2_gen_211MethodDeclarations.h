#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>
struct Dictionary_2_t4923;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t5564;
// System.Collections.Generic.ICollection`1<MailData/UserMail>
struct ICollection_1_t17426;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// MailData/UserMail
struct UserMail_t1901;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,MailData/UserMail>
struct KeyCollection_t5604;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,MailData/UserMail>
struct ValueCollection_t17427;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t17424;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,MailData/UserMail>[]
struct KeyValuePair_2U5BU5D_t17428;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,MailData/UserMail>>
struct IEnumerator_1_t17429;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,MailData/UserMail>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,MailData/UserMail>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::.ctor()
 void Dictionary_2__ctor_m41128 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m129552 (Dictionary_2_t4923 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::.ctor(System.Int32)
 void Dictionary_2__ctor_m129553 (Dictionary_2_t4923 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m129554 (Dictionary_2_t4923 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m129555 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m129556 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m129557 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m129558 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m129559 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m129560 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m129561 (Dictionary_2_t4923 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m129562 (Dictionary_2_t4923 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m129563 (Dictionary_2_t4923 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m129564 (Dictionary_2_t4923 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m129565 (Dictionary_2_t4923 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m129566 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m129567 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m129568 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m129569 (Dictionary_2_t4923 * __this, KeyValuePair_2_t5558  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m129570 (Dictionary_2_t4923 * __this, KeyValuePair_2_t5558  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m129571 (Dictionary_2_t4923 * __this, KeyValuePair_2U5BU5D_t17428* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m129572 (Dictionary_2_t4923 * __this, KeyValuePair_2_t5558  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m129573 (Dictionary_2_t4923 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m129574 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m129575 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m129576 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::get_Count()
 int32_t Dictionary_2_get_Count_m39300 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::get_Item(TKey)
 UserMail_t1901 * Dictionary_2_get_Item_m39632 (Dictionary_2_t4923 * __this, uint64_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m129577 (Dictionary_2_t4923 * __this, uint64_t ___key, UserMail_t1901 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m129578 (Dictionary_2_t4923 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m129579 (Dictionary_2_t4923 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m129580 (Dictionary_2_t4923 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::make_pair(TKey,TValue)
 KeyValuePair_2_t5558  Dictionary_2_make_pair_m129581 (Object_t * __this/* static, unused */, uint64_t ___key, UserMail_t1901 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::pick_key(TKey,TValue)
 uint64_t Dictionary_2_pick_key_m129582 (Object_t * __this/* static, unused */, uint64_t ___key, UserMail_t1901 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::pick_value(TKey,TValue)
 UserMail_t1901 * Dictionary_2_pick_value_m129583 (Object_t * __this/* static, unused */, uint64_t ___key, UserMail_t1901 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m129584 (Dictionary_2_t4923 * __this, KeyValuePair_2U5BU5D_t17428* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::Resize()
 void Dictionary_2_Resize_m129585 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::Add(TKey,TValue)
 void Dictionary_2_Add_m41130 (Dictionary_2_t4923 * __this, uint64_t ___key, UserMail_t1901 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::Clear()
 void Dictionary_2_Clear_m41129 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m39990 (Dictionary_2_t4923 * __this, uint64_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m129586 (Dictionary_2_t4923 * __this, UserMail_t1901 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m129587 (Dictionary_2_t4923 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m129588 (Dictionary_2_t4923 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::Remove(TKey)
 bool Dictionary_2_Remove_m41131 (Dictionary_2_t4923 * __this, uint64_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m129589 (Dictionary_2_t4923 * __this, uint64_t ___key, UserMail_t1901 ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::get_Keys()
 KeyCollection_t5604 * Dictionary_2_get_Keys_m39629 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::get_Values()
 ValueCollection_t17427 * Dictionary_2_get_Values_m129590 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::ToTKey(System.Object)
 uint64_t Dictionary_2_ToTKey_m129591 (Dictionary_2_t4923 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::ToTValue(System.Object)
 UserMail_t1901 * Dictionary_2_ToTValue_m129592 (Dictionary_2_t4923 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m129593 (Dictionary_2_t4923 * __this, KeyValuePair_2_t5558  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::GetEnumerator()
 Enumerator_t5557  Dictionary_2_GetEnumerator_m39301 (Dictionary_2_t4923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1066  Dictionary_2_U3CCopyToU3Em__0_m129594 (Object_t * __this/* static, unused */, uint64_t ___key, UserMail_t1901 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
