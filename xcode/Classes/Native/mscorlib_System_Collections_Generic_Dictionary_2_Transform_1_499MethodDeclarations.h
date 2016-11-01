#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PatrolPoint>,System.Int32>
struct Transform_1_t13572;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PatrolPoint>
struct List_1_t582;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PatrolPoint>,System.Int32>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m99361 (Transform_1_t13572 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PatrolPoint>,System.Int32>::Invoke(TKey,TValue)
 int32_t Transform_1_Invoke_m99362 (Transform_1_t13572 * __this, int32_t ___key, List_1_t582 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PatrolPoint>,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m99363 (Transform_1_t13572 * __this, int32_t ___key, List_1_t582 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PatrolPoint>,System.Int32>::EndInvoke(System.IAsyncResult)
 int32_t Transform_1_EndInvoke_m99364 (Transform_1_t13572 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
