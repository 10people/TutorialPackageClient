#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PayActivityData
struct PayActivityData_t4938;
struct PayActivityData_t4938_marshaled;
// GC_SYNC_PAY_ACTIVITY_DATA
struct GC_SYNC_PAY_ACTIVITY_DATA_t3375;
// GC_ASK_PAY_ACTIVITY_PRIZE_RET
struct GC_ASK_PAY_ACTIVITY_PRIZE_RET_t3379;

// System.Boolean PayActivityData::IsFirstTimeFlag()
 bool PayActivityData_IsFirstTimeFlag_m34982 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PayActivityData::IsMonthCardFlag()
 bool PayActivityData_IsMonthCardFlag_m34983 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PayActivityData::IsMonthCardTodayFlag()
 bool PayActivityData_IsMonthCardTodayFlag_m34984 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PayActivityData::IsGrowUpFlag()
 bool PayActivityData_IsGrowUpFlag_m34985 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PayActivityData::IsGrowUp40Flag()
 bool PayActivityData_IsGrowUp40Flag_m34986 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PayActivityData::IsGrowUp50Flag()
 bool PayActivityData_IsGrowUp50Flag_m34987 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PayActivityData::IsGrowUp60Flag()
 bool PayActivityData_IsGrowUp60Flag_m34988 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PayActivityData::IsGrowUp70Flag()
 bool PayActivityData_IsGrowUp70Flag_m34989 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PayActivityData::IsGrowUp80Flag()
 bool PayActivityData_IsGrowUp80Flag_m34990 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PayActivityData::IsGrowUp90Flag()
 bool PayActivityData_IsGrowUp90Flag_m34991 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PayActivityData::IsDayCardFlag()
 bool PayActivityData_IsDayCardFlag_m34992 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PayActivityData::IsFirstWeekOver()
 bool PayActivityData_IsFirstWeekOver_m34993 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PayActivityData::GetMonthCardLeftDay()
 int32_t PayActivityData_GetMonthCardLeftDay_m34994 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PayActivityData::IsMonthCardOver()
 bool PayActivityData_IsMonthCardOver_m34995 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PayActivityData::IsGrowUpOver()
 bool PayActivityData_IsGrowUpOver_m34996 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PayActivityData::GetYBPrizeRate()
 float PayActivityData_GetYBPrizeRate_m34997 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PayActivityData::CleanUp()
 void PayActivityData_CleanUp_m34998 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PayActivityData::get_MonthCardBeginTime()
 int32_t PayActivityData_get_MonthCardBeginTime_m34999 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PayActivityData::set_MonthCardBeginTime(System.Int32)
 void PayActivityData_set_MonthCardBeginTime_m35000 (PayActivityData_t4938 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PayActivityData::get_MonthCardYBTotal()
 int32_t PayActivityData_get_MonthCardYBTotal_m35001 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PayActivityData::set_MonthCardYBTotal(System.Int32)
 void PayActivityData_set_MonthCardYBTotal_m35002 (PayActivityData_t4938 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PayActivityData::get_StartServerDays()
 int32_t PayActivityData_get_StartServerDays_m35003 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PayActivityData::set_StartServerDays(System.Int32)
 void PayActivityData_set_StartServerDays_m35004 (PayActivityData_t4938 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PayActivityData::get_RebateOpen()
 bool PayActivityData_get_RebateOpen_m35005 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PayActivityData::set_RebateOpen(System.Boolean)
 void PayActivityData_set_RebateOpen_m35006 (PayActivityData_t4938 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PayActivityData::get_RebateRate()
 float PayActivityData_get_RebateRate_m35007 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PayActivityData::set_RebateRate(System.Single)
 void PayActivityData_set_RebateRate_m35008 (PayActivityData_t4938 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PayActivityData::get_OldServerRate()
 float PayActivityData_get_OldServerRate_m35009 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PayActivityData::set_OldServerRate(System.Single)
 void PayActivityData_set_OldServerRate_m35010 (PayActivityData_t4938 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PayActivityData::get_GrowUpLevel()
 int32_t PayActivityData_get_GrowUpLevel_m35011 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PayActivityData::set_GrowUpLevel(System.Int32)
 void PayActivityData_set_GrowUpLevel_m35012 (PayActivityData_t4938 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PayActivityData::get_DayCardOpen()
 bool PayActivityData_get_DayCardOpen_m35013 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PayActivityData::set_DayCardOpen(System.Boolean)
 void PayActivityData_set_DayCardOpen_m35014 (PayActivityData_t4938 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PayActivityData::HandlePacket(GC_SYNC_PAY_ACTIVITY_DATA)
 void PayActivityData_HandlePacket_m35015 (PayActivityData_t4938 * __this, GC_SYNC_PAY_ACTIVITY_DATA_t3375 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PayActivityData::HandlePacket(GC_ASK_PAY_ACTIVITY_PRIZE_RET)
 void PayActivityData_HandlePacket_m35016 (PayActivityData_t4938 * __this, GC_ASK_PAY_ACTIVITY_PRIZE_RET_t3379 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PayActivityData::SendMonthCardPacket()
 void PayActivityData_SendMonthCardPacket_m35017 (PayActivityData_t4938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PayActivityData::SendGrowUpPacket(System.Int32)
 void PayActivityData_SendGrowUpPacket_m35018 (PayActivityData_t4938 * __this, int32_t ___level, MethodInfo* method) IL2CPP_METHOD_ATTR;
void PayActivityData_t4938_marshal(const PayActivityData_t4938& unmarshaled, PayActivityData_t4938_marshaled& marshaled);
void PayActivityData_t4938_marshal_back(const PayActivityData_t4938_marshaled& marshaled, PayActivityData_t4938& unmarshaled);
void PayActivityData_t4938_marshal_cleanup(PayActivityData_t4938_marshaled& marshaled);
