#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1193;
// System.Object
struct Object_t;
// EventDelegate
struct EventDelegate_t5350;
// System.Collections.Generic.IEnumerable`1<EventDelegate>
struct IEnumerable_1_t16716;
// EventDelegate[]
struct EventDelegateU5BU5D_t16715;
// System.Collections.Generic.IEnumerator`1<EventDelegate>
struct IEnumerator_1_t16717;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.ICollection`1<EventDelegate>
struct ICollection_1_t16718;
// System.Collections.ObjectModel.ReadOnlyCollection`1<EventDelegate>
struct ReadOnlyCollection_1_t16719;
// System.Predicate`1<EventDelegate>
struct Predicate_1_t16720;
// System.Collections.Generic.IComparer`1<EventDelegate>
struct IComparer_1_t16721;
// System.Comparison`1<EventDelegate>
struct Comparison_1_t16722;
// System.Collections.Generic.List`1/Enumerator<EventDelegate>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_246.h"

// System.Void System.Collections.Generic.List`1<EventDelegate>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_9MethodDeclarations.h"
#define List_1__ctor_m39036(__this, method) (void)List_1__ctor_m6493_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m124974(__this, ___collection, method) (void)List_1__ctor_m57973_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::.ctor(System.Int32)
#define List_1__ctor_m124975(__this, ___capacity, method) (void)List_1__ctor_m57974_gshared((List_1_t1024 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::.ctor(T[],System.Int32)
#define List_1__ctor_m124976(__this, ___data, ___size, method) (void)List_1__ctor_m57975_gshared((List_1_t1024 *)__this, (ObjectU5BU5D_t142*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::.cctor()
#define List_1__cctor_m124977(__this/* static, unused */, method) (void)List_1__cctor_m57976_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<EventDelegate>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m124978(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m57977_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m124979(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m57978_gshared((List_1_t1024 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<EventDelegate>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m124980(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m57979_gshared((List_1_t1024 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m124981(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m57980_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m124982(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m57981_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m124983(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m57982_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m124984(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m57983_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m124985(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m57984_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<EventDelegate>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m124986(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m57985_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<EventDelegate>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m124987(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m57986_gshared((List_1_t1024 *)__this, method)
// System.Object System.Collections.Generic.List`1<EventDelegate>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m124988(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m57987_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m124989(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m57988_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m124990(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m57989_gshared((List_1_t1024 *)__this, method)
// System.Object System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m124991(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m57990_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m124992(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m57991_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::Add(T)
#define List_1_Add_m41995(__this, ___item, method) (void)List_1_Add_m6492_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m124993(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m57992_gshared((List_1_t1024 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m124994(__this, ___idx, ___count, method) (void)List_1_CheckRange_m57993_gshared((List_1_t1024 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m124995(__this, ___collection, method) (void)List_1_AddCollection_m57994_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m124996(__this, ___enumerable, method) (void)List_1_AddEnumerable_m57995_gshared((List_1_t1024 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m124997(__this, ___collection, method) (void)List_1_AddRange_m57996_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<EventDelegate>::AsReadOnly()
#define List_1_AsReadOnly_m124998(__this, method) (ReadOnlyCollection_1_t16719 *)List_1_AsReadOnly_m57997_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::Clear()
#define List_1_Clear_m41851(__this, method) (void)List_1_Clear_m57998_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<EventDelegate>::Contains(T)
#define List_1_Contains_m124999(__this, ___item, method) (bool)List_1_Contains_m57999_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m125000(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m58000_gshared((List_1_t1024 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<EventDelegate>::Find(System.Predicate`1<T>)
#define List_1_Find_m125001(__this, ___match, method) (EventDelegate_t5350 *)List_1_Find_m58001_gshared((List_1_t1024 *)__this, (Predicate_1_t8617 *)___match, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m125002(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m58002_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t8617 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<EventDelegate>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m125003(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m58003_gshared((List_1_t1024 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t8617 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<EventDelegate>::GetEnumerator()
 Enumerator_t16723  List_1_GetEnumerator_m125004 (List_1_t1193 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<EventDelegate>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m125005(__this, ___index, ___count, method) (List_1_t1193 *)List_1_GetRange_m58004_gshared((List_1_t1024 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<EventDelegate>::IndexOf(T)
#define List_1_IndexOf_m125006(__this, ___item, method) (int32_t)List_1_IndexOf_m58005_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m125007(__this, ___start, ___delta, method) (void)List_1_Shift_m58006_gshared((List_1_t1024 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m125008(__this, ___index, method) (void)List_1_CheckIndex_m58007_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::Insert(System.Int32,T)
#define List_1_Insert_m125009(__this, ___index, ___item, method) (void)List_1_Insert_m58008_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m125010(__this, ___collection, method) (void)List_1_CheckCollection_m58009_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<EventDelegate>::Remove(T)
#define List_1_Remove_m125011(__this, ___item, method) (bool)List_1_Remove_m58010_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<EventDelegate>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m125012(__this, ___match, method) (int32_t)List_1_RemoveAll_m58011_gshared((List_1_t1024 *)__this, (Predicate_1_t8617 *)___match, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m42078(__this, ___index, method) (void)List_1_RemoveAt_m58012_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::Reverse()
#define List_1_Reverse_m125013(__this, method) (void)List_1_Reverse_m58013_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::Sort()
#define List_1_Sort_m125014(__this, method) (void)List_1_Sort_m58014_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m125015(__this, ___comparer, method) (void)List_1_Sort_m58015_gshared((List_1_t1024 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m125016(__this, ___comparison, method) (void)List_1_Sort_m58016_gshared((List_1_t1024 *)__this, (Comparison_1_t8619 *)___comparison, method)
// T[] System.Collections.Generic.List`1<EventDelegate>::ToArray()
#define List_1_ToArray_m125017(__this, method) (EventDelegateU5BU5D_t16715*)List_1_ToArray_m58017_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::TrimExcess()
#define List_1_TrimExcess_m125018(__this, method) (void)List_1_TrimExcess_m58018_gshared((List_1_t1024 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<EventDelegate>::get_Capacity()
#define List_1_get_Capacity_m125019(__this, method) (int32_t)List_1_get_Capacity_m58019_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m125020(__this, ___value, method) (void)List_1_set_Capacity_m58020_gshared((List_1_t1024 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<EventDelegate>::get_Count()
#define List_1_get_Count_m41866(__this, method) (int32_t)List_1_get_Count_m39594_gshared((List_1_t1024 *)__this, method)
// T System.Collections.Generic.List`1<EventDelegate>::get_Item(System.Int32)
#define List_1_get_Item_m41865(__this, ___index, method) (EventDelegate_t5350 *)List_1_get_Item_m39252_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::set_Item(System.Int32,T)
#define List_1_set_Item_m125021(__this, ___index, ___value, method) (void)List_1_set_Item_m58021_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___value, method)
