#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.AwardActivity.AwardActivityData
struct AwardActivityData_t4544;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>
struct Dictionary_2_t4543;
// GC_NEWSERVERAWARD_DATA
struct GC_NEWSERVERAWARD_DATA_t3068;
// GC_DAYAWARD_DATA
struct GC_DAYAWARD_DATA_t3070;
// GC_ONLINEAWARD_DATA
struct GC_ONLINEAWARD_DATA_t3072;
// GC_NEWONLINEAWARD_DATA
struct GC_NEWONLINEAWARD_DATA_t3368;
// GC_RET_GETREWARDFORSIGNIN
struct GC_RET_GETREWARDFORSIGNIN_t3477;
// GC_ASK_ACTIVENESSAWARD_RET
struct GC_ASK_ACTIVENESSAWARD_RET_t3074;
// GC_SYNC_ACTIVENESSAWARD
struct GC_SYNC_ACTIVENESSAWARD_t3075;
// GC_SYNC_ACTIVENESS
struct GC_SYNC_ACTIVENESS_t3218;
// GC_NEW7DAYONLINEAWARD_DATA
struct GC_NEW7DAYONLINEAWARD_DATA_t3431;
// GC_SYNC_NEW7DAYONLINEAWARDTABLE
struct GC_SYNC_NEW7DAYONLINEAWARDTABLE_t3432;
// Games.AwardActivity.NewOnlineDateTime
#include "AssemblyU2DCSharp_Games_AwardActivity_NewOnlineDateTime.h"
// Games.AwardActivity.AwardActivityType
#include "AssemblyU2DCSharp_Games_AwardActivity_AwardActivityType.h"
// Games.AwardActivity.OnlineAwardLine
#include "AssemblyU2DCSharp_Games_AwardActivity_OnlineAwardLine.h"

