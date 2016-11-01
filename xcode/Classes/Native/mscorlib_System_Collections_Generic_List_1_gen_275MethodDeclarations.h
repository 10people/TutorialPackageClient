#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<GameRes.AssetLoader>
struct List_1_t4386;
// System.Object
struct Object_t;
// GameRes.AssetLoader
struct AssetLoader_t4380;
// System.Collections.Generic.IEnumerable`1<GameRes.AssetLoader>
struct IEnumerable_1_t20592;
// GameRes.AssetLoader[]
struct AssetLoaderU5BU5D_t20574;
// System.Collections.Generic.IEnumerator`1<GameRes.AssetLoader>
struct IEnumerator_1_t20585;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.ICollection`1<GameRes.AssetLoader>
struct ICollection_1_t20576;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GameRes.AssetLoader>
struct ReadOnlyCollection_1_t20593;
// System.Predicate`1<GameRes.AssetLoader>
struct Predicate_1_t20594;
// System.Collections.Generic.IComparer`1<GameRes.AssetLoader>
struct IComparer_1_t20595;
// System.Comparison`1<GameRes.AssetLoader>
struct Comparison_1_t20596;
// System.Collections.Generic.List`1/Enumerator<GameRes.AssetLoader>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_308.h"

// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_9MethodDeclarations.h"
#define List_1__ctor_m40485(__this, method) (void)List_1__ctor_m6493_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m150104(__this, ___collection, method) (void)List_1__ctor_m57973_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::.ctor(System.Int32)
#define List_1__ctor_m150105(__this, ___capacity, method) (void)List_1__ctor_m57974_gshared((List_1_t1024 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::.ctor(T[],System.Int32)
#define List_1__ctor_m150106(__this, ___data, ___size, method) (void)List_1__ctor_m57975_gshared((List_1_t1024 *)__this, (ObjectU5BU5D_t142*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::.cctor()
#define List_1__cctor_m150107(__this/* static, unused */, method) (void)List_1__cctor_m57976_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GameRes.AssetLoader>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m150108(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m57977_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m150109(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m57978_gshared((List_1_t1024 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GameRes.AssetLoader>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m150110(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m57979_gshared((List_1_t1024 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<GameRes.AssetLoader>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m150111(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m57980_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<GameRes.AssetLoader>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m150112(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m57981_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<GameRes.AssetLoader>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m150113(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m57982_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m150114(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m57983_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m150115(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m57984_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<GameRes.AssetLoader>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m150116(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m57985_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<GameRes.AssetLoader>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m150117(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m57986_gshared((List_1_t1024 *)__this, method)
// System.Object System.Collections.Generic.List`1<GameRes.AssetLoader>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m150118(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m57987_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<GameRes.AssetLoader>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m150119(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m57988_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<GameRes.AssetLoader>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m150120(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m57989_gshared((List_1_t1024 *)__this, method)
// System.Object System.Collections.Generic.List`1<GameRes.AssetLoader>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m150121(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m57990_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m150122(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m57991_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::Add(T)
#define List_1_Add_m40488(__this, ___item, method) (void)List_1_Add_m6492_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m150123(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m57992_gshared((List_1_t1024 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m150124(__this, ___idx, ___count, method) (void)List_1_CheckRange_m57993_gshared((List_1_t1024 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m150125(__this, ___collection, method) (void)List_1_AddCollection_m57994_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m150126(__this, ___enumerable, method) (void)List_1_AddEnumerable_m57995_gshared((List_1_t1024 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m150127(__this, ___collection, method) (void)List_1_AddRange_m57996_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GameRes.AssetLoader>::AsReadOnly()
#define List_1_AsReadOnly_m150128(__this, method) (ReadOnlyCollection_1_t20593 *)List_1_AsReadOnly_m57997_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::Clear()
#define List_1_Clear_m40495(__this, method) (void)List_1_Clear_m57998_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<GameRes.AssetLoader>::Contains(T)
#define List_1_Contains_m40487(__this, ___item, method) (bool)List_1_Contains_m57999_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m150129(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m58000_gshared((List_1_t1024 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<GameRes.AssetLoader>::Find(System.Predicate`1<T>)
#define List_1_Find_m150130(__this, ___match, method) (AssetLoader_t4380 *)List_1_Find_m58001_gshared((List_1_t1024 *)__this, (Predicate_1_t8617 *)___match, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m150131(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m58002_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t8617 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<GameRes.AssetLoader>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m150132(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m58003_gshared((List_1_t1024 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t8617 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GameRes.AssetLoader>::GetEnumerator()
 Enumerator_t20597  List_1_GetEnumerator_m150133 (List_1_t4386 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GameRes.AssetLoader>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m150134(__this, ___index, ___count, method) (List_1_t4386 *)List_1_GetRange_m58004_gshared((List_1_t1024 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<GameRes.AssetLoader>::IndexOf(T)
#define List_1_IndexOf_m150135(__this, ___item, method) (int32_t)List_1_IndexOf_m58005_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m150136(__this, ___start, ___delta, method) (void)List_1_Shift_m58006_gshared((List_1_t1024 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m150137(__this, ___index, method) (void)List_1_CheckIndex_m58007_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::Insert(System.Int32,T)
#define List_1_Insert_m150138(__this, ___index, ___item, method) (void)List_1_Insert_m58008_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m150139(__this, ___collection, method) (void)List_1_CheckCollection_m58009_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<GameRes.AssetLoader>::Remove(T)
#define List_1_Remove_m40494(__this, ___item, method) (bool)List_1_Remove_m58010_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<GameRes.AssetLoader>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m150140(__this, ___match, method) (int32_t)List_1_RemoveAll_m58011_gshared((List_1_t1024 *)__this, (Predicate_1_t8617 *)___match, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m40492(__this, ___index, method) (void)List_1_RemoveAt_m58012_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::Reverse()
#define List_1_Reverse_m150141(__this, method) (void)List_1_Reverse_m58013_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::Sort()
#define List_1_Sort_m150142(__this, method) (void)List_1_Sort_m58014_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m150143(__this, ___comparer, method) (void)List_1_Sort_m58015_gshared((List_1_t1024 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m150144(__this, ___comparison, method) (void)List_1_Sort_m58016_gshared((List_1_t1024 *)__this, (Comparison_1_t8619 *)___comparison, method)
// T[] System.Collections.Generic.List`1<GameRes.AssetLoader>::ToArray()
#define List_1_ToArray_m150145(__this, method) (AssetLoaderU5BU5D_t20574*)List_1_ToArray_m58017_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::TrimExcess()
#define List_1_TrimExcess_m150146(__this, method) (void)List_1_TrimExcess_m58018_gshared((List_1_t1024 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<GameRes.AssetLoader>::get_Capacity()
#define List_1_get_Capacity_m150147(__this, method) (int32_t)List_1_get_Capacity_m58019_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m150148(__this, ___value, method) (void)List_1_set_Capacity_m58020_gshared((List_1_t1024 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<GameRes.AssetLoader>::get_Count()
#define List_1_get_Count_m40490(__this, method) (int32_t)List_1_get_Count_m39594_gshared((List_1_t1024 *)__this, method)
// T System.Collections.Generic.List`1<GameRes.AssetLoader>::get_Item(System.Int32)
#define List_1_get_Item_m40491(__this, ___index, method) (AssetLoader_t4380 *)List_1_get_Item_m39252_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<GameRes.AssetLoader>::set_Item(System.Int32,T)
#define List_1_set_Item_m150149(__this, ___index, ___value, method) (void)List_1_set_Item_m58021_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___value, method)
