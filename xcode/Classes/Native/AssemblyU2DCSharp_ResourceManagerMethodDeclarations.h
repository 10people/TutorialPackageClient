#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ResourceManager
struct ResourceManager_t2189;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t982;
struct Object_t982_marshaled;
// System.Type
struct Type_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// UIPathData
struct UIPathData_t1177;
// ResourceManager/LoadHeadInfoDelegate
struct LoadHeadInfoDelegate_t2188;

// System.Void ResourceManager::.ctor()
 void ResourceManager__ctor_m14668 (ResourceManager_t2189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::.cctor()
 void ResourceManager__cctor_m14669 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::IncreaseInstantResource(System.String)
 void ResourceManager_IncreaseInstantResource_m14670 (Object_t * __this/* static, unused */, String_t* ___szKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::DecreaseInstantResource(System.String)
 void ResourceManager_DecreaseInstantResource_m14671 (Object_t * __this/* static, unused */, String_t* ___szKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::ResetResourceLoadCounter()
 void ResourceManager_ResetResourceLoadCounter_m14672 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::IncreaseResourceLoadCount(System.String)
 void ResourceManager_IncreaseResourceLoadCount_m14673 (Object_t * __this/* static, unused */, String_t* ___szKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object ResourceManager::LoadResource(System.String,System.Type)
 Object_t982 * ResourceManager_LoadResource_m14674 (Object_t * __this/* static, unused */, String_t* ___resPath, Type_t * ___systemTypeInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::DestroyResource(UnityEngine.GameObject,System.Boolean)
 void ResourceManager_DestroyResource_m14675 (Object_t * __this/* static, unused */, GameObject_t9 * ___obj, bool ___bImmediate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::DestroyResource(UnityEngine.GameObject&,System.Boolean)
 void ResourceManager_DestroyResource_m14676 (Object_t * __this/* static, unused */, GameObject_t9 ** ___obj, bool ___bImmediate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object ResourceManager::InstantiateResource(System.String,System.String,System.Type)
 Object_t982 * ResourceManager_InstantiateResource_m14677 (Object_t * __this/* static, unused */, String_t* ___resPath, String_t* ___szKey, Type_t * ___systemTypeInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::LoadBackCamera()
 void ResourceManager_LoadBackCamera_m14678 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::OnLoadBackCameraOver(UnityEngine.GameObject,System.Object)
 void ResourceManager_OnLoadBackCameraOver_m14679 (Object_t * __this/* static, unused */, GameObject_t9 * ___resObj, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ResourceManager::LoadUIPrefab(System.String,System.Int32)
 GameObject_t9 * ResourceManager_LoadUIPrefab_m14680 (Object_t * __this/* static, unused */, String_t* ___strUIName, int32_t ___nUILevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::LoadHeadInfoPrefab(UIPathData,UnityEngine.GameObject,System.String,ResourceManager/LoadHeadInfoDelegate)
 void ResourceManager_LoadHeadInfoPrefab_m14681 (Object_t * __this/* static, unused */, UIPathData_t1177 * ___uiData, GameObject_t9 * ___nParent, String_t* ___strPrefabName, LoadHeadInfoDelegate_t2188 * ___delFun, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::OnLoadHeadInfo(UnityEngine.GameObject,System.Object,System.Object)
 void ResourceManager_OnLoadHeadInfo_m14682 (Object_t * __this/* static, unused */, GameObject_t9 * ___resObj, Object_t * ___parent, Object_t * ___fun, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::UnLoadHeadInfoPrefab(UnityEngine.GameObject)
 void ResourceManager_UnLoadHeadInfoPrefab_m14683 (Object_t * __this/* static, unused */, GameObject_t9 * ___headInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ResourceManager::LoadTitleInvestitiveItem(UnityEngine.GameObject,System.Int32)
 GameObject_t9 * ResourceManager_LoadTitleInvestitiveItem_m14684 (Object_t * __this/* static, unused */, GameObject_t9 * ___TitleInvestitiveGrid, int32_t ___nTitleInvestitiveItemIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ResourceManager::LoadLastSpeakerItem(UnityEngine.GameObject,System.Int32)
 GameObject_t9 * ResourceManager_LoadLastSpeakerItem_m14685 (Object_t * __this/* static, unused */, GameObject_t9 * ___LastSpeakerGrid, int32_t ___nLastSpeakerItemIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ResourceManager::LoadChatLink(UnityEngine.GameObject)
 GameObject_t9 * ResourceManager_LoadChatLink_m14686 (Object_t * __this/* static, unused */, GameObject_t9 * ___LinkRoot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ResourceManager::LoadEmotionItem(UnityEngine.GameObject)
 GameObject_t9 * ResourceManager_LoadEmotionItem_m14687 (Object_t * __this/* static, unused */, GameObject_t9 * ___ChatInfoEmotion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ResourceManager::LoadChatVIPIcon(UnityEngine.GameObject)
 GameObject_t9 * ResourceManager_LoadChatVIPIcon_m14688 (Object_t * __this/* static, unused */, GameObject_t9 * ___ChatVIPIcon, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ResourceManager::LoadPlayVoiceBtn(UnityEngine.GameObject)
 GameObject_t9 * ResourceManager_LoadPlayVoiceBtn_m14689 (Object_t * __this/* static, unused */, GameObject_t9 * ___BtnParent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ResourceManager::LoadMessageIcon(UnityEngine.GameObject)
 GameObject_t9 * ResourceManager_LoadMessageIcon_m14690 (Object_t * __this/* static, unused */, GameObject_t9 * ___detailBandRoot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ResourceManager::LoadFastReplyItem(UnityEngine.GameObject,System.Int32)
 GameObject_t9 * ResourceManager_LoadFastReplyItem_m14691 (Object_t * __this/* static, unused */, GameObject_t9 * ___FastReplyGrid, int32_t ___nFastReplyItemIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ResourceManager::LoadEmotionButton(UnityEngine.GameObject,System.Int32)
 GameObject_t9 * ResourceManager_LoadEmotionButton_m14692 (Object_t * __this/* static, unused */, GameObject_t9 * ___EmotionGrid, int32_t ___nEmotionButtonIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
