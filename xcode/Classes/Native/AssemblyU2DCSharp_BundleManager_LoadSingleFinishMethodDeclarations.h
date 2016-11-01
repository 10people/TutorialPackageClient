#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BundleManager/LoadSingleFinish
struct LoadSingleFinish_t2144;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BundleManager/LoadSingleFinish::.ctor(System.Object,System.IntPtr)
 void LoadSingleFinish__ctor_m14473 (LoadSingleFinish_t2144 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager/LoadSingleFinish::Invoke(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void LoadSingleFinish_Invoke_m14474 (LoadSingleFinish_t2144 * __this, String_t* ___modelName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BundleManager/LoadSingleFinish::BeginInvoke(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object,System.AsyncCallback,System.Object)
 Object_t * LoadSingleFinish_BeginInvoke_m14475 (LoadSingleFinish_t2144 * __this, String_t* ___modelName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager/LoadSingleFinish::EndInvoke(System.IAsyncResult)
 void LoadSingleFinish_EndInvoke_m14476 (LoadSingleFinish_t2144 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
