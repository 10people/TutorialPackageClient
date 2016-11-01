#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ObjectMetadata,System.Type>
struct Transform_1_t16367;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// ObjectMetadata
#include "AssemblyU2DCSharp_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ObjectMetadata,System.Type>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m122183 (Transform_1_t16367 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ObjectMetadata,System.Type>::Invoke(TKey,TValue)
 Type_t * Transform_1_Invoke_m122184 (Transform_1_t16367 * __this, Type_t * ___key, ObjectMetadata_t1073  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ObjectMetadata,System.Type>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m122185 (Transform_1_t16367 * __this, Type_t * ___key, ObjectMetadata_t1073  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ObjectMetadata,System.Type>::EndInvoke(System.IAsyncResult)
 Type_t * Transform_1_EndInvoke_m122186 (Transform_1_t16367 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
