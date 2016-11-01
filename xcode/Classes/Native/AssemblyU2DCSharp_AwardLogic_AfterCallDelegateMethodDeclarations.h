#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AwardLogic/AfterCallDelegate
struct AfterCallDelegate_t1225;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void AwardLogic/AfterCallDelegate::.ctor(System.Object,System.IntPtr)
 void AfterCallDelegate__ctor_m7262 (AfterCallDelegate_t1225 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AwardLogic/AfterCallDelegate::Invoke()
 void AfterCallDelegate_Invoke_m7263 (AfterCallDelegate_t1225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult AwardLogic/AfterCallDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * AfterCallDelegate_BeginInvoke_m7264 (AfterCallDelegate_t1225 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AwardLogic/AfterCallDelegate::EndInvoke(System.IAsyncResult)
 void AfterCallDelegate_EndInvoke_m7265 (AfterCallDelegate_t1225 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
