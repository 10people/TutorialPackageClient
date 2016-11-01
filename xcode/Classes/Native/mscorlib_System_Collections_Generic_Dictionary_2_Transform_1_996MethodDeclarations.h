#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Obj_Init_Data,System.Collections.Generic.KeyValuePair`2<System.String,Obj_Init_Data>>
struct Transform_1_t20795;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Obj_Init_Data
struct Obj_Init_Data_t4391;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Obj_Init_Data>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_41.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Obj_Init_Data,System.Collections.Generic.KeyValuePair`2<System.String,Obj_Init_Data>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m151658 (Transform_1_t20795 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Obj_Init_Data,System.Collections.Generic.KeyValuePair`2<System.String,Obj_Init_Data>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5732  Transform_1_Invoke_m151659 (Transform_1_t20795 * __this, String_t* ___key, Obj_Init_Data_t4391 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Obj_Init_Data,System.Collections.Generic.KeyValuePair`2<System.String,Obj_Init_Data>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m151660 (Transform_1_t20795 * __this, String_t* ___key, Obj_Init_Data_t4391 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Obj_Init_Data,System.Collections.Generic.KeyValuePair`2<System.String,Obj_Init_Data>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5732  Transform_1_EndInvoke_m151661 (Transform_1_t20795 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
