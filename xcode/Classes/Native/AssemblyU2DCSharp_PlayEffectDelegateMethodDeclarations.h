#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayEffectDelegate
struct PlayEffectDelegate_t2116;
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

// System.Void PlayEffectDelegate::.ctor(System.Object,System.IntPtr)
 void PlayEffectDelegate__ctor_m38619 (PlayEffectDelegate_t2116 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayEffectDelegate::Invoke(UnityEngine.GameObject,System.Object)
 void PlayEffectDelegate_Invoke_m38620 (PlayEffectDelegate_t2116 * __this, GameObject_t9 * ___effectObj, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult PlayEffectDelegate::BeginInvoke(UnityEngine.GameObject,System.Object,System.AsyncCallback,System.Object)
 Object_t * PlayEffectDelegate_BeginInvoke_m38621 (PlayEffectDelegate_t2116 * __this, GameObject_t9 * ___effectObj, Object_t * ___param, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayEffectDelegate::EndInvoke(System.IAsyncResult)
 void PlayEffectDelegate_EndInvoke_m38622 (PlayEffectDelegate_t2116 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
