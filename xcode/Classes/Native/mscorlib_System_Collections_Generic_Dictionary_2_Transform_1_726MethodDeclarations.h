#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_UIPath>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_UIPath>>>
struct Transform_1_t15566;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_UIPath>
struct List_1_t694;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_UIPath>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_221.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_UIPath>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_UIPath>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m116140 (Transform_1_t15566 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_UIPath>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_UIPath>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t15540  Transform_1_Invoke_m116141 (Transform_1_t15566 * __this, int32_t ___key, List_1_t694 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_UIPath>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_UIPath>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m116142 (Transform_1_t15566 * __this, int32_t ___key, List_1_t694 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_UIPath>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_UIPath>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t15540  Transform_1_EndInvoke_m116143 (Transform_1_t15566 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
