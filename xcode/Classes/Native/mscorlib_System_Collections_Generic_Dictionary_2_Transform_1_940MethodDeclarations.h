#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<LoginData/PlayerRoleData>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<LoginData/PlayerRoleData>>>
struct Transform_1_t19980;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.List`1<LoginData/PlayerRoleData>
struct List_1_t1936;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<LoginData/PlayerRoleData>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_255.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<LoginData/PlayerRoleData>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<LoginData/PlayerRoleData>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m145547 (Transform_1_t19980 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<LoginData/PlayerRoleData>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<LoginData/PlayerRoleData>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t19971  Transform_1_Invoke_m145548 (Transform_1_t19980 * __this, String_t* ___key, List_1_t1936 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<LoginData/PlayerRoleData>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<LoginData/PlayerRoleData>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m145549 (Transform_1_t19980 * __this, String_t* ___key, List_1_t1936 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<LoginData/PlayerRoleData>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<LoginData/PlayerRoleData>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t19971  Transform_1_EndInvoke_m145550 (Transform_1_t19980 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
