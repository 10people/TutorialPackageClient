#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CollectItem>,System.Collections.Generic.List`1<GCGame.Table.Tab_CollectItem>>
struct Transform_1_t10399;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CollectItem>
struct List_1_t404;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CollectItem>,System.Collections.Generic.List`1<GCGame.Table.Tab_CollectItem>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m72744 (Transform_1_t10399 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CollectItem>,System.Collections.Generic.List`1<GCGame.Table.Tab_CollectItem>>::Invoke(TKey,TValue)
 List_1_t404 * Transform_1_Invoke_m72745 (Transform_1_t10399 * __this, int32_t ___key, List_1_t404 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CollectItem>,System.Collections.Generic.List`1<GCGame.Table.Tab_CollectItem>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m72746 (Transform_1_t10399 * __this, int32_t ___key, List_1_t404 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CollectItem>,System.Collections.Generic.List`1<GCGame.Table.Tab_CollectItem>>::EndInvoke(System.IAsyncResult)
 List_1_t404 * Transform_1_EndInvoke_m72747 (Transform_1_t10399 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
