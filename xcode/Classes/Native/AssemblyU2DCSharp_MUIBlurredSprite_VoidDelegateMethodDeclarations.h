#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MUIBlurredSprite/VoidDelegate
struct VoidDelegate_t5194;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void MUIBlurredSprite/VoidDelegate::.ctor(System.Object,System.IntPtr)
 void VoidDelegate__ctor_m37110 (VoidDelegate_t5194 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MUIBlurredSprite/VoidDelegate::Invoke()
 void VoidDelegate_Invoke_m37111 (VoidDelegate_t5194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult MUIBlurredSprite/VoidDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * VoidDelegate_BeginInvoke_m37112 (VoidDelegate_t5194 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MUIBlurredSprite/VoidDelegate::EndInvoke(System.IAsyncResult)
 void VoidDelegate_EndInvoke_m37113 (VoidDelegate_t5194 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
