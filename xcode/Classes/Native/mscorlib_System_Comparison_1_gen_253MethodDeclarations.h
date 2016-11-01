#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<Games.ChatHistory.LastSpeaker>
struct Comparison_1_t17804;
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

// System.Void System.Comparison`1<Games.ChatHistory.LastSpeaker>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m132018 (Comparison_1_t17804 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<Games.ChatHistory.LastSpeaker>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m132019 (Comparison_1_t17804 * __this, LastSpeaker_t4558  ___x, LastSpeaker_t4558  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<Games.ChatHistory.LastSpeaker>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m132020 (Comparison_1_t17804 * __this, LastSpeaker_t4558  ___x, LastSpeaker_t4558  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<Games.ChatHistory.LastSpeaker>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m132021 (Comparison_1_t17804 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
