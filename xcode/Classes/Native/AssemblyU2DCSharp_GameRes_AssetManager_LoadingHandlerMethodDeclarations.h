#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameRes.AssetManager/LoadingHandler
struct LoadingHandler_t4383;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GameRes.AssetManager/LoadingHandler::.ctor(System.Object,System.IntPtr)
 void LoadingHandler__ctor_m31063 (LoadingHandler_t4383 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetManager/LoadingHandler::Invoke(System.Single,System.String)
 void LoadingHandler_Invoke_m31064 (LoadingHandler_t4383 * __this, float ___process, String_t* ___assetUrl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GameRes.AssetManager/LoadingHandler::BeginInvoke(System.Single,System.String,System.AsyncCallback,System.Object)
 Object_t * LoadingHandler_BeginInvoke_m31065 (LoadingHandler_t4383 * __this, float ___process, String_t* ___assetUrl, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetManager/LoadingHandler::EndInvoke(System.IAsyncResult)
 void LoadingHandler_EndInvoke_m31066 (LoadingHandler_t4383 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
