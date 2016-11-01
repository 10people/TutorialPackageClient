#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,JtddAnimationManager/CameraEffectTime,System.Collections.Generic.KeyValuePair`2<System.Int32,JtddAnimationManager/CameraEffectTime>>
struct Transform_1_t22129;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,JtddAnimationManager/CameraEffectTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_273.h"
// JtddAnimationManager/CameraEffectTime
#include "AssemblyU2DCSharp_JtddAnimationManager_CameraEffectTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,JtddAnimationManager/CameraEffectTime,System.Collections.Generic.KeyValuePair`2<System.Int32,JtddAnimationManager/CameraEffectTime>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m161510 (Transform_1_t22129 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,JtddAnimationManager/CameraEffectTime,System.Collections.Generic.KeyValuePair`2<System.Int32,JtddAnimationManager/CameraEffectTime>>::Invoke(TKey,TValue)
 KeyValuePair_2_t22119  Transform_1_Invoke_m161511 (Transform_1_t22129 * __this, int32_t ___key, CameraEffectTime_t5165  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,JtddAnimationManager/CameraEffectTime,System.Collections.Generic.KeyValuePair`2<System.Int32,JtddAnimationManager/CameraEffectTime>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m161512 (Transform_1_t22129 * __this, int32_t ___key, CameraEffectTime_t5165  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,JtddAnimationManager/CameraEffectTime,System.Collections.Generic.KeyValuePair`2<System.Int32,JtddAnimationManager/CameraEffectTime>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t22119  Transform_1_EndInvoke_m161513 (Transform_1_t22129 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
