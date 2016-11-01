#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// HuaShanPVPData
struct HuaShanPVPData_t4904;
// GC_HUASHAN_PVP_OPPONENTVIEW
struct GC_HUASHAN_PVP_OPPONENTVIEW_t3176;
// System.String
struct String_t;
// GC_HUASHAN_PVP_STATE
struct GC_HUASHAN_PVP_STATE_t3173;
// GC_DUEL_STATE
struct GC_DUEL_STATE_t3183;
// GC_HUASHAN_PVP_ShowSearch
struct GC_HUASHAN_PVP_ShowSearch_t3175;
// System.Object
struct Object_t;
// GC_HUASHAN_PVP_MEMBERLIST
struct GC_HUASHAN_PVP_MEMBERLIST_t3171;
// GC_MERCENARY_LIST_RES
struct GC_MERCENARY_LIST_RES_t3185;
// GC_MERCENARY_LEFTTIMES
struct GC_MERCENARY_LEFTTIMES_t3186;
// GC_MERCENARY_EMPLOYLIST
struct GC_MERCENARY_EMPLOYLIST_t3187;
// GC_WORLDBOSS_TEAMLIST
struct GC_WORLDBOSS_TEAMLIST_t3191;
// GC_WORLDBOSS_SOMECHALL_ME
struct GC_WORLDBOSS_SOMECHALL_ME_t3395;
// GC_RET_HUASHAN_PKINFO
struct GC_RET_HUASHAN_PKINFO_t3406;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void HuaShanPVPData::.ctor()
 void HuaShanPVPData__ctor_m34737 (HuaShanPVPData_t4904 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::.cctor()
 void HuaShanPVPData__cctor_m34738 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::ShowOppoentViewInfo(GC_HUASHAN_PVP_OPPONENTVIEW)
 void HuaShanPVPData_ShowOppoentViewInfo_m34739 (Object_t * __this/* static, unused */, GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::set_Resultwin(System.Int32)
 void HuaShanPVPData_set_Resultwin_m34740 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HuaShanPVPData::get_Resultwin()
 int32_t HuaShanPVPData_get_Resultwin_m34741 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::set_Rounder(System.Int32)
 void HuaShanPVPData_set_Rounder_m34742 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HuaShanPVPData::get_Rounder()
 int32_t HuaShanPVPData_get_Rounder_m34743 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::set_HuaShanPosition(System.Int32)
 void HuaShanPVPData_set_HuaShanPosition_m34744 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HuaShanPVPData::get_HuaShanPosition()
 int32_t HuaShanPVPData_get_HuaShanPosition_m34745 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::set_HuaShanState(System.Int32)
 void HuaShanPVPData_set_HuaShanState_m34746 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HuaShanPVPData::get_HuaShanState()
 int32_t HuaShanPVPData_get_HuaShanState_m34747 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HuaShanPVPData::HSRoundTipPrefix()
 String_t* HuaShanPVPData_HSRoundTipPrefix_m34748 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HuaShanPVPData::HSRounderTip()
 String_t* HuaShanPVPData_HSRounderTip_m34749 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::ChangeToDefaultWindow()
 void HuaShanPVPData_ChangeToDefaultWindow_m34750 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::DealHuaShanPvPState(GC_HUASHAN_PVP_STATE)
 void HuaShanPVPData_DealHuaShanPvPState_m34751 (Object_t * __this/* static, unused */, GC_HUASHAN_PVP_STATE_t3173 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::set_DuelResult(System.Int32)
 void HuaShanPVPData_set_DuelResult_m34752 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HuaShanPVPData::get_DuelResult()
 int32_t HuaShanPVPData_get_DuelResult_m34753 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::DealDuelState(GC_DUEL_STATE)
 void HuaShanPVPData_DealDuelState_m34754 (Object_t * __this/* static, unused */, GC_DUEL_STATE_t3183 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::set_ContinueSec(System.Int32)
 void HuaShanPVPData_set_ContinueSec_m34755 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HuaShanPVPData::get_ContinueSec()
 int32_t HuaShanPVPData_get_ContinueSec_m34756 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::ShowSearchOpponent(GC_HUASHAN_PVP_ShowSearch)
 void HuaShanPVPData_ShowSearchOpponent_m34757 (Object_t * __this/* static, unused */, GC_HUASHAN_PVP_ShowSearch_t3175 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::OnActiveShowActiviController(System.Boolean,System.Object)
 void HuaShanPVPData_OnActiveShowActiviController_m34758 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::CallShowSearchOpponentDelegate()
 void HuaShanPVPData_CallShowSearchOpponentDelegate_m34759 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::ShowRegisterMemberList(GC_HUASHAN_PVP_MEMBERLIST)
 void HuaShanPVPData_ShowRegisterMemberList_m34760 (Object_t * __this/* static, unused */, GC_HUASHAN_PVP_MEMBERLIST_t3171 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::set_MercenarySceneClass(System.Int32)
 void HuaShanPVPData_set_MercenarySceneClass_m34761 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HuaShanPVPData::get_MercenarySceneClass()
 int32_t HuaShanPVPData_get_MercenarySceneClass_m34762 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::set_MercenaryTimesLeft(System.Int32)
 void HuaShanPVPData_set_MercenaryTimesLeft_m34763 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HuaShanPVPData::get_MercenaryTimesLeft()
 int32_t HuaShanPVPData_get_MercenaryTimesLeft_m34764 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::ShowMercenaryList(GC_MERCENARY_LIST_RES)
 void HuaShanPVPData_ShowMercenaryList_m34765 (Object_t * __this/* static, unused */, GC_MERCENARY_LIST_RES_t3185 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::OnShowMercenaryMemberRoot(System.Boolean,System.Object)
 void HuaShanPVPData_OnShowMercenaryMemberRoot_m34766 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::CallShowMercenaryList()
 void HuaShanPVPData_CallShowMercenaryList_m34767 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::SetMercenaryLeftTimes(GC_MERCENARY_LEFTTIMES)
 void HuaShanPVPData_SetMercenaryLeftTimes_m34768 (Object_t * __this/* static, unused */, GC_MERCENARY_LEFTTIMES_t3186 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::CallShowMercenaryLeftTime()
 void HuaShanPVPData_CallShowMercenaryLeftTime_m34769 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::ShowMercenaryEmployed(GC_MERCENARY_EMPLOYLIST)
 void HuaShanPVPData_ShowMercenaryEmployed_m34770 (Object_t * __this/* static, unused */, GC_MERCENARY_EMPLOYLIST_t3187 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::set_WorldBossCurPage(System.Int32)
 void HuaShanPVPData_set_WorldBossCurPage_m34771 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HuaShanPVPData::get_WorldBossCurPage()
 int32_t HuaShanPVPData_get_WorldBossCurPage_m34772 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::set_WorldBossTotalPage(System.Int32)
 void HuaShanPVPData_set_WorldBossTotalPage_m34773 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HuaShanPVPData::get_WorldBossTotalPage()
 int32_t HuaShanPVPData_get_WorldBossTotalPage_m34774 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::set_WorldBossOpen(System.Int32)
 void HuaShanPVPData_set_WorldBossOpen_m34775 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HuaShanPVPData::get_WorldBossOpen()
 int32_t HuaShanPVPData_get_WorldBossOpen_m34776 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::set_IsClickWorldBossUI(System.Int32)
 void HuaShanPVPData_set_IsClickWorldBossUI_m34777 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HuaShanPVPData::get_IsClickWorldBossUI()
 int32_t HuaShanPVPData_get_IsClickWorldBossUI_m34778 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::ShowWorldBossList(GC_WORLDBOSS_TEAMLIST)
 void HuaShanPVPData_ShowWorldBossList_m34779 (Object_t * __this/* static, unused */, GC_WORLDBOSS_TEAMLIST_t3191 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::OnShowWorldBossMemberRoot(System.Boolean,System.Object)
 void HuaShanPVPData_OnShowWorldBossMemberRoot_m34780 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::CallShowWorldBossList()
 void HuaShanPVPData_CallShowWorldBossList_m34781 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::ShowWorldBossChallengeBox(GC_WORLDBOSS_SOMECHALL_ME)
 void HuaShanPVPData_ShowWorldBossChallengeBox_m34782 (Object_t * __this/* static, unused */, GC_WORLDBOSS_SOMECHALL_ME_t3395 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::SendAgreeWorldBossChallenge()
 void HuaShanPVPData_SendAgreeWorldBossChallenge_m34783 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::SendDisagreeWorldBossChallenge()
 void HuaShanPVPData_SendDisagreeWorldBossChallenge_m34784 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData::ShowHuaShanPkInfoList(GC_RET_HUASHAN_PKINFO)
 void HuaShanPVPData_ShowHuaShanPkInfoList_m34785 (Object_t * __this/* static, unused */, GC_RET_HUASHAN_PKINFO_t3406 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime HuaShanPVPData::GetCurrentDateTime()
 DateTime_t1171  HuaShanPVPData_GetCurrentDateTime_m34786 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HuaShanPVPData::IsHuaShanPvPOpen()
 bool HuaShanPVPData_IsHuaShanPvPOpen_m34787 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
