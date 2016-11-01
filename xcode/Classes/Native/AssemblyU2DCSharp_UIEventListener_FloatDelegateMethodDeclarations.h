#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener/FloatDelegate
struct FloatDelegate_t5365;
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

// System.Void UIEventListener/FloatDelegate::.ctor(System.Object,System.IntPtr)
 void FloatDelegate__ctor_m38011 (FloatDelegate_t5365 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/FloatDelegate::Invoke(UnityEngine.GameObject,System.Single)
 void FloatDelegate_Invoke_m38012 (FloatDelegate_t5365 * __this, GameObject_t9 * ___go, float ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIEventListener/FloatDelegate::BeginInvoke(UnityEngine.GameObject,System.Single,System.AsyncCallback,System.Object)
 Object_t * FloatDelegate_BeginInvoke_m38013 (FloatDelegate_t5365 * __this, GameObject_t9 * ___go, float ___delta, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/FloatDelegate::EndInvoke(System.IAsyncResult)
 void FloatDelegate_EndInvoke_m38014 (FloatDelegate_t5365 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
