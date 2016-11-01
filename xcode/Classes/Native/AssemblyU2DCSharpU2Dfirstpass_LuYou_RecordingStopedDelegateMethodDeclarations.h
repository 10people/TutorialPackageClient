#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LuYou/RecordingStopedDelegate
struct RecordingStopedDelegate_t911;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void LuYou/RecordingStopedDelegate::.ctor(System.Object,System.IntPtr)
 void RecordingStopedDelegate__ctor_m3880 (RecordingStopedDelegate_t911 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/RecordingStopedDelegate::Invoke()
 void RecordingStopedDelegate_Invoke_m3881 (RecordingStopedDelegate_t911 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LuYou/RecordingStopedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * RecordingStopedDelegate_BeginInvoke_m3882 (RecordingStopedDelegate_t911 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/RecordingStopedDelegate::EndInvoke(System.IAsyncResult)
 void RecordingStopedDelegate_EndInvoke_m3883 (RecordingStopedDelegate_t911 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
