#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ActivenessAwardItem
struct ActivenessAwardItem_t1206;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// Games.AwardActivity.AwardState
#include "AssemblyU2DCSharp_Games_AwardActivity_AwardState.h"
// ActivenessAwardItem/ItemType
#include "AssemblyU2DCSharp_ActivenessAwardItem_ItemType.h"

// System.Void ActivenessAwardItem::.ctor()
 void ActivenessAwardItem__ctor_m7126 (ActivenessAwardItem_t1206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivenessAwardItem::set_AwardInfoText(System.String)
 void ActivenessAwardItem_set_AwardInfoText_m7127 (ActivenessAwardItem_t1206 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.AwardActivity.AwardState ActivenessAwardItem::get_AwardButtonState()
 int32_t ActivenessAwardItem_get_AwardButtonState_m7128 (ActivenessAwardItem_t1206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivenessAwardItem::set_AwardButtonState(Games.AwardActivity.AwardState)
 void ActivenessAwardItem_set_AwardButtonState_m7129 (ActivenessAwardItem_t1206 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ActivenessAwardItem::get_TurnID()
 int32_t ActivenessAwardItem_get_TurnID_m7130 (ActivenessAwardItem_t1206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivenessAwardItem::set_TurnID(System.Int32)
 void ActivenessAwardItem_set_TurnID_m7131 (ActivenessAwardItem_t1206 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivenessAwardItem::Init(System.Int32,Games.AwardActivity.AwardState)
 void ActivenessAwardItem_Init_m7132 (ActivenessAwardItem_t1206 * __this, int32_t ___nTurnID, int32_t ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivenessAwardItem::CleanUp()
 void ActivenessAwardItem_CleanUp_m7133 (ActivenessAwardItem_t1206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActivenessAwardItem ActivenessAwardItem::CreateAwardItem(System.String,UnityEngine.GameObject,UnityEngine.GameObject)
 ActivenessAwardItem_t1206 * ActivenessAwardItem_CreateAwardItem_m7134 (Object_t * __this/* static, unused */, String_t* ___strName, GameObject_t9 * ___gParent, GameObject_t9 * ___resItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ActivenessAwardItem::SetItemInfo(System.Int32,System.Int32,ActivenessAwardItem/ItemType,System.String)
 bool ActivenessAwardItem_SetItemInfo_m7135 (ActivenessAwardItem_t1206 * __this, int32_t ___nIndex, int32_t ___nValue, int32_t ___tType, String_t* ___strSpriteName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivenessAwardItem::AddAwardUI(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void ActivenessAwardItem_AddAwardUI_m7136 (ActivenessAwardItem_t1206 * __this, int32_t ___nExp, int32_t ___nMoney, int32_t ___nYuanbao, int32_t ___nSkillExp, int32_t ___nReputation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivenessAwardItem::AddAwardUIRepution(System.Int32)
 void ActivenessAwardItem_AddAwardUIRepution_m7137 (ActivenessAwardItem_t1206 * __this, int32_t ___nReputation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivenessAwardItem::AddItemUI(System.Int32,System.Int32)
 void ActivenessAwardItem_AddItemUI_m7138 (ActivenessAwardItem_t1206 * __this, int32_t ___nItemID, int32_t ___nCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivenessAwardItem::SetAwardButtonState(Games.AwardActivity.AwardState)
 void ActivenessAwardItem_SetAwardButtonState_m7139 (ActivenessAwardItem_t1206 * __this, int32_t ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivenessAwardItem::AwardButtonClick()
 void ActivenessAwardItem_AwardButtonClick_m7140 (ActivenessAwardItem_t1206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivenessAwardItem::ItemTipClick(UnityEngine.GameObject)
 void ActivenessAwardItem_ItemTipClick_m7141 (ActivenessAwardItem_t1206 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
