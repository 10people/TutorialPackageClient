#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameRes.LoadingListener
struct LoadingListener_t4388;
// GameRes.AssetLoader
struct AssetLoader_t4380;

// System.Void GameRes.LoadingListener::.ctor()
 void LoadingListener__ctor_m31083 (LoadingListener_t4388 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.LoadingListener::BeginSources()
 void LoadingListener_BeginSources_m31084 (LoadingListener_t4388 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.LoadingListener::EndSources()
 void LoadingListener_EndSources_m31085 (LoadingListener_t4388 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.LoadingListener::ClearSources()
 void LoadingListener_ClearSources_m31086 (LoadingListener_t4388 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameRes.LoadingListener::GetProgress()
 float LoadingListener_GetProgress_m31087 (LoadingListener_t4388 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.LoadingListener::HandleAssetBundleLoadingStarted(GameRes.AssetLoader)
 void LoadingListener_HandleAssetBundleLoadingStarted_m31088 (LoadingListener_t4388 * __this, AssetLoader_t4380 * ___loader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.LoadingListener::IsCompleted()
 bool LoadingListener_IsCompleted_m31089 (LoadingListener_t4388 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.LoadingListener::IsLoadFailed()
 bool LoadingListener_IsLoadFailed_m31090 (LoadingListener_t4388 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
