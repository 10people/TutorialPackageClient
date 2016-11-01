#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Games.ChatHistory.LastSpeaker>
struct Predicate_1_t17802;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Games.ChatHistory.LastSpeaker
#include "AssemblyU2DCSharp_Games_ChatHistory_LastSpeaker.h"

// System.Void System.Predicate`1<Games.ChatHistory.LastSpeaker>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m132008 (Predicate_1_t17802 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<Games.ChatHistory.LastSpeaker>::Invoke(T)
 bool Predicate_1_Invoke_m132009 (Predicate_1_t17802 * __this, LastSpeaker_t4558  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<Games.ChatHistory.LastSpeaker>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m132010 (Predicate_1_t17802 * __this, LastSpeaker_t4558  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<Games.ChatHistory.LastSpeaker>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m132011 (Predicate_1_t17802 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
