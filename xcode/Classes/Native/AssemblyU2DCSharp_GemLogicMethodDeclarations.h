#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GemLogic
struct GemLogic_t1424;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Generic.List`1<Games.Item.GameItem>
struct List_1_t1244;
// Games.Item.GameItem
struct GameItem_t1172;

// System.Void GemLogic::.ctor()
 void GemLogic__ctor_m8712 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::.cctor()
 void GemLogic__cctor_m8713 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GemLogic GemLogic::Instance()
 GemLogic_t1424 * GemLogic_Instance_m8714 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::UpdateMoneyInfo()
 void GemLogic_UpdateMoneyInfo_m8715 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::OnDisable()
 void GemLogic_OnDisable_m8716 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::SlowUpdate()
 void GemLogic_SlowUpdate_m8717 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::OnEnable()
 void GemLogic_OnEnable_m8718 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::updateGemRemindPoint()
 void GemLogic_updateGemRemindPoint_m8719 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::InitEmpty()
 void GemLogic_InitEmpty_m8720 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::OnClickEquiSlot(System.Int32)
 void GemLogic_OnClickEquiSlot_m8721 (GemLogic_t1424 * __this, int32_t ___equipslot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::CloseEquip()
 void GemLogic_CloseEquip_m8722 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::UpdateSelectedEquip(System.String,System.String,System.String,System.Int32)
 void GemLogic_UpdateSelectedEquip_m8723 (GemLogic_t1424 * __this, String_t* ___choose, String_t* ___icon, String_t* ___quality, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GemLogic::GetGemLevelString(System.Int32)
 String_t* GemLogic_GetGemLevelString_m8724 (GemLogic_t1424 * __this, int32_t ___nValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GemLogic::GetSlotLockedLevel(System.Int32)
 int32_t GemLogic_GetSlotLockedLevel_m8725 (GemLogic_t1424 * __this, int32_t ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GemLogic::IsSlotLocked(System.Int32)
 bool GemLogic_IsSlotLocked_m8726 (GemLogic_t1424 * __this, int32_t ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::UpdateGemSlot()
 void GemLogic_UpdateGemSlot_m8727 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::ClickGemSlot(System.Int32)
 void GemLogic_ClickGemSlot_m8728 (GemLogic_t1424 * __this, int32_t ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::OnClickGemSlot1()
 void GemLogic_OnClickGemSlot1_m8729 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::OnClickGemSlot2()
 void GemLogic_OnClickGemSlot2_m8730 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::OnClickGemSlot3()
 void GemLogic_OnClickGemSlot3_m8731 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::OnClickGemSlot4()
 void GemLogic_OnClickGemSlot4_m8732 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::ClearGemSlotChoose()
 void GemLogic_ClearGemSlotChoose_m8733 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::ClearGemSlotMark()
 void GemLogic_ClearGemSlotMark_m8734 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::ShowUnEquipPage()
 void GemLogic_ShowUnEquipPage_m8735 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::ShowEquipPage()
 void GemLogic_ShowEquipPage_m8736 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::ClickGemInList(UnityEngine.GameObject)
 void GemLogic_ClickGemInList_m8737 (GemLogic_t1424 * __this, GameObject_t9 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::UpdateGemItemList()
 void GemLogic_UpdateGemItemList_m8738 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.Item.GameItem> GemLogic::GemFilter(System.Collections.Generic.List`1<Games.Item.GameItem>)
 List_1_t1244 * GemLogic_GemFilter_m8739 (GemLogic_t1424 * __this, List_1_t1244 * ___gemList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::OnClickUnEquipGem()
 void GemLogic_OnClickUnEquipGem_m8740 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::OnClickEquipGem()
 void GemLogic_OnClickEquipGem_m8741 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::ShowChooseGemInfo(Games.Item.GameItem)
 void GemLogic_ShowChooseGemInfo_m8742 (GemLogic_t1424 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::ClearChooseGemInfo()
 void GemLogic_ClearChooseGemInfo_m8743 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::ClearGemItemChoose()
 void GemLogic_ClearGemItemChoose_m8744 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::NewPlayerGuide(System.Int32)
 void GemLogic_NewPlayerGuide_m8745 (GemLogic_t1424 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::OnOpenHelpTips()
 void GemLogic_OnOpenHelpTips_m8746 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GemLogic::OnCloseHelpTips()
 void GemLogic_OnCloseHelpTips_m8747 (GemLogic_t1424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
