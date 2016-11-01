#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MapConnection>,System.Collections.Generic.List`1<GCGame.Table.Tab_MapConnection>>
struct Transform_1_t12500;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MapConnection>
struct List_1_t522;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MapConnection>,System.Collections.Generic.List`1<GCGame.Table.Tab_MapConnection>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m90396 (Transform_1_t12500 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MapConnection>,System.Collections.Generic.List`1<GCGame.Table.Tab_MapConnection>>::Invoke(TKey,TValue)
 List_1_t522 * Transform_1_Invoke_m90397 (Transform_1_t12500 * __this, int32_t ___key, List_1_t522 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MapConnection>,System.Collections.Generic.List`1<GCGame.Table.Tab_MapConnection>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m90398 (Transform_1_t12500 * __this, int32_t ___key, List_1_t522 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MapConnection>,System.Collections.Generic.List`1<GCGame.Table.Tab_MapConnection>>::EndInvoke(System.IAsyncResult)
 List_1_t522 * Transform_1_EndInvoke_m90399 (Transform_1_t12500 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
