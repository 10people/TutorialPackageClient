#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Net.Cookie>
struct Collection_1_t24071;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t7159;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Net.Cookie[]
struct CookieU5BU5D_t24064;
// System.Collections.Generic.IEnumerator`1<System.Net.Cookie>
struct IEnumerator_1_t24066;
// System.Collections.Generic.IList`1<System.Net.Cookie>
struct IList_1_t7163;

// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m175057(__this, method) (void)Collection_1__ctor_m58052_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m175058(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m58053_gshared((Collection_1_t8621 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m175059(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m58054_gshared((Collection_1_t8621 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m175060(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m58055_gshared((Collection_1_t8621 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m175061(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m58056_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m175062(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m58057_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m175063(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m58058_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m175064(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m58059_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m175065(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m58060_gshared((Collection_1_t8621 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m175066(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m58061_gshared((Collection_1_t8621 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m175067(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m58062_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m175068(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m58063_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m175069(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m58064_gshared((Collection_1_t8621 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m175070(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m58065_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m175071(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m58066_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::Add(T)
#define Collection_1_Add_m175072(__this, ___item, method) (void)Collection_1_Add_m58067_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::Clear()
#define Collection_1_Clear_m175073(__this, method) (void)Collection_1_Clear_m58068_gshared((Collection_1_t8621 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::ClearItems()
#define Collection_1_ClearItems_m175074(__this, method) (void)Collection_1_ClearItems_m58069_gshared((Collection_1_t8621 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::Contains(T)
#define Collection_1_Contains_m175075(__this, ___item, method) (bool)Collection_1_Contains_m58070_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m175076(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m58071_gshared((Collection_1_t8621 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::GetEnumerator()
#define Collection_1_GetEnumerator_m175077(__this, method) (Object_t*)Collection_1_GetEnumerator_m58072_gshared((Collection_1_t8621 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::IndexOf(T)
#define Collection_1_IndexOf_m175078(__this, ___item, method) (int32_t)Collection_1_IndexOf_m58073_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::Insert(System.Int32,T)
#define Collection_1_Insert_m175079(__this, ___index, ___item, method) (void)Collection_1_Insert_m58074_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m175080(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m58075_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::Remove(T)
#define Collection_1_Remove_m175081(__this, ___item, method) (bool)Collection_1_Remove_m58076_gshared((Collection_1_t8621 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m175082(__this, ___index, method) (void)Collection_1_RemoveAt_m58077_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m175083(__this, ___index, method) (void)Collection_1_RemoveItem_m58078_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::get_Count()
#define Collection_1_get_Count_m175084(__this, method) (int32_t)Collection_1_get_Count_m58079_gshared((Collection_1_t8621 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::get_Item(System.Int32)
#define Collection_1_get_Item_m175085(__this, ___index, method) (Cookie_t7159 *)Collection_1_get_Item_m58080_gshared((Collection_1_t8621 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m175086(__this, ___index, ___value, method) (void)Collection_1_set_Item_m58081_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m175087(__this, ___index, ___item, method) (void)Collection_1_SetItem_m58082_gshared((Collection_1_t8621 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m175088(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m58083_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m175089(__this/* static, unused */, ___item, method) (Cookie_t7159 *)Collection_1_ConvertItem_m58084_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m175090(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m58085_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m175091(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m58086_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Net.Cookie>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m175092(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m58087_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
