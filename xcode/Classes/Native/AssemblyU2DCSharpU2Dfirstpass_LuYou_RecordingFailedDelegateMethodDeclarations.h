#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LuYou/RecordingFailedDelegate
struct RecordingFailedDelegate_t912;
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

// System.Void LuYou/RecordingFailedDelegate::.ctor(System.Object,System.IntPtr)
 void RecordingFailedDelegate__ctor_m3884 (RecordingFailedDelegate_t912 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/RecordingFailedDelegate::Invoke(System.Int32,System.String)
 void RecordingFailedDelegate_Invoke_m3885 (RecordingFailedDelegate_t912 * __this, int32_t ___code, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LuYou/RecordingFailedDelegate::BeginInvoke(System.Int32,System.String,System.AsyncCallback,System.Object)
 Object_t * RecordingFailedDelegate_BeginInvoke_m3886 (RecordingFailedDelegate_t912 * __this, int32_t ___code, String_t* ___msg, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/RecordingFailedDelegate::EndInvoke(System.IAsyncResult)
 void RecordingFailedDelegate_EndInvoke_m3887 (RecordingFailedDelegate_t912 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
