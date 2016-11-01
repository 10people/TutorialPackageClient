#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DynamicObstacle>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DynamicObstacle>>>
struct Transform_1_t10864;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DynamicObstacle>
struct List_1_t430;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DynamicObstacle>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_108.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DynamicObstacle>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DynamicObstacle>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m76643 (Transform_1_t10864 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DynamicObstacle>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DynamicObstacle>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t10838  Transform_1_Invoke_m76644 (Transform_1_t10864 * __this, int32_t ___key, List_1_t430 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DynamicObstacle>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DynamicObstacle>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m76645 (Transform_1_t10864 * __this, int32_t ___key, List_1_t430 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DynamicObstacle>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DynamicObstacle>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t10838  Transform_1_EndInvoke_m76646 (Transform_1_t10864 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
