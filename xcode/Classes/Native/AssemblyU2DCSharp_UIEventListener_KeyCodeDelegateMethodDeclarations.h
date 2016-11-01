#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener/KeyCodeDelegate
struct KeyCodeDelegate_t5369;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UIEventListener/KeyCodeDelegate::.ctor(System.Object,System.IntPtr)
 void KeyCodeDelegate__ctor_m38027 (KeyCodeDelegate_t5369 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/KeyCodeDelegate::Invoke(UnityEngine.GameObject,UnityEngine.KeyCode)
 void KeyCodeDelegate_Invoke_m38028 (KeyCodeDelegate_t5369 * __this, GameObject_t9 * ___go, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIEventListener/KeyCodeDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.KeyCode,System.AsyncCallback,System.Object)
 Object_t * KeyCodeDelegate_BeginInvoke_m38029 (KeyCodeDelegate_t5369 * __this, GameObject_t9 * ___go, int32_t ___key, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/KeyCodeDelegate::EndInvoke(System.IAsyncResult)
 void KeyCodeDelegate_EndInvoke_m38030 (KeyCodeDelegate_t5369 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
