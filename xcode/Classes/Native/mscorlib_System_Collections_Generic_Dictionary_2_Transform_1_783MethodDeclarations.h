#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ArrayMetadata,ArrayMetadata>
struct Transform_1_t16334;
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
// ArrayMetadata
#include "AssemblyU2DCSharp_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ArrayMetadata,ArrayMetadata>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m121927 (Transform_1_t16334 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ArrayMetadata,ArrayMetadata>::Invoke(TKey,TValue)
 ArrayMetadata_t1071  Transform_1_Invoke_m121928 (Transform_1_t16334 * __this, Type_t * ___key, ArrayMetadata_t1071  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ArrayMetadata,ArrayMetadata>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m121929 (Transform_1_t16334 * __this, Type_t * ___key, ArrayMetadata_t1071  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ArrayMetadata,ArrayMetadata>::EndInvoke(System.IAsyncResult)
 ArrayMetadata_t1071  Transform_1_EndInvoke_m121930 (Transform_1_t16334 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
