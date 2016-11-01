#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameRes.AssetLoader
struct AssetLoader_t4380;
// UnityEngine.WWW
struct WWW_t1517;
// System.String
struct String_t;
// UnityEngine.AssetBundle
struct AssetBundle_t2010;
// GameRes.LoadingCompleteDelegate
struct LoadingCompleteDelegate_t4381;
// GameRes.LoadingFailedDelegate
struct LoadingFailedDelegate_t4382;
// GameRes.EResourceType
#include "AssemblyU2DCSharp_GameRes_EResourceType.h"

// System.Void GameRes.AssetLoader::.ctor()
 void AssetLoader__ctor_m31048 (AssetLoader_t4380 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetLoader::add_EventLoadingComplete(GameRes.LoadingCompleteDelegate)
 void AssetLoader_add_EventLoadingComplete_m31049 (AssetLoader_t4380 * __this, LoadingCompleteDelegate_t4381 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetLoader::remove_EventLoadingComplete(GameRes.LoadingCompleteDelegate)
 void AssetLoader_remove_EventLoadingComplete_m31050 (AssetLoader_t4380 * __this, LoadingCompleteDelegate_t4381 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetLoader::add_EventLoadingFailed(GameRes.LoadingFailedDelegate)
 void AssetLoader_add_EventLoadingFailed_m31051 (AssetLoader_t4380 * __this, LoadingFailedDelegate_t4382 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetLoader::remove_EventLoadingFailed(GameRes.LoadingFailedDelegate)
 void AssetLoader_remove_EventLoadingFailed_m31052 (AssetLoader_t4380 * __this, LoadingFailedDelegate_t4382 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW GameRes.AssetLoader::get_WWW()
 WWW_t1517 * AssetLoader_get_WWW_m31053 (AssetLoader_t4380 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameRes.AssetLoader::get_Path()
 String_t* AssetLoader_get_Path_m31054 (AssetLoader_t4380 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundle GameRes.AssetLoader::get_AssetBundle()
 AssetBundle_t2010 * AssetLoader_get_AssetBundle_m31055 (AssetLoader_t4380 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.AssetLoader::get_IsAlwaysInMemory()
 bool AssetLoader_get_IsAlwaysInMemory_m31056 (AssetLoader_t4380 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameRes.EResourceType GameRes.AssetLoader::get_ResType()
 int32_t AssetLoader_get_ResType_m31057 (AssetLoader_t4380 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.AssetLoader::get_IsNeedToChangeShader()
 bool AssetLoader_get_IsNeedToChangeShader_m31058 (AssetLoader_t4380 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetLoader::OnLoadingComplete()
 void AssetLoader_OnLoadingComplete_m31059 (AssetLoader_t4380 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetLoader::OnLoadingFailed()
 void AssetLoader_OnLoadingFailed_m31060 (AssetLoader_t4380 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.AssetLoader::IsCompleted()
 bool AssetLoader_IsCompleted_m31061 (AssetLoader_t4380 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameRes.AssetLoader::GetAssetSize()
 int32_t AssetLoader_GetAssetSize_m31062 (AssetLoader_t4380 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetLoader::Start()
// System.Single GameRes.AssetLoader::GetLoadingProgress()
// System.Boolean GameRes.AssetLoader::IsWaiting()
// System.Boolean GameRes.AssetLoader::IsLoading()
// System.Boolean GameRes.AssetLoader::IsLoadFailed()
// System.Boolean GameRes.AssetLoader::IsLoaded()
// System.Void GameRes.AssetLoader::Unload(System.Boolean)
// System.Void GameRes.AssetLoader::Update()
