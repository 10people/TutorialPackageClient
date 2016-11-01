#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Delegate,System.Collections.Generic.KeyValuePair`2<System.String,System.Delegate>>
struct Transform_1_t20421;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Delegate
struct Delegate_t959;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Delegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_38.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Delegate,System.Collections.Generic.KeyValuePair`2<System.String,System.Delegate>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m148723 (Transform_1_t20421 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Delegate,System.Collections.Generic.KeyValuePair`2<System.String,System.Delegate>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5680  Transform_1_Invoke_m148724 (Transform_1_t20421 * __this, String_t* ___key, Delegate_t959 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Delegate,System.Collections.Generic.KeyValuePair`2<System.String,System.Delegate>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m148725 (Transform_1_t20421 * __this, String_t* ___key, Delegate_t959 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Delegate,System.Collections.Generic.KeyValuePair`2<System.String,System.Delegate>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5680  Transform_1_EndInvoke_m148726 (Transform_1_t20421 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
