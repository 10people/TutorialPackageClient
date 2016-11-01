#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIManager/OnLoadUIItemDelegate
struct OnLoadUIItemDelegate_t1957;
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

// System.Void UIManager/OnLoadUIItemDelegate::.ctor(System.Object,System.IntPtr)
 void OnLoadUIItemDelegate__ctor_m12725 (OnLoadUIItemDelegate_t1957 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager/OnLoadUIItemDelegate::Invoke(UnityEngine.GameObject,System.Object)
 void OnLoadUIItemDelegate_Invoke_m12726 (OnLoadUIItemDelegate_t1957 * __this, GameObject_t9 * ___resItem, Object_t * ___param1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIManager/OnLoadUIItemDelegate::BeginInvoke(UnityEngine.GameObject,System.Object,System.AsyncCallback,System.Object)
 Object_t * OnLoadUIItemDelegate_BeginInvoke_m12727 (OnLoadUIItemDelegate_t1957 * __this, GameObject_t9 * ___resItem, Object_t * ___param1, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager/OnLoadUIItemDelegate::EndInvoke(System.IAsyncResult)
 void OnLoadUIItemDelegate_EndInvoke_m12728 (OnLoadUIItemDelegate_t1957 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
