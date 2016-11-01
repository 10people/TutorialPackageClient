#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Games.ChatHistory.ChatHistoryItem>
struct Predicate_1_t16938;
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

// System.Void System.Predicate`1<Games.ChatHistory.ChatHistoryItem>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m126373 (Predicate_1_t16938 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<Games.ChatHistory.ChatHistoryItem>::Invoke(T)
 bool Predicate_1_Invoke_m126374 (Predicate_1_t16938 * __this, ChatHistoryItem_t1179  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<Games.ChatHistory.ChatHistoryItem>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m126375 (Predicate_1_t16938 * __this, ChatHistoryItem_t1179  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<Games.ChatHistory.ChatHistoryItem>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m126376 (Predicate_1_t16938 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
