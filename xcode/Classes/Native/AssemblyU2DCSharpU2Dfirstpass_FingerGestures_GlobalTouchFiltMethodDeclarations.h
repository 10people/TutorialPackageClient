#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerGestures/GlobalTouchFilterDelegate
struct GlobalTouchFilterDelegate_t74;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void FingerGestures/GlobalTouchFilterDelegate::.ctor(System.Object,System.IntPtr)
 void GlobalTouchFilterDelegate__ctor_m169 (GlobalTouchFilterDelegate_t74 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/GlobalTouchFilterDelegate::Invoke(System.Int32,UnityEngine.Vector2)
 bool GlobalTouchFilterDelegate_Invoke_m170 (GlobalTouchFilterDelegate_t74 * __this, int32_t ___fingerIndex, Vector2_t12  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult FingerGestures/GlobalTouchFilterDelegate::BeginInvoke(System.Int32,UnityEngine.Vector2,System.AsyncCallback,System.Object)
 Object_t * GlobalTouchFilterDelegate_BeginInvoke_m171 (GlobalTouchFilterDelegate_t74 * __this, int32_t ___fingerIndex, Vector2_t12  ___position, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/GlobalTouchFilterDelegate::EndInvoke(System.IAsyncResult)
 bool GlobalTouchFilterDelegate_EndInvoke_m172 (GlobalTouchFilterDelegate_t74 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
