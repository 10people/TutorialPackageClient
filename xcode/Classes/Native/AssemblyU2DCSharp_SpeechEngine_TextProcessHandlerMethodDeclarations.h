#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SpeechEngine/TextProcessHandler
struct TextProcessHandler_t1760;
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

// System.Void SpeechEngine/TextProcessHandler::.ctor(System.Object,System.IntPtr)
 void TextProcessHandler__ctor_m11519 (TextProcessHandler_t1760 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/TextProcessHandler::Invoke(System.String)
 void TextProcessHandler_Invoke_m11520 (TextProcessHandler_t1760 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult SpeechEngine/TextProcessHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
 Object_t * TextProcessHandler_BeginInvoke_m11521 (TextProcessHandler_t1760 * __this, String_t* ___text, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/TextProcessHandler::EndInvoke(System.IAsyncResult)
 void TextProcessHandler_EndInvoke_m11522 (TextProcessHandler_t1760 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
