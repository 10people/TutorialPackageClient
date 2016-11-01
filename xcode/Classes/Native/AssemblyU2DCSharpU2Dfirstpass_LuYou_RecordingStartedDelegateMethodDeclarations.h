#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LuYou/RecordingStartedDelegate
struct RecordingStartedDelegate_t910;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void LuYou/RecordingStartedDelegate::.ctor(System.Object,System.IntPtr)
 void RecordingStartedDelegate__ctor_m3876 (RecordingStartedDelegate_t910 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/RecordingStartedDelegate::Invoke()
 void RecordingStartedDelegate_Invoke_m3877 (RecordingStartedDelegate_t910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LuYou/RecordingStartedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * RecordingStartedDelegate_BeginInvoke_m3878 (RecordingStartedDelegate_t910 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/RecordingStartedDelegate::EndInvoke(System.IAsyncResult)
 void RecordingStartedDelegate_EndInvoke_m3879 (RecordingStartedDelegate_t910 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
