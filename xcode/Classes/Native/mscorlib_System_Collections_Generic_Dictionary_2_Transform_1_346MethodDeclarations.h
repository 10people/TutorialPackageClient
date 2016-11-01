#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ImpactConsume>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ImpactConsume>>>
struct Transform_1_t12182;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ImpactConsume>
struct List_1_t504;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ImpactConsume>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_140.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ImpactConsume>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ImpactConsume>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m87716 (Transform_1_t12182 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ImpactConsume>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ImpactConsume>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t12156  Transform_1_Invoke_m87717 (Transform_1_t12182 * __this, int32_t ___key, List_1_t504 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ImpactConsume>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ImpactConsume>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m87718 (Transform_1_t12182 * __this, int32_t ___key, List_1_t504 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ImpactConsume>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ImpactConsume>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t12156  Transform_1_EndInvoke_m87719 (Transform_1_t12182 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
