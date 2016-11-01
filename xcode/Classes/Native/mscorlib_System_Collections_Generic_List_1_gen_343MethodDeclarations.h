#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<LitJson.JsonData>
struct List_1_t6325;
// System.Object
struct Object_t;
// LitJson.JsonData
struct JsonData_t1031;
// System.Collections.Generic.IEnumerable`1<LitJson.JsonData>
struct IEnumerable_1_t23702;
// LitJson.JsonData[]
struct JsonDataU5BU5D_t23701;
// System.Collections.Generic.IEnumerator`1<LitJson.JsonData>
struct IEnumerator_1_t23703;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.ICollection`1<LitJson.JsonData>
struct ICollection_1_t6326;
// System.Collections.ObjectModel.ReadOnlyCollection`1<LitJson.JsonData>
struct ReadOnlyCollection_1_t23704;
// System.Predicate`1<LitJson.JsonData>
struct Predicate_1_t23705;
// System.Collections.Generic.IComparer`1<LitJson.JsonData>
struct IComparer_1_t23706;
// System.Comparison`1<LitJson.JsonData>
struct Comparison_1_t23707;
// System.Collections.Generic.List`1/Enumerator<LitJson.JsonData>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_363.h"

// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_9MethodDeclarations.h"
#define List_1__ctor_m44487(__this, method) (void)List_1__ctor_m6493_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m172076(__this, ___collection, method) (void)List_1__ctor_m57973_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::.ctor(System.Int32)
#define List_1__ctor_m172077(__this, ___capacity, method) (void)List_1__ctor_m57974_gshared((List_1_t1024 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::.ctor(T[],System.Int32)
#define List_1__ctor_m172078(__this, ___data, ___size, method) (void)List_1__ctor_m57975_gshared((List_1_t1024 *)__this, (ObjectU5BU5D_t142*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::.cctor()
#define List_1__cctor_m172079(__this/* static, unused */, method) (void)List_1__cctor_m57976_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<LitJson.JsonData>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m172080(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m57977_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m172081(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m57978_gshared((List_1_t1024 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<LitJson.JsonData>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m172082(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m57979_gshared((List_1_t1024 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.JsonData>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m172083(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m57980_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.JsonData>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m172084(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m57981_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.JsonData>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m172085(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m57982_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m172086(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m57983_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m172087(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m57984_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.JsonData>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m172088(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m57985_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.JsonData>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m172089(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m57986_gshared((List_1_t1024 *)__this, method)
// System.Object System.Collections.Generic.List`1<LitJson.JsonData>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m172090(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m57987_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.JsonData>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m172091(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m57988_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.JsonData>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m172092(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m57989_gshared((List_1_t1024 *)__this, method)
// System.Object System.Collections.Generic.List`1<LitJson.JsonData>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m172093(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m57990_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m172094(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m57991_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::Add(T)
#define List_1_Add_m172095(__this, ___item, method) (void)List_1_Add_m6492_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m172096(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m57992_gshared((List_1_t1024 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m172097(__this, ___idx, ___count, method) (void)List_1_CheckRange_m57993_gshared((List_1_t1024 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m172098(__this, ___collection, method) (void)List_1_AddCollection_m57994_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m172099(__this, ___enumerable, method) (void)List_1_AddEnumerable_m57995_gshared((List_1_t1024 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m172100(__this, ___collection, method) (void)List_1_AddRange_m57996_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<LitJson.JsonData>::AsReadOnly()
#define List_1_AsReadOnly_m172101(__this, method) (ReadOnlyCollection_1_t23704 *)List_1_AsReadOnly_m57997_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::Clear()
#define List_1_Clear_m172102(__this, method) (void)List_1_Clear_m57998_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.JsonData>::Contains(T)
#define List_1_Contains_m172103(__this, ___item, method) (bool)List_1_Contains_m57999_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m172104(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m58000_gshared((List_1_t1024 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<LitJson.JsonData>::Find(System.Predicate`1<T>)
#define List_1_Find_m172105(__this, ___match, method) (JsonData_t1031 *)List_1_Find_m58001_gshared((List_1_t1024 *)__this, (Predicate_1_t8617 *)___match, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m172106(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m58002_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t8617 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.JsonData>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m172107(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m58003_gshared((List_1_t1024 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t8617 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<LitJson.JsonData>::GetEnumerator()
 Enumerator_t23708  List_1_GetEnumerator_m172108 (List_1_t6325 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<LitJson.JsonData>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m172109(__this, ___index, ___count, method) (List_1_t6325 *)List_1_GetRange_m58004_gshared((List_1_t1024 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.JsonData>::IndexOf(T)
#define List_1_IndexOf_m172110(__this, ___item, method) (int32_t)List_1_IndexOf_m58005_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m172111(__this, ___start, ___delta, method) (void)List_1_Shift_m58006_gshared((List_1_t1024 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m172112(__this, ___index, method) (void)List_1_CheckIndex_m58007_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::Insert(System.Int32,T)
#define List_1_Insert_m172113(__this, ___index, ___item, method) (void)List_1_Insert_m58008_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m172114(__this, ___collection, method) (void)List_1_CheckCollection_m58009_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.JsonData>::Remove(T)
#define List_1_Remove_m172115(__this, ___item, method) (bool)List_1_Remove_m58010_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.JsonData>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m172116(__this, ___match, method) (int32_t)List_1_RemoveAll_m58011_gshared((List_1_t1024 *)__this, (Predicate_1_t8617 *)___match, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m172117(__this, ___index, method) (void)List_1_RemoveAt_m58012_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::Reverse()
#define List_1_Reverse_m172118(__this, method) (void)List_1_Reverse_m58013_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::Sort()
#define List_1_Sort_m172119(__this, method) (void)List_1_Sort_m58014_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m172120(__this, ___comparer, method) (void)List_1_Sort_m58015_gshared((List_1_t1024 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m172121(__this, ___comparison, method) (void)List_1_Sort_m58016_gshared((List_1_t1024 *)__this, (Comparison_1_t8619 *)___comparison, method)
// T[] System.Collections.Generic.List`1<LitJson.JsonData>::ToArray()
#define List_1_ToArray_m172122(__this, method) (JsonDataU5BU5D_t23701*)List_1_ToArray_m58017_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::TrimExcess()
#define List_1_TrimExcess_m172123(__this, method) (void)List_1_TrimExcess_m58018_gshared((List_1_t1024 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.JsonData>::get_Capacity()
#define List_1_get_Capacity_m172124(__this, method) (int32_t)List_1_get_Capacity_m58019_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m172125(__this, ___value, method) (void)List_1_set_Capacity_m58020_gshared((List_1_t1024 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.JsonData>::get_Count()
#define List_1_get_Count_m172126(__this, method) (int32_t)List_1_get_Count_m39594_gshared((List_1_t1024 *)__this, method)
// T System.Collections.Generic.List`1<LitJson.JsonData>::get_Item(System.Int32)
#define List_1_get_Item_m172127(__this, ___index, method) (JsonData_t1031 *)List_1_get_Item_m39252_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::set_Item(System.Int32,T)
#define List_1_set_Item_m172128(__this, ___index, ___value, method) (void)List_1_set_Item_m58021_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___value, method)
