#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerGestures/FingerList/FingerPropertyGetterDelegate`1<UnityEngine.Vector2>
struct FingerPropertyGetterDelegate_1_t70;
// System.Object
struct Object_t;
// FingerGestures/Finger
struct Finger_t8;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void FingerGestures/FingerList/FingerPropertyGetterDelegate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
 void FingerPropertyGetterDelegate_1__ctor_m4246 (FingerPropertyGetterDelegate_1_t70 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T FingerGestures/FingerList/FingerPropertyGetterDelegate`1<UnityEngine.Vector2>::Invoke(FingerGestures/Finger)
 Vector2_t12  FingerPropertyGetterDelegate_1_Invoke_m4241 (FingerPropertyGetterDelegate_1_t70 * __this, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult FingerGestures/FingerList/FingerPropertyGetterDelegate`1<UnityEngine.Vector2>::BeginInvoke(FingerGestures/Finger,System.AsyncCallback,System.Object)
 Object_t * FingerPropertyGetterDelegate_1_BeginInvoke_m59818 (FingerPropertyGetterDelegate_1_t70 * __this, Finger_t8 * ___finger, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T FingerGestures/FingerList/FingerPropertyGetterDelegate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
 Vector2_t12  FingerPropertyGetterDelegate_1_EndInvoke_m59819 (FingerPropertyGetterDelegate_1_t70 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
