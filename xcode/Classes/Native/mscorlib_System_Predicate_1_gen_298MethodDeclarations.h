#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Games.ChatHistory.VoiceChat>
struct Predicate_1_t21029;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Games.ChatHistory.VoiceChat
#include "AssemblyU2DCSharp_Games_ChatHistory_VoiceChat.h"

// System.Void System.Predicate`1<Games.ChatHistory.VoiceChat>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m153322 (Predicate_1_t21029 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<Games.ChatHistory.VoiceChat>::Invoke(T)
 bool Predicate_1_Invoke_m153323 (Predicate_1_t21029 * __this, VoiceChat_t4561  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<Games.ChatHistory.VoiceChat>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m153324 (Predicate_1_t21029 * __this, VoiceChat_t4561  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<Games.ChatHistory.VoiceChat>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m153325 (Predicate_1_t21029 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
