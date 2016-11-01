#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>>
struct Transform_1_t20101;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>
struct List_1_t2078;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m146462 (Transform_1_t20101 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5664  Transform_1_Invoke_m146463 (Transform_1_t20101 * __this, int32_t ___key, List_1_t2078 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m146464 (Transform_1_t20101 * __this, int32_t ___key, List_1_t2078 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5664  Transform_1_EndInvoke_m146465 (Transform_1_t20101 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
