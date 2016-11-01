#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,ObjectMetadata>>
struct Transform_1_t16371;
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
// System.Collections.Generic.KeyValuePair`2<System.Type,ObjectMetadata>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_240.h"
// ObjectMetadata
#include "AssemblyU2DCSharp_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,ObjectMetadata>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m122215 (Transform_1_t16371 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,ObjectMetadata>>::Invoke(TKey,TValue)
 KeyValuePair_2_t16313  Transform_1_Invoke_m122216 (Transform_1_t16371 * __this, Type_t * ___key, ObjectMetadata_t1073  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,ObjectMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m122217 (Transform_1_t16371 * __this, Type_t * ___key, ObjectMetadata_t1073  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,ObjectMetadata>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t16313  Transform_1_EndInvoke_m122218 (Transform_1_t16371 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
