#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,PlayerAuto,System.Collections.Generic.KeyValuePair`2<System.String,PlayerAuto>>
struct Transform_1_t20836;
// System.Object
struct Object_t;
// System.String
struct String_t;
// PlayerAuto
struct PlayerAuto_t4939;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,PlayerAuto>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_261.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,PlayerAuto,System.Collections.Generic.KeyValuePair`2<System.String,PlayerAuto>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m151902 (Transform_1_t20836 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,PlayerAuto,System.Collections.Generic.KeyValuePair`2<System.String,PlayerAuto>>::Invoke(TKey,TValue)
 KeyValuePair_2_t20827  Transform_1_Invoke_m151903 (Transform_1_t20836 * __this, String_t* ___key, PlayerAuto_t4939 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,PlayerAuto,System.Collections.Generic.KeyValuePair`2<System.String,PlayerAuto>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m151904 (Transform_1_t20836 * __this, String_t* ___key, PlayerAuto_t4939 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,PlayerAuto,System.Collections.Generic.KeyValuePair`2<System.String,PlayerAuto>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t20827  Transform_1_EndInvoke_m151905 (Transform_1_t20836 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
