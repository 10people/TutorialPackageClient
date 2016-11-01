#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.Item.GameItem
struct GameItem_t1172;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.String
struct String_t;
// Games.Item.ItemQuality
#include "AssemblyU2DCSharp_Games_Item_ItemQuality.h"

// System.Void Games.Item.GameItem::.ctor()
 void GameItem__ctor_m33687 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.GameItem::CleanUp()
 void GameItem_CleanUp_m33688 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::IsValid()
 bool GameItem_IsValid_m33689 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::SortId()
 int32_t GameItem_SortId_m33690 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::IsEquipMent()
 bool GameItem_IsEquipMent_m33691 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetEquipLevel()
 int32_t GameItem_GetEquipLevel_m33692 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetMaterialExp()
 int32_t GameItem_GetMaterialExp_m33693 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetCombatValue()
 int32_t GameItem_GetCombatValue_m33694 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetCombatValue_NoStarEnchance()
 int32_t GameItem_GetCombatValue_NoStarEnchance_m33695 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetCombatValueByAttrTypeAndNum(System.Int32,System.Int32)
 int32_t GameItem_GetCombatValueByAttrTypeAndNum_m33696 (Object_t * __this/* static, unused */, int32_t ___nAttrType, int32_t ___nAttrNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetCombatValue_ForShenQi()
 int32_t GameItem_GetCombatValue_ForShenQi_m33697 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetCombatValue_ForShenQiNoSkill()
 int32_t GameItem_GetCombatValue_ForShenQiNoSkill_m33698 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetComBatAttrById(System.Int32)
 int32_t GameItem_GetComBatAttrById_m33699 (GameItem_t1172 * __this, int32_t ___attrtype, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetComBatAttrById_NoStarEnchance(System.Int32)
 int32_t GameItem_GetComBatAttrById_NoStarEnchance_m33700 (GameItem_t1172 * __this, int32_t ___attrtype, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetFullEnchanceExp()
 int32_t GameItem_GetFullEnchanceExp_m33701 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Item.ItemQuality Games.Item.GameItem::GetQuality()
 int32_t GameItem_GetQuality_m33702 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetEquipSetId()
 int32_t GameItem_GetEquipSetId_m33703 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetEquipSlotIndex()
 int32_t GameItem_GetEquipSlotIndex_m33704 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::IsBetterThanCurEquip()
 bool GameItem_IsBetterThanCurEquip_m33705 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Item.GameItem::GetStarColor()
 String_t* GameItem_GetStarColor_m33706 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetProfessionRequire()
 int32_t GameItem_GetProfessionRequire_m33707 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetBindType()
 int32_t GameItem_GetBindType_m33708 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetMinLevelRequire()
 int32_t GameItem_GetMinLevelRequire_m33709 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Item.GameItem::GetIcon()
 String_t* GameItem_GetIcon_m33710 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Item.GameItem::GetName()
 String_t* GameItem_GetName_m33711 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetClass()
 int32_t GameItem_GetClass_m33712 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetSubClass()
 int32_t GameItem_GetSubClass_m33713 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetThirdClass()
 int32_t GameItem_GetThirdClass_m33714 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetEnchanceExpMax()
 int32_t GameItem_GetEnchanceExpMax_m33715 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::CanSell()
 bool GameItem_CanSell_m33716 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::CanUse()
 bool GameItem_CanUse_m33717 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::CanThrow()
 bool GameItem_CanThrow_m33718 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::IsBelt()
 bool GameItem_IsBelt_m33719 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::IsGem()
 bool GameItem_IsGem_m33720 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Item.GameItem::GetQualityFrame()
 String_t* GameItem_GetQualityFrame_m33721 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetMaxStarLevel()
 int32_t GameItem_GetMaxStarLevel_m33722 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::IsFitForPlayer()
 bool GameItem_IsFitForPlayer_m33723 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::IsEnchanceExpItem()
 bool GameItem_IsEnchanceExpItem_m33724 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::IsStarStone()
 bool GameItem_IsStarStone_m33725 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::IsLivingSkillDrawing()
 bool GameItem_IsLivingSkillDrawing_m33726 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::IsFellowSkillBook()
 bool GameItem_IsFellowSkillBook_m33727 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::IsMountItem()
 bool GameItem_IsMountItem_m33728 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetMountId()
 int32_t GameItem_GetMountId_m33729 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::IsFellowTalentSkillBook()
 bool GameItem_IsFellowTalentSkillBook_m33730 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::get_DataID()
 int32_t GameItem_get_DataID_m33731 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.GameItem::set_DataID(System.Int32)
 void GameItem_set_DataID_m33732 (GameItem_t1172 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Games.Item.GameItem::get_Guid()
 uint64_t GameItem_get_Guid_m33733 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.GameItem::set_Guid(System.UInt64)
 void GameItem_set_Guid_m33734 (GameItem_t1172 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::get_BindFlag()
 bool GameItem_get_BindFlag_m33735 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.GameItem::set_BindFlag(System.Boolean)
 void GameItem_set_BindFlag_m33736 (GameItem_t1172 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::get_StackCount()
 int32_t GameItem_get_StackCount_m33737 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.GameItem::set_StackCount(System.Int32)
 void GameItem_set_StackCount_m33738 (GameItem_t1172 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::get_CreateTime()
 int32_t GameItem_get_CreateTime_m33739 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.GameItem::set_CreateTime(System.Int32)
 void GameItem_set_CreateTime_m33740 (GameItem_t1172 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::get_EnchanceLevel()
 int32_t GameItem_get_EnchanceLevel_m33741 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.GameItem::set_EnchanceLevel(System.Int32)
 void GameItem_set_EnchanceLevel_m33742 (GameItem_t1172 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::get_EnchanceExp()
 int32_t GameItem_get_EnchanceExp_m33743 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.GameItem::set_EnchanceExp(System.Int32)
 void GameItem_set_EnchanceExp_m33744 (GameItem_t1172 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Games.Item.GameItem::get_EnchanceTotalExp()
 int64_t GameItem_get_EnchanceTotalExp_m33745 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.GameItem::set_EnchanceTotalExp(System.Int64)
 void GameItem_set_EnchanceTotalExp_m33746 (GameItem_t1172 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::get_StarLevel()
 int32_t GameItem_get_StarLevel_m33747 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.GameItem::set_StarLevel(System.Int32)
 void GameItem_set_StarLevel_m33748 (GameItem_t1172 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::get_StarTimes()
 int32_t GameItem_get_StarTimes_m33749 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.GameItem::set_StarTimes(System.Int32)
 void GameItem_set_StarTimes_m33750 (GameItem_t1172 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Games.Item.GameItem::get_DynamicData()
 Int32U5BU5D_t116* GameItem_get_DynamicData_m33751 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.GameItem::set_DynamicData(System.Int32[])
 void GameItem_set_DynamicData_m33752 (GameItem_t1172 * __this, Int32U5BU5D_t116* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::get_AttrFactor()
 int32_t GameItem_get_AttrFactor_m33753 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.GameItem::set_AttrFactor(System.Int32)
 void GameItem_set_AttrFactor_m33754 (GameItem_t1172 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Games.Item.GameItem::GetAttrFactorRefix()
 float GameItem_GetAttrFactorRefix_m33755 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::IsPlayerEquiped()
 bool GameItem_IsPlayerEquiped_m33756 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Games.Item.GameItem::GetStarShowRate()
 float GameItem_GetStarShowRate_m33757 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetStarSuccessLeftTime()
 int32_t GameItem_GetStarSuccessLeftTime_m33758 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::IsTimeLimitItem()
 bool GameItem_IsTimeLimitItem_m33759 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetLeftTime()
 int32_t GameItem_GetLeftTime_m33760 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItem::IsShenQiEquipMent()
 bool GameItem_IsShenQiEquipMent_m33761 (GameItem_t1172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetShenQiRandAttrType(System.Int32)
 int32_t GameItem_GetShenQiRandAttrType_m33762 (GameItem_t1172 * __this, int32_t ___AttrDynamicData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetShenQiRandAttrNum(System.Int32)
 int32_t GameItem_GetShenQiRandAttrNum_m33763 (GameItem_t1172 * __this, int32_t ___AttrDynamicData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItem::GetShenQiRandAttrQuality(System.Int32)
 int32_t GameItem_GetShenQiRandAttrQuality_m33764 (GameItem_t1172 * __this, int32_t ___AttrDynamicData, MethodInfo* method) IL2CPP_METHOD_ATTR;
