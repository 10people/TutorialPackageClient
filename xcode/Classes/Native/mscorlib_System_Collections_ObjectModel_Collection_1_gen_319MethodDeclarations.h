#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>
struct Collection_1_t21988;
// System.Object
struct Object_t;
// NPCEditorRoot/NPCData
struct NPCData_t5128;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// NPCEditorRoot/NPCData[]
struct NPCDataU5BU5D_t21978;
// System.Collections.Generic.IEnumerator`1<NPCEditorRoot/NPCData>
struct IEnumerator_1_t21980;
// System.Collections.Generic.IList`1<NPCEditorRoot/NPCData>
struct IList_1_t21987;

// System.Void System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m160585(__this, method) (void)Collection_1__ctor_m58052_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m160586(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m58053_gshared((Collection_1_t8621 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m160587(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m58054_gshared((Collection_1_t8621 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m160588(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m58055_gshared((Collection_1_t8621 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m160589(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m58056_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m160590(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m58057_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m160591(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m58058_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m160592(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m58059_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m160593(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m58060_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m160594(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m58061_gshared((Collection_1_t8621 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m160595(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m58062_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m160596(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m58063_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m160597(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m58064_gshared((Collection_1_t8621 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m160598(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m58065_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m160599(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m58066_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::Add(T)
#define Collection_1_Add_m160600(__this, ___item, method) (void)Collection_1_Add_m58067_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::Clear()
#define Collection_1_Clear_m160601(__this, method) (void)Collection_1_Clear_m58068_gshared((Collection_1_t8621 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::ClearItems()
#define Collection_1_ClearItems_m160602(__this, method) (void)Collection_1_ClearItems_m58069_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::Contains(T)
#define Collection_1_Contains_m160603(__this, ___item, method) (bool)Collection_1_Contains_m58070_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m160604(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m58071_gshared((Collection_1_t8621 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::GetEnumerator()
#define Collection_1_GetEnumerator_m160605(__this, method) (Object_t*)Collection_1_GetEnumerator_m58072_gshared((Collection_1_t8621 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::IndexOf(T)
#define Collection_1_IndexOf_m160606(__this, ___item, method) (int32_t)Collection_1_IndexOf_m58073_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::Insert(System.Int32,T)
#define Collection_1_Insert_m160607(__this, ___index, ___item, method) (void)Collection_1_Insert_m58074_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m160608(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m58075_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::Remove(T)
#define Collection_1_Remove_m160609(__this, ___item, method) (bool)Collection_1_Remove_m58076_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m160610(__this, ___index, method) (void)Collection_1_RemoveAt_m58077_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m160611(__this, ___index, method) (void)Collection_1_RemoveItem_m58078_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::get_Count()
#define Collection_1_get_Count_m160612(__this, method) (int32_t)Collection_1_get_Count_m58079_gshared((Collection_1_t8621 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::get_Item(System.Int32)
#define Collection_1_get_Item_m160613(__this, ___index, method) (NPCData_t5128 *)Collection_1_get_Item_m58080_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m160614(__this, ___index, ___value, method) (void)Collection_1_set_Item_m58081_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m160615(__this, ___index, ___item, method) (void)Collection_1_SetItem_m58082_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m160616(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m58083_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m160617(__this/* static, unused */, ___item, method) (NPCData_t5128 *)Collection_1_ConvertItem_m58084_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m160618(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m58085_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m160619(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m58086_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<NPCEditorRoot/NPCData>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m160620(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m58087_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
