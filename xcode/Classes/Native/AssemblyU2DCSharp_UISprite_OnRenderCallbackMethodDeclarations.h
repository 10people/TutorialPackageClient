#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UISprite/OnRenderCallback
struct OnRenderCallback_t5434;
// System.Object
struct Object_t;
// UnityEngine.Material
struct Material_t133;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UISprite/OnRenderCallback::.ctor(System.Object,System.IntPtr)
 void OnRenderCallback__ctor_m38503 (OnRenderCallback_t5434 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite/OnRenderCallback::Invoke(UnityEngine.Material)
 void OnRenderCallback_Invoke_m38504 (OnRenderCallback_t5434 * __this, Material_t133 * ___mat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UISprite/OnRenderCallback::BeginInvoke(UnityEngine.Material,System.AsyncCallback,System.Object)
 Object_t * OnRenderCallback_BeginInvoke_m38505 (OnRenderCallback_t5434 * __this, Material_t133 * ___mat, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite/OnRenderCallback::EndInvoke(System.IAsyncResult)
 void OnRenderCallback_EndInvoke_m38506 (OnRenderCallback_t5434 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
