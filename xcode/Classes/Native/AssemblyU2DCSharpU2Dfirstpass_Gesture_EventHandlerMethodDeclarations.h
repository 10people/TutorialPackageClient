#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Gesture/EventHandler
struct EventHandler_t22;
// System.Object
struct Object_t;
// Gesture
struct Gesture_t3;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Gesture/EventHandler::.ctor(System.Object,System.IntPtr)
 void EventHandler__ctor_m25 (EventHandler_t22 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture/EventHandler::Invoke(Gesture)
 void EventHandler_Invoke_m26 (EventHandler_t22 * __this, Gesture_t3 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Gesture/EventHandler::BeginInvoke(Gesture,System.AsyncCallback,System.Object)
 Object_t * EventHandler_BeginInvoke_m27 (EventHandler_t22 * __this, Gesture_t3 * ___gesture, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture/EventHandler::EndInvoke(System.IAsyncResult)
 void EventHandler_EndInvoke_m28 (EventHandler_t22 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
