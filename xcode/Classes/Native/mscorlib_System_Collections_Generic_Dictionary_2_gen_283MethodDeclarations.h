#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t8794;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t8615;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t8799;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t8800;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t8797;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t8795;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t8802;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_64.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__55.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
 void Dictionary_2__ctor_m59356_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m59356(__this, method) (void)Dictionary_2__ctor_m59356_gshared((Dictionary_2_t8794 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m59358_gshared (Dictionary_2_t8794 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m59358(__this, ___comparer, method) (void)Dictionary_2__ctor_m59358_gshared((Dictionary_2_t8794 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
 void Dictionary_2__ctor_m59360_gshared (Dictionary_2_t8794 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m59360(__this, ___capacity, method) (void)Dictionary_2__ctor_m59360_gshared((Dictionary_2_t8794 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m59362_gshared (Dictionary_2_t8794 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m59362(__this, ___info, ___context, method) (void)Dictionary_2__ctor_m59362_gshared((Dictionary_2_t8794 *)__this, (SerializationInfo_t6402 *)___info, (StreamingContext_t6414 )___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m59364_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m59364(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m59364_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m59366_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m59366(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m59366_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m59368_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m59368(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Keys_m59368_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m59370_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m59370(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Values_m59370_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m59372_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m59372(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m59372_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m59374_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m59374(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m59374_gshared((Dictionary_2_t8794 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m59376_gshared (Dictionary_2_t8794 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m59376(__this, ___key, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Item_m59376_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m59378_gshared (Dictionary_2_t8794 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m59378(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_set_Item_m59378_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m59380_gshared (Dictionary_2_t8794 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m59380(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_Add_m59380_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m59382_gshared (Dictionary_2_t8794 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m59382(__this, ___key, method) (bool)Dictionary_2_System_Collections_IDictionary_Contains_m59382_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m59384_gshared (Dictionary_2_t8794 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m59384(__this, ___key, method) (void)Dictionary_2_System_Collections_IDictionary_Remove_m59384_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m59386_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m59386(__this, method) (bool)Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m59386_gshared((Dictionary_2_t8794 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m59388_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m59388(__this, method) (Object_t *)Dictionary_2_System_Collections_ICollection_get_SyncRoot_m59388_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m59390_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m59390(__this, method) (bool)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m59390_gshared((Dictionary_2_t8794 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m59453 (Dictionary_2_t8794 * __this, KeyValuePair_2_t8801  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m59454 (Dictionary_2_t8794 * __this, KeyValuePair_2_t8801  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59394_gshared (Dictionary_2_t8794 * __this, KeyValuePair_2U5BU5D_t8795* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59394(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59394_gshared((Dictionary_2_t8794 *)__this, (KeyValuePair_2U5BU5D_t8795*)___array, (int32_t)___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m59455 (Dictionary_2_t8794 * __this, KeyValuePair_2_t8801  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m59397_gshared (Dictionary_2_t8794 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m59397(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_ICollection_CopyTo_m59397_gshared((Dictionary_2_t8794 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m59399_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m59399(__this, method) (Object_t *)Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m59399_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m59401_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m59401(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m59401_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m59403_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m59403(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_GetEnumerator_m59403_gshared((Dictionary_2_t8794 *)__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
 int32_t Dictionary_2_get_Count_m59405_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m59405(__this, method) (int32_t)Dictionary_2_get_Count_m59405_gshared((Dictionary_2_t8794 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
 Object_t * Dictionary_2_get_Item_m59407_gshared (Dictionary_2_t8794 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m59407(__this, ___key, method) (Object_t *)Dictionary_2_get_Item_m59407_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m59409_gshared (Dictionary_2_t8794 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m59409(__this, ___key, ___value, method) (void)Dictionary_2_set_Item_m59409_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m59411_gshared (Dictionary_2_t8794 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m59411(__this, ___capacity, ___hcp, method) (void)Dictionary_2_Init_m59411_gshared((Dictionary_2_t8794 *)__this, (int32_t)___capacity, (Object_t*)___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m59413_gshared (Dictionary_2_t8794 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m59413(__this, ___size, method) (void)Dictionary_2_InitArrays_m59413_gshared((Dictionary_2_t8794 *)__this, (int32_t)___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m59415_gshared (Dictionary_2_t8794 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m59415(__this, ___array, ___index, method) (void)Dictionary_2_CopyToCheck_m59415_gshared((Dictionary_2_t8794 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
 KeyValuePair_2_t8801  Dictionary_2_make_pair_m59456 (Object_t * __this/* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
 Object_t * Dictionary_2_pick_key_m59418_gshared (Object_t * __this/* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m59418(__this/* static, unused */, ___key, ___value, method) (Object_t *)Dictionary_2_pick_key_m59418_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
 Object_t * Dictionary_2_pick_value_m59420_gshared (Object_t * __this/* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m59420(__this/* static, unused */, ___key, ___value, method) (Object_t *)Dictionary_2_pick_value_m59420_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m59422_gshared (Dictionary_2_t8794 * __this, KeyValuePair_2U5BU5D_t8795* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m59422(__this, ___array, ___index, method) (void)Dictionary_2_CopyTo_m59422_gshared((Dictionary_2_t8794 *)__this, (KeyValuePair_2U5BU5D_t8795*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
 void Dictionary_2_Resize_m59424_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m59424(__this, method) (void)Dictionary_2_Resize_m59424_gshared((Dictionary_2_t8794 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
 void Dictionary_2_Add_m59426_gshared (Dictionary_2_t8794 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m59426(__this, ___key, ___value, method) (void)Dictionary_2_Add_m59426_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
 void Dictionary_2_Clear_m59428_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m59428(__this, method) (void)Dictionary_2_Clear_m59428_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m59430_gshared (Dictionary_2_t8794 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m59430(__this, ___key, method) (bool)Dictionary_2_ContainsKey_m59430_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m59432_gshared (Dictionary_2_t8794 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m59432(__this, ___value, method) (bool)Dictionary_2_ContainsValue_m59432_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m59434_gshared (Dictionary_2_t8794 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m59434(__this, ___info, ___context, method) (void)Dictionary_2_GetObjectData_m59434_gshared((Dictionary_2_t8794 *)__this, (SerializationInfo_t6402 *)___info, (StreamingContext_t6414 )___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m59436_gshared (Dictionary_2_t8794 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m59436(__this, ___sender, method) (void)Dictionary_2_OnDeserialization_m59436_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
 bool Dictionary_2_Remove_m59438_gshared (Dictionary_2_t8794 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m59438(__this, ___key, method) (bool)Dictionary_2_Remove_m59438_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m59440_gshared (Dictionary_2_t8794 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m59440(__this, ___key, ___value, method) (bool)Dictionary_2_TryGetValue_m59440_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
 KeyCollection_t8799 * Dictionary_2_get_Keys_m59442_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m59442(__this, method) (KeyCollection_t8799 *)Dictionary_2_get_Keys_m59442_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
 ValueCollection_t8800 * Dictionary_2_get_Values_m59444_gshared (Dictionary_2_t8794 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m59444(__this, method) (ValueCollection_t8800 *)Dictionary_2_get_Values_m59444_gshared((Dictionary_2_t8794 *)__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
 Object_t * Dictionary_2_ToTKey_m59446_gshared (Dictionary_2_t8794 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m59446(__this, ___key, method) (Object_t *)Dictionary_2_ToTKey_m59446_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
 Object_t * Dictionary_2_ToTValue_m59448_gshared (Dictionary_2_t8794 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m59448(__this, ___value, method) (Object_t *)Dictionary_2_ToTValue_m59448_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m59457 (Dictionary_2_t8794 * __this, KeyValuePair_2_t8801  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
 Enumerator_t8803  Dictionary_2_GetEnumerator_m59458 (Dictionary_2_t8794 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1066  Dictionary_2_U3CCopyToU3Em__0_m59452_gshared (Object_t * __this/* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m59452(__this/* static, unused */, ___key, ___value, method) (DictionaryEntry_t1066 )Dictionary_2_U3CCopyToU3Em__0_m59452_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
