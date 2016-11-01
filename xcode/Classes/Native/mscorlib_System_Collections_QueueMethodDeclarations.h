#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Queue
struct Queue_t6898;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Object[]
struct ObjectU5BU5D_t142;

// System.Void System.Collections.Queue::.ctor()
 void Queue__ctor_m49144 (Queue_t6898 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Int32)
 void Queue__ctor_m51253 (Queue_t6898 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Int32,System.Single)
 void Queue__ctor_m54240 (Queue_t6898 * __this, int32_t ___capacity, float ___growFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Queue::get_Count()
 int32_t Queue_get_Count_m49143 (Queue_t6898 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Queue::get_IsSynchronized()
 bool Queue_get_IsSynchronized_m54241 (Queue_t6898 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::get_SyncRoot()
 Object_t * Queue_get_SyncRoot_m54242 (Queue_t6898 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::CopyTo(System.Array,System.Int32)
 void Queue_CopyTo_m54243 (Queue_t6898 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Queue::GetEnumerator()
 Object_t * Queue_GetEnumerator_m54244 (Queue_t6898 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::Clear()
 void Queue_Clear_m51248 (Queue_t6898 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Dequeue()
 Object_t * Queue_Dequeue_m49142 (Queue_t6898 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::Enqueue(System.Object)
 void Queue_Enqueue_m49141 (Queue_t6898 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Peek()
 Object_t * Queue_Peek_m51251 (Queue_t6898 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.Queue::ToArray()
 ObjectU5BU5D_t142* Queue_ToArray_m51247 (Queue_t6898 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::grow()
 void Queue_grow_m54245 (Queue_t6898 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