// System.Int32 Games.AwardActivity.AwardActivityData::get_NewServerDays()
 int32_t AwardActivityData_get_NewServerDays_m32605 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::set_NewServerDays(System.Int32)
 void AwardActivityData_set_NewServerDays_m32606 (AwardActivityData_t4544 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AwardActivity.AwardActivityData::GetNewServerAwardFlag(System.Int32)
 bool AwardActivityData_GetNewServerAwardFlag_m32607 (AwardActivityData_t4544 * __this, int32_t ___nDay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AwardActivity.AwardActivityData::IsCanGetAward(System.Int32)
 bool AwardActivityData_IsCanGetAward_m32608 (AwardActivityData_t4544 * __this, int32_t ___nDay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AwardActivity.AwardActivityData::get_WeekDay()
 int32_t AwardActivityData_get_WeekDay_m32609 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::set_WeekDay(System.Int32)
 void AwardActivityData_set_WeekDay_m32610 (AwardActivityData_t4544 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AwardActivity.AwardActivityData::get_DayAwardFlag()
 bool AwardActivityData_get_DayAwardFlag_m32611 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::set_DayAwardFlag(System.Boolean)
 void AwardActivityData_set_DayAwardFlag_m32612 (AwardActivityData_t4544 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AwardActivity.AwardActivityData::get_OnlineAwardID()
 int32_t AwardActivityData_get_OnlineAwardID_m32613 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::set_OnlineAwardID(System.Int32)
 void AwardActivityData_set_OnlineAwardID_m32614 (AwardActivityData_t4544 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AwardActivity.AwardActivityData::get_LeftTime()
 int32_t AwardActivityData_get_LeftTime_m32615 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::set_LeftTime(System.Int32)
 void AwardActivityData_set_LeftTime_m32616 (AwardActivityData_t4544 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AwardActivity.AwardActivityData::get_NewOnlineAwardID()
 int32_t AwardActivityData_get_NewOnlineAwardID_m32617 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::set_NewOnlineAwardID(System.Int32)
 void AwardActivityData_set_NewOnlineAwardID_m32618 (AwardActivityData_t4544 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AwardActivity.AwardActivityData::get_NewLeftTime()
 int32_t AwardActivityData_get_NewLeftTime_m32619 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::set_NewLeftTime(System.Int32)
 void AwardActivityData_set_NewLeftTime_m32620 (AwardActivityData_t4544 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AwardActivity.AwardActivityData::get_NewOnlineAwardStart()
 bool AwardActivityData_get_NewOnlineAwardStart_m32621 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::set_NewOnlineAwardStart(System.Boolean)
 void AwardActivityData_set_NewOnlineAwardStart_m32622 (AwardActivityData_t4544 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AwardActivity.AwardActivityData::get_Activeness()
 int32_t AwardActivityData_get_Activeness_m32623 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::set_Activeness(System.Int32)
 void AwardActivityData_set_Activeness_m32624 (AwardActivityData_t4544 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::CleanUp()
 void AwardActivityData_CleanUp_m32625 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::Tick_Award()
 void AwardActivityData_Tick_Award_m32626 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::SendAwardPacket(Games.AwardActivity.AwardActivityType)
 void AwardActivityData_SendAwardPacket_m32627 (AwardActivityData_t4544 * __this, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::HandlePacket(GC_NEWSERVERAWARD_DATA)
 void AwardActivityData_HandlePacket_m32628 (AwardActivityData_t4544 * __this, GC_NEWSERVERAWARD_DATA_t3068 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::HandlePacket(GC_DAYAWARD_DATA)
 void AwardActivityData_HandlePacket_m32629 (AwardActivityData_t4544 * __this, GC_DAYAWARD_DATA_t3070 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::HandlePacket(GC_ONLINEAWARD_DATA)
 void AwardActivityData_HandlePacket_m32630 (AwardActivityData_t4544 * __this, GC_ONLINEAWARD_DATA_t3072 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::HandlePacket(GC_NEWONLINEAWARD_DATA)
 void AwardActivityData_HandlePacket_m32631 (AwardActivityData_t4544 * __this, GC_NEWONLINEAWARD_DATA_t3368 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::HandlePacket(GC_RET_GETREWARDFORSIGNIN)
 void AwardActivityData_HandlePacket_m32632 (AwardActivityData_t4544 * __this, GC_RET_GETREWARDFORSIGNIN_t3477 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::SetActivenessFlag(System.Int32,System.Boolean)
 void AwardActivityData_SetActivenessFlag_m32633 (AwardActivityData_t4544 * __this, int32_t ___nTurnID, bool ___bFlag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AwardActivity.AwardActivityData::GetActivenessAwardFlag(System.Int32)
 bool AwardActivityData_GetActivenessAwardFlag_m32634 (AwardActivityData_t4544 * __this, int32_t ___nTurnID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::SendActivenessAward(System.Int32)
 void AwardActivityData_SendActivenessAward_m32635 (AwardActivityData_t4544 * __this, int32_t ___nTurnID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::HandlePacket(GC_ASK_ACTIVENESSAWARD_RET)
 void AwardActivityData_HandlePacket_m32636 (AwardActivityData_t4544 * __this, GC_ASK_ACTIVENESSAWARD_RET_t3074 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::HandlePacket(GC_SYNC_ACTIVENESSAWARD)
 void AwardActivityData_HandlePacket_m32637 (AwardActivityData_t4544 * __this, GC_SYNC_ACTIVENESSAWARD_t3075 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::HandlePacket(GC_SYNC_ACTIVENESS)
 void AwardActivityData_HandlePacket_m32638 (AwardActivityData_t4544 * __this, GC_SYNC_ACTIVENESS_t3218 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AwardActivity.AwardActivityData::get_ShowNew7DayOnlineAwardWindow()
 bool AwardActivityData_get_ShowNew7DayOnlineAwardWindow_m32639 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::set_ShowNew7DayOnlineAwardWindow(System.Boolean)
 void AwardActivityData_set_ShowNew7DayOnlineAwardWindow_m32640 (AwardActivityData_t4544 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AwardActivity.AwardActivityData::get_New7DayOnlineAwardID()
 int32_t AwardActivityData_get_New7DayOnlineAwardID_m32641 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::set_New7DayOnlineAwardID(System.Int32)
 void AwardActivityData_set_New7DayOnlineAwardID_m32642 (AwardActivityData_t4544 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AwardActivity.AwardActivityData::get_New7DayLeftTime()
 int32_t AwardActivityData_get_New7DayLeftTime_m32643 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::set_New7DayLeftTime(System.Int32)
 void AwardActivityData_set_New7DayLeftTime_m32644 (AwardActivityData_t4544 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AwardActivity.AwardActivityData::get_New7DayOnlineAwardStart()
 bool AwardActivityData_get_New7DayOnlineAwardStart_m32645 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::set_New7DayOnlineAwardStart(System.Boolean)
 void AwardActivityData_set_New7DayOnlineAwardStart_m32646 (AwardActivityData_t4544 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine> Games.AwardActivity.AwardActivityData::get_New7DayOnlineAwardTable()
 Dictionary_2_t4543 * AwardActivityData_get_New7DayOnlineAwardTable_m32647 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::set_New7DayOnlineAwardTable(System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>)
 void AwardActivityData_set_New7DayOnlineAwardTable_m32648 (AwardActivityData_t4544 * __this, Dictionary_2_t4543 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::AddNew7DayOnlineAwardLine(Games.AwardActivity.OnlineAwardLine)
 void AwardActivityData_AddNew7DayOnlineAwardLine_m32649 (AwardActivityData_t4544 * __this, OnlineAwardLine_t4542  ___DataLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.AwardActivity.NewOnlineDateTime Games.AwardActivity.AwardActivityData::get_New7DayOnlineDateTime()
 NewOnlineDateTime_t4545  AwardActivityData_get_New7DayOnlineDateTime_m32650 (AwardActivityData_t4544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::set_New7DayOnlineDateTime(Games.AwardActivity.NewOnlineDateTime)
 void AwardActivityData_set_New7DayOnlineDateTime_m32651 (AwardActivityData_t4544 * __this, NewOnlineDateTime_t4545  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::HandlePacket(GC_NEW7DAYONLINEAWARD_DATA)
 void AwardActivityData_HandlePacket_m32652 (AwardActivityData_t4544 * __this, GC_NEW7DAYONLINEAWARD_DATA_t3431 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AwardActivity.AwardActivityData::HandlePacket(GC_SYNC_NEW7DAYONLINEAWARDTABLE)
 void AwardActivityData_HandlePacket_m32653 (AwardActivityData_t4544 * __this, GC_SYNC_NEW7DAYONLINEAWARDTABLE_t3432 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
