#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIPopupList/LegacyEvent
struct LegacyEvent_t5322;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UIPopupList/LegacyEvent::.ctor(System.Object,System.IntPtr)
 void LegacyEvent__ctor_m37656 (LegacyEvent_t5322 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList/LegacyEvent::Invoke(System.String)
 void LegacyEvent_Invoke_m37657 (LegacyEvent_t5322 * __this, String_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIPopupList/LegacyEvent::BeginInvoke(System.String,System.AsyncCallback,System.Object)
 Object_t * LegacyEvent_BeginInvoke_m37658 (LegacyEvent_t5322 * __this, String_t* ___val, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList/LegacyEvent::EndInvoke(System.IAsyncResult)
 void LegacyEvent_EndInvoke_m37659 (LegacyEvent_t5322 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
