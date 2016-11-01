#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WuLinData/ShowRegisterMemberListDelegate
struct ShowRegisterMemberListDelegate_t4994;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void WuLinData/ShowRegisterMemberListDelegate::.ctor(System.Object,System.IntPtr)
 void ShowRegisterMemberListDelegate__ctor_m35738 (ShowRegisterMemberListDelegate_t4994 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData/ShowRegisterMemberListDelegate::Invoke()
 void ShowRegisterMemberListDelegate_Invoke_m35739 (ShowRegisterMemberListDelegate_t4994 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WuLinData/ShowRegisterMemberListDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * ShowRegisterMemberListDelegate_BeginInvoke_m35740 (ShowRegisterMemberListDelegate_t4994 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData/ShowRegisterMemberListDelegate::EndInvoke(System.IAsyncResult)
 void ShowRegisterMemberListDelegate_EndInvoke_m35741 (ShowRegisterMemberListDelegate_t4994 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
