#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ObjectMetadata,ObjectMetadata>
struct Transform_1_t16370;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ObjectMetadata,ObjectMetadata>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m122207 (Transform_1_t16370 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ObjectMetadata,ObjectMetadata>::Invoke(TKey,TValue)
 ObjectMetadata_t1073  Transform_1_Invoke_m122208 (Transform_1_t16370 * __this, Type_t * ___key, ObjectMetadata_t1073  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ObjectMetadata,ObjectMetadata>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m122209 (Transform_1_t16370 * __this, Type_t * ___key, ObjectMetadata_t1073  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ObjectMetadata,ObjectMetadata>::EndInvoke(System.IAsyncResult)
 ObjectMetadata_t1073  Transform_1_EndInvoke_m122210 (Transform_1_t16370 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
