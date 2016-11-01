#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,JsonData,System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>
struct Transform_1_t16276;
// System.Object
struct Object_t;
// System.String
struct String_t;
// JsonData
struct JsonData_t1057;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,JsonData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,JsonData,System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m121473 (Transform_1_t16276 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,JsonData,System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5463  Transform_1_Invoke_m121474 (Transform_1_t16276 * __this, String_t* ___key, JsonData_t1057 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,JsonData,System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m121475 (Transform_1_t16276 * __this, String_t* ___key, JsonData_t1057 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,JsonData,System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5463  Transform_1_EndInvoke_m121476 (Transform_1_t16276 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
