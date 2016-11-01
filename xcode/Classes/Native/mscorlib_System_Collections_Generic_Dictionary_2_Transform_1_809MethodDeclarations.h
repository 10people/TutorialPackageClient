#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.String,PropertyMetadata>>
struct Transform_1_t16443;
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
// System.Collections.Generic.KeyValuePair`2<System.String,PropertyMetadata>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_233.h"
// PropertyMetadata
#include "AssemblyU2DCSharp_PropertyMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.String,PropertyMetadata>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m122795 (Transform_1_t16443 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.String,PropertyMetadata>>::Invoke(TKey,TValue)
 KeyValuePair_2_t16288  Transform_1_Invoke_m122796 (Transform_1_t16443 * __this, String_t* ___key, PropertyMetadata_t1070  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.String,PropertyMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m122797 (Transform_1_t16443 * __this, String_t* ___key, PropertyMetadata_t1070  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.String,PropertyMetadata>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t16288  Transform_1_EndInvoke_m122798 (Transform_1_t16443 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
