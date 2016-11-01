#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BundleManager
struct BundleManager_t2168;
// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t1517;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// UIPathData
struct UIPathData_t1177;
// BundleManager/LoadBundleFinish
struct LoadBundleFinish_t2146;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// BundleManager/LoadSingleFinish
struct LoadSingleFinish_t2144;
// BundleManager/LoadSoundFinish
struct LoadSoundFinish_t2148;
// BundleManager/LoadAnimationFinish
struct LoadAnimationFinish_t2150;
// BundleManager/LoadSceneFinish
struct LoadSceneFinish_t2151;
// GameRes.LoadFinishCallback
struct LoadFinishCallback_t2169;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t18;
// BundleManager/ModelLoadData
struct ModelLoadData_t2145;
// GameRes.EResourceType
#include "AssemblyU2DCSharp_GameRes_EResourceType.h"

// System.Void BundleManager::.ctor()
 void BundleManager__ctor_m14555 (BundleManager_t2168 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::.cctor()
 void BundleManager__cctor_m14556 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BundleManager::get_LocalPathRoot()
 String_t* BundleManager_get_LocalPathRoot_m14557 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::CacheBundle(UnityEngine.WWW)
 void BundleManager_CacheBundle_m14558 (Object_t * __this/* static, unused */, WWW_t1517 * ___wwwBundle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::TryUnloadUnuseBundle()
 void BundleManager_TryUnloadUnuseBundle_m14559 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::DoUnloadUnuseBundle()
 void BundleManager_DoUnloadUnuseBundle_m14560 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BundleManager::GetBundleLoadUrl(System.String,System.String)
 String_t* BundleManager_GetBundleLoadUrl_m14561 (Object_t * __this/* static, unused */, String_t* ___subFolder, String_t* ___localName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BundleManager::LoadLoginUI()
 Object_t * BundleManager_LoadLoginUI_m14562 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BundleManager::LoadFontUI()
 Object_t * BundleManager_LoadFontUI_m14563 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BundleManager::LoadCommonUI()
 Object_t * BundleManager_LoadCommonUI_m14564 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BundleManager::LoadMainUI()
 Object_t * BundleManager_LoadMainUI_m14565 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BundleManager::LoadUI(UIPathData,BundleManager/LoadBundleFinish,System.Object,System.Object)
 Object_t * BundleManager_LoadUI_m14566 (Object_t * __this/* static, unused */, UIPathData_t1177 * ___uiData, LoadBundleFinish_t2146 * ___delFinish, Object_t * ___param1, Object_t * ___param2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::ReleaseLoginBundle()
 void BundleManager_ReleaseLoginBundle_m14567 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject BundleManager::GetGroupUIItem(UIPathData)
 GameObject_t9 * BundleManager_GetGroupUIItem_m14568 (Object_t * __this/* static, unused */, UIPathData_t1177 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::ReleaseGroupBundle()
 void BundleManager_ReleaseGroupBundle_m14569 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::ReleaseUIGroupBundle()
 void BundleManager_ReleaseUIGroupBundle_m14570 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::ReleaseUIRefBundle()
 void BundleManager_ReleaseUIRefBundle_m14571 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::OnUIDestroy(System.String)
 void BundleManager_OnUIDestroy_m14572 (Object_t * __this/* static, unused */, String_t* ___uiName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::ReleaseSingleBundle()
 void BundleManager_ReleaseSingleBundle_m14573 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::ChangeShader(UnityEngine.Transform)
 void BundleManager_ChangeShader_m14574 (Object_t * __this/* static, unused */, Transform_t78 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BundleManager::LoadFromCache(System.String,System.String,BundleManager/LoadSingleFinish,System.Object,System.Object,System.Object)
 bool BundleManager_LoadFromCache_m14575 (Object_t * __this/* static, unused */, String_t* ___bundlePath, String_t* ___bundleName, LoadSingleFinish_t2144 * ___delFinish, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::ProcessLoad(UnityEngine.WWW,System.String,System.String,BundleManager/LoadSingleFinish,System.Object,System.Object,System.Object)
 void BundleManager_ProcessLoad_m14576 (Object_t * __this/* static, unused */, WWW_t1517 * ___www, String_t* ___bundlePath, String_t* ___bundleName, LoadSingleFinish_t2144 * ___delFinish, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::ProcessLoadSound(UnityEngine.WWW,System.String,System.String,BundleManager/LoadSoundFinish,System.Object,System.Object,System.Object)
 void BundleManager_ProcessLoadSound_m14577 (Object_t * __this/* static, unused */, WWW_t1517 * ___www, String_t* ___bundlePath, String_t* ___bundleName, LoadSoundFinish_t2148 * ___delFinish, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::ProcessLoadAnimation(UnityEngine.WWW,System.String,System.String,BundleManager/LoadAnimationFinish)
 void BundleManager_ProcessLoadAnimation_m14578 (Object_t * __this/* static, unused */, WWW_t1517 * ___www, String_t* ___bundlePath, String_t* ___bundleName, LoadAnimationFinish_t2150 * ___delFinish, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BundleManager::LoadSound(System.String,BundleManager/LoadSoundFinish,System.Object,System.Object,System.Object)
 Object_t * BundleManager_LoadSound_m14579 (Object_t * __this/* static, unused */, String_t* ___soundPath, LoadSoundFinish_t2148 * ___delFinish, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BundleManager::LoadAnimation(System.String,BundleManager/LoadAnimationFinish)
 Object_t * BundleManager_LoadAnimation_m14580 (Object_t * __this/* static, unused */, String_t* ___animPath, LoadAnimationFinish_t2150 * ___delFinish, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BundleManager::LoadScene(System.String,BundleManager/LoadSceneFinish)
 Object_t * BundleManager_LoadScene_m14581 (Object_t * __this/* static, unused */, String_t* ___sceneName, LoadSceneFinish_t2151 * ___delFinish, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::CleanBundleLoadQueue()
 void BundleManager_CleanBundleLoadQueue_m14582 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::LoadEffectInQueue(System.Int32,GameRes.LoadFinishCallback,System.Object)
 void BundleManager_LoadEffectInQueue_m14583 (Object_t * __this/* static, unused */, int32_t ___id, LoadFinishCallback_t2169 * ___delFinish, Object_t * ___param1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::LoadModelInQueue(System.Int32,GameRes.EResourceType,GameRes.LoadFinishCallback,System.Object,System.Object,System.Object)
 void BundleManager_LoadModelInQueue_m14584 (Object_t * __this/* static, unused */, int32_t ___id, int32_t ___type, LoadFinishCallback_t2169 * ___delFinish, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::LoadModelInQueue(System.String,BundleManager/LoadSingleFinish,System.Object,System.Object,System.Object)
 void BundleManager_LoadModelInQueue_m14585 (Object_t * __this/* static, unused */, String_t* ___modelName, LoadSingleFinish_t2144 * ___delFinish, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::BundleQueueLoadTick(UnityEngine.MonoBehaviour)
 void BundleManager_BundleQueueLoadTick_m14586 (Object_t * __this/* static, unused */, MonoBehaviour_t18 * ___bundleLoader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BundleManager::LoadCommonShader()
 Object_t * BundleManager_LoadCommonShader_m14587 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BundleManager::LoadCommonShaderEx()
 Object_t * BundleManager_LoadCommonShaderEx_m14588 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BundleManager::LoadOneBundleFromQueue(BundleManager/ModelLoadData)
 Object_t * BundleManager_LoadOneBundleFromQueue_m14589 (Object_t * __this/* static, unused */, ModelLoadData_t2145 * ___curData, MethodInfo* method) IL2CPP_METHOD_ATTR;
