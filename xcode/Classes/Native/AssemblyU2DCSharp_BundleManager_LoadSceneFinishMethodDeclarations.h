#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BundleManager/LoadSceneFinish
struct LoadSceneFinish_t2151;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.AssetBundle
struct AssetBundle_t2010;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BundleManager/LoadSceneFinish::.ctor(System.Object,System.IntPtr)
 void LoadSceneFinish__ctor_m14485 (LoadSceneFinish_t2151 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager/LoadSceneFinish::Invoke(System.String,UnityEngine.AssetBundle)
 void LoadSceneFinish_Invoke_m14486 (LoadSceneFinish_t2151 * __this, String_t* ___sceneName, AssetBundle_t2010 * ___sceneBundle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BundleManager/LoadSceneFinish::BeginInvoke(System.String,UnityEngine.AssetBundle,System.AsyncCallback,System.Object)
 Object_t * LoadSceneFinish_BeginInvoke_m14487 (LoadSceneFinish_t2151 * __this, String_t* ___sceneName, AssetBundle_t2010 * ___sceneBundle, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager/LoadSceneFinish::EndInvoke(System.IAsyncResult)
 void LoadSceneFinish_EndInvoke_m14488 (LoadSceneFinish_t2151 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
