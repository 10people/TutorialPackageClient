#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.JsonData,System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct Transform_1_t23724;
// System.Object
struct Object_t;
// System.String
struct String_t;
// LitJson.JsonData
struct JsonData_t1031;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_61.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.JsonData,System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m172344 (Transform_1_t23724 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.JsonData,System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Invoke(TKey,TValue)
 KeyValuePair_2_t6324  Transform_1_Invoke_m172345 (Transform_1_t23724 * __this, String_t* ___key, JsonData_t1031 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.JsonData,System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m172346 (Transform_1_t23724 * __this, String_t* ___key, JsonData_t1031 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.JsonData,System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t6324  Transform_1_EndInvoke_m172347 (Transform_1_t23724 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
