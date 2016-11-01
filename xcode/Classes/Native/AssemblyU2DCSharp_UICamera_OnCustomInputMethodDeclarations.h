#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UICamera/OnCustomInput
struct OnCustomInput_t5403;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UICamera/OnCustomInput::.ctor(System.Object,System.IntPtr)
 void OnCustomInput__ctor_m38245 (OnCustomInput_t5403 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/OnCustomInput::Invoke()
 void OnCustomInput_Invoke_m38246 (OnCustomInput_t5403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICamera/OnCustomInput::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * OnCustomInput_BeginInvoke_m38247 (OnCustomInput_t5403 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/OnCustomInput::EndInvoke(System.IAsyncResult)
 void OnCustomInput_EndInvoke_m38248 (OnCustomInput_t5403 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
