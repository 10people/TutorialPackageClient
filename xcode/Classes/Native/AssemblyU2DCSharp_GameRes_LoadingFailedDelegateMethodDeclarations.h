#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameRes.LoadingFailedDelegate
struct LoadingFailedDelegate_t4382;
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

// System.Void GameRes.LoadingFailedDelegate::.ctor(System.Object,System.IntPtr)
 void LoadingFailedDelegate__ctor_m38631 (LoadingFailedDelegate_t4382 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.LoadingFailedDelegate::Invoke(GameRes.AssetLoader)
 void LoadingFailedDelegate_Invoke_m38632 (LoadingFailedDelegate_t4382 * __this, AssetLoader_t4380 * ___loader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GameRes.LoadingFailedDelegate::BeginInvoke(GameRes.AssetLoader,System.AsyncCallback,System.Object)
 Object_t * LoadingFailedDelegate_BeginInvoke_m38633 (LoadingFailedDelegate_t4382 * __this, AssetLoader_t4380 * ___loader, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.LoadingFailedDelegate::EndInvoke(System.IAsyncResult)
 void LoadingFailedDelegate_EndInvoke_m38634 (LoadingFailedDelegate_t4382 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
