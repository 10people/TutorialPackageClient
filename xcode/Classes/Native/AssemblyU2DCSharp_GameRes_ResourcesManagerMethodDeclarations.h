#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameRes.ResourcesManager
struct ResourcesManager_t2182;
// GameRes.AssetManager
struct AssetManager_t4387;
// GameRes.BaseResCached
struct BaseResCached_t4399;
// System.Action
struct Action_t1425;
// System.Action`1<System.Single>
struct Action_1_t4409;
// GameRes.AssetLoader
struct AssetLoader_t4380;
// System.String
struct String_t;
// GameRes.LoadFinishCallback
struct LoadFinishCallback_t2169;
// System.Func`1<System.Boolean>
struct Func_1_t4406;
// System.Action`1<System.String>
struct Action_1_t4407;
// UnityEngine.AsyncOperation
struct AsyncOperation_t2007;
struct AsyncOperation_t2007_marshaled;
// UnityEngine.Object
struct Object_t982;
struct Object_t982_marshaled;
// GameRes.EResourceType
#include "AssemblyU2DCSharp_GameRes_EResourceType.h"
// GameRes.LoadCompleteCallBackParameter
#include "AssemblyU2DCSharp_GameRes_LoadCompleteCallBackParameter.h"
// Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_OBJ_TYP.h"

// System.Void GameRes.ResourcesManager::.ctor()
 void ResourcesManager__ctor_m31141 (ResourcesManager_t2182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameRes.ResourcesManager GameRes.ResourcesManager::get_Instance()
 ResourcesManager_t2182 * ResourcesManager_get_Instance_m31142 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameRes.AssetManager GameRes.ResourcesManager::get_AssetManager()
 AssetManager_t4387 * ResourcesManager_get_AssetManager_m31143 (ResourcesManager_t2182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameRes.BaseResCached GameRes.ResourcesManager::get_EffectCachedData()
 BaseResCached_t4399 * ResourcesManager_get_EffectCachedData_m31144 (ResourcesManager_t2182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.ResourcesManager::UpdateCachedData()
 void ResourcesManager_UpdateCachedData_m31145 (ResourcesManager_t2182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.ResourcesManager::Init()
 bool ResourcesManager_Init_m31146 (ResourcesManager_t2182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.ResourcesManager::Update()
 void ResourcesManager_Update_m31147 (ResourcesManager_t2182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.ResourcesManager::Clear()
 void ResourcesManager_Clear_m31148 (ResourcesManager_t2182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.ResourcesManager::Begin(System.Action,System.Action`1<System.Single>)
 bool ResourcesManager_Begin_m31149 (ResourcesManager_t2182 * __this, Action_t1425 * ___successAction, Action_1_t4409 * ___processAction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.ResourcesManager::End()
 void ResourcesManager_End_m31150 (ResourcesManager_t2182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameRes.AssetLoader GameRes.ResourcesManager::LoadFromCacheOrDownload(System.String,GameRes.EResourceType)
 AssetLoader_t4380 * ResourcesManager_LoadFromCacheOrDownload_m31151 (ResourcesManager_t2182 * __this, String_t* ___path, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.ResourcesManager::Load(System.Int32,GameRes.EResourceType,GameRes.LoadCompleteCallBackParameter,GameRes.LoadFinishCallback,System.Func`1<System.Boolean>,System.Action`1<System.String>)
 void ResourcesManager_Load_m31152 (ResourcesManager_t2182 * __this, int32_t ___id, int32_t ___type, LoadCompleteCallBackParameter_t2120  ___parameter, LoadFinishCallback_t2169 * ___loadComplete, Func_1_t4406 * ___condition, Action_1_t4407 * ___loadFailed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.ResourcesManager::UnLoad(System.String,GameRes.EResourceType,System.Boolean)
 void ResourcesManager_UnLoad_m31153 (ResourcesManager_t2182 * __this, String_t* ___url, int32_t ___type, bool ___unloadAllLoadedObjects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation GameRes.ResourcesManager::UnLoadAll()
 AsyncOperation_t2007 * ResourcesManager_UnLoadAll_m31154 (ResourcesManager_t2182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object GameRes.ResourcesManager::CachedRes(GameRes.AssetLoader)
 Object_t982 * ResourcesManager_CachedRes_m31155 (ResourcesManager_t2182 * __this, AssetLoader_t4380 * ___loader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object GameRes.ResourcesManager::GetCached(System.String,GameRes.EResourceType)
 Object_t982 * ResourcesManager_GetCached_m31156 (ResourcesManager_t2182 * __this, String_t* ___url, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.ResourcesManager::AddCachedRef(System.String,GameRes.EResourceType,Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE)
 void ResourcesManager_AddCachedRef_m31157 (ResourcesManager_t2182 * __this, String_t* ___url, int32_t ___resType, int32_t ___objType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.ResourcesManager::ReduceCachedRef(System.String,GameRes.EResourceType,Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE)
 void ResourcesManager_ReduceCachedRef_m31158 (ResourcesManager_t2182 * __this, String_t* ___url, int32_t ___resType, int32_t ___objType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.ResourcesManager::<Load>m__1E()
 bool ResourcesManager_U3CLoadU3Em__1E_m31159 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
