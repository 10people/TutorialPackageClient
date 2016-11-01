#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseLevel>,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseLevel>>
struct Transform_1_t9581;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseLevel>
struct List_1_t358;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseLevel>,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseLevel>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m65867 (Transform_1_t9581 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseLevel>,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseLevel>>::Invoke(TKey,TValue)
 List_1_t358 * Transform_1_Invoke_m65868 (Transform_1_t9581 * __this, int32_t ___key, List_1_t358 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseLevel>,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseLevel>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m65869 (Transform_1_t9581 * __this, int32_t ___key, List_1_t358 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseLevel>,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseLevel>>::EndInvoke(System.IAsyncResult)
 List_1_t358 * Transform_1_EndInvoke_m65870 (Transform_1_t9581 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
