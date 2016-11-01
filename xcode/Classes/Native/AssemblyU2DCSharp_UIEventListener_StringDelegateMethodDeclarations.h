#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener/StringDelegate
struct StringDelegate_t5367;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UIEventListener/StringDelegate::.ctor(System.Object,System.IntPtr)
 void StringDelegate__ctor_m38019 (StringDelegate_t5367 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/StringDelegate::Invoke(UnityEngine.GameObject,System.String)
 void StringDelegate_Invoke_m38020 (StringDelegate_t5367 * __this, GameObject_t9 * ___go, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIEventListener/StringDelegate::BeginInvoke(UnityEngine.GameObject,System.String,System.AsyncCallback,System.Object)
 Object_t * StringDelegate_BeginInvoke_m38021 (StringDelegate_t5367 * __this, GameObject_t9 * ___go, String_t* ___text, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/StringDelegate::EndInvoke(System.IAsyncResult)
 void StringDelegate_EndInvoke_m38022 (StringDelegate_t5367 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
