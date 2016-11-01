#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData>
struct Dictionary_2_t4398;
// System.String[]
struct StringU5BU5D_t333;
// System.Object
#include "mscorlib_System_Object.h"
// GameRes.EResourceType
#include "AssemblyU2DCSharp_GameRes_EResourceType.h"
// GameRes.BaseResCached
struct BaseResCached_t4399  : public Object_t
{
	// GameRes.EResourceType GameRes.BaseResCached::_cachedResType
	int32_t ____cachedResType;
	// UnityEngine.Transform GameRes.BaseResCached::_cachedParent
	Transform_t78 * ____cachedParent;
	// System.String GameRes.BaseResCached::_cachedParentName
	String_t* ____cachedParentName;
	// System.Collections.Generic.Dictionary`2<System.String,GameRes.SCachedBundleData> GameRes.BaseResCached::_cachedBundleDic
	Dictionary_2_t4398 * ____cachedBundleDic;
	// System.String[] GameRes.BaseResCached::_needToRemoveArray
	StringU5BU5D_t333* ____needToRemoveArray;
	// System.Int32 GameRes.BaseResCached::_curIndex
	int32_t ____curIndex;
	// System.Boolean GameRes.BaseResCached::_needToUnloadUnusedAssetNextFrame
	bool ____needToUnloadUnusedAssetNextFrame;
	// System.Int32 GameRes.BaseResCached::_maxClearCountPreFrame
	int32_t ____maxClearCountPreFrame;
	// System.Single GameRes.BaseResCached::_maxClearTime
	float ____maxClearTime;
	// System.Single GameRes.BaseResCached::_tickTime
	float ____tickTime;
	// System.Single GameRes.BaseResCached::_lastTickTime
	float ____lastTickTime;
};
