#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LuYou/RecordingTimeDelegate
struct RecordingTimeDelegate_t914;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void LuYou/RecordingTimeDelegate::.ctor(System.Object,System.IntPtr)
 void RecordingTimeDelegate__ctor_m3892 (RecordingTimeDelegate_t914 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/RecordingTimeDelegate::Invoke(System.Int32)
 void RecordingTimeDelegate_Invoke_m3893 (RecordingTimeDelegate_t914 * __this, int32_t ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LuYou/RecordingTimeDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
 Object_t * RecordingTimeDelegate_BeginInvoke_m3894 (RecordingTimeDelegate_t914 * __this, int32_t ___seconds, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/RecordingTimeDelegate::EndInvoke(System.IAsyncResult)
 void RecordingTimeDelegate_EndInvoke_m3895 (RecordingTimeDelegate_t914 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
