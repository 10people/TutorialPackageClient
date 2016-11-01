#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SpeechEngine/ErrorProcessHandler
struct ErrorProcessHandler_t1761;
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

// System.Void SpeechEngine/ErrorProcessHandler::.ctor(System.Object,System.IntPtr)
 void ErrorProcessHandler__ctor_m11523 (ErrorProcessHandler_t1761 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/ErrorProcessHandler::Invoke(System.String)
 void ErrorProcessHandler_Invoke_m11524 (ErrorProcessHandler_t1761 * __this, String_t* ___errorcode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult SpeechEngine/ErrorProcessHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
 Object_t * ErrorProcessHandler_BeginInvoke_m11525 (ErrorProcessHandler_t1761 * __this, String_t* ___errorcode, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/ErrorProcessHandler::EndInvoke(System.IAsyncResult)
 void ErrorProcessHandler_EndInvoke_m11526 (ErrorProcessHandler_t1761 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
