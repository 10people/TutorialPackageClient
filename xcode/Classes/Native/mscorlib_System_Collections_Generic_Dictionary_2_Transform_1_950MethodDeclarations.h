#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<FXController>,System.Collections.Generic.List`1<FXController>>
struct Transform_1_t20250;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<FXController>
struct List_1_t5668;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<FXController>,System.Collections.Generic.List`1<FXController>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m147421 (Transform_1_t20250 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<FXController>,System.Collections.Generic.List`1<FXController>>::Invoke(TKey,TValue)
 List_1_t5668 * Transform_1_Invoke_m147422 (Transform_1_t20250 * __this, int32_t ___key, List_1_t5668 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<FXController>,System.Collections.Generic.List`1<FXController>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m147423 (Transform_1_t20250 * __this, int32_t ___key, List_1_t5668 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<FXController>,System.Collections.Generic.List`1<FXController>>::EndInvoke(System.IAsyncResult)
 List_1_t5668 * Transform_1_EndInvoke_m147424 (Transform_1_t20250 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
