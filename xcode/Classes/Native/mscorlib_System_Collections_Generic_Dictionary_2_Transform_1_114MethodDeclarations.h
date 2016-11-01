#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangKuUnlock>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangKuUnlock>>>
struct Transform_1_t10115;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CangKuUnlock>
struct List_1_t388;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangKuUnlock>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_88.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangKuUnlock>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangKuUnlock>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m70359 (Transform_1_t10115 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangKuUnlock>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangKuUnlock>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t10089  Transform_1_Invoke_m70360 (Transform_1_t10115 * __this, int32_t ___key, List_1_t388 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangKuUnlock>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangKuUnlock>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m70361 (Transform_1_t10115 * __this, int32_t ___key, List_1_t388 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangKuUnlock>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangKuUnlock>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t10089  Transform_1_EndInvoke_m70362 (Transform_1_t10115 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
