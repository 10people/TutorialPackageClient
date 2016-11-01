#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct Dictionary_2_t6091;
// System.Collections.Generic.ICollection`1<UnityEngine.Canvas>
struct ICollection_1_t23394;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ICollection_1_t23427;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t6230;
// UnityEngine.Canvas
struct Canvas_t6080;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct KeyCollection_t23428;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ValueCollection_t23429;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Canvas>
struct IEqualityComparer_1_t23425;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>[]
struct KeyValuePair_2U5BU5D_t23430;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
struct IEnumerator_1_t23432;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_278.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__270.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_283MethodDeclarations.h"
#define Dictionary_2__ctor_m43829(__this, method) (void)Dictionary_2__ctor_m59356_gshared((Dictionary_2_t8794 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m170226(__this, ___comparer, method) (void)Dictionary_2__ctor_m59358_gshared((Dictionary_2_t8794 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m170227(__this, ___capacity, method) (void)Dictionary_2__ctor_m59360_gshared((Dictionary_2_t8794 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m170228(__this, ___info, ___context, method) (void)Dictionary_2__ctor_m59362_gshared((Dictionary_2_t8794 *)__this, (SerializationInfo_t6402 *)___info, (StreamingContext_t6414 )___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m170229(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m59364_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m170230(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m59366_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m170231(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Keys_m59368_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m170232(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Values_m59370_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.get_IsFixedSize()
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m170233(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m59372_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.get_IsReadOnly()
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m170234(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m59374_gshared((Dictionary_2_t8794 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m170235(__this, ___key, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Item_m59376_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m170236(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_set_Item_m59378_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m170237(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_Add_m59380_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m170238(__this, ___key, method) (bool)Dictionary_2_System_Collections_IDictionary_Contains_m59382_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m170239(__this, ___key, method) (void)Dictionary_2_System_Collections_IDictionary_Remove_m59384_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m170240(__this, method) (bool)Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m59386_gshared((Dictionary_2_t8794 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m170241(__this, method) (Object_t *)Dictionary_2_System_Collections_ICollection_get_SyncRoot_m59388_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m170242(__this, method) (bool)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m59390_gshared((Dictionary_2_t8794 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m170243 (Dictionary_2_t6091 * __this, KeyValuePair_2_t23431  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m170244 (Dictionary_2_t6091 * __this, KeyValuePair_2_t23431  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m170245(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59394_gshared((Dictionary_2_t8794 *)__this, (KeyValuePair_2U5BU5D_t8795*)___array, (int32_t)___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m170246 (Dictionary_2_t6091 * __this, KeyValuePair_2_t23431  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m170247(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_ICollection_CopyTo_m59397_gshared((Dictionary_2_t8794 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m170248(__this, method) (Object_t *)Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m59399_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m170249(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m59401_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m170250(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_GetEnumerator_m59403_gshared((Dictionary_2_t8794 *)__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Count()
#define Dictionary_2_get_Count_m170251(__this, method) (int32_t)Dictionary_2_get_Count_m59405_gshared((Dictionary_2_t8794 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Item(TKey)
#define Dictionary_2_get_Item_m170252(__this, ___key, method) (IndexedSet_1_t6230 *)Dictionary_2_get_Item_m59407_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m170253(__this, ___key, ___value, method) (void)Dictionary_2_set_Item_m59409_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m170254(__this, ___capacity, ___hcp, method) (void)Dictionary_2_Init_m59411_gshared((Dictionary_2_t8794 *)__this, (int32_t)___capacity, (Object_t*)___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m170255(__this, ___size, method) (void)Dictionary_2_InitArrays_m59413_gshared((Dictionary_2_t8794 *)__this, (int32_t)___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m170256(__this, ___array, ___index, method) (void)Dictionary_2_CopyToCheck_m59415_gshared((Dictionary_2_t8794 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::make_pair(TKey,TValue)
 KeyValuePair_2_t23431  Dictionary_2_make_pair_m170257 (Object_t * __this/* static, unused */, Canvas_t6080 * ___key, IndexedSet_1_t6230 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m170258(__this/* static, unused */, ___key, ___value, method) (Canvas_t6080 *)Dictionary_2_pick_key_m59418_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m170259(__this/* static, unused */, ___key, ___value, method) (IndexedSet_1_t6230 *)Dictionary_2_pick_value_m59420_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m170260(__this, ___array, ___index, method) (void)Dictionary_2_CopyTo_m59422_gshared((Dictionary_2_t8794 *)__this, (KeyValuePair_2U5BU5D_t8795*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Resize()
#define Dictionary_2_Resize_m170261(__this, method) (void)Dictionary_2_Resize_m59424_gshared((Dictionary_2_t8794 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Add(TKey,TValue)
#define Dictionary_2_Add_m43833(__this, ___key, ___value, method) (void)Dictionary_2_Add_m59426_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Clear()
#define Dictionary_2_Clear_m170262(__this, method) (void)Dictionary_2_Clear_m59428_gshared((Dictionary_2_t8794 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m170263(__this, ___key, method) (bool)Dictionary_2_ContainsKey_m59430_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m170264(__this, ___value, method) (bool)Dictionary_2_ContainsValue_m59432_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m170265(__this, ___info, ___context, method) (void)Dictionary_2_GetObjectData_m59434_gshared((Dictionary_2_t8794 *)__this, (SerializationInfo_t6402 *)___info, (StreamingContext_t6414 )___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m170266(__this, ___sender, method) (void)Dictionary_2_OnDeserialization_m59436_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Remove(TKey)
#define Dictionary_2_Remove_m170267(__this, ___key, method) (bool)Dictionary_2_Remove_m59438_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m43830(__this, ___key, ___value, method) (bool)Dictionary_2_TryGetValue_m59440_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Keys()
#define Dictionary_2_get_Keys_m170268(__this, method) (KeyCollection_t23428 *)Dictionary_2_get_Keys_m59442_gshared((Dictionary_2_t8794 *)__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Values()
#define Dictionary_2_get_Values_m170269(__this, method) (ValueCollection_t23429 *)Dictionary_2_get_Values_m59444_gshared((Dictionary_2_t8794 *)__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m170270(__this, ___key, method) (Canvas_t6080 *)Dictionary_2_ToTKey_m59446_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m170271(__this, ___value, method) (IndexedSet_1_t6230 *)Dictionary_2_ToTValue_m59448_gshared((Dictionary_2_t8794 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m170272 (Dictionary_2_t6091 * __this, KeyValuePair_2_t23431  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::GetEnumerator()
 Enumerator_t23433  Dictionary_2_GetEnumerator_m170273 (Dictionary_2_t6091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m170274(__this/* static, unused */, ___key, ___value, method) (DictionaryEntry_t1066 )Dictionary_2_U3CCopyToU3Em__0_m59452_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
