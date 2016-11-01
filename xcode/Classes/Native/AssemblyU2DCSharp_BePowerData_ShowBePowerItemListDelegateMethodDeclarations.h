#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BePowerData/ShowBePowerItemListDelegate
struct ShowBePowerItemListDelegate_t4847;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BePowerData/ShowBePowerItemListDelegate::.ctor(System.Object,System.IntPtr)
 void ShowBePowerItemListDelegate__ctor_m34459 (ShowBePowerItemListDelegate_t4847 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerData/ShowBePowerItemListDelegate::Invoke()
 void ShowBePowerItemListDelegate_Invoke_m34460 (ShowBePowerItemListDelegate_t4847 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BePowerData/ShowBePowerItemListDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * ShowBePowerItemListDelegate_BeginInvoke_m34461 (ShowBePowerItemListDelegate_t4847 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerData/ShowBePowerItemListDelegate::EndInvoke(System.IAsyncResult)
 void ShowBePowerItemListDelegate_EndInvoke_m34462 (ShowBePowerItemListDelegate_t4847 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
