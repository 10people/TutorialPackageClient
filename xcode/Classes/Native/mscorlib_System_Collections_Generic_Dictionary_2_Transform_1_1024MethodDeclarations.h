#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Games.Mission.CurOwnMission>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Games.Mission.CurOwnMission>>>
struct Transform_1_t21294;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Games.Mission.CurOwnMission>
struct List_1_t5793;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Games.Mission.CurOwnMission>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_266.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Games.Mission.CurOwnMission>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Games.Mission.CurOwnMission>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m155529 (Transform_1_t21294 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Games.Mission.CurOwnMission>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Games.Mission.CurOwnMission>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t21276  Transform_1_Invoke_m155530 (Transform_1_t21294 * __this, String_t* ___key, List_1_t5793 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Games.Mission.CurOwnMission>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Games.Mission.CurOwnMission>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m155531 (Transform_1_t21294 * __this, String_t* ___key, List_1_t5793 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Games.Mission.CurOwnMission>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Games.Mission.CurOwnMission>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t21276  Transform_1_EndInvoke_m155532 (Transform_1_t21294 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
