#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iTween/EasingFunction
struct EasingFunction_t5151;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void iTween/EasingFunction::.ctor(System.Object,System.IntPtr)
 void EasingFunction__ctor_m36613 (EasingFunction_t5151 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween/EasingFunction::Invoke(System.Single,System.Single,System.Single)
 float EasingFunction_Invoke_m36614 (EasingFunction_t5151 * __this, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult iTween/EasingFunction::BeginInvoke(System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
 Object_t * EasingFunction_BeginInvoke_m36615 (EasingFunction_t5151 * __this, float ___start, float ___end, float ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween/EasingFunction::EndInvoke(System.IAsyncResult)
 float EasingFunction_EndInvoke_m36616 (EasingFunction_t5151 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
