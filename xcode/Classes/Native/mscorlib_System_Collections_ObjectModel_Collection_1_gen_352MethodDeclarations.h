#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>
struct Collection_1_t23520;
// System.Object
struct Object_t;
// UnityEngine.UI.Selectable
struct Selectable_t6064;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t23510;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable>
struct IEnumerator_1_t23512;
// System.Collections.Generic.IList`1<UnityEngine.UI.Selectable>
struct IList_1_t23519;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m170866(__this, method) (void)Collection_1__ctor_m58052_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m170867(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m58053_gshared((Collection_1_t8621 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m170868(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m58054_gshared((Collection_1_t8621 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m170869(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m58055_gshared((Collection_1_t8621 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m170870(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m58056_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m170871(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m58057_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m170872(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m58058_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m170873(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m58059_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m170874(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m58060_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m170875(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m58061_gshared((Collection_1_t8621 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m170876(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m58062_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m170877(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m58063_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m170878(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m58064_gshared((Collection_1_t8621 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m170879(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m58065_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m170880(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m58066_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::Add(T)
#define Collection_1_Add_m170881(__this, ___item, method) (void)Collection_1_Add_m58067_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::Clear()
#define Collection_1_Clear_m170882(__this, method) (void)Collection_1_Clear_m58068_gshared((Collection_1_t8621 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::ClearItems()
#define Collection_1_ClearItems_m170883(__this, method) (void)Collection_1_ClearItems_m58069_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::Contains(T)
#define Collection_1_Contains_m170884(__this, ___item, method) (bool)Collection_1_Contains_m58070_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m170885(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m58071_gshared((Collection_1_t8621 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::GetEnumerator()
#define Collection_1_GetEnumerator_m170886(__this, method) (Object_t*)Collection_1_GetEnumerator_m58072_gshared((Collection_1_t8621 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::IndexOf(T)
#define Collection_1_IndexOf_m170887(__this, ___item, method) (int32_t)Collection_1_IndexOf_m58073_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::Insert(System.Int32,T)
#define Collection_1_Insert_m170888(__this, ___index, ___item, method) (void)Collection_1_Insert_m58074_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m170889(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m58075_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::Remove(T)
#define Collection_1_Remove_m170890(__this, ___item, method) (bool)Collection_1_Remove_m58076_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m170891(__this, ___index, method) (void)Collection_1_RemoveAt_m58077_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m170892(__this, ___index, method) (void)Collection_1_RemoveItem_m58078_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::get_Count()
#define Collection_1_get_Count_m170893(__this, method) (int32_t)Collection_1_get_Count_m58079_gshared((Collection_1_t8621 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::get_Item(System.Int32)
#define Collection_1_get_Item_m170894(__this, ___index, method) (Selectable_t6064 *)Collection_1_get_Item_m58080_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m170895(__this, ___index, ___value, method) (void)Collection_1_set_Item_m58081_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m170896(__this, ___index, ___item, method) (void)Collection_1_SetItem_m58082_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m170897(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m58083_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m170898(__this/* static, unused */, ___item, method) (Selectable_t6064 *)Collection_1_ConvertItem_m58084_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m170899(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m58085_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m170900(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m58086_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Selectable>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m170901(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m58087_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
