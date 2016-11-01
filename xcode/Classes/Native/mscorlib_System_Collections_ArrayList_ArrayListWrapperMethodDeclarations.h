#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/ArrayListWrapper
struct ArrayListWrapper_t7859;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.IComparer
struct IComparer_t7107;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Type
struct Type_t;

// System.Void System.Collections.ArrayList/ArrayListWrapper::.ctor(System.Collections.ArrayList)
 void ArrayListWrapper__ctor_m54059 (ArrayListWrapper_t7859 * __this, ArrayList_t5157 * ___innerArrayList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_Item(System.Int32)
 Object_t * ArrayListWrapper_get_Item_m54060 (ArrayListWrapper_t7859 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Item(System.Int32,System.Object)
 void ArrayListWrapper_set_Item_m54061 (ArrayListWrapper_t7859 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Count()
 int32_t ArrayListWrapper_get_Count_m54062 (ArrayListWrapper_t7859 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsFixedSize()
 bool ArrayListWrapper_get_IsFixedSize_m54063 (ArrayListWrapper_t7859 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsReadOnly()
 bool ArrayListWrapper_get_IsReadOnly_m54064 (ArrayListWrapper_t7859 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsSynchronized()
 bool ArrayListWrapper_get_IsSynchronized_m54065 (ArrayListWrapper_t7859 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_SyncRoot()
 Object_t * ArrayListWrapper_get_SyncRoot_m54066 (ArrayListWrapper_t7859 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::Add(System.Object)
 int32_t ArrayListWrapper_Add_m54067 (ArrayListWrapper_t7859 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Clear()
 void ArrayListWrapper_Clear_m54068 (ArrayListWrapper_t7859 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::Contains(System.Object)
 bool ArrayListWrapper_Contains_m54069 (ArrayListWrapper_t7859 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object)
 int32_t ArrayListWrapper_IndexOf_m54070 (ArrayListWrapper_t7859 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32)
 int32_t ArrayListWrapper_IndexOf_m54071 (ArrayListWrapper_t7859 * __this, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
 int32_t ArrayListWrapper_IndexOf_m54072 (ArrayListWrapper_t7859 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Insert(System.Int32,System.Object)
 void ArrayListWrapper_Insert_m54073 (ArrayListWrapper_t7859 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
 void ArrayListWrapper_InsertRange_m54074 (ArrayListWrapper_t7859 * __this, int32_t ___index, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Remove(System.Object)
 void ArrayListWrapper_Remove_m54075 (ArrayListWrapper_t7859 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::RemoveAt(System.Int32)
 void ArrayListWrapper_RemoveAt_m54076 (ArrayListWrapper_t7859 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array)
 void ArrayListWrapper_CopyTo_m54077 (ArrayListWrapper_t7859 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array,System.Int32)
 void ArrayListWrapper_CopyTo_m54078 (ArrayListWrapper_t7859 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
 void ArrayListWrapper_CopyTo_m54079 (ArrayListWrapper_t7859 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/ArrayListWrapper::GetEnumerator()
 Object_t * ArrayListWrapper_GetEnumerator_m54080 (ArrayListWrapper_t7859 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::AddRange(System.Collections.ICollection)
 void ArrayListWrapper_AddRange_m54081 (ArrayListWrapper_t7859 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::Clone()
 Object_t * ArrayListWrapper_Clone_m54082 (ArrayListWrapper_t7859 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort()
 void ArrayListWrapper_Sort_m54083 (ArrayListWrapper_t7859 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort(System.Collections.IComparer)
 void ArrayListWrapper_Sort_m54084 (ArrayListWrapper_t7859 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/ArrayListWrapper::ToArray()
 ObjectU5BU5D_t142* ArrayListWrapper_ToArray_m54085 (ArrayListWrapper_t7859 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/ArrayListWrapper::ToArray(System.Type)
 Array_t * ArrayListWrapper_ToArray_m54086 (ArrayListWrapper_t7859 * __this, Type_t * ___elementType, MethodInfo* method) IL2CPP_METHOD_ATTR;
