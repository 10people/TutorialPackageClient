#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ActivenessAward>,System.Collections.Generic.List`1<GCGame.Table.Tab_ActivenessAward>>
struct Transform_1_t9225;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ActivenessAward>
struct List_1_t338;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ActivenessAward>,System.Collections.Generic.List`1<GCGame.Table.Tab_ActivenessAward>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m62875 (Transform_1_t9225 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ActivenessAward>,System.Collections.Generic.List`1<GCGame.Table.Tab_ActivenessAward>>::Invoke(TKey,TValue)
 List_1_t338 * Transform_1_Invoke_m62876 (Transform_1_t9225 * __this, int32_t ___key, List_1_t338 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ActivenessAward>,System.Collections.Generic.List`1<GCGame.Table.Tab_ActivenessAward>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m62877 (Transform_1_t9225 * __this, int32_t ___key, List_1_t338 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ActivenessAward>,System.Collections.Generic.List`1<GCGame.Table.Tab_ActivenessAward>>::EndInvoke(System.IAsyncResult)
 List_1_t338 * Transform_1_EndInvoke_m62878 (Transform_1_t9225 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
