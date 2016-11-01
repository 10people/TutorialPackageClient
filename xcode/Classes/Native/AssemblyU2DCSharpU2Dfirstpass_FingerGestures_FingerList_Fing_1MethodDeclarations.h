#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerGestures/FingerList/FingerPropertyGetterDelegate`1<System.Single>
struct FingerPropertyGetterDelegate_1_t71;
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

// System.Void FingerGestures/FingerList/FingerPropertyGetterDelegate`1<System.Single>::.ctor(System.Object,System.IntPtr)
 void FingerPropertyGetterDelegate_1__ctor_m4247 (FingerPropertyGetterDelegate_1_t71 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T FingerGestures/FingerList/FingerPropertyGetterDelegate`1<System.Single>::Invoke(FingerGestures/Finger)
 float FingerPropertyGetterDelegate_1_Invoke_m4245 (FingerPropertyGetterDelegate_1_t71 * __this, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult FingerGestures/FingerList/FingerPropertyGetterDelegate`1<System.Single>::BeginInvoke(FingerGestures/Finger,System.AsyncCallback,System.Object)
 Object_t * FingerPropertyGetterDelegate_1_BeginInvoke_m59820 (FingerPropertyGetterDelegate_1_t71 * __this, Finger_t8 * ___finger, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T FingerGestures/FingerList/FingerPropertyGetterDelegate`1<System.Single>::EndInvoke(System.IAsyncResult)
 float FingerPropertyGetterDelegate_1_EndInvoke_m59821 (FingerPropertyGetterDelegate_1_t71 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
