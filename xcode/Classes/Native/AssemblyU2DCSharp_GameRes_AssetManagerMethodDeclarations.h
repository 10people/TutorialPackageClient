#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameRes.AssetManager
struct AssetManager_t4387;
// GameRes.AssetManager/LoadingStartedHandler
struct LoadingStartedHandler_t4384;
// GameRes.AssetManager/LoadingHandler
struct LoadingHandler_t4383;
// GameRes.AssetLoader
struct AssetLoader_t4380;
// System.String
struct String_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t2007;
struct AsyncOperation_t2007_marshaled;
// GameRes.EResourceType
#include "AssemblyU2DCSharp_GameRes_EResourceType.h"

// System.Void GameRes.AssetManager::.ctor()
 void AssetManager__ctor_m31071 (AssetManager_t4387 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetManager::add_LoadingStarted(GameRes.AssetManager/LoadingStartedHandler)
 void AssetManager_add_LoadingStarted_m31072 (AssetManager_t4387 * __this, LoadingStartedHandler_t4384 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetManager::remove_LoadingStarted(GameRes.AssetManager/LoadingStartedHandler)
 void AssetManager_remove_LoadingStarted_m31073 (AssetManager_t4387 * __this, LoadingStartedHandler_t4384 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetManager::add_LoadingEvent(GameRes.AssetManager/LoadingHandler)
 void AssetManager_add_LoadingEvent_m31074 (AssetManager_t4387 * __this, LoadingHandler_t4383 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetManager::remove_LoadingEvent(GameRes.AssetManager/LoadingHandler)
 void AssetManager_remove_LoadingEvent_m31075 (AssetManager_t4387 * __this, LoadingHandler_t4383 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetManager::OnLoadingStarted(GameRes.AssetLoader)
 void AssetManager_OnLoadingStarted_m31076 (AssetManager_t4387 * __this, AssetLoader_t4380 * ___loader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameRes.AssetLoader GameRes.AssetManager::LoadFromCacheOrDownload(GameRes.EResourceType,System.String)
 AssetLoader_t4380 * AssetManager_LoadFromCacheOrDownload_m31077 (AssetManager_t4387 * __this, int32_t ___type, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameRes.AssetLoader GameRes.AssetManager::Retrieve(GameRes.EResourceType,System.String)
 AssetLoader_t4380 * AssetManager_Retrieve_m31078 (AssetManager_t4387 * __this, int32_t ___type, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetManager::Unload(System.String,System.Boolean)
 void AssetManager_Unload_m31079 (AssetManager_t4387 * __this, String_t* ___path, bool ___unloadAllLoadedObjects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetManager::Update()
 void AssetManager_Update_m31080 (AssetManager_t4387 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetManager::OnDestroy()
 void AssetManager_OnDestroy_m31081 (AssetManager_t4387 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation GameRes.AssetManager::UnloadAllAssets()
 AsyncOperation_t2007 * AssetManager_UnloadAllAssets_m31082 (AssetManager_t4387 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
