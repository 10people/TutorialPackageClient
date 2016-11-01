#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener/ObjectDelegate
struct ObjectDelegate_t5368;
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

// System.Void UIEventListener/ObjectDelegate::.ctor(System.Object,System.IntPtr)
 void ObjectDelegate__ctor_m38023 (ObjectDelegate_t5368 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/ObjectDelegate::Invoke(UnityEngine.GameObject,UnityEngine.GameObject)
 void ObjectDelegate_Invoke_m38024 (ObjectDelegate_t5368 * __this, GameObject_t9 * ___go, GameObject_t9 * ___draggedObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIEventListener/ObjectDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.GameObject,System.AsyncCallback,System.Object)
 Object_t * ObjectDelegate_BeginInvoke_m38025 (ObjectDelegate_t5368 * __this, GameObject_t9 * ___go, GameObject_t9 * ___draggedObject, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/ObjectDelegate::EndInvoke(System.IAsyncResult)
 void ObjectDelegate_EndInvoke_m38026 (ObjectDelegate_t5368 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
