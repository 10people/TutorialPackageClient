#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Games.Events.GameEvent>
struct List_1_t2138;
// System.Object
struct Object_t;
// Games.Events.GameEvent
struct GameEvent_t2137;
// System.Collections.Generic.IEnumerable`1<Games.Events.GameEvent>
struct IEnumerable_1_t20307;
// Games.Events.GameEvent[]
struct GameEventU5BU5D_t20306;
// System.Collections.Generic.IEnumerator`1<Games.Events.GameEvent>
struct IEnumerator_1_t20308;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.ICollection`1<Games.Events.GameEvent>
struct ICollection_1_t20309;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>
struct ReadOnlyCollection_1_t20310;
// System.Predicate`1<Games.Events.GameEvent>
struct Predicate_1_t20311;
// System.Collections.Generic.IComparer`1<Games.Events.GameEvent>
struct IComparer_1_t20312;
// System.Comparison`1<Games.Events.GameEvent>
struct Comparison_1_t20313;
// System.Collections.Generic.List`1/Enumerator<Games.Events.GameEvent>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_301.h"

// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_9MethodDeclarations.h"
#define List_1__ctor_m40211(__this, method) (void)List_1__ctor_m6493_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m147750(__this, ___collection, method) (void)List_1__ctor_m57973_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::.ctor(System.Int32)
#define List_1__ctor_m147751(__this, ___capacity, method) (void)List_1__ctor_m57974_gshared((List_1_t1024 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::.ctor(T[],System.Int32)
#define List_1__ctor_m147752(__this, ___data, ___size, method) (void)List_1__ctor_m57975_gshared((List_1_t1024 *)__this, (ObjectU5BU5D_t142*)___data, (int32_t)___size, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::.cctor()
#define List_1__cctor_m147753(__this/* static, unused */, method) (void)List_1__cctor_m57976_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Games.Events.GameEvent>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m147754(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m57977_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m147755(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m57978_gshared((List_1_t1024 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Games.Events.GameEvent>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m147756(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m57979_gshared((List_1_t1024 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<Games.Events.GameEvent>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m147757(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m57980_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<Games.Events.GameEvent>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m147758(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m57981_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<Games.Events.GameEvent>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m147759(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m57982_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m147760(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m57983_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m147761(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m57984_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<Games.Events.GameEvent>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m147762(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m57985_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Games.Events.GameEvent>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m147763(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m57986_gshared((List_1_t1024 *)__this, method)
// System.Object System.Collections.Generic.List`1<Games.Events.GameEvent>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m147764(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m57987_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Games.Events.GameEvent>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m147765(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m57988_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Games.Events.GameEvent>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m147766(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m57989_gshared((List_1_t1024 *)__this, method)
// System.Object System.Collections.Generic.List`1<Games.Events.GameEvent>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m147767(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m57990_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m147768(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m57991_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::Add(T)
#define List_1_Add_m40212(__this, ___item, method) (void)List_1_Add_m6492_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m147769(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m57992_gshared((List_1_t1024 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m147770(__this, ___idx, ___count, method) (void)List_1_CheckRange_m57993_gshared((List_1_t1024 *)__this, (int32_t)___idx, (int32_t)___count, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m147771(__this, ___collection, method) (void)List_1_AddCollection_m57994_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m147772(__this, ___enumerable, method) (void)List_1_AddEnumerable_m57995_gshared((List_1_t1024 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m147773(__this, ___collection, method) (void)List_1_AddRange_m57996_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Games.Events.GameEvent>::AsReadOnly()
#define List_1_AsReadOnly_m147774(__this, method) (ReadOnlyCollection_1_t20310 *)List_1_AsReadOnly_m57997_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::Clear()
#define List_1_Clear_m147775(__this, method) (void)List_1_Clear_m57998_gshared((List_1_t1024 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Games.Events.GameEvent>::Contains(T)
#define List_1_Contains_m147776(__this, ___item, method) (bool)List_1_Contains_m57999_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m147777(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m58000_gshared((List_1_t1024 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<Games.Events.GameEvent>::Find(System.Predicate`1<T>)
#define List_1_Find_m147778(__this, ___match, method) (GameEvent_t2137 *)List_1_Find_m58001_gshared((List_1_t1024 *)__this, (Predicate_1_t8617 *)___match, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m147779(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m58002_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t8617 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<Games.Events.GameEvent>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m147780(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m58003_gshared((List_1_t1024 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t8617 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Games.Events.GameEvent>::GetEnumerator()
 Enumerator_t20314  List_1_GetEnumerator_m147781 (List_1_t2138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Games.Events.GameEvent>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m147782(__this, ___index, ___count, method) (List_1_t2138 *)List_1_GetRange_m58004_gshared((List_1_t1024 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Generic.List`1<Games.Events.GameEvent>::IndexOf(T)
#define List_1_IndexOf_m147783(__this, ___item, method) (int32_t)List_1_IndexOf_m58005_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m147784(__this, ___start, ___delta, method) (void)List_1_Shift_m58006_gshared((List_1_t1024 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m147785(__this, ___index, method) (void)List_1_CheckIndex_m58007_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::Insert(System.Int32,T)
#define List_1_Insert_m147786(__this, ___index, ___item, method) (void)List_1_Insert_m58008_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m147787(__this, ___collection, method) (void)List_1_CheckCollection_m58009_gshared((List_1_t1024 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<Games.Events.GameEvent>::Remove(T)
#define List_1_Remove_m40215(__this, ___item, method) (bool)List_1_Remove_m58010_gshared((List_1_t1024 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<Games.Events.GameEvent>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m147788(__this, ___match, method) (int32_t)List_1_RemoveAll_m58011_gshared((List_1_t1024 *)__this, (Predicate_1_t8617 *)___match, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m147789(__this, ___index, method) (void)List_1_RemoveAt_m58012_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::Reverse()
#define List_1_Reverse_m147790(__this, method) (void)List_1_Reverse_m58013_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::Sort()
#define List_1_Sort_m147791(__this, method) (void)List_1_Sort_m58014_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m147792(__this, ___comparer, method) (void)List_1_Sort_m58015_gshared((List_1_t1024 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m147793(__this, ___comparison, method) (void)List_1_Sort_m58016_gshared((List_1_t1024 *)__this, (Comparison_1_t8619 *)___comparison, method)
// T[] System.Collections.Generic.List`1<Games.Events.GameEvent>::ToArray()
#define List_1_ToArray_m147794(__this, method) (GameEventU5BU5D_t20306*)List_1_ToArray_m58017_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::TrimExcess()
#define List_1_TrimExcess_m147795(__this, method) (void)List_1_TrimExcess_m58018_gshared((List_1_t1024 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<Games.Events.GameEvent>::get_Capacity()
#define List_1_get_Capacity_m147796(__this, method) (int32_t)List_1_get_Capacity_m58019_gshared((List_1_t1024 *)__this, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m147797(__this, ___value, method) (void)List_1_set_Capacity_m58020_gshared((List_1_t1024 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<Games.Events.GameEvent>::get_Count()
#define List_1_get_Count_m40214(__this, method) (int32_t)List_1_get_Count_m39594_gshared((List_1_t1024 *)__this, method)
// T System.Collections.Generic.List`1<Games.Events.GameEvent>::get_Item(System.Int32)
#define List_1_get_Item_m40213(__this, ___index, method) (GameEvent_t2137 *)List_1_get_Item_m39252_gshared((List_1_t1024 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Games.Events.GameEvent>::set_Item(System.Int32,T)
#define List_1_set_Item_m147798(__this, ___index, ___value, method) (void)List_1_set_Item_m58021_gshared((List_1_t1024 *)__this, (int32_t)___index, (Object_t *)___value, method)
