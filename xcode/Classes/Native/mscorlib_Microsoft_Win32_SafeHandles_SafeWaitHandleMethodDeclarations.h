#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t7767;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Microsoft.Win32.SafeHandles.SafeWaitHandle::.ctor(System.IntPtr,System.Boolean)
 void SafeWaitHandle__ctor_m53567 (SafeWaitHandle_t7767 * __this, IntPtr_t24 ___existingHandle, bool ___ownsHandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.SafeHandles.SafeWaitHandle::ReleaseHandle()
 bool SafeWaitHandle_ReleaseHandle_m53568 (SafeWaitHandle_t7767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
