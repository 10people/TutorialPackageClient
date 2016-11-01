#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Lexer/StateHandler
struct StateHandler_t1101;
// System.Object
struct Object_t;
// FsmContext
struct FsmContext_t1100;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
 void StateHandler__ctor_m6861 (StateHandler_t1101 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer/StateHandler::Invoke(FsmContext)
 bool StateHandler_Invoke_m6862 (StateHandler_t1101 * __this, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Lexer/StateHandler::BeginInvoke(FsmContext,System.AsyncCallback,System.Object)
 Object_t * StateHandler_BeginInvoke_m6863 (StateHandler_t1101 * __this, FsmContext_t1100 * ___ctx, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer/StateHandler::EndInvoke(System.IAsyncResult)
 bool StateHandler_EndInvoke_m6864 (StateHandler_t1101 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
