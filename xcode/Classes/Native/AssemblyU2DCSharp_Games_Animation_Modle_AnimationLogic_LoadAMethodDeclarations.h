#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.Animation_Modle.AnimationLogic/LoadAnimationDelegate
struct LoadAnimationDelegate_t4529;
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

// System.Void Games.Animation_Modle.AnimationLogic/LoadAnimationDelegate::.ctor(System.Object,System.IntPtr)
 void LoadAnimationDelegate__ctor_m32509 (LoadAnimationDelegate_t4529 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Animation_Modle.AnimationLogic/LoadAnimationDelegate::Invoke(System.String,UnityEngine.AnimationClip,System.Object,System.Object)
 void LoadAnimationDelegate_Invoke_m32510 (LoadAnimationDelegate_t4529 * __this, String_t* ___animPath, AnimationClip_t2149 * ___curAnimClip, Object_t * ___param1, Object_t * ___param2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Games.Animation_Modle.AnimationLogic/LoadAnimationDelegate::BeginInvoke(System.String,UnityEngine.AnimationClip,System.Object,System.Object,System.AsyncCallback,System.Object)
 Object_t * LoadAnimationDelegate_BeginInvoke_m32511 (LoadAnimationDelegate_t4529 * __this, String_t* ___animPath, AnimationClip_t2149 * ___curAnimClip, Object_t * ___param1, Object_t * ___param2, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Animation_Modle.AnimationLogic/LoadAnimationDelegate::EndInvoke(System.IAsyncResult)
 void LoadAnimationDelegate_EndInvoke_m32512 (LoadAnimationDelegate_t4529 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
