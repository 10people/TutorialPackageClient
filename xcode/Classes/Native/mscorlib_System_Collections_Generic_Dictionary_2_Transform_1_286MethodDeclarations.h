#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildActivityBoss>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildActivityBoss>>>
struct Transform_1_t11646;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildActivityBoss>
struct List_1_t474;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildActivityBoss>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_127.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildActivityBoss>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildActivityBoss>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m83224 (Transform_1_t11646 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildActivityBoss>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildActivityBoss>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t11620  Transform_1_Invoke_m83225 (Transform_1_t11646 * __this, int32_t ___key, List_1_t474 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildActivityBoss>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildActivityBoss>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m83226 (Transform_1_t11646 * __this, int32_t ___key, List_1_t474 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildActivityBoss>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildActivityBoss>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t11620  Transform_1_EndInvoke_m83227 (Transform_1_t11646 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
