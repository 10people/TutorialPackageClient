#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>
struct SortedDictionary_2_t5796;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t5686;
// System.Collections.Generic.ICollection`1<Relation>
struct ICollection_1_t17576;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// Relation
struct Relation_t1442;
// System.Collections.Generic.IComparer`1<System.UInt32>
struct IComparer_1_t5769;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,Relation>>
struct IEnumerator_1_t21316;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,Relation>[]
struct KeyValuePair_2U5BU5D_t21317;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,Relation>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.Collections.Generic.SortedDictionary`2/Enumerator<System.UInt32,Relation>
#include "System_System_Collections_Generic_SortedDictionary_2_Enumera_3.h"

// System.Void System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::.ctor()
 void SortedDictionary_2__ctor_m155618 (SortedDictionary_2_t5796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
 void SortedDictionary_2__ctor_m41035 (SortedDictionary_2_t5796 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* SortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m155619 (SortedDictionary_2_t5796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* SortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m155620 (SortedDictionary_2_t5796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void SortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m155621 (SortedDictionary_2_t5796 * __this, KeyValuePair_2_t5798  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool SortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m155622 (SortedDictionary_2_t5796 * __this, KeyValuePair_2_t5798  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool SortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m155623 (SortedDictionary_2_t5796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool SortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m155624 (SortedDictionary_2_t5796 * __this, KeyValuePair_2_t5798  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void SortedDictionary_2_System_Collections_IDictionary_Add_m155625 (SortedDictionary_2_t5796 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.IDictionary.Contains(System.Object)
 bool SortedDictionary_2_System_Collections_IDictionary_Contains_m155626 (SortedDictionary_2_t5796 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.IDictionary.GetEnumerator()
 Object_t * SortedDictionary_2_System_Collections_IDictionary_GetEnumerator_m155627 (SortedDictionary_2_t5796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.IDictionary.get_IsFixedSize()
 bool SortedDictionary_2_System_Collections_IDictionary_get_IsFixedSize_m155628 (SortedDictionary_2_t5796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.IDictionary.get_IsReadOnly()
 bool SortedDictionary_2_System_Collections_IDictionary_get_IsReadOnly_m155629 (SortedDictionary_2_t5796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.IDictionary.get_Keys()
 Object_t * SortedDictionary_2_System_Collections_IDictionary_get_Keys_m155630 (SortedDictionary_2_t5796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.IDictionary.Remove(System.Object)
 void SortedDictionary_2_System_Collections_IDictionary_Remove_m155631 (SortedDictionary_2_t5796 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.IDictionary.get_Values()
 Object_t * SortedDictionary_2_System_Collections_IDictionary_get_Values_m155632 (SortedDictionary_2_t5796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * SortedDictionary_2_System_Collections_IDictionary_get_Item_m155633 (SortedDictionary_2_t5796 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void SortedDictionary_2_System_Collections_IDictionary_set_Item_m155634 (SortedDictionary_2_t5796 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void SortedDictionary_2_System_Collections_ICollection_CopyTo_m155635 (SortedDictionary_2_t5796 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.ICollection.get_IsSynchronized()
 bool SortedDictionary_2_System_Collections_ICollection_get_IsSynchronized_m155636 (SortedDictionary_2_t5796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.ICollection.get_SyncRoot()
 Object_t * SortedDictionary_2_System_Collections_ICollection_get_SyncRoot_m155637 (SortedDictionary_2_t5796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * SortedDictionary_2_System_Collections_IEnumerable_GetEnumerator_m155638 (SortedDictionary_2_t5796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* SortedDictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m155639 (SortedDictionary_2_t5796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::get_Count()
 int32_t SortedDictionary_2_get_Count_m155640 (SortedDictionary_2_t5796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::get_Item(TKey)
 Relation_t1442 * SortedDictionary_2_get_Item_m155641 (SortedDictionary_2_t5796 * __this, uint32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::set_Item(TKey,TValue)
 void SortedDictionary_2_set_Item_m155642 (SortedDictionary_2_t5796 * __this, uint32_t ___key, Relation_t1442 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::Add(TKey,TValue)
 void SortedDictionary_2_Add_m41037 (SortedDictionary_2_t5796 * __this, uint32_t ___key, Relation_t1442 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::Clear()
 void SortedDictionary_2_Clear_m155643 (SortedDictionary_2_t5796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::ContainsKey(TKey)
 bool SortedDictionary_2_ContainsKey_m41036 (SortedDictionary_2_t5796 * __this, uint32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::ContainsValue(TValue)
 bool SortedDictionary_2_ContainsValue_m155644 (SortedDictionary_2_t5796 * __this, Relation_t1442 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void SortedDictionary_2_CopyTo_m155645 (SortedDictionary_2_t5796 * __this, KeyValuePair_2U5BU5D_t21317* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedDictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::GetEnumerator()
 Enumerator_t5797  SortedDictionary_2_GetEnumerator_m41038 (SortedDictionary_2_t5796 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::Remove(TKey)
 bool SortedDictionary_2_Remove_m155646 (SortedDictionary_2_t5796 * __this, uint32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::TryGetValue(TKey,TValue&)
 bool SortedDictionary_2_TryGetValue_m155647 (SortedDictionary_2_t5796 * __this, uint32_t ___key, Relation_t1442 ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::ToKey(System.Object)
 uint32_t SortedDictionary_2_ToKey_m155648 (SortedDictionary_2_t5796 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.SortedDictionary`2<System.UInt32,Relation>::ToValue(System.Object)
 Relation_t1442 * SortedDictionary_2_ToValue_m155649 (SortedDictionary_2_t5796 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
