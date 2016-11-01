#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Games.LogicObj.Obj,System.Collections.Generic.KeyValuePair`2<System.String,Games.LogicObj.Obj>>
struct Transform_1_t17823;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Games.LogicObj.Obj
struct Obj_t2130;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Games.LogicObj.Obj>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Games.LogicObj.Obj,System.Collections.Generic.KeyValuePair`2<System.String,Games.LogicObj.Obj>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m132140 (Transform_1_t17823 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Games.LogicObj.Obj,System.Collections.Generic.KeyValuePair`2<System.String,Games.LogicObj.Obj>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5572  Transform_1_Invoke_m132141 (Transform_1_t17823 * __this, String_t* ___key, Obj_t2130 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Games.LogicObj.Obj,System.Collections.Generic.KeyValuePair`2<System.String,Games.LogicObj.Obj>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m132142 (Transform_1_t17823 * __this, String_t* ___key, Obj_t2130 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Games.LogicObj.Obj,System.Collections.Generic.KeyValuePair`2<System.String,Games.LogicObj.Obj>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5572  Transform_1_EndInvoke_m132143 (Transform_1_t17823 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
