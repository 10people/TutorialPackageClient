#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameRes.AssetManager/LoadingStartedHandler
struct LoadingStartedHandler_t4384;
// System.Object
struct Object_t;
// GameRes.AssetLoader
struct AssetLoader_t4380;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GameRes.AssetManager/LoadingStartedHandler::.ctor(System.Object,System.IntPtr)
 void LoadingStartedHandler__ctor_m31067 (LoadingStartedHandler_t4384 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetManager/LoadingStartedHandler::Invoke(GameRes.AssetLoader)
 void LoadingStartedHandler_Invoke_m31068 (LoadingStartedHandler_t4384 * __this, AssetLoader_t4380 * ___loader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GameRes.AssetManager/LoadingStartedHandler::BeginInvoke(GameRes.AssetLoader,System.AsyncCallback,System.Object)
 Object_t * LoadingStartedHandler_BeginInvoke_m31069 (LoadingStartedHandler_t4384 * __this, AssetLoader_t4380 * ___loader, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetManager/LoadingStartedHandler::EndInvoke(System.IAsyncResult)
 void LoadingStartedHandler_EndInvoke_m31070 (LoadingStartedHandler_t4384 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
