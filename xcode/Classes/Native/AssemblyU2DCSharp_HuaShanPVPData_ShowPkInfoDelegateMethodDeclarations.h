#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// HuaShanPVPData/ShowPkInfoDelegate
struct ShowPkInfoDelegate_t4901;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void HuaShanPVPData/ShowPkInfoDelegate::.ctor(System.Object,System.IntPtr)
 void ShowPkInfoDelegate__ctor_m34733 (ShowPkInfoDelegate_t4901 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData/ShowPkInfoDelegate::Invoke()
 void ShowPkInfoDelegate_Invoke_m34734 (ShowPkInfoDelegate_t4901 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult HuaShanPVPData/ShowPkInfoDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * ShowPkInfoDelegate_BeginInvoke_m34735 (ShowPkInfoDelegate_t4901 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData/ShowPkInfoDelegate::EndInvoke(System.IAsyncResult)
 void ShowPkInfoDelegate_EndInvoke_m34736 (ShowPkInfoDelegate_t4901 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
