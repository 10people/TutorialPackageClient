#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.List`1<System.Object>
struct List_1_t23918;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t5582;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.String
struct String_t;

// System.Void Boo.Lang.List`1<System.Object>::.ctor()
 void List_1__ctor_m173938_gshared (List_1_t23918 * __this, MethodInfo* method);
#define List_1__ctor_m173938(__this, method) (void)List_1__ctor_m173938_gshared((List_1_t23918 *)__this, method)
// System.Void Boo.Lang.List`1<System.Object>::.cctor()
 void List_1__cctor_m173940_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define List_1__cctor_m173940(__this/* static, unused */, method) (void)List_1__cctor_m173940_gshared((Object_t *)__this/* static, unused */, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
 void List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m173942_gshared (List_1_t23918 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m173942(__this, ___item, method) (void)List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m173942_gshared((List_1_t23918 *)__this, (Object_t *)___item, method)
// System.Collections.IEnumerator Boo.Lang.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m173944_gshared (List_1_t23918 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m173944(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m173944_gshared((List_1_t23918 *)__this, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
 void List_1_System_Collections_Generic_IListU3CTU3E_Insert_m173946_gshared (List_1_t23918 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_Generic_IListU3CTU3E_Insert_m173946(__this, ___index, ___item, method) (void)List_1_System_Collections_Generic_IListU3CTU3E_Insert_m173946_gshared((List_1_t23918 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
 void List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m173948_gshared (List_1_t23918 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m173948(__this, ___index, method) (void)List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m173948_gshared((List_1_t23918 *)__this, (int32_t)___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m173950_gshared (List_1_t23918 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m173950(__this, ___item, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m173950_gshared((List_1_t23918 *)__this, (Object_t *)___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m173952_gshared (List_1_t23918 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m173952(__this, ___value, method) (int32_t)List_1_System_Collections_IList_Add_m173952_gshared((List_1_t23918 *)__this, (Object_t *)___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m173954_gshared (List_1_t23918 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m173954(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_Insert_m173954_gshared((List_1_t23918 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m173956_gshared (List_1_t23918 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m173956(__this, ___value, method) (void)List_1_System_Collections_IList_Remove_m173956_gshared((List_1_t23918 *)__this, (Object_t *)___value, method)
// System.Int32 Boo.Lang.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m173958_gshared (List_1_t23918 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m173958(__this, ___value, method) (int32_t)List_1_System_Collections_IList_IndexOf_m173958_gshared((List_1_t23918 *)__this, (Object_t *)___value, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m173960_gshared (List_1_t23918 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m173960(__this, ___value, method) (bool)List_1_System_Collections_IList_Contains_m173960_gshared((List_1_t23918 *)__this, (Object_t *)___value, method)
// System.Object Boo.Lang.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m173962_gshared (List_1_t23918 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m173962(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m173962_gshared((List_1_t23918 *)__this, (int32_t)___index, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m173964_gshared (List_1_t23918 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m173964(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m173964_gshared((List_1_t23918 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
 void List_1_System_Collections_IList_RemoveAt_m173966_gshared (List_1_t23918 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_RemoveAt_m173966(__this, ___index, method) (void)List_1_System_Collections_IList_RemoveAt_m173966_gshared((List_1_t23918 *)__this, (int32_t)___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m173968_gshared (List_1_t23918 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m173968(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m173968_gshared((List_1_t23918 *)__this, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m173970_gshared (List_1_t23918 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m173970(__this, ___array, ___index, method) (void)List_1_System_Collections_ICollection_CopyTo_m173970_gshared((List_1_t23918 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Int32 Boo.Lang.List`1<System.Object>::get_Count()
 int32_t List_1_get_Count_m173972_gshared (List_1_t23918 * __this, MethodInfo* method);
#define List_1_get_Count_m173972(__this, method) (int32_t)List_1_get_Count_m173972_gshared((List_1_t23918 *)__this, method)
// System.Collections.Generic.IEnumerator`1<T> Boo.Lang.List`1<System.Object>::GetEnumerator()
 Object_t* List_1_GetEnumerator_m173974_gshared (List_1_t23918 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m173974(__this, method) (Object_t*)List_1_GetEnumerator_m173974_gshared((List_1_t23918 *)__this, method)
// System.Void Boo.Lang.List`1<System.Object>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m173976_gshared (List_1_t23918 * __this, ObjectU5BU5D_t142* ___target, int32_t ___index, MethodInfo* method);
#define List_1_CopyTo_m173976(__this, ___target, ___index, method) (void)List_1_CopyTo_m173976_gshared((List_1_t23918 *)__this, (ObjectU5BU5D_t142*)___target, (int32_t)___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::get_IsSynchronized()
 bool List_1_get_IsSynchronized_m173978_gshared (List_1_t23918 * __this, MethodInfo* method);
#define List_1_get_IsSynchronized_m173978(__this, method) (bool)List_1_get_IsSynchronized_m173978_gshared((List_1_t23918 *)__this, method)
// System.Object Boo.Lang.List`1<System.Object>::get_SyncRoot()
 Object_t * List_1_get_SyncRoot_m173980_gshared (List_1_t23918 * __this, MethodInfo* method);
#define List_1_get_SyncRoot_m173980(__this, method) (Object_t *)List_1_get_SyncRoot_m173980_gshared((List_1_t23918 *)__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::get_IsReadOnly()
 bool List_1_get_IsReadOnly_m173982_gshared (List_1_t23918 * __this, MethodInfo* method);
#define List_1_get_IsReadOnly_m173982(__this, method) (bool)List_1_get_IsReadOnly_m173982_gshared((List_1_t23918 *)__this, method)
// T Boo.Lang.List`1<System.Object>::get_Item(System.Int32)
 Object_t * List_1_get_Item_m173984_gshared (List_1_t23918 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m173984(__this, ___index, method) (Object_t *)List_1_get_Item_m173984_gshared((List_1_t23918 *)__this, (int32_t)___index, method)
// System.Void Boo.Lang.List`1<System.Object>::set_Item(System.Int32,T)
 void List_1_set_Item_m173986_gshared (List_1_t23918 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m173986(__this, ___index, ___value, method) (void)List_1_set_Item_m173986_gshared((List_1_t23918 *)__this, (int32_t)___index, (Object_t *)___value, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Push(T)
 List_1_t23918 * List_1_Push_m173988_gshared (List_1_t23918 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Push_m173988(__this, ___item, method) (List_1_t23918 *)List_1_Push_m173988_gshared((List_1_t23918 *)__this, (Object_t *)___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Add(T)
 List_1_t23918 * List_1_Add_m173990_gshared (List_1_t23918 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m173990(__this, ___item, method) (List_1_t23918 *)List_1_Add_m173990_gshared((List_1_t23918 *)__this, (Object_t *)___item, method)
// System.String Boo.Lang.List`1<System.Object>::ToString()
 String_t* List_1_ToString_m173992_gshared (List_1_t23918 * __this, MethodInfo* method);
#define List_1_ToString_m173992(__this, method) (String_t*)List_1_ToString_m173992_gshared((List_1_t23918 *)__this, method)
// System.String Boo.Lang.List`1<System.Object>::Join(System.String)
 String_t* List_1_Join_m173994_gshared (List_1_t23918 * __this, String_t* ___separator, MethodInfo* method);
#define List_1_Join_m173994(__this, ___separator, method) (String_t*)List_1_Join_m173994_gshared((List_1_t23918 *)__this, (String_t*)___separator, method)
// System.Int32 Boo.Lang.List`1<System.Object>::GetHashCode()
 int32_t List_1_GetHashCode_m173996_gshared (List_1_t23918 * __this, MethodInfo* method);
#define List_1_GetHashCode_m173996(__this, method) (int32_t)List_1_GetHashCode_m173996_gshared((List_1_t23918 *)__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Equals(System.Object)
 bool List_1_Equals_m173998_gshared (List_1_t23918 * __this, Object_t * ___other, MethodInfo* method);
#define List_1_Equals_m173998(__this, ___other, method) (bool)List_1_Equals_m173998_gshared((List_1_t23918 *)__this, (Object_t *)___other, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Equals(Boo.Lang.List`1<T>)
 bool List_1_Equals_m174000_gshared (List_1_t23918 * __this, List_1_t23918 * ___other, MethodInfo* method);
#define List_1_Equals_m174000(__this, ___other, method) (bool)List_1_Equals_m174000_gshared((List_1_t23918 *)__this, (List_1_t23918 *)___other, method)
// System.Void Boo.Lang.List`1<System.Object>::Clear()
 void List_1_Clear_m174002_gshared (List_1_t23918 * __this, MethodInfo* method);
#define List_1_Clear_m174002(__this, method) (void)List_1_Clear_m174002_gshared((List_1_t23918 *)__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Contains(T)
 bool List_1_Contains_m174004_gshared (List_1_t23918 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m174004(__this, ___item, method) (bool)List_1_Contains_m174004_gshared((List_1_t23918 *)__this, (Object_t *)___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::IndexOf(T)
 int32_t List_1_IndexOf_m174006_gshared (List_1_t23918 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m174006(__this, ___item, method) (int32_t)List_1_IndexOf_m174006_gshared((List_1_t23918 *)__this, (Object_t *)___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Insert(System.Int32,T)
 List_1_t23918 * List_1_Insert_m174008_gshared (List_1_t23918 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m174008(__this, ___index, ___item, method) (List_1_t23918 *)List_1_Insert_m174008_gshared((List_1_t23918 *)__this, (int32_t)___index, (Object_t *)___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Remove(T)
 List_1_t23918 * List_1_Remove_m174010_gshared (List_1_t23918 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m174010(__this, ___item, method) (List_1_t23918 *)List_1_Remove_m174010_gshared((List_1_t23918 *)__this, (Object_t *)___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::RemoveAt(System.Int32)
 List_1_t23918 * List_1_RemoveAt_m174012_gshared (List_1_t23918 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m174012(__this, ___index, method) (List_1_t23918 *)List_1_RemoveAt_m174012_gshared((List_1_t23918 *)__this, (int32_t)___index, method)
// System.Void Boo.Lang.List`1<System.Object>::EnsureCapacity(System.Int32)
 void List_1_EnsureCapacity_m174014_gshared (List_1_t23918 * __this, int32_t ___minCapacity, MethodInfo* method);
#define List_1_EnsureCapacity_m174014(__this, ___minCapacity, method) (void)List_1_EnsureCapacity_m174014_gshared((List_1_t23918 *)__this, (int32_t)___minCapacity, method)
// T[] Boo.Lang.List`1<System.Object>::NewArray(System.Int32)
 ObjectU5BU5D_t142* List_1_NewArray_m174016_gshared (List_1_t23918 * __this, int32_t ___minCapacity, MethodInfo* method);
#define List_1_NewArray_m174016(__this, ___minCapacity, method) (ObjectU5BU5D_t142*)List_1_NewArray_m174016_gshared((List_1_t23918 *)__this, (int32_t)___minCapacity, method)
// System.Void Boo.Lang.List`1<System.Object>::InnerRemoveAt(System.Int32)
 void List_1_InnerRemoveAt_m174018_gshared (List_1_t23918 * __this, int32_t ___index, MethodInfo* method);
#define List_1_InnerRemoveAt_m174018(__this, ___index, method) (void)List_1_InnerRemoveAt_m174018_gshared((List_1_t23918 *)__this, (int32_t)___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::InnerRemove(T)
 bool List_1_InnerRemove_m174020_gshared (List_1_t23918 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_InnerRemove_m174020(__this, ___item, method) (bool)List_1_InnerRemove_m174020_gshared((List_1_t23918 *)__this, (Object_t *)___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::CheckIndex(System.Int32)
 int32_t List_1_CheckIndex_m174022_gshared (List_1_t23918 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m174022(__this, ___index, method) (int32_t)List_1_CheckIndex_m174022_gshared((List_1_t23918 *)__this, (int32_t)___index, method)
// System.Int32 Boo.Lang.List`1<System.Object>::NormalizeIndex(System.Int32)
 int32_t List_1_NormalizeIndex_m174024_gshared (List_1_t23918 * __this, int32_t ___index, MethodInfo* method);
#define List_1_NormalizeIndex_m174024(__this, ___index, method) (int32_t)List_1_NormalizeIndex_m174024_gshared((List_1_t23918 *)__this, (int32_t)___index, method)
// T Boo.Lang.List`1<System.Object>::Coerce(System.Object)
 Object_t * List_1_Coerce_m174026_gshared (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method);
#define List_1_Coerce_m174026(__this/* static, unused */, ___value, method) (Object_t *)List_1_Coerce_m174026_gshared((Object_t *)__this/* static, unused */, (Object_t *)___value, method)
