#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5220;
// System.Object
struct Object_t;
// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t5223;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>::.ctor(System.Object,System.IntPtr)
 void EventHandler_1__ctor_m41880 (EventHandler_1_t5220 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>::Invoke(System.Object,TEventArgs)
 void EventHandler_1_Invoke_m51262 (EventHandler_1_t5220 * __this, Object_t * ___sender, SocketAsyncEventArgs_t5223 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>::BeginInvoke(System.Object,TEventArgs,System.AsyncCallback,System.Object)
 Object_t * EventHandler_1_BeginInvoke_m162248 (EventHandler_1_t5220 * __this, Object_t * ___sender, SocketAsyncEventArgs_t5223 * ___e, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>::EndInvoke(System.IAsyncResult)
 void EventHandler_1_EndInvoke_m162249 (EventHandler_1_t5220 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
