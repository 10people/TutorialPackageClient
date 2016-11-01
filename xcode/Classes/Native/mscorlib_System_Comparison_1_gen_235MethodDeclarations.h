#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<Games.ChatHistory.ChatHistoryItem>
struct Comparison_1_t16940;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Games.ChatHistory.ChatHistoryItem
#include "AssemblyU2DCSharp_Games_ChatHistory_ChatHistoryItem.h"

// System.Void System.Comparison`1<Games.ChatHistory.ChatHistoryItem>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m126383 (Comparison_1_t16940 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<Games.ChatHistory.ChatHistoryItem>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m126384 (Comparison_1_t16940 * __this, ChatHistoryItem_t1179  ___x, ChatHistoryItem_t1179  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<Games.ChatHistory.ChatHistoryItem>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m126385 (Comparison_1_t16940 * __this, ChatHistoryItem_t1179  ___x, ChatHistoryItem_t1179  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<Games.ChatHistory.ChatHistoryItem>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m126386 (Comparison_1_t16940 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
