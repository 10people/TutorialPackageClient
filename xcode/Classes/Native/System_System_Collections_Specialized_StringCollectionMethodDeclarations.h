#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.StringCollection
struct StringCollection_t6692;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Specialized.StringEnumerator
struct StringEnumerator_t7053;

// System.Void System.Collections.Specialized.StringCollection::.ctor()
 void StringCollection__ctor_m49004 (StringCollection_t6692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsReadOnly()
 bool StringCollection_System_Collections_IList_get_IsReadOnly_m49434 (StringCollection_t6692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsFixedSize()
 bool StringCollection_System_Collections_IList_get_IsFixedSize_m49435 (StringCollection_t6692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringCollection::System.Collections.IList.get_Item(System.Int32)
 Object_t * StringCollection_System_Collections_IList_get_Item_m49436 (StringCollection_t6692 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
 void StringCollection_System_Collections_IList_set_Item_m49437 (StringCollection_t6692 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.Add(System.Object)
 int32_t StringCollection_System_Collections_IList_Add_m49438 (StringCollection_t6692 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.Contains(System.Object)
 bool StringCollection_System_Collections_IList_Contains_m49439 (StringCollection_t6692 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.IndexOf(System.Object)
 int32_t StringCollection_System_Collections_IList_IndexOf_m49440 (StringCollection_t6692 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Insert(System.Int32,System.Object)
 void StringCollection_System_Collections_IList_Insert_m49441 (StringCollection_t6692 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Remove(System.Object)
 void StringCollection_System_Collections_IList_Remove_m49442 (StringCollection_t6692 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void StringCollection_System_Collections_ICollection_CopyTo_m49443 (StringCollection_t6692 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.StringCollection::System.Collections.IEnumerable.GetEnumerator()
 Object_t * StringCollection_System_Collections_IEnumerable_GetEnumerator_m49444 (StringCollection_t6692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
 String_t* StringCollection_get_Item_m48965 (StringCollection_t6692 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
 void StringCollection_set_Item_m49445 (StringCollection_t6692 * __this, int32_t ___index, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::get_Count()
 int32_t StringCollection_get_Count_m48966 (StringCollection_t6692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
 int32_t StringCollection_Add_m49006 (StringCollection_t6692 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Clear()
 void StringCollection_Clear_m49446 (StringCollection_t6692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
 bool StringCollection_Contains_m49005 (StringCollection_t6692 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringEnumerator System.Collections.Specialized.StringCollection::GetEnumerator()
 StringEnumerator_t7053 * StringCollection_GetEnumerator_m49042 (StringCollection_t6692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
 int32_t StringCollection_IndexOf_m49447 (StringCollection_t6692 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
 void StringCollection_Insert_m49448 (StringCollection_t6692 * __this, int32_t ___index, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::get_IsReadOnly()
 bool StringCollection_get_IsReadOnly_m49449 (StringCollection_t6692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::get_IsSynchronized()
 bool StringCollection_get_IsSynchronized_m49450 (StringCollection_t6692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
 void StringCollection_Remove_m49451 (StringCollection_t6692 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::RemoveAt(System.Int32)
 void StringCollection_RemoveAt_m49452 (StringCollection_t6692 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringCollection::get_SyncRoot()
 Object_t * StringCollection_get_SyncRoot_m49453 (StringCollection_t6692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
