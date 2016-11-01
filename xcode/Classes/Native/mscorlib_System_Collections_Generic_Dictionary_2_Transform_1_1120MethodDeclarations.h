#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ImporterFunc,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ImporterFunc>>
struct Transform_1_t23878;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// LitJson.ImporterFunc
struct ImporterFunc_t6300;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ImporterFunc>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_283.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ImporterFunc,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ImporterFunc>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m173702 (Transform_1_t23878 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ImporterFunc,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ImporterFunc>>::Invoke(TKey,TValue)
 KeyValuePair_2_t23743  Transform_1_Invoke_m173703 (Transform_1_t23878 * __this, Type_t * ___key, ImporterFunc_t6300 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ImporterFunc,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ImporterFunc>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m173704 (Transform_1_t23878 * __this, Type_t * ___key, ImporterFunc_t6300 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ImporterFunc,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ImporterFunc>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t23743  Transform_1_EndInvoke_m173705 (Transform_1_t23878 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
