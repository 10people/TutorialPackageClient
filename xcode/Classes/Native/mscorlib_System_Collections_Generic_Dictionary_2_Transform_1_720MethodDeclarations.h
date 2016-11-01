#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Trigger>,System.Collections.Generic.List`1<GCGame.Table.Tab_Trigger>>
struct Transform_1_t15529;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Trigger>
struct List_1_t692;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Trigger>,System.Collections.Generic.List`1<GCGame.Table.Tab_Trigger>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m115832 (Transform_1_t15529 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Trigger>,System.Collections.Generic.List`1<GCGame.Table.Tab_Trigger>>::Invoke(TKey,TValue)
 List_1_t692 * Transform_1_Invoke_m115833 (Transform_1_t15529 * __this, int32_t ___key, List_1_t692 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Trigger>,System.Collections.Generic.List`1<GCGame.Table.Tab_Trigger>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m115834 (Transform_1_t15529 * __this, int32_t ___key, List_1_t692 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Trigger>,System.Collections.Generic.List`1<GCGame.Table.Tab_Trigger>>::EndInvoke(System.IAsyncResult)
 List_1_t692 * Transform_1_EndInvoke_m115835 (Transform_1_t15529 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
