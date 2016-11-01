#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemOpenLimit>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemOpenLimit>>>
struct Transform_1_t11504;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GemOpenLimit>
struct List_1_t466;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemOpenLimit>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_124.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemOpenLimit>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemOpenLimit>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m82028 (Transform_1_t11504 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemOpenLimit>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemOpenLimit>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t11478  Transform_1_Invoke_m82029 (Transform_1_t11504 * __this, int32_t ___key, List_1_t466 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemOpenLimit>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemOpenLimit>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m82030 (Transform_1_t11504 * __this, int32_t ___key, List_1_t466 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemOpenLimit>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemOpenLimit>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t11478  Transform_1_EndInvoke_m82031 (Transform_1_t11504 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
