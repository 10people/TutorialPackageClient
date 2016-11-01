#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UILongPressButton/OnLongPressHandler
struct OnLongPressHandler_t5314;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UILongPressButton/OnLongPressHandler::.ctor(System.Object,System.IntPtr)
 void OnLongPressHandler__ctor_m37620 (OnLongPressHandler_t5314 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILongPressButton/OnLongPressHandler::Invoke(System.Boolean)
 void OnLongPressHandler_Invoke_m37621 (OnLongPressHandler_t5314 * __this, bool ___isPressed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UILongPressButton/OnLongPressHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
 Object_t * OnLongPressHandler_BeginInvoke_m37622 (OnLongPressHandler_t5314 * __this, bool ___isPressed, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILongPressButton/OnLongPressHandler::EndInvoke(System.IAsyncResult)
 void OnLongPressHandler_EndInvoke_m37623 (OnLongPressHandler_t5314 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
