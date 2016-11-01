#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SpeechEngine/SpeechEventHandler
struct SpeechEventHandler_t1762;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SpeechEngine/SpeechEventHandler::.ctor(System.Object,System.IntPtr)
 void SpeechEventHandler__ctor_m11527 (SpeechEventHandler_t1762 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechEventHandler::Invoke()
 void SpeechEventHandler_Invoke_m11528 (SpeechEventHandler_t1762 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult SpeechEngine/SpeechEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * SpeechEventHandler_BeginInvoke_m11529 (SpeechEventHandler_t1762 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechEventHandler::EndInvoke(System.IAsyncResult)
 void SpeechEventHandler_EndInvoke_m11530 (SpeechEventHandler_t1762 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
