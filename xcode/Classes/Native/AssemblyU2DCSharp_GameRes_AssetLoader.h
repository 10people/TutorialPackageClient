#pragma once
#include <stdint.h>
// UnityEngine.AssetBundle
struct AssetBundle_t2010;
// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t1517;
// UnityEngine.Object
struct Object_t982;
struct Object_t982_marshaled;
// GameRes.LoadingCompleteDelegate
struct LoadingCompleteDelegate_t4381;
// GameRes.LoadingFailedDelegate
struct LoadingFailedDelegate_t4382;
// System.Object
#include "mscorlib_System_Object.h"
// GameRes.EResourceType
#include "AssemblyU2DCSharp_GameRes_EResourceType.h"
// GameRes.AssetLoader
struct AssetLoader_t4380  : public Object_t
{
	// UnityEngine.AssetBundle GameRes.AssetLoader::_assetBundle
	AssetBundle_t2010 * ____assetBundle;
	// System.Single GameRes.AssetLoader::_contrastSize
	float ____contrastSize;
	// System.Single GameRes.AssetLoader::_startTime
	float ____startTime;
	// GameRes.EResourceType GameRes.AssetLoader::_type
	int32_t ____type;
	// System.String GameRes.AssetLoader::_path
	String_t* ____path;
	// UnityEngine.WWW GameRes.AssetLoader::_www
	WWW_t1517 * ____www;
	// System.Boolean GameRes.AssetLoader::_isAlwaysInMemory
	bool ____isAlwaysInMemory;
	// UnityEngine.Object GameRes.AssetLoader::_cachedGo
	Object_t982 * ____cachedGo;
	// GameRes.LoadingCompleteDelegate GameRes.AssetLoader::EventLoadingComplete
	LoadingCompleteDelegate_t4381 * ___EventLoadingComplete;
	// GameRes.LoadingFailedDelegate GameRes.AssetLoader::EventLoadingFailed
	LoadingFailedDelegate_t4382 * ___EventLoadingFailed;
};
