#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.Component>
struct Collection_1_t21717;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t955;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// UnityEngine.Component[]
struct ComponentU5BU5D_t5864;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Component>
struct IEnumerator_1_t21711;
// System.Collections.Generic.IList`1<UnityEngine.Component>
struct IList_1_t21716;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m158721(__this, method) (void)Collection_1__ctor_m58052_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m158722(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m58053_gshared((Collection_1_t8621 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m158723(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m58054_gshared((Collection_1_t8621 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m158724(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m58055_gshared((Collection_1_t8621 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m158725(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m58056_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m158726(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m58057_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m158727(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m58058_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m158728(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m58059_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m158729(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m58060_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m158730(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m58061_gshared((Collection_1_t8621 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m158731(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m58062_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m158732(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m58063_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m158733(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m58064_gshared((Collection_1_t8621 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m158734(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m58065_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m158735(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m58066_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Add(T)
#define Collection_1_Add_m158736(__this, ___item, method) (void)Collection_1_Add_m58067_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Clear()
#define Collection_1_Clear_m158737(__this, method) (void)Collection_1_Clear_m58068_gshared((Collection_1_t8621 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::ClearItems()
#define Collection_1_ClearItems_m158738(__this, method) (void)Collection_1_ClearItems_m58069_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Contains(T)
#define Collection_1_Contains_m158739(__this, ___item, method) (bool)Collection_1_Contains_m58070_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m158740(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m58071_gshared((Collection_1_t8621 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::GetEnumerator()
#define Collection_1_GetEnumerator_m158741(__this, method) (Object_t*)Collection_1_GetEnumerator_m58072_gshared((Collection_1_t8621 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IndexOf(T)
#define Collection_1_IndexOf_m158742(__this, ___item, method) (int32_t)Collection_1_IndexOf_m58073_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Insert(System.Int32,T)
#define Collection_1_Insert_m158743(__this, ___index, ___item, method) (void)Collection_1_Insert_m58074_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m158744(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m58075_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Remove(T)
#define Collection_1_Remove_m158745(__this, ___item, method) (bool)Collection_1_Remove_m58076_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m158746(__this, ___index, method) (void)Collection_1_RemoveAt_m58077_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m158747(__this, ___index, method) (void)Collection_1_RemoveItem_m58078_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::get_Count()
#define Collection_1_get_Count_m158748(__this, method) (int32_t)Collection_1_get_Count_m58079_gshared((Collection_1_t8621 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::get_Item(System.Int32)
#define Collection_1_get_Item_m158749(__this, ___index, method) (Component_t955 *)Collection_1_get_Item_m58080_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m158750(__this, ___index, ___value, method) (void)Collection_1_set_Item_m58081_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m158751(__this, ___index, ___item, method) (void)Collection_1_SetItem_m58082_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m158752(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m58083_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m158753(__this/* static, unused */, ___item, method) (Component_t955 *)Collection_1_ConvertItem_m58084_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m158754(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m58085_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m158755(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m58086_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m158756(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m58087_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
