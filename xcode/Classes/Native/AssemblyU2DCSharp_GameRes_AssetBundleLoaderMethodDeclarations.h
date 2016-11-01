#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameRes.AssetBundleLoader
struct AssetBundleLoader_t4379;
// System.String
struct String_t;
// GameRes.EResourceType
#include "AssemblyU2DCSharp_GameRes_EResourceType.h"

// System.Void GameRes.AssetBundleLoader::.ctor(System.String,GameRes.EResourceType)
 void AssetBundleLoader__ctor_m31039 (AssetBundleLoader_t4379 * __this, String_t* ___path, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetBundleLoader::Start()
 void AssetBundleLoader_Start_m31040 (AssetBundleLoader_t4379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.AssetBundleLoader::IsWaiting()
 bool AssetBundleLoader_IsWaiting_m31041 (AssetBundleLoader_t4379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.AssetBundleLoader::IsLoading()
 bool AssetBundleLoader_IsLoading_m31042 (AssetBundleLoader_t4379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.AssetBundleLoader::IsLoadFailed()
 bool AssetBundleLoader_IsLoadFailed_m31043 (AssetBundleLoader_t4379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.AssetBundleLoader::IsLoaded()
 bool AssetBundleLoader_IsLoaded_m31044 (AssetBundleLoader_t4379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameRes.AssetBundleLoader::GetLoadingProgress()
 float AssetBundleLoader_GetLoadingProgress_m31045 (AssetBundleLoader_t4379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetBundleLoader::Unload(System.Boolean)
 void AssetBundleLoader_Unload_m31046 (AssetBundleLoader_t4379 * __this, bool ___unloadAllLoadedObjects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.AssetBundleLoader::Update()
 void AssetBundleLoader_Update_m31047 (AssetBundleLoader_t4379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
