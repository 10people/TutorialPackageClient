#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PvpRank>,System.Collections.Generic.List`1<GCGame.Table.Tab_PvpRank>>
struct Transform_1_t13789;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PvpRank>
struct List_1_t594;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PvpRank>,System.Collections.Generic.List`1<GCGame.Table.Tab_PvpRank>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m101181 (Transform_1_t13789 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PvpRank>,System.Collections.Generic.List`1<GCGame.Table.Tab_PvpRank>>::Invoke(TKey,TValue)
 List_1_t594 * Transform_1_Invoke_m101182 (Transform_1_t13789 * __this, int32_t ___key, List_1_t594 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PvpRank>,System.Collections.Generic.List`1<GCGame.Table.Tab_PvpRank>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m101183 (Transform_1_t13789 * __this, int32_t ___key, List_1_t594 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PvpRank>,System.Collections.Generic.List`1<GCGame.Table.Tab_PvpRank>>::EndInvoke(System.IAsyncResult)
 List_1_t594 * Transform_1_EndInvoke_m101184 (Transform_1_t13789 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
