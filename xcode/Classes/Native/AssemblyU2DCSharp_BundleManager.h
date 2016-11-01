#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.AssetBundle>
struct List_1_t2164;
// System.Collections.Generic.List`1<UnityEngine.Shader>
struct List_1_t2165;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>
struct Dictionary_2_t2166;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t1530;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Collections.Generic.Queue`1<BundleManager/ModelLoadData>
struct Queue_1_t2167;
// System.Object
#include "mscorlib_System_Object.h"
// BundleManager
struct BundleManager_t2168  : public Object_t
{
};
struct BundleManager_t2168_StaticFields{
	// System.Int32 BundleManager::m_cacheBundleMax
	int32_t ___m_cacheBundleMax;
	// System.Int32 BundleManager::m_cacheBundleAddMax
	int32_t ___m_cacheBundleAddMax;
	// System.String BundleManager::LocalLoadPath
	String_t* ___LocalLoadPath;
	// System.String BundleManager::FolderLoginUI
	String_t* ___FolderLoginUI;
	// System.String BundleManager::FolderMainUI
	String_t* ___FolderMainUI;
	// System.String BundleManager::FolderCommonUI
	String_t* ___FolderCommonUI;
	// System.String BundleManager::UIFontName
	String_t* ___UIFontName;
	// System.String BundleManager::UIBaseName
	String_t* ___UIBaseName;
	// System.String BundleManager::UISoundName
	String_t* ___UISoundName;
	// System.String BundleManager::UILoginName
	String_t* ___UILoginName;
	// System.String BundleManager::UIMainName
	String_t* ___UIMainName;
	// System.String BundleManager::UICommonName
	String_t* ___UICommonName;
	// System.String BundleManager::PathUICommon
	String_t* ___PathUICommon;
	// System.String BundleManager::PathUIPrefab
	String_t* ___PathUIPrefab;
	// System.String BundleManager::PathModelPrefab
	String_t* ___PathModelPrefab;
	// System.String BundleManager::PathEffectPrefab
	String_t* ___PathEffectPrefab;
	// System.String BundleManager::PathSoundPrefab
	String_t* ___PathSoundPrefab;
	// System.String BundleManager::PathAnimationAsset
	String_t* ___PathAnimationAsset;
	// System.String BundleManager::PathTableData
	String_t* ___PathTableData;
	// System.String BundleManager::PathSceneData
	String_t* ___PathSceneData;
	// System.String BundleManager::AppOutputPath
	String_t* ___AppOutputPath;
	// System.String BundleManager::DevelopOutputPath
	String_t* ___DevelopOutputPath;
	// System.String BundleManager::WP8OutputPath
	String_t* ___WP8OutputPath;
	// System.String BundleManager::WP8UpdateOutputPath
	String_t* ___WP8UpdateOutputPath;
	// System.String BundleManager::WP8LOWQuality
	String_t* ___WP8LOWQuality;
	// System.String BundleManager::WP8NormalQuality
	String_t* ___WP8NormalQuality;
	// System.String BundleManager::UpdateOutputPath
	String_t* ___UpdateOutputPath;
	// System.Int32 BundleManager::m_cacheResVersion
	int32_t ___m_cacheResVersion;
	// System.String BundleManager::m_loadUrlHead
	String_t* ___m_loadUrlHead;
	// System.Collections.Generic.List`1<UnityEngine.AssetBundle> BundleManager::m_BundleListFont
	List_1_t2164 * ___m_BundleListFont;
	// System.Collections.Generic.List`1<UnityEngine.AssetBundle> BundleManager::m_BundleListCommon
	List_1_t2164 * ___m_BundleListCommon;
	// System.Collections.Generic.List`1<UnityEngine.AssetBundle> BundleManager::m_BundleListLoginUI
	List_1_t2164 * ___m_BundleListLoginUI;
	// System.Collections.Generic.List`1<UnityEngine.AssetBundle> BundleManager::m_BundleListMainUI
	List_1_t2164 * ___m_BundleListMainUI;
	// System.Collections.Generic.List`1<UnityEngine.Shader> BundleManager::m_CommonShaderList
	List_1_t2165 * ___m_CommonShaderList;
	// System.Collections.Generic.List`1<System.String> BundleManager::m_BundleUILoadingList
	List_1_t1333 * ___m_BundleUILoadingList;
	// System.Int32 BundleManager::m_cacheBundleSize
	int32_t ___m_cacheBundleSize;
	// System.Int32 BundleManager::m_cacheBundleAddCount
	int32_t ___m_cacheBundleAddCount;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle> BundleManager::m_BundleDicUIGroup
	Dictionary_2_t2166 * ___m_BundleDicUIGroup;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle> BundleManager::m_BundleDicUIRef
	Dictionary_2_t2166 * ___m_BundleDicUIRef;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> BundleManager::m_dicSingleBundleCache
	Dictionary_2_t1530 * ___m_dicSingleBundleCache;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> BundleManager::m_dicSingleBundleRef
	Dictionary_2_t944 * ___m_dicSingleBundleRef;
	// System.Collections.Generic.Queue`1<BundleManager/ModelLoadData> BundleManager::m_loadBundleQueue
	Queue_1_t2167 * ___m_loadBundleQueue;
	// System.Boolean BundleManager::m_bLoadModelCommonShader
	bool ___m_bLoadModelCommonShader;
};
