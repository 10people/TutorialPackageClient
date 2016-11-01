#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowStar>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowStar>>>
struct Transform_1_t9901;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowStar>
struct List_1_t376;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowStar>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_83.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowStar>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowStar>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m68563 (Transform_1_t9901 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowStar>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowStar>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t9875  Transform_1_Invoke_m68564 (Transform_1_t9901 * __this, int32_t ___key, List_1_t376 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowStar>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowStar>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m68565 (Transform_1_t9901 * __this, int32_t ___key, List_1_t376 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowStar>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowStar>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t9875  Transform_1_EndInvoke_m68566 (Transform_1_t9901 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
