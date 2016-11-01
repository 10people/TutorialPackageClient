#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,GameRes.SCachedBundleData,System.Collections.Generic.KeyValuePair`2<System.String,GameRes.SCachedBundleData>>
struct Transform_1_t20616;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,GameRes.SCachedBundleData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"
// GameRes.SCachedBundleData
#include "AssemblyU2DCSharp_GameRes_SCachedBundleData.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,GameRes.SCachedBundleData,System.Collections.Generic.KeyValuePair`2<System.String,GameRes.SCachedBundleData>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m150361 (Transform_1_t20616 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,GameRes.SCachedBundleData,System.Collections.Generic.KeyValuePair`2<System.String,GameRes.SCachedBundleData>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5724  Transform_1_Invoke_m150362 (Transform_1_t20616 * __this, String_t* ___key, SCachedBundleData_t4397  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,GameRes.SCachedBundleData,System.Collections.Generic.KeyValuePair`2<System.String,GameRes.SCachedBundleData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m150363 (Transform_1_t20616 * __this, String_t* ___key, SCachedBundleData_t4397  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,GameRes.SCachedBundleData,System.Collections.Generic.KeyValuePair`2<System.String,GameRes.SCachedBundleData>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5724  Transform_1_EndInvoke_m150364 (Transform_1_t20616 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
