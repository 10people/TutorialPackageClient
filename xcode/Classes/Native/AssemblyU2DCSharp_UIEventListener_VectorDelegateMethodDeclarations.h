#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener/VectorDelegate
struct VectorDelegate_t5366;
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
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIEventListener/VectorDelegate::.ctor(System.Object,System.IntPtr)
 void VectorDelegate__ctor_m38015 (VectorDelegate_t5366 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VectorDelegate::Invoke(UnityEngine.GameObject,UnityEngine.Vector2)
 void VectorDelegate_Invoke_m38016 (VectorDelegate_t5366 * __this, GameObject_t9 * ___go, Vector2_t12  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIEventListener/VectorDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.Vector2,System.AsyncCallback,System.Object)
 Object_t * VectorDelegate_BeginInvoke_m38017 (VectorDelegate_t5366 * __this, GameObject_t9 * ___go, Vector2_t12  ___delta, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VectorDelegate::EndInvoke(System.IAsyncResult)
 void VectorDelegate_EndInvoke_m38018 (VectorDelegate_t5366 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
