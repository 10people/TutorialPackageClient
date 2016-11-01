#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LuYou/RecordingWarningDelegate
struct RecordingWarningDelegate_t913;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void LuYou/RecordingWarningDelegate::.ctor(System.Object,System.IntPtr)
 void RecordingWarningDelegate__ctor_m3888 (RecordingWarningDelegate_t913 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/RecordingWarningDelegate::Invoke(System.Int32,System.String)
 void RecordingWarningDelegate_Invoke_m3889 (RecordingWarningDelegate_t913 * __this, int32_t ___code, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LuYou/RecordingWarningDelegate::BeginInvoke(System.Int32,System.String,System.AsyncCallback,System.Object)
 Object_t * RecordingWarningDelegate_BeginInvoke_m3890 (RecordingWarningDelegate_t913 * __this, int32_t ___code, String_t* ___msg, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/RecordingWarningDelegate::EndInvoke(System.IAsyncResult)
 void RecordingWarningDelegate_EndInvoke_m3891 (RecordingWarningDelegate_t913 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
