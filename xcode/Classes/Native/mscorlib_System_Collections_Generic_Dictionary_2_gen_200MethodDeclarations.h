#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>
struct Dictionary_2_t5489;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t945;
// System.Collections.Generic.ICollection`1<PropertyMetadata>
struct ICollection_1_t5493;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,PropertyMetadata>
struct KeyCollection_t16434;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PropertyMetadata>
struct ValueCollection_t16435;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t8568;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.String,PropertyMetadata>[]
struct KeyValuePair_2U5BU5D_t16436;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,PropertyMetadata>>
struct IEnumerator_1_t16437;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// PropertyMetadata
#include "AssemblyU2DCSharp_PropertyMetadata.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,PropertyMetadata>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_233.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,PropertyMetadata>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__231.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::.ctor()
 void Dictionary_2__ctor_m38794 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m122678 (Dictionary_2_t5489 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::.ctor(System.Int32)
 void Dictionary_2__ctor_m122679 (Dictionary_2_t5489 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m122680 (Dictionary_2_t5489 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m122681 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m122682 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m122683 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m122684 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m122685 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m122686 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m122687 (Dictionary_2_t5489 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m122688 (Dictionary_2_t5489 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m122689 (Dictionary_2_t5489 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m122690 (Dictionary_2_t5489 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m122691 (Dictionary_2_t5489 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m122692 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m122693 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m122694 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m122695 (Dictionary_2_t5489 * __this, KeyValuePair_2_t16288  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m122696 (Dictionary_2_t5489 * __this, KeyValuePair_2_t16288  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m122697 (Dictionary_2_t5489 * __this, KeyValuePair_2U5BU5D_t16436* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m122698 (Dictionary_2_t5489 * __this, KeyValuePair_2_t16288  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m122699 (Dictionary_2_t5489 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m122700 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m122701 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m122702 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::get_Count()
 int32_t Dictionary_2_get_Count_m122703 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::get_Item(TKey)
 PropertyMetadata_t1070  Dictionary_2_get_Item_m122704 (Dictionary_2_t5489 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m122705 (Dictionary_2_t5489 * __this, String_t* ___key, PropertyMetadata_t1070  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m122706 (Dictionary_2_t5489 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m122707 (Dictionary_2_t5489 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m122708 (Dictionary_2_t5489 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::make_pair(TKey,TValue)
 KeyValuePair_2_t16288  Dictionary_2_make_pair_m122709 (Object_t * __this/* static, unused */, String_t* ___key, PropertyMetadata_t1070  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::pick_key(TKey,TValue)
 String_t* Dictionary_2_pick_key_m122710 (Object_t * __this/* static, unused */, String_t* ___key, PropertyMetadata_t1070  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::pick_value(TKey,TValue)
 PropertyMetadata_t1070  Dictionary_2_pick_value_m122711 (Object_t * __this/* static, unused */, String_t* ___key, PropertyMetadata_t1070  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m122712 (Dictionary_2_t5489 * __this, KeyValuePair_2U5BU5D_t16436* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::Resize()
 void Dictionary_2_Resize_m122713 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::Add(TKey,TValue)
 void Dictionary_2_Add_m122714 (Dictionary_2_t5489 * __this, String_t* ___key, PropertyMetadata_t1070  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::Clear()
 void Dictionary_2_Clear_m122715 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m122716 (Dictionary_2_t5489 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m122717 (Dictionary_2_t5489 * __this, PropertyMetadata_t1070  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m122718 (Dictionary_2_t5489 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m122719 (Dictionary_2_t5489 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::Remove(TKey)
 bool Dictionary_2_Remove_m122720 (Dictionary_2_t5489 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m122721 (Dictionary_2_t5489 * __this, String_t* ___key, PropertyMetadata_t1070 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::get_Keys()
 KeyCollection_t16434 * Dictionary_2_get_Keys_m122722 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::get_Values()
 ValueCollection_t16435 * Dictionary_2_get_Values_m122723 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::ToTKey(System.Object)
 String_t* Dictionary_2_ToTKey_m122724 (Dictionary_2_t5489 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::ToTValue(System.Object)
 PropertyMetadata_t1070  Dictionary_2_ToTValue_m122725 (Dictionary_2_t5489 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m122726 (Dictionary_2_t5489 * __this, KeyValuePair_2_t16288  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::GetEnumerator()
 Enumerator_t16438  Dictionary_2_GetEnumerator_m122727 (Dictionary_2_t5489 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1066  Dictionary_2_U3CCopyToU3Em__0_m122728 (Object_t * __this/* static, unused */, String_t* ___key, PropertyMetadata_t1070  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
