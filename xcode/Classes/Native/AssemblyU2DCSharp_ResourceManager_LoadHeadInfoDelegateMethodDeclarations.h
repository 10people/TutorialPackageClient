#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ResourceManager/LoadHeadInfoDelegate
struct LoadHeadInfoDelegate_t2188;
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

// System.Void ResourceManager/LoadHeadInfoDelegate::.ctor(System.Object,System.IntPtr)
 void LoadHeadInfoDelegate__ctor_m14664 (LoadHeadInfoDelegate_t2188 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager/LoadHeadInfoDelegate::Invoke(UnityEngine.GameObject)
 void LoadHeadInfoDelegate_Invoke_m14665 (LoadHeadInfoDelegate_t2188 * __this, GameObject_t9 * ___objHeadInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ResourceManager/LoadHeadInfoDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
 Object_t * LoadHeadInfoDelegate_BeginInvoke_m14666 (LoadHeadInfoDelegate_t2188 * __this, GameObject_t9 * ___objHeadInfo, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager/LoadHeadInfoDelegate::EndInvoke(System.IAsyncResult)
 void LoadHeadInfoDelegate_EndInvoke_m14667 (LoadHeadInfoDelegate_t2188 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
