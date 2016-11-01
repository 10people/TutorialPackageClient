#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<FingerUpEvent>
struct Collection_1_t8770;
// System.Object
struct Object_t;
// FingerUpEvent
struct FingerUpEvent_t55;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// FingerUpEvent[]
struct FingerUpEventU5BU5D_t8759;
// System.Collections.Generic.IEnumerator`1<FingerUpEvent>
struct IEnumerator_1_t8761;
// System.Collections.Generic.IList`1<FingerUpEvent>
struct IList_1_t8769;

// System.Void System.Collections.ObjectModel.Collection`1<FingerUpEvent>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m59230(__this, method) (void)Collection_1__ctor_m58052_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<FingerUpEvent>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59231(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m58053_gshared((Collection_1_t8621 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<FingerUpEvent>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m59232(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m58054_gshared((Collection_1_t8621 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<FingerUpEvent>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m59233(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m58055_gshared((Collection_1_t8621 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<FingerUpEvent>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m59234(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m58056_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<FingerUpEvent>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m59235(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m58057_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<FingerUpEvent>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m59236(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m58058_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<FingerUpEvent>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m59237(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m58059_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<FingerUpEvent>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m59238(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m58060_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<FingerUpEvent>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m59239(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m58061_gshared((Collection_1_t8621 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<FingerUpEvent>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m59240(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m58062_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<FingerUpEvent>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m59241(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m58063_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<FingerUpEvent>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m59242(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m58064_gshared((Collection_1_t8621 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<FingerUpEvent>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m59243(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m58065_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<FingerUpEvent>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m59244(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m58066_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<FingerUpEvent>::Add(T)
#define Collection_1_Add_m59245(__this, ___item, method) (void)Collection_1_Add_m58067_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<FingerUpEvent>::Clear()
#define Collection_1_Clear_m59246(__this, method) (void)Collection_1_Clear_m58068_gshared((Collection_1_t8621 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<FingerUpEvent>::ClearItems()
#define Collection_1_ClearItems_m59247(__this, method) (void)Collection_1_ClearItems_m58069_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<FingerUpEvent>::Contains(T)
#define Collection_1_Contains_m59248(__this, ___item, method) (bool)Collection_1_Contains_m58070_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<FingerUpEvent>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m59249(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m58071_gshared((Collection_1_t8621 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<FingerUpEvent>::GetEnumerator()
#define Collection_1_GetEnumerator_m59250(__this, method) (Object_t*)Collection_1_GetEnumerator_m58072_gshared((Collection_1_t8621 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<FingerUpEvent>::IndexOf(T)
#define Collection_1_IndexOf_m59251(__this, ___item, method) (int32_t)Collection_1_IndexOf_m58073_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<FingerUpEvent>::Insert(System.Int32,T)
#define Collection_1_Insert_m59252(__this, ___index, ___item, method) (void)Collection_1_Insert_m58074_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<FingerUpEvent>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m59253(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m58075_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<FingerUpEvent>::Remove(T)
#define Collection_1_Remove_m59254(__this, ___item, method) (bool)Collection_1_Remove_m58076_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<FingerUpEvent>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m59255(__this, ___index, method) (void)Collection_1_RemoveAt_m58077_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<FingerUpEvent>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m59256(__this, ___index, method) (void)Collection_1_RemoveItem_m58078_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<FingerUpEvent>::get_Count()
#define Collection_1_get_Count_m59257(__this, method) (int32_t)Collection_1_get_Count_m58079_gshared((Collection_1_t8621 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<FingerUpEvent>::get_Item(System.Int32)
#define Collection_1_get_Item_m59258(__this, ___index, method) (FingerUpEvent_t55 *)Collection_1_get_Item_m58080_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<FingerUpEvent>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m59259(__this, ___index, ___value, method) (void)Collection_1_set_Item_m58081_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<FingerUpEvent>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m59260(__this, ___index, ___item, method) (void)Collection_1_SetItem_m58082_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<FingerUpEvent>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m59261(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m58083_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<FingerUpEvent>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m59262(__this/* static, unused */, ___item, method) (FingerUpEvent_t55 *)Collection_1_ConvertItem_m58084_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<FingerUpEvent>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m59263(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m58085_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<FingerUpEvent>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m59264(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m58086_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<FingerUpEvent>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m59265(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m58087_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
