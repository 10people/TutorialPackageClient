#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.Mission.CurOwnMission,Games.Mission.CurOwnMission>
struct Transform_1_t21266;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.Mission.CurOwnMission,Games.Mission.CurOwnMission>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m155243 (Transform_1_t21266 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.Mission.CurOwnMission,Games.Mission.CurOwnMission>::Invoke(TKey,TValue)
 CurOwnMission_t4792 * Transform_1_Invoke_m155244 (Transform_1_t21266 * __this, int32_t ___key, CurOwnMission_t4792 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.Mission.CurOwnMission,Games.Mission.CurOwnMission>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m155245 (Transform_1_t21266 * __this, int32_t ___key, CurOwnMission_t4792 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.Mission.CurOwnMission,Games.Mission.CurOwnMission>::EndInvoke(System.IAsyncResult)
 CurOwnMission_t4792 * Transform_1_EndInvoke_m155246 (Transform_1_t21266 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
