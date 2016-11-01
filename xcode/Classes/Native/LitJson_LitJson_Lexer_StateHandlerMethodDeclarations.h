#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.Lexer/StateHandler
struct StateHandler_t6317;
// System.Object
struct Object_t;
// LitJson.FsmContext
struct FsmContext_t6316;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
 void StateHandler__ctor_m44415 (StateHandler_t6317 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
 bool StateHandler_Invoke_m44416 (StateHandler_t6317 * __this, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LitJson.Lexer/StateHandler::BeginInvoke(LitJson.FsmContext,System.AsyncCallback,System.Object)
 Object_t * StateHandler_BeginInvoke_m44417 (StateHandler_t6317 * __this, FsmContext_t6316 * ___ctx, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer/StateHandler::EndInvoke(System.IAsyncResult)
 bool StateHandler_EndInvoke_m44418 (StateHandler_t6317 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
