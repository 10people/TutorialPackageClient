#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.String,System.String>
struct Transform_1_t16647;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.String,System.String>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m124432 (Transform_1_t16647 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.String,System.String>::Invoke(TKey,TValue)
 String_t* Transform_1_Invoke_m124433 (Transform_1_t16647 * __this, int32_t ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.String,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m124434 (Transform_1_t16647 * __this, int32_t ___key, String_t* ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.String,System.String>::EndInvoke(System.IAsyncResult)
 String_t* Transform_1_EndInvoke_m124435 (Transform_1_t16647 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
