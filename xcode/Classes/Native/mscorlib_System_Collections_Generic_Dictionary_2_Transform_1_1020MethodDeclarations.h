#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.Mission.CurOwnMission,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.Mission.CurOwnMission>>
struct Transform_1_t21267;
// System.Object
struct Object_t;
// Games.Mission.CurOwnMission
struct CurOwnMission_t4792;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Games.Mission.CurOwnMission>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_51.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.Mission.CurOwnMission,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.Mission.CurOwnMission>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m155251 (Transform_1_t21267 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.Mission.CurOwnMission,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.Mission.CurOwnMission>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5791  Transform_1_Invoke_m155252 (Transform_1_t21267 * __this, int32_t ___key, CurOwnMission_t4792 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.Mission.CurOwnMission,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.Mission.CurOwnMission>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m155253 (Transform_1_t21267 * __this, int32_t ___key, CurOwnMission_t4792 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.Mission.CurOwnMission,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.Mission.CurOwnMission>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5791  Transform_1_EndInvoke_m155254 (Transform_1_t21267 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
