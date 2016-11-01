#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeInfo>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeInfo>>>
struct Transform_1_t10079;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeInfo>
struct List_1_t386;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeInfo>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_87.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeInfo>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeInfo>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m70059 (Transform_1_t10079 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeInfo>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeInfo>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t10053  Transform_1_Invoke_m70060 (Transform_1_t10079 * __this, int32_t ___key, List_1_t386 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeInfo>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeInfo>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m70061 (Transform_1_t10079 * __this, int32_t ___key, List_1_t386 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeInfo>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeInfo>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t10053  Transform_1_EndInvoke_m70062 (Transform_1_t10079 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
