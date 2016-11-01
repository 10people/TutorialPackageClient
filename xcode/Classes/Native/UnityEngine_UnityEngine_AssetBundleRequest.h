#pragma once
#include <stdint.h>
// UnityEngine.AssetBundle
struct AssetBundle_t2010;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t7556  : public AsyncOperation_t2007
{
	// UnityEngine.AssetBundle UnityEngine.AssetBundleRequest::m_AssetBundle
	AssetBundle_t2010 * ___m_AssetBundle;
	// System.String UnityEngine.AssetBundleRequest::m_Path
	String_t* ___m_Path;
	// System.Type UnityEngine.AssetBundleRequest::m_Type
	Type_t * ___m_Type;
};
