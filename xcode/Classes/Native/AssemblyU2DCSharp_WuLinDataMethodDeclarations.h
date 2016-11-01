#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WuLinData
struct WuLinData_t5000;
// GC_WULIN_OPPONENTVIEW
struct GC_WULIN_OPPONENTVIEW_t3505;
// System.String
struct String_t;
// GC_WULIN_STATE
struct GC_WULIN_STATE_t3503;
// GC_WULIN_ShowSearch
struct GC_WULIN_ShowSearch_t3504;
// System.Object
struct Object_t;
// GC_WULIN_MEMBERLIST
struct GC_WULIN_MEMBERLIST_t3500;
// GC_RET_HUASHAN_PKINFO
struct GC_RET_HUASHAN_PKINFO_t3406;
// GC_WULIN_HEROS_LIST
struct GC_WULIN_HEROS_LIST_t3513;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void WuLinData::.ctor()
 void WuLinData__ctor_m35750 (WuLinData_t5000 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::.cctor()
 void WuLinData__cctor_m35751 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::ShowOppoentViewInfo(GC_WULIN_OPPONENTVIEW)
 void WuLinData_ShowOppoentViewInfo_m35752 (Object_t * __this/* static, unused */, GC_WULIN_OPPONENTVIEW_t3505 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::set_Resultwin(System.Int32)
 void WuLinData_set_Resultwin_m35753 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WuLinData::get_Resultwin()
 int32_t WuLinData_get_Resultwin_m35754 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::set_Rounder(System.Int32)
 void WuLinData_set_Rounder_m35755 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WuLinData::get_Rounder()
 int32_t WuLinData_get_Rounder_m35756 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::set_WuLinPosition(System.Int32)
 void WuLinData_set_WuLinPosition_m35757 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WuLinData::get_WuLinPosition()
 int32_t WuLinData_get_WuLinPosition_m35758 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::set_WuLinState(System.Int32)
 void WuLinData_set_WuLinState_m35759 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WuLinData::get_WuLinState()
 int32_t WuLinData_get_WuLinState_m35760 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WuLinData::WuLinRoundTipPrefix()
 String_t* WuLinData_WuLinRoundTipPrefix_m35761 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WuLinData::WuLinRounderTip()
 String_t* WuLinData_WuLinRounderTip_m35762 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::ChangeToDefaultWindow()
 void WuLinData_ChangeToDefaultWindow_m35763 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::DealWuLinState(GC_WULIN_STATE)
 void WuLinData_DealWuLinState_m35764 (Object_t * __this/* static, unused */, GC_WULIN_STATE_t3503 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::set_ContinueSec(System.Int32)
 void WuLinData_set_ContinueSec_m35765 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WuLinData::get_ContinueSec()
 int32_t WuLinData_get_ContinueSec_m35766 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::ShowSearchOpponent(GC_WULIN_ShowSearch)
 void WuLinData_ShowSearchOpponent_m35767 (Object_t * __this/* static, unused */, GC_WULIN_ShowSearch_t3504 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::OnActiveShowActiviController(System.Boolean,System.Object)
 void WuLinData_OnActiveShowActiviController_m35768 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::CallShowSearchOpponentDelegate()
 void WuLinData_CallShowSearchOpponentDelegate_m35769 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::ShowRegisterMemberList(GC_WULIN_MEMBERLIST)
 void WuLinData_ShowRegisterMemberList_m35770 (Object_t * __this/* static, unused */, GC_WULIN_MEMBERLIST_t3500 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::set_CurWuLinPage(System.Int32)
 void WuLinData_set_CurWuLinPage_m35771 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WuLinData::get_CurWuLinPage()
 int32_t WuLinData_get_CurWuLinPage_m35772 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::set_MaxWuLinPage(System.Int32)
 void WuLinData_set_MaxWuLinPage_m35773 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WuLinData::get_MaxWuLinPage()
 int32_t WuLinData_get_MaxWuLinPage_m35774 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::ShowWuLinPkInfoList(GC_RET_HUASHAN_PKINFO)
 void WuLinData_ShowWuLinPkInfoList_m35775 (Object_t * __this/* static, unused */, GC_RET_HUASHAN_PKINFO_t3406 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime WuLinData::GetCurrentDateTime()
 DateTime_t1171  WuLinData_GetCurrentDateTime_m35776 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData::ShowWuLinHerosInHistory(GC_WULIN_HEROS_LIST)
 void WuLinData_ShowWuLinHerosInHistory_m35777 (Object_t * __this/* static, unused */, GC_WULIN_HEROS_LIST_t3513 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
