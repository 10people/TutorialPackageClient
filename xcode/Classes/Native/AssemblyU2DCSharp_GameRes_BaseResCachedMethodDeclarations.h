#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameRes.BaseResCached
struct BaseResCached_t4399;
// System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>
struct Dictionary_2_t4398;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Object
struct Object_t982;
struct Object_t982_marshaled;
// GameRes.AssetLoader
struct AssetLoader_t4380;
// System.String
struct String_t;

// System.Void GameRes.BaseResCached::.ctor()
 void BaseResCached__ctor_m31111 (BaseResCached_t4399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData> GameRes.BaseResCached::get_CachedData()
 Dictionary_2_t4398 * BaseResCached_get_CachedData_m31112 (BaseResCached_t4399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameRes.BaseResCached::get_MaxClearCountPreFrame()
 int32_t BaseResCached_get_MaxClearCountPreFrame_m31113 (BaseResCached_t4399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameRes.BaseResCached::get_MaxClearTime()
 float BaseResCached_get_MaxClearTime_m31114 (BaseResCached_t4399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.BaseResCached::get_CheckCanDoTick()
 bool BaseResCached_get_CheckCanDoTick_m31115 (BaseResCached_t4399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.BaseResCached::InitResCachedData()
// System.Void GameRes.BaseResCached::Init(UnityEngine.GameObject)
 void BaseResCached_Init_m31116 (BaseResCached_t4399 * __this, GameObject_t9 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object GameRes.BaseResCached::CachedAsset(GameRes.AssetLoader)
 Object_t982 * BaseResCached_CachedAsset_m31117 (BaseResCached_t4399 * __this, AssetLoader_t4380 * ___loader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object GameRes.BaseResCached::GetCached(System.String)
 Object_t982 * BaseResCached_GetCached_m31118 (BaseResCached_t4399 * __this, String_t* ___url, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.BaseResCached::Update()
 bool BaseResCached_Update_m31119 (BaseResCached_t4399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.BaseResCached::AddRef(System.String)
 void BaseResCached_AddRef_m31120 (BaseResCached_t4399 * __this, String_t* ___url, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.BaseResCached::ReduceRef(System.String)
 void BaseResCached_ReduceRef_m31121 (BaseResCached_t4399 * __this, String_t* ___url, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.BaseResCached::ClearAll()
 void BaseResCached_ClearAll_m31122 (BaseResCached_t4399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.BaseResCached::ClearArray()
 void BaseResCached_ClearArray_m31123 (BaseResCached_t4399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.BaseResCached::ClearCurFrameCache()
 bool BaseResCached_ClearCurFrameCache_m31124 (BaseResCached_t4399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.BaseResCached::ClearCache(System.String)
 void BaseResCached_ClearCache_m31125 (BaseResCached_t4399 * __this, String_t* ___url, MethodInfo* method) IL2CPP_METHOD_ATTR;
