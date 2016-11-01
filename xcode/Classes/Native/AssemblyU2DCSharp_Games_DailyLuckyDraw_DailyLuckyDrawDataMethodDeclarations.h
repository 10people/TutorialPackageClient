#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.DailyLuckyDraw.DailyLuckyDrawData
struct DailyLuckyDrawData_t4713;
// GC_DAILYLUCKYDRAW_GAINBONUS
struct GC_DAILYLUCKYDRAW_GAINBONUS_t3209;
// GC_DAILYLUCKYDRAW_UPDATE
struct GC_DAILYLUCKYDRAW_UPDATE_t3210;
// GC_DAILYLUCKYDRAW_FAIL
struct GC_DAILYLUCKYDRAW_FAIL_t3212;

// System.Void Games.DailyLuckyDraw.DailyLuckyDrawData::.ctor()
 void DailyLuckyDrawData__ctor_m33267 (DailyLuckyDrawData_t4713 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.DailyLuckyDraw.DailyLuckyDrawData::get_DrawFreeTimes()
 int32_t DailyLuckyDrawData_get_DrawFreeTimes_m33268 (DailyLuckyDrawData_t4713 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyLuckyDraw.DailyLuckyDrawData::set_DrawFreeTimes(System.Int32)
 void DailyLuckyDrawData_set_DrawFreeTimes_m33269 (DailyLuckyDrawData_t4713 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.DailyLuckyDraw.DailyLuckyDrawData::get_DrawFreeCDTime()
 int32_t DailyLuckyDrawData_get_DrawFreeCDTime_m33270 (DailyLuckyDrawData_t4713 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyLuckyDraw.DailyLuckyDrawData::set_DrawFreeCDTime(System.Int32)
 void DailyLuckyDrawData_set_DrawFreeCDTime_m33271 (DailyLuckyDrawData_t4713 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Games.DailyLuckyDraw.DailyLuckyDrawData::get_TickTime()
 float DailyLuckyDrawData_get_TickTime_m33272 (DailyLuckyDrawData_t4713 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyLuckyDraw.DailyLuckyDrawData::set_TickTime(System.Single)
 void DailyLuckyDrawData_set_TickTime_m33273 (DailyLuckyDrawData_t4713 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.DailyLuckyDraw.DailyLuckyDrawData::get_DrawType()
 int32_t DailyLuckyDrawData_get_DrawType_m33274 (DailyLuckyDrawData_t4713 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyLuckyDraw.DailyLuckyDrawData::set_DrawType(System.Int32)
 void DailyLuckyDrawData_set_DrawType_m33275 (DailyLuckyDrawData_t4713 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.DailyLuckyDraw.DailyLuckyDrawData::get_Drawing()
 bool DailyLuckyDrawData_get_Drawing_m33276 (DailyLuckyDrawData_t4713 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyLuckyDraw.DailyLuckyDrawData::set_Drawing(System.Boolean)
 void DailyLuckyDrawData_set_Drawing_m33277 (DailyLuckyDrawData_t4713 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyLuckyDraw.DailyLuckyDrawData::CleanUp()
 void DailyLuckyDrawData_CleanUp_m33278 (DailyLuckyDrawData_t4713 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyLuckyDraw.DailyLuckyDrawData::CleanUpGainBonus()
 void DailyLuckyDrawData_CleanUpGainBonus_m33279 (DailyLuckyDrawData_t4713 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.DailyLuckyDraw.DailyLuckyDrawData::GetMaxBonusBoxCount()
 int32_t DailyLuckyDrawData_GetMaxBonusBoxCount_m33280 (DailyLuckyDrawData_t4713 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.DailyLuckyDraw.DailyLuckyDrawData::GetMaxGainBonusCount()
 int32_t DailyLuckyDrawData_GetMaxGainBonusCount_m33281 (DailyLuckyDrawData_t4713 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyLuckyDraw.DailyLuckyDrawData::HandlePacket(GC_DAILYLUCKYDRAW_GAINBONUS)
 void DailyLuckyDrawData_HandlePacket_m33282 (DailyLuckyDrawData_t4713 * __this, GC_DAILYLUCKYDRAW_GAINBONUS_t3209 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyLuckyDraw.DailyLuckyDrawData::HandlePacket(GC_DAILYLUCKYDRAW_UPDATE)
 void DailyLuckyDrawData_HandlePacket_m33283 (DailyLuckyDrawData_t4713 * __this, GC_DAILYLUCKYDRAW_UPDATE_t3210 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyLuckyDraw.DailyLuckyDrawData::HandlePacket(GC_DAILYLUCKYDRAW_FAIL)
 void DailyLuckyDrawData_HandlePacket_m33284 (DailyLuckyDrawData_t4713 * __this, GC_DAILYLUCKYDRAW_FAIL_t3212 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.DailyLuckyDraw.DailyLuckyDrawData::GetGainBonusID(System.Int32)
 int32_t DailyLuckyDrawData_GetGainBonusID_m33285 (DailyLuckyDrawData_t4713 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyLuckyDraw.DailyLuckyDrawData::Tick_FreeCDTime()
 void DailyLuckyDrawData_Tick_FreeCDTime_m33286 (DailyLuckyDrawData_t4713 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
