#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.String,LitJson.PropertyMetadata>>
struct Transform_1_t23853;
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
// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.PropertyMetadata>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_280.h"
// LitJson.PropertyMetadata
#include "LitJson_LitJson_PropertyMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.String,LitJson.PropertyMetadata>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m173426 (Transform_1_t23853 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.String,LitJson.PropertyMetadata>>::Invoke(TKey,TValue)
 KeyValuePair_2_t23736  Transform_1_Invoke_m173427 (Transform_1_t23853 * __this, String_t* ___key, PropertyMetadata_t6294  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.String,LitJson.PropertyMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m173428 (Transform_1_t23853 * __this, String_t* ___key, PropertyMetadata_t6294  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.String,LitJson.PropertyMetadata>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t23736  Transform_1_EndInvoke_m173429 (Transform_1_t23853 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
