#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,BelleConfigData,System.Collections.Generic.KeyValuePair`2<System.String,BelleConfigData>>
struct Transform_1_t21016;
// System.Object
struct Object_t;
// System.String
struct String_t;
// BelleConfigData
struct BelleConfigData_t4551;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,BelleConfigData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_264.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,BelleConfigData,System.Collections.Generic.KeyValuePair`2<System.String,BelleConfigData>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m153144 (Transform_1_t21016 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,BelleConfigData,System.Collections.Generic.KeyValuePair`2<System.String,BelleConfigData>>::Invoke(TKey,TValue)
 KeyValuePair_2_t21007  Transform_1_Invoke_m153145 (Transform_1_t21016 * __this, String_t* ___key, BelleConfigData_t4551 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,BelleConfigData,System.Collections.Generic.KeyValuePair`2<System.String,BelleConfigData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m153146 (Transform_1_t21016 * __this, String_t* ___key, BelleConfigData_t4551 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,BelleConfigData,System.Collections.Generic.KeyValuePair`2<System.String,BelleConfigData>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t21007  Transform_1_EndInvoke_m153147 (Transform_1_t21016 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
