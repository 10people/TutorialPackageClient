#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ArrayMetadata,System.Type>
struct Transform_1_t16331;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ArrayMetadata,System.Type>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m121903 (Transform_1_t16331 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ArrayMetadata,System.Type>::Invoke(TKey,TValue)
 Type_t * Transform_1_Invoke_m121904 (Transform_1_t16331 * __this, Type_t * ___key, ArrayMetadata_t1071  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ArrayMetadata,System.Type>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m121905 (Transform_1_t16331 * __this, Type_t * ___key, ArrayMetadata_t1071  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ArrayMetadata,System.Type>::EndInvoke(System.IAsyncResult)
 Type_t * Transform_1_EndInvoke_m121906 (Transform_1_t16331 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
