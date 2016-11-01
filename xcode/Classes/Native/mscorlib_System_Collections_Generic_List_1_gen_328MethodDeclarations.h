#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t5978;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t5979;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseInputModule>
struct IEnumerable_1_t23088;
// UnityEngine.EventSystems.BaseInputModule[]
struct BaseInputModuleU5BU5D_t23087;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseInputModule>
struct IEnumerator_1_t23089;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseInputModule>
struct ICollection_1_t23090;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>
struct ReadOnlyCollection_1_t23091;
// System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>
struct Predicate_1_t23092;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.BaseInputModule>
struct IComparer_1_t23093;
// System.Comparison`1<UnityEngine.EventSystems.BaseInputModule>
struct Comparison_1_t23094;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_347.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_9MethodDeclarations.h"
#define List_1__ctor_m43588(__this, method) (void)List_1__ctor_m6493_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m167426(__this, ___collection, method) (void)List_1__ctor_m57973_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Int32)
#define List_1__ctor_m167427(__this, ___capacity, method) (void)List_1__ctor_m57974_gshared((List_1_t1024 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(T[],System.Int32)
#define List_1__ctor_m167428(__this, ___data, ___size, method) (void)List_1__ctor_m57975_gshared((List_1_t1024 *)__this, (ObjectU5BU5D_t142*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.cctor()
#define List_1__cctor_m167429(__this/* static, unused */, method) (void)List_1__cctor_m57976_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m167430(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m57977_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m167431(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m57978_gshared((List_1_t1024 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m167432(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m57979_gshared((List_1_t1024 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m167433(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m57980_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m167434(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m57981_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m167435(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m57982_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m167436(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m57983_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m167437(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m57984_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m167438(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m57985_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m167439(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m57986_gshared((List_1_t1024 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m167440(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m57987_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m167441(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m57988_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m167442(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m57989_gshared((List_1_t1024 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m167443(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m57990_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m167444(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m57991_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Add(T)
#define List_1_Add_m167445(__this, ___item, method) (void)List_1_Add_m6492_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m167446(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m57992_gshared((List_1_t1024 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m167447(__this, ___idx, ___count, method) (void)List_1_CheckRange_m57993_gshared((List_1_t1024 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m167448(__this, ___collection, method) (void)List_1_AddCollection_m57994_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m167449(__this, ___enumerable, method) (void)List_1_AddEnumerable_m57995_gshared((List_1_t1024 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m167450(__this, ___collection, method) (void)List_1_AddRange_m57996_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AsReadOnly()
#define List_1_AsReadOnly_m167451(__this, method) (ReadOnlyCollection_1_t23091 *)List_1_AsReadOnly_m57997_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Clear()
#define List_1_Clear_m167452(__this, method) (void)List_1_Clear_m57998_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Contains(T)
#define List_1_Contains_m167453(__this, ___item, method) (bool)List_1_Contains_m57999_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m167454(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m58000_gshared((List_1_t1024 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Find(System.Predicate`1<T>)
#define List_1_Find_m167455(__this, ___match, method) (BaseInputModule_t5979 *)List_1_Find_m58001_gshared((List_1_t1024 *)__this, (Predicate_1_t8617 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m167456(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m58002_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t8617 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m167457(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m58003_gshared((List_1_t1024 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t8617 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetEnumerator()
 Enumerator_t23095  List_1_GetEnumerator_m167458 (List_1_t5978 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m167459(__this, ___index, ___count, method) (List_1_t5978 *)List_1_GetRange_m58004_gshared((List_1_t1024 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::IndexOf(T)
#define List_1_IndexOf_m167460(__this, ___item, method) (int32_t)List_1_IndexOf_m58005_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m167461(__this, ___start, ___delta, method) (void)List_1_Shift_m58006_gshared((List_1_t1024 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m167462(__this, ___index, method) (void)List_1_CheckIndex_m58007_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Insert(System.Int32,T)
#define List_1_Insert_m167463(__this, ___index, ___item, method) (void)List_1_Insert_m58008_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m167464(__this, ___collection, method) (void)List_1_CheckCollection_m58009_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Remove(T)
#define List_1_Remove_m167465(__this, ___item, method) (bool)List_1_Remove_m58010_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m167466(__this, ___match, method) (int32_t)List_1_RemoveAll_m58011_gshared((List_1_t1024 *)__this, (Predicate_1_t8617 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m43593(__this, ___index, method) (void)List_1_RemoveAt_m58012_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Reverse()
#define List_1_Reverse_m167467(__this, method) (void)List_1_Reverse_m58013_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort()
#define List_1_Sort_m167468(__this, method) (void)List_1_Sort_m58014_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m167469(__this, ___comparer, method) (void)List_1_Sort_m58015_gshared((List_1_t1024 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m167470(__this, ___comparison, method) (void)List_1_Sort_m58016_gshared((List_1_t1024 *)__this, (Comparison_1_t8619 *)___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::ToArray()
#define List_1_ToArray_m167471(__this, method) (BaseInputModuleU5BU5D_t23087*)List_1_ToArray_m58017_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::TrimExcess()
#define List_1_TrimExcess_m167472(__this, method) (void)List_1_TrimExcess_m58018_gshared((List_1_t1024 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Capacity()
#define List_1_get_Capacity_m167473(__this, method) (int32_t)List_1_get_Capacity_m58019_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m167474(__this, ___value, method) (void)List_1_set_Capacity_m58020_gshared((List_1_t1024 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Count()
#define List_1_get_Count_m43591(__this, method) (int32_t)List_1_get_Count_m39594_gshared((List_1_t1024 *)__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Item(System.Int32)
#define List_1_get_Item_m43592(__this, ___index, method) (BaseInputModule_t5979 *)List_1_get_Item_m39252_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::set_Item(System.Int32,T)
#define List_1_set_Item_m167475(__this, ___index, ___value, method) (void)List_1_set_Item_m58021_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___value, method)
