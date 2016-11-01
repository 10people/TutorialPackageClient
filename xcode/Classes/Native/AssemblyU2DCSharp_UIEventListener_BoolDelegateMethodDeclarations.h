#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener/BoolDelegate
struct BoolDelegate_t5364;
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

// System.Void UIEventListener/BoolDelegate::.ctor(System.Object,System.IntPtr)
 void BoolDelegate__ctor_m38007 (BoolDelegate_t5364 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/BoolDelegate::Invoke(UnityEngine.GameObject,System.Boolean)
 void BoolDelegate_Invoke_m38008 (BoolDelegate_t5364 * __this, GameObject_t9 * ___go, bool ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIEventListener/BoolDelegate::BeginInvoke(UnityEngine.GameObject,System.Boolean,System.AsyncCallback,System.Object)
 Object_t * BoolDelegate_BeginInvoke_m38009 (BoolDelegate_t5364 * __this, GameObject_t9 * ___go, bool ___state, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/BoolDelegate::EndInvoke(System.IAsyncResult)
 void BoolDelegate_EndInvoke_m38010 (BoolDelegate_t5364 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
