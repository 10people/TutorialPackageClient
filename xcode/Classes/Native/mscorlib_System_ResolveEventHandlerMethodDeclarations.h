#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t8215;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t7067;
// System.ResolveEventArgs
struct ResolveEventArgs_t8268;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
 void ResolveEventHandler__ctor_m57216 (ResolveEventHandler_t8215 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
 Assembly_t7067 * ResolveEventHandler_Invoke_m57217 (ResolveEventHandler_t8215 * __this, Object_t * ___sender, ResolveEventArgs_t8268 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
 Object_t * ResolveEventHandler_BeginInvoke_m57218 (ResolveEventHandler_t8215 * __this, Object_t * ___sender, ResolveEventArgs_t8268 * ___args, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
 Assembly_t7067 * ResolveEventHandler_EndInvoke_m57219 (ResolveEventHandler_t8215 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
