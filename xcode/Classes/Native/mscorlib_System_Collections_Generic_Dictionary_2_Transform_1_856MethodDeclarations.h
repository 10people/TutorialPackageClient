#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UIPathData,System.Collections.Generic.KeyValuePair`2<System.String,UIPathData>>
struct Transform_1_t17471;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UIPathData
struct UIPathData_t1177;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UIPathData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_245.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UIPathData,System.Collections.Generic.KeyValuePair`2<System.String,UIPathData>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m129878 (Transform_1_t17471 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UIPathData,System.Collections.Generic.KeyValuePair`2<System.String,UIPathData>>::Invoke(TKey,TValue)
 KeyValuePair_2_t17461  Transform_1_Invoke_m129879 (Transform_1_t17471 * __this, String_t* ___key, UIPathData_t1177 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UIPathData,System.Collections.Generic.KeyValuePair`2<System.String,UIPathData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m129880 (Transform_1_t17471 * __this, String_t* ___key, UIPathData_t1177 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UIPathData,System.Collections.Generic.KeyValuePair`2<System.String,UIPathData>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t17461  Transform_1_EndInvoke_m129881 (Transform_1_t17471 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
