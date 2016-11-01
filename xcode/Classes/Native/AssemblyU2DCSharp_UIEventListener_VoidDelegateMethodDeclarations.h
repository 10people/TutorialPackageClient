#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener/VoidDelegate
struct VoidDelegate_t5363;
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

// System.Void UIEventListener/VoidDelegate::.ctor(System.Object,System.IntPtr)
 void VoidDelegate__ctor_m38003 (VoidDelegate_t5363 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VoidDelegate::Invoke(UnityEngine.GameObject)
 void VoidDelegate_Invoke_m38004 (VoidDelegate_t5363 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIEventListener/VoidDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
 Object_t * VoidDelegate_BeginInvoke_m38005 (VoidDelegate_t5363 * __this, GameObject_t9 * ___go, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VoidDelegate::EndInvoke(System.IAsyncResult)
 void VoidDelegate_EndInvoke_m38006 (VoidDelegate_t5363 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
