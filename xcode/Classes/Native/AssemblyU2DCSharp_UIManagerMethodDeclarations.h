#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIManager
struct UIManager_t1959;
// UIPathData
struct UIPathData_t1177;
// UIManager/OnLoadUIItemDelegate
struct OnLoadUIItemDelegate_t1957;
// System.Object
struct Object_t;
// UIManager/OnOpenUIDelegate
struct OnOpenUIDelegate_t1396;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t1530;

// System.Void UIManager::.ctor()
 void UIManager__ctor_m12735 (UIManager_t1959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIManager UIManager::Instance()
 UIManager_t1959 * UIManager_Instance_m12736 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::Awake()
 void UIManager_Awake_m12737 (UIManager_t1959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::OnDestroy()
 void UIManager_OnDestroy_m12738 (UIManager_t1959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIManager::LoadItem(UIPathData,UIManager/OnLoadUIItemDelegate,System.Object)
 bool UIManager_LoadItem_m12739 (Object_t * __this/* static, unused */, UIPathData_t1177 * ___pathData, OnLoadUIItemDelegate_t1957 * ___delLoadItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIManager::ShowUI(UIPathData,UIManager/OnOpenUIDelegate,System.Object)
 bool UIManager_ShowUI_m12740 (Object_t * __this/* static, unused */, UIPathData_t1177 * ___pathData, OnOpenUIDelegate_t1396 * ___delOpenUI, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIManager::ShowUIByID(System.Int32,UIManager/OnOpenUIDelegate,System.Object)
 bool UIManager_ShowUIByID_m12741 (Object_t * __this/* static, unused */, int32_t ___tableID, OnOpenUIDelegate_t1396 * ___delOpenUI, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::CloseUIByID(System.Int32)
 void UIManager_CloseUIByID_m12742 (Object_t * __this/* static, unused */, int32_t ___tableID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::CloseUI(UIPathData)
 void UIManager_CloseUI_m12743 (Object_t * __this/* static, unused */, UIPathData_t1177 * ___pathData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::HideAllUIExceptStory()
 void UIManager_HideAllUIExceptStory_m12744 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::ShowAllUIExceptStory()
 void UIManager_ShowAllUIExceptStory_m12745 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::HideAllUIWhenLevelUp()
 void UIManager_HideAllUIWhenLevelUp_m12746 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::ShowAllUIWhenLevelUp()
 void UIManager_ShowAllUIWhenLevelUp_m12747 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::DoAddUI(UIPathData,UnityEngine.GameObject,System.Object,System.Object)
 void UIManager_DoAddUI_m12748 (UIManager_t1959 * __this, UIPathData_t1177 * ___uiData, GameObject_t9 * ___curWindow, Object_t * ___fun, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIManager::GCAfterOneSceond()
 Object_t * UIManager_GCAfterOneSceond_m12749 (UIManager_t1959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::DoLoadUIItem(UIPathData,UnityEngine.GameObject,System.Object,System.Object)
 void UIManager_DoLoadUIItem_m12750 (UIManager_t1959 * __this, UIPathData_t1177 * ___uiData, GameObject_t9 * ___curItem, Object_t * ___fun, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::ClosePopUI(System.String)
 void UIManager_ClosePopUI_m12751 (UIManager_t1959 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::CloseStoryUI(System.String)
 void UIManager_CloseStoryUI_m12752 (UIManager_t1959 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::CloseBaseUI(System.String)
 void UIManager_CloseBaseUI_m12753 (UIManager_t1959 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::CloseTipUI(System.String)
 void UIManager_CloseTipUI_m12754 (UIManager_t1959 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::CloseMenuPopUI(System.String)
 void UIManager_CloseMenuPopUI_m12755 (UIManager_t1959 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::CloseMessageUI(System.String)
 void UIManager_CloseMessageUI_m12756 (UIManager_t1959 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::CloseDeathUI(System.String)
 void UIManager_CloseDeathUI_m12757 (UIManager_t1959 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::LoadUI(UIPathData,UIManager/OnOpenUIDelegate,System.Object)
 void UIManager_LoadUI_m12758 (UIManager_t1959 * __this, UIPathData_t1177 * ___uiData, OnOpenUIDelegate_t1396 * ___delOpenUI, Object_t * ___param1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::LoadUIItem(UIPathData,UIManager/OnLoadUIItemDelegate,System.Object)
 void UIManager_LoadUIItem_m12759 (UIManager_t1959 * __this, UIPathData_t1177 * ___uiData, OnLoadUIItemDelegate_t1957 * ___delLoadItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::LoadMenuSubUIShield(UnityEngine.GameObject)
 void UIManager_LoadMenuSubUIShield_m12760 (Object_t * __this/* static, unused */, GameObject_t9 * ___newWindow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::LoadPopUIShield(UnityEngine.GameObject)
 void UIManager_LoadPopUIShield_m12761 (Object_t * __this/* static, unused */, GameObject_t9 * ___newWindow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIManager::AddObjToRoot(System.String)
 GameObject_t9 * UIManager_AddObjToRoot_m12762 (UIManager_t1959 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIManager::SubUIShow()
 bool UIManager_SubUIShow_m12763 (UIManager_t1959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIManager::IsSubUIShow()
 bool UIManager_IsSubUIShow_m12764 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::ReliveCloseOtherSubUI()
 void UIManager_ReliveCloseOtherSubUI_m12765 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::NewPlayerGuideCloseSubUI()
 void UIManager_NewPlayerGuideCloseSubUI_m12766 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::CloseAllPopUI()
 void UIManager_CloseAllPopUI_m12767 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::AddLoadDicRefCount(System.String)
 void UIManager_AddLoadDicRefCount_m12768 (UIManager_t1959 * __this, String_t* ___pathName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIManager::RemoveLoadDicRefCount(System.String)
 bool UIManager_RemoveLoadDicRefCount_m12769 (UIManager_t1959 * __this, String_t* ___pathName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::DestroyUI(System.String,UnityEngine.GameObject)
 void UIManager_DestroyUI_m12770 (UIManager_t1959 * __this, String_t* ___name, GameObject_t9 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::OnLoadNewPopUI(System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>,System.String)
 void UIManager_OnLoadNewPopUI_m12771 (UIManager_t1959 * __this, Dictionary_2_t1530 * ___curList, String_t* ___curName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::OnClosePopUI(System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>,System.String)
 void UIManager_OnClosePopUI_m12772 (UIManager_t1959 * __this, Dictionary_2_t1530 * ___curList, String_t* ___curName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIManager::TryDestroyUI(System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>,System.String)
 bool UIManager_TryDestroyUI_m12773 (UIManager_t1959 * __this, Dictionary_2_t1530 * ___curList, String_t* ___curName, MethodInfo* method) IL2CPP_METHOD_ATTR;
