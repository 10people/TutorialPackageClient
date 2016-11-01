#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainCost>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainCost>>>
struct Transform_1_t11289;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainCost>
struct List_1_t454;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainCost>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_118.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainCost>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainCost>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m80228 (Transform_1_t11289 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainCost>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainCost>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t11263  Transform_1_Invoke_m80229 (Transform_1_t11289 * __this, int32_t ___key, List_1_t454 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainCost>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainCost>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m80230 (Transform_1_t11289 * __this, int32_t ___key, List_1_t454 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainCost>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainCost>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t11263  Transform_1_EndInvoke_m80231 (Transform_1_t11289 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
