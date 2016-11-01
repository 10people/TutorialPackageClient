#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<Games.ChatHistory.VoiceChat>
struct Comparison_1_t21031;
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

// System.Void System.Comparison`1<Games.ChatHistory.VoiceChat>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m153332 (Comparison_1_t21031 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<Games.ChatHistory.VoiceChat>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m153333 (Comparison_1_t21031 * __this, VoiceChat_t4561  ___x, VoiceChat_t4561  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<Games.ChatHistory.VoiceChat>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m153334 (Comparison_1_t21031 * __this, VoiceChat_t4561  ___x, VoiceChat_t4561  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<Games.ChatHistory.VoiceChat>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m153335 (Comparison_1_t21031 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
