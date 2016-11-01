#pragma once
#include <stdint.h>
// GameRes.ResourcesManager
struct ResourcesManager_t2182;
// GameRes.AssetManager
struct AssetManager_t4387;
// GameRes.PathManager
struct PathManager_t4396;
// GameRes.BaseResCached
struct BaseResCached_t4399;
// GameRes.LoadingListener
struct LoadingListener_t4388;
// System.Action`1<System.Single>
struct Action_1_t4409;
// System.Action
struct Action_t1425;
// System.Func`1<System.Boolean>
struct Func_1_t4406;
// MonoBase
#include "AssemblyU2DCSharp_MonoBase.h"
// GameRes.ResourcesManager/EState
#include "AssemblyU2DCSharp_GameRes_ResourcesManager_EState.h"
// GameRes.ResourcesManager
struct ResourcesManager_t2182  : public MonoBase_t2124
{
	// GameRes.AssetManager GameRes.ResourcesManager::_assetManager
	AssetManager_t4387 * ____assetManager;
	// GameRes.PathManager GameRes.ResourcesManager::_pathManager
	PathManager_t4396 * ____pathManager;
	// GameRes.BaseResCached GameRes.ResourcesManager::_effectCached
	BaseResCached_t4399 * ____effectCached;
	// GameRes.BaseResCached GameRes.ResourcesManager::_modelCached
	BaseResCached_t4399 * ____modelCached;
	// GameRes.LoadingListener GameRes.ResourcesManager::_loadingListener
	LoadingListener_t4388 * ____loadingListener;
	// System.Single GameRes.ResourcesManager::_process
	float ____process;
	// System.Action`1<System.Single> GameRes.ResourcesManager::_processAction
	Action_1_t4409 * ____processAction;
	// System.Action GameRes.ResourcesManager::_successAction
	Action_t1425 * ____successAction;
	// GameRes.ResourcesManager/EState GameRes.ResourcesManager::_state
	int32_t ____state;
	// System.Boolean GameRes.ResourcesManager::_enable
	bool ____enable;
};
struct ResourcesManager_t2182_StaticFields{
	// GameRes.ResourcesManager GameRes.ResourcesManager::_instance
	ResourcesManager_t2182 * ____instance;
	// System.Func`1<System.Boolean> GameRes.ResourcesManager::<>f__am$cacheB
	Func_1_t4406 * ___U3CU3Ef__am$cacheB;
};
