#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneClass>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneClass>>>
struct Transform_1_t14252;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SceneClass>
struct List_1_t620;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneClass>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_192.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneClass>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneClass>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m105076 (Transform_1_t14252 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneClass>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneClass>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t14226  Transform_1_Invoke_m105077 (Transform_1_t14252 * __this, int32_t ___key, List_1_t620 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneClass>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneClass>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m105078 (Transform_1_t14252 * __this, int32_t ___key, List_1_t620 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneClass>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneClass>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t14226  Transform_1_EndInvoke_m105079 (Transform_1_t14252 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
