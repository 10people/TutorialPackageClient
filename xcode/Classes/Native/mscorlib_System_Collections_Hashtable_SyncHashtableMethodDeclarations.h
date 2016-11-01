#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_t7872;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Collections.Hashtable)
 void SyncHashtable__ctor_m54188 (SyncHashtable_t7872 * __this, Hashtable_t4372 * ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void SyncHashtable__ctor_m54189 (SyncHashtable_t7872 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable/SyncHashtable::System.Collections.IEnumerable.GetEnumerator()
 Object_t * SyncHashtable_System_Collections_IEnumerable_GetEnumerator_m54190 (SyncHashtable_t7872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void SyncHashtable_GetObjectData_m54191 (SyncHashtable_t7872 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable/SyncHashtable::get_Count()
 int32_t SyncHashtable_get_Count_m54192 (SyncHashtable_t7872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::get_IsSynchronized()
 bool SyncHashtable_get_IsSynchronized_m54193 (SyncHashtable_t7872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::get_SyncRoot()
 Object_t * SyncHashtable_get_SyncRoot_m54194 (SyncHashtable_t7872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::get_IsFixedSize()
 bool SyncHashtable_get_IsFixedSize_m54195 (SyncHashtable_t7872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::get_IsReadOnly()
 bool SyncHashtable_get_IsReadOnly_m54196 (SyncHashtable_t7872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Keys()
 Object_t * SyncHashtable_get_Keys_m54197 (SyncHashtable_t7872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Values()
 Object_t * SyncHashtable_get_Values_m54198 (SyncHashtable_t7872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::get_Item(System.Object)
 Object_t * SyncHashtable_get_Item_m54199 (SyncHashtable_t7872 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::set_Item(System.Object,System.Object)
 void SyncHashtable_set_Item_m54200 (SyncHashtable_t7872 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::CopyTo(System.Array,System.Int32)
 void SyncHashtable_CopyTo_m54201 (SyncHashtable_t7872 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Add(System.Object,System.Object)
 void SyncHashtable_Add_m54202 (SyncHashtable_t7872 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Clear()
 void SyncHashtable_Clear_m54203 (SyncHashtable_t7872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::Contains(System.Object)
 bool SyncHashtable_Contains_m54204 (SyncHashtable_t7872 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable/SyncHashtable::GetEnumerator()
 Object_t * SyncHashtable_GetEnumerator_m54205 (SyncHashtable_t7872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Remove(System.Object)
 void SyncHashtable_Remove_m54206 (SyncHashtable_t7872 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::ContainsKey(System.Object)
 bool SyncHashtable_ContainsKey_m54207 (SyncHashtable_t7872 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::Clone()
 Object_t * SyncHashtable_Clone_m54208 (SyncHashtable_t7872 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
