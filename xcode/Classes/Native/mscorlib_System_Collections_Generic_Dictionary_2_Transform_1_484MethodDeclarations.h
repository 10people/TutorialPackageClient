#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PVPRule>,System.Collections.Generic.List`1<GCGame.Table.Tab_PVPRule>>
struct Transform_1_t13434;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PVPRule>
struct List_1_t574;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PVPRule>,System.Collections.Generic.List`1<GCGame.Table.Tab_PVPRule>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m98192 (Transform_1_t13434 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PVPRule>,System.Collections.Generic.List`1<GCGame.Table.Tab_PVPRule>>::Invoke(TKey,TValue)
 List_1_t574 * Transform_1_Invoke_m98193 (Transform_1_t13434 * __this, int32_t ___key, List_1_t574 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PVPRule>,System.Collections.Generic.List`1<GCGame.Table.Tab_PVPRule>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m98194 (Transform_1_t13434 * __this, int32_t ___key, List_1_t574 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PVPRule>,System.Collections.Generic.List`1<GCGame.Table.Tab_PVPRule>>::EndInvoke(System.IAsyncResult)
 List_1_t574 * Transform_1_EndInvoke_m98195 (Transform_1_t13434 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
