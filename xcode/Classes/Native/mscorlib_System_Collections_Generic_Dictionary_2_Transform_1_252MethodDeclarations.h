#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWing>,System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWing>>
struct Transform_1_t11359;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWing>
struct List_1_t458;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWing>,System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWing>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m80820 (Transform_1_t11359 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWing>,System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWing>>::Invoke(TKey,TValue)
 List_1_t458 * Transform_1_Invoke_m80821 (Transform_1_t11359 * __this, int32_t ___key, List_1_t458 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWing>,System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWing>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m80822 (Transform_1_t11359 * __this, int32_t ___key, List_1_t458 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWing>,System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWing>>::EndInvoke(System.IAsyncResult)
 List_1_t458 * Transform_1_EndInvoke_m80823 (Transform_1_t11359 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
