#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct List_1_t6345;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<LitJson.PropertyMetadata>
struct IEnumerable_1_t6350;
// LitJson.PropertyMetadata[]
struct PropertyMetadataU5BU5D_t23842;
// System.Collections.Generic.IEnumerator`1<LitJson.PropertyMetadata>
struct IEnumerator_1_t6351;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>
struct ICollection_1_t6346;
// System.Collections.ObjectModel.ReadOnlyCollection`1<LitJson.PropertyMetadata>
struct ReadOnlyCollection_1_t23857;
// System.Predicate`1<LitJson.PropertyMetadata>
struct Predicate_1_t23858;
// System.Collections.Generic.IComparer`1<LitJson.PropertyMetadata>
struct IComparer_1_t23859;
// System.Comparison`1<LitJson.PropertyMetadata>
struct Comparison_1_t23860;
// LitJson.PropertyMetadata
#include "LitJson_LitJson_PropertyMetadata.h"
// System.Collections.Generic.List`1/Enumerator<LitJson.PropertyMetadata>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_365.h"

// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
 void List_1__ctor_m44530 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m173445 (List_1_t6345 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor(System.Int32)
 void List_1__ctor_m173446 (List_1_t6345 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor(T[],System.Int32)
 void List_1__ctor_m173447 (List_1_t6345 * __this, PropertyMetadataU5BU5D_t23842* ___data, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.cctor()
 void List_1__cctor_m173448 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m173449 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m173450 (List_1_t6345 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m173451 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m173452 (List_1_t6345 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m173453 (List_1_t6345 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m173454 (List_1_t6345 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m173455 (List_1_t6345 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m173456 (List_1_t6345 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m173457 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m173458 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m173459 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m173460 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m173461 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m173462 (List_1_t6345 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m173463 (List_1_t6345 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Add(T)
 void List_1_Add_m173464 (List_1_t6345 * __this, PropertyMetadata_t6294  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m173465 (List_1_t6345 * __this, int32_t ___newCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::CheckRange(System.Int32,System.Int32)
 void List_1_CheckRange_m173466 (List_1_t6345 * __this, int32_t ___idx, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m173467 (List_1_t6345 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m173468 (List_1_t6345 * __this, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m173469 (List_1_t6345 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<LitJson.PropertyMetadata>::AsReadOnly()
 ReadOnlyCollection_1_t23857 * List_1_AsReadOnly_m173470 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Clear()
 void List_1_Clear_m173471 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Contains(T)
 bool List_1_Contains_m173472 (List_1_t6345 * __this, PropertyMetadata_t6294  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m173473 (List_1_t6345 * __this, PropertyMetadataU5BU5D_t23842* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Find(System.Predicate`1<T>)
 PropertyMetadata_t6294  List_1_Find_m173474 (List_1_t6345 * __this, Predicate_1_t23858 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m173475 (Object_t * __this/* static, unused */, Predicate_1_t23858 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m173476 (List_1_t6345 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t23858 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<LitJson.PropertyMetadata>::GetEnumerator()
 Enumerator_t23861  List_1_GetEnumerator_m173477 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<LitJson.PropertyMetadata>::GetRange(System.Int32,System.Int32)
 List_1_t6345 * List_1_GetRange_m173478 (List_1_t6345 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::IndexOf(T)
 int32_t List_1_IndexOf_m173479 (List_1_t6345 * __this, PropertyMetadata_t6294  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m173480 (List_1_t6345 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m173481 (List_1_t6345 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Insert(System.Int32,T)
 void List_1_Insert_m173482 (List_1_t6345 * __this, int32_t ___index, PropertyMetadata_t6294  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m173483 (List_1_t6345 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Remove(T)
 bool List_1_Remove_m173484 (List_1_t6345 * __this, PropertyMetadata_t6294  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m173485 (List_1_t6345 * __this, Predicate_1_t23858 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m173486 (List_1_t6345 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Reverse()
 void List_1_Reverse_m173487 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Sort()
 void List_1_Sort_m173488 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Sort(System.Collections.Generic.IComparer`1<T>)
 void List_1_Sort_m173489 (List_1_t6345 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m173490 (List_1_t6345 * __this, Comparison_1_t23860 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.List`1<LitJson.PropertyMetadata>::ToArray()
 PropertyMetadataU5BU5D_t23842* List_1_ToArray_m173491 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::TrimExcess()
 void List_1_TrimExcess_m173492 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::get_Capacity()
 int32_t List_1_get_Capacity_m173493 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m173494 (List_1_t6345 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::get_Count()
 int32_t List_1_get_Count_m173495 (List_1_t6345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<LitJson.PropertyMetadata>::get_Item(System.Int32)
 PropertyMetadata_t6294  List_1_get_Item_m173496 (List_1_t6345 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::set_Item(System.Int32,T)
 void List_1_set_Item_m173497 (List_1_t6345 * __this, int32_t ___index, PropertyMetadata_t6294  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
