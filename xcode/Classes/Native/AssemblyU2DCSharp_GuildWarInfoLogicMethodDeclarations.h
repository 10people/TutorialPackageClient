#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GuildWarInfoLogic
struct GuildWarInfoLogic_t1478;
// GC_RET_PRELIMINARY_WARINFO
struct GC_RET_PRELIMINARY_WARINFO_t1479;
// GC_RET_RANK
struct GC_RET_RANK_t1480;
// GC_RET_FINALGUILDWARGROUPINFO
struct GC_RET_FINALGUILDWARGROUPINFO_t1481;
// GC_RET_FINALGUILDWARPOINTINFO
struct GC_RET_FINALGUILDWARPOINTINFO_t1482;
// System.String
struct String_t;

// System.Void GuildWarInfoLogic::.ctor()
 void GuildWarInfoLogic__ctor_m8974 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::.cctor()
 void GuildWarInfoLogic__cctor_m8975 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GuildWarInfoLogic::get_CurWarType()
 int32_t GuildWarInfoLogic_get_CurWarType_m8976 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::set_CurWarType(System.Int32)
 void GuildWarInfoLogic_set_CurWarType_m8977 (GuildWarInfoLogic_t1478 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GuildWarInfoLogic GuildWarInfoLogic::Instance()
 GuildWarInfoLogic_t1478 * GuildWarInfoLogic_Instance_m8978 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::Awake()
 void GuildWarInfoLogic_Awake_m8979 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::Start()
 void GuildWarInfoLogic_Start_m8980 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::OnDestroy()
 void GuildWarInfoLogic_OnDestroy_m8981 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::OnEnable()
 void GuildWarInfoLogic_OnEnable_m8982 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::AskCurWarTypeInfo()
 void GuildWarInfoLogic_AskCurWarTypeInfo_m8983 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::ShowNoWarUI()
 void GuildWarInfoLogic_ShowNoWarUI_m8984 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::ShowPreliminaryUI()
 void GuildWarInfoLogic_ShowPreliminaryUI_m8985 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::ShowFinalUI()
 void GuildWarInfoLogic_ShowFinalUI_m8986 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::RetCurWarType(System.Int32,System.Int32)
 void GuildWarInfoLogic_RetCurWarType_m8987 (GuildWarInfoLogic_t1478 * __this, int32_t ___nWarType, int32_t ___nRetType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::Update()
 void GuildWarInfoLogic_Update_m8988 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::UpdateGuildWarPreliminaryInfo(GC_RET_PRELIMINARY_WARINFO)
 void GuildWarInfoLogic_UpdateGuildWarPreliminaryInfo_m8989 (GuildWarInfoLogic_t1478 * __this, GC_RET_PRELIMINARY_WARINFO_t1479 * ___pak, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::UpdateGuildWarPreliminaryRankInfo(GC_RET_RANK)
 void GuildWarInfoLogic_UpdateGuildWarPreliminaryRankInfo_m8990 (GuildWarInfoLogic_t1478 * __this, GC_RET_RANK_t1480 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::UpdateGuildWarKillRankInfo(GC_RET_RANK)
 void GuildWarInfoLogic_UpdateGuildWarKillRankInfo_m8991 (GuildWarInfoLogic_t1478 * __this, GC_RET_RANK_t1480 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::UpdateWarGroupInfo(GC_RET_FINALGUILDWARGROUPINFO)
 void GuildWarInfoLogic_UpdateWarGroupInfo_m8992 (GuildWarInfoLogic_t1478 * __this, GC_RET_FINALGUILDWARGROUPINFO_t1481 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::UpdateWarPointInfo(GC_RET_FINALGUILDWARPOINTINFO)
 void GuildWarInfoLogic_UpdateWarPointInfo_m8993 (GuildWarInfoLogic_t1478 * __this, GC_RET_FINALGUILDWARPOINTINFO_t1482 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::OnLoadItem()
 void GuildWarInfoLogic_OnLoadItem_m8994 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::ClickEnterPreliminaryGuildWar()
 void GuildWarInfoLogic_ClickEnterPreliminaryGuildWar_m8995 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::CloseWindow()
 void GuildWarInfoLogic_CloseWindow_m8996 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::AskPreliminaryGuildWarInfo()
 void GuildWarInfoLogic_AskPreliminaryGuildWarInfo_m8997 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::AskFinalWarInfo()
 void GuildWarInfoLogic_AskFinalWarInfo_m8998 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GuildWarInfoLogic::GetWarPointNameByType(System.Int32)
 String_t* GuildWarInfoLogic_GetWarPointNameByType_m8999 (Object_t * __this/* static, unused */, int32_t ___ponitType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::ClosGroupInfo()
 void GuildWarInfoLogic_ClosGroupInfo_m9000 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::ClosPreliminaryRankInfo()
 void GuildWarInfoLogic_ClosPreliminaryRankInfo_m9001 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::ClickShowGroupInfo()
 void GuildWarInfoLogic_ClickShowGroupInfo_m9002 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::ClickShowPreliminaryRankInfo()
 void GuildWarInfoLogic_ClickShowPreliminaryRankInfo_m9003 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::PressPointHelpBt()
 void GuildWarInfoLogic_PressPointHelpBt_m9004 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarInfoLogic::OnRelePointHelpBt()
 void GuildWarInfoLogic_OnRelePointHelpBt_m9005 (GuildWarInfoLogic_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
