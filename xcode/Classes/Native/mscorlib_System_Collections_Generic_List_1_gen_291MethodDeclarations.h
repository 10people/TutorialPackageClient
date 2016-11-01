#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t5006;
// System.Object
struct Object_t;
// UnityEngine.Object
struct Object_t982;
struct Object_t982_marshaled;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Object>
struct IEnumerable_1_t21539;
// UnityEngine.Object[]
struct ObjectU5BU5D_t2160;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Object>
struct IEnumerator_1_t21540;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.ICollection`1<UnityEngine.Object>
struct ICollection_1_t21541;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Object>
struct ReadOnlyCollection_1_t21542;
// System.Predicate`1<UnityEngine.Object>
struct Predicate_1_t21543;
// System.Collections.Generic.IComparer`1<UnityEngine.Object>
struct IComparer_1_t21544;
// System.Comparison`1<UnityEngine.Object>
struct Comparison_1_t21545;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_319.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_9MethodDeclarations.h"
#define List_1__ctor_m41298(__this, method) (void)List_1__ctor_m6493_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m157277(__this, ___collection, method) (void)List_1__ctor_m57973_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::.ctor(System.Int32)
#define List_1__ctor_m157278(__this, ___capacity, method) (void)List_1__ctor_m57974_gshared((List_1_t1024 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::.ctor(T[],System.Int32)
#define List_1__ctor_m157279(__this, ___data, ___size, method) (void)List_1__ctor_m57975_gshared((List_1_t1024 *)__this, (ObjectU5BU5D_t142*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::.cctor()
#define List_1__cctor_m157280(__this/* static, unused */, method) (void)List_1__cctor_m57976_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m157281(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m57977_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m157282(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m57978_gshared((List_1_t1024 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Object>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m157283(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m57979_gshared((List_1_t1024 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Object>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m157284(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m57980_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Object>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m157285(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m57981_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Object>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m157286(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m57982_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m157287(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m57983_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m157288(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m57984_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m157289(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m57985_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Object>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m157290(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m57986_gshared((List_1_t1024 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Object>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m157291(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m57987_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Object>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m157292(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m57988_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Object>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m157293(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m57989_gshared((List_1_t1024 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Object>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m157294(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m57990_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m157295(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m57991_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::Add(T)
#define List_1_Add_m41300(__this, ___item, method) (void)List_1_Add_m6492_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m157296(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m57992_gshared((List_1_t1024 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m157297(__this, ___idx, ___count, method) (void)List_1_CheckRange_m57993_gshared((List_1_t1024 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m157298(__this, ___collection, method) (void)List_1_AddCollection_m57994_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m157299(__this, ___enumerable, method) (void)List_1_AddEnumerable_m57995_gshared((List_1_t1024 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m157300(__this, ___collection, method) (void)List_1_AddRange_m57996_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Object>::AsReadOnly()
#define List_1_AsReadOnly_m157301(__this, method) (ReadOnlyCollection_1_t21542 *)List_1_AsReadOnly_m57997_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::Clear()
#define List_1_Clear_m157302(__this, method) (void)List_1_Clear_m57998_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Object>::Contains(T)
#define List_1_Contains_m157303(__this, ___item, method) (bool)List_1_Contains_m57999_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m157304(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m58000_gshared((List_1_t1024 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Object>::Find(System.Predicate`1<T>)
#define List_1_Find_m157305(__this, ___match, method) (Object_t982 *)List_1_Find_m58001_gshared((List_1_t1024 *)__this, (Predicate_1_t8617 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m157306(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m58002_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t8617 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m157307(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m58003_gshared((List_1_t1024 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t8617 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Object>::GetEnumerator()
 Enumerator_t21546  List_1_GetEnumerator_m157308 (List_1_t5006 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Object>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m157309(__this, ___index, ___count, method) (List_1_t5006 *)List_1_GetRange_m58004_gshared((List_1_t1024 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Object>::IndexOf(T)
#define List_1_IndexOf_m157310(__this, ___item, method) (int32_t)List_1_IndexOf_m58005_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m157311(__this, ___start, ___delta, method) (void)List_1_Shift_m58006_gshared((List_1_t1024 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m157312(__this, ___index, method) (void)List_1_CheckIndex_m58007_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::Insert(System.Int32,T)
#define List_1_Insert_m157313(__this, ___index, ___item, method) (void)List_1_Insert_m58008_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m157314(__this, ___collection, method) (void)List_1_CheckCollection_m58009_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Object>::Remove(T)
#define List_1_Remove_m157315(__this, ___item, method) (bool)List_1_Remove_m58010_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Object>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m157316(__this, ___match, method) (int32_t)List_1_RemoveAll_m58011_gshared((List_1_t1024 *)__this, (Predicate_1_t8617 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m157317(__this, ___index, method) (void)List_1_RemoveAt_m58012_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::Reverse()
#define List_1_Reverse_m157318(__this, method) (void)List_1_Reverse_m58013_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::Sort()
#define List_1_Sort_m157319(__this, method) (void)List_1_Sort_m58014_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m157320(__this, ___comparer, method) (void)List_1_Sort_m58015_gshared((List_1_t1024 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m157321(__this, ___comparison, method) (void)List_1_Sort_m58016_gshared((List_1_t1024 *)__this, (Comparison_1_t8619 *)___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Object>::ToArray()
#define List_1_ToArray_m157322(__this, method) (ObjectU5BU5D_t2160*)List_1_ToArray_m58017_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::TrimExcess()
#define List_1_TrimExcess_m157323(__this, method) (void)List_1_TrimExcess_m58018_gshared((List_1_t1024 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Object>::get_Capacity()
#define List_1_get_Capacity_m157324(__this, method) (int32_t)List_1_get_Capacity_m58019_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m157325(__this, ___value, method) (void)List_1_set_Capacity_m58020_gshared((List_1_t1024 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Object>::get_Count()
#define List_1_get_Count_m41302(__this, method) (int32_t)List_1_get_Count_m39594_gshared((List_1_t1024 *)__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Object>::get_Item(System.Int32)
#define List_1_get_Item_m41303(__this, ___index, method) (Object_t982 *)List_1_get_Item_m39252_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::set_Item(System.Int32,T)
#define List_1_set_Item_m157326(__this, ___index, ___value, method) (void)List_1_set_Item_m58021_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___value, method)
