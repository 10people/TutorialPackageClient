#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NpcOptionDialog>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NpcOptionDialog>>>
struct Transform_1_t13327;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_NpcOptionDialog>
struct List_1_t568;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NpcOptionDialog>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_170.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NpcOptionDialog>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NpcOptionDialog>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m97300 (Transform_1_t13327 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NpcOptionDialog>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NpcOptionDialog>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t13301  Transform_1_Invoke_m97301 (Transform_1_t13327 * __this, int32_t ___key, List_1_t568 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NpcOptionDialog>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NpcOptionDialog>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m97302 (Transform_1_t13327 * __this, int32_t ___key, List_1_t568 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NpcOptionDialog>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NpcOptionDialog>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t13301  Transform_1_EndInvoke_m97303 (Transform_1_t13327 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
