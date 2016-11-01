#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UIAtlas,System.Collections.Generic.KeyValuePair`2<System.String,UIAtlas>>
struct Transform_1_t19299;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UIAtlas
struct UIAtlas_t1593;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UIAtlas>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_250.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UIAtlas,System.Collections.Generic.KeyValuePair`2<System.String,UIAtlas>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m140874 (Transform_1_t19299 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UIAtlas,System.Collections.Generic.KeyValuePair`2<System.String,UIAtlas>>::Invoke(TKey,TValue)
 KeyValuePair_2_t19289  Transform_1_Invoke_m140875 (Transform_1_t19299 * __this, String_t* ___key, UIAtlas_t1593 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UIAtlas,System.Collections.Generic.KeyValuePair`2<System.String,UIAtlas>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m140876 (Transform_1_t19299 * __this, String_t* ___key, UIAtlas_t1593 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UIAtlas,System.Collections.Generic.KeyValuePair`2<System.String,UIAtlas>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t19289  Transform_1_EndInvoke_m140877 (Transform_1_t19299 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
