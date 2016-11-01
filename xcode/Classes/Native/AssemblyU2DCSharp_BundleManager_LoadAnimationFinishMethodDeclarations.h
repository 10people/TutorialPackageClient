#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BundleManager/LoadAnimationFinish
struct LoadAnimationFinish_t2150;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.AnimationClip
struct AnimationClip_t2149;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BundleManager/LoadAnimationFinish::.ctor(System.Object,System.IntPtr)
 void LoadAnimationFinish__ctor_m14481 (LoadAnimationFinish_t2150 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager/LoadAnimationFinish::Invoke(System.String,UnityEngine.AnimationClip)
 void LoadAnimationFinish_Invoke_m14482 (LoadAnimationFinish_t2150 * __this, String_t* ___animPath, AnimationClip_t2149 * ___animClip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BundleManager/LoadAnimationFinish::BeginInvoke(System.String,UnityEngine.AnimationClip,System.AsyncCallback,System.Object)
 Object_t * LoadAnimationFinish_BeginInvoke_m14483 (LoadAnimationFinish_t2150 * __this, String_t* ___animPath, AnimationClip_t2149 * ___animClip, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager/LoadAnimationFinish::EndInvoke(System.IAsyncResult)
 void LoadAnimationFinish_EndInvoke_m14484 (LoadAnimationFinish_t2150 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
