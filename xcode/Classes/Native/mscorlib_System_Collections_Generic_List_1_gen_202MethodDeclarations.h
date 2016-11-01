#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PropertyMetadata>
struct List_1_t5492;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<PropertyMetadata>
struct IEnumerable_1_t5501;
// PropertyMetadata[]
struct PropertyMetadataU5BU5D_t16432;
// System.Collections.Generic.IEnumerator`1<PropertyMetadata>
struct IEnumerator_1_t5502;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.ICollection`1<PropertyMetadata>
struct ICollection_1_t5493;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PropertyMetadata>
struct ReadOnlyCollection_1_t16447;
// System.Predicate`1<PropertyMetadata>
struct Predicate_1_t16448;
// System.Collections.Generic.IComparer`1<PropertyMetadata>
struct IComparer_1_t16449;
// System.Comparison`1<PropertyMetadata>
struct Comparison_1_t16450;
// PropertyMetadata
#include "AssemblyU2DCSharp_PropertyMetadata.h"
// System.Collections.Generic.List`1/Enumerator<PropertyMetadata>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_242.h"

// System.Void System.Collections.Generic.List`1<PropertyMetadata>::.ctor()
 void List_1__ctor_m38800 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m122814 (List_1_t5492 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::.ctor(System.Int32)
 void List_1__ctor_m122815 (List_1_t5492 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::.ctor(T[],System.Int32)
 void List_1__ctor_m122816 (List_1_t5492 * __this, PropertyMetadataU5BU5D_t16432* ___data, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::.cctor()
 void List_1__cctor_m122817 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PropertyMetadata>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m122818 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m122819 (List_1_t5492 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.List`1<PropertyMetadata>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m122820 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<PropertyMetadata>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m122821 (List_1_t5492 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<PropertyMetadata>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m122822 (List_1_t5492 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<PropertyMetadata>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m122823 (List_1_t5492 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m122824 (List_1_t5492 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m122825 (List_1_t5492 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<PropertyMetadata>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m122826 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<PropertyMetadata>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m122827 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<PropertyMetadata>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m122828 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<PropertyMetadata>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m122829 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<PropertyMetadata>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m122830 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.List`1<PropertyMetadata>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m122831 (List_1_t5492 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m122832 (List_1_t5492 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::Add(T)
 void List_1_Add_m122833 (List_1_t5492 * __this, PropertyMetadata_t1070  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m122834 (List_1_t5492 * __this, int32_t ___newCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::CheckRange(System.Int32,System.Int32)
 void List_1_CheckRange_m122835 (List_1_t5492 * __this, int32_t ___idx, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m122836 (List_1_t5492 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m122837 (List_1_t5492 * __this, Object_t* ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m122838 (List_1_t5492 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PropertyMetadata>::AsReadOnly()
 ReadOnlyCollection_1_t16447 * List_1_AsReadOnly_m122839 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::Clear()
 void List_1_Clear_m122840 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<PropertyMetadata>::Contains(T)
 bool List_1_Contains_m122841 (List_1_t5492 * __this, PropertyMetadata_t1070  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m122842 (List_1_t5492 * __this, PropertyMetadataU5BU5D_t16432* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<PropertyMetadata>::Find(System.Predicate`1<T>)
 PropertyMetadata_t1070  List_1_Find_m122843 (List_1_t5492 * __this, Predicate_1_t16448 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m122844 (Object_t * __this/* static, unused */, Predicate_1_t16448 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<PropertyMetadata>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m122845 (List_1_t5492 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t16448 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PropertyMetadata>::GetEnumerator()
 Enumerator_t16451  List_1_GetEnumerator_m122846 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PropertyMetadata>::GetRange(System.Int32,System.Int32)
 List_1_t5492 * List_1_GetRange_m122847 (List_1_t5492 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<PropertyMetadata>::IndexOf(T)
 int32_t List_1_IndexOf_m122848 (List_1_t5492 * __this, PropertyMetadata_t1070  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m122849 (List_1_t5492 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m122850 (List_1_t5492 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::Insert(System.Int32,T)
 void List_1_Insert_m122851 (List_1_t5492 * __this, int32_t ___index, PropertyMetadata_t1070  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m122852 (List_1_t5492 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<PropertyMetadata>::Remove(T)
 bool List_1_Remove_m122853 (List_1_t5492 * __this, PropertyMetadata_t1070  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<PropertyMetadata>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m122854 (List_1_t5492 * __this, Predicate_1_t16448 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m122855 (List_1_t5492 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::Reverse()
 void List_1_Reverse_m122856 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::Sort()
 void List_1_Sort_m122857 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::Sort(System.Collections.Generic.IComparer`1<T>)
 void List_1_Sort_m122858 (List_1_t5492 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m122859 (List_1_t5492 * __this, Comparison_1_t16450 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.List`1<PropertyMetadata>::ToArray()
 PropertyMetadataU5BU5D_t16432* List_1_ToArray_m122860 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::TrimExcess()
 void List_1_TrimExcess_m122861 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<PropertyMetadata>::get_Capacity()
 int32_t List_1_get_Capacity_m122862 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m122863 (List_1_t5492 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<PropertyMetadata>::get_Count()
 int32_t List_1_get_Count_m122864 (List_1_t5492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.List`1<PropertyMetadata>::get_Item(System.Int32)
 PropertyMetadata_t1070  List_1_get_Item_m122865 (List_1_t5492 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<PropertyMetadata>::set_Item(System.Int32,T)
 void List_1_set_Item_m122866 (List_1_t5492 * __this, int32_t ___index, PropertyMetadata_t1070  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
