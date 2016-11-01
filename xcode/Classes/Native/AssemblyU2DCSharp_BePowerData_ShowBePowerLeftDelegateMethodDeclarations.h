#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BePowerData/ShowBePowerLeftDelegate
struct ShowBePowerLeftDelegate_t4848;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BePowerData/ShowBePowerLeftDelegate::.ctor(System.Object,System.IntPtr)
 void ShowBePowerLeftDelegate__ctor_m34463 (ShowBePowerLeftDelegate_t4848 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerData/ShowBePowerLeftDelegate::Invoke()
 void ShowBePowerLeftDelegate_Invoke_m34464 (ShowBePowerLeftDelegate_t4848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BePowerData/ShowBePowerLeftDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * ShowBePowerLeftDelegate_BeginInvoke_m34465 (ShowBePowerLeftDelegate_t4848 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerData/ShowBePowerLeftDelegate::EndInvoke(System.IAsyncResult)
 void ShowBePowerLeftDelegate_EndInvoke_m34466 (ShowBePowerLeftDelegate_t4848 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
