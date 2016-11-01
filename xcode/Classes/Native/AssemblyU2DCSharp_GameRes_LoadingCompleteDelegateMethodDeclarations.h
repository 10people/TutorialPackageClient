#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameRes.LoadingCompleteDelegate
struct LoadingCompleteDelegate_t4381;
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

// System.Void GameRes.LoadingCompleteDelegate::.ctor(System.Object,System.IntPtr)
 void LoadingCompleteDelegate__ctor_m38627 (LoadingCompleteDelegate_t4381 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.LoadingCompleteDelegate::Invoke(GameRes.AssetLoader)
 void LoadingCompleteDelegate_Invoke_m38628 (LoadingCompleteDelegate_t4381 * __this, AssetLoader_t4380 * ___loader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GameRes.LoadingCompleteDelegate::BeginInvoke(GameRes.AssetLoader,System.AsyncCallback,System.Object)
 Object_t * LoadingCompleteDelegate_BeginInvoke_m38629 (LoadingCompleteDelegate_t4381 * __this, AssetLoader_t4380 * ___loader, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.LoadingCompleteDelegate::EndInvoke(System.IAsyncResult)
 void LoadingCompleteDelegate_EndInvoke_m38630 (LoadingCompleteDelegate_t4381 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
