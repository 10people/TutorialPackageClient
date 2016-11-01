#pragma once
#include <stdint.h>
// System.Boolean[]
struct BooleanU5BU5D_t102;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>
struct Dictionary_2_t4543;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// Games.AwardActivity.NewOnlineDateTime
#include "AssemblyU2DCSharp_Games_AwardActivity_NewOnlineDateTime.h"
// Games.AwardActivity.AwardActivityData
struct AwardActivityData_t4544 
{
	// System.Int32 Games.AwardActivity.AwardActivityData::m_nNewServerDays
	int32_t ___m_nNewServerDays;
	// System.Boolean[] Games.AwardActivity.AwardActivityData::m_bNewServerAwardFlag
	BooleanU5BU5D_t102* ___m_bNewServerAwardFlag;
	// System.Int32 Games.AwardActivity.AwardActivityData::m_nWeekDay
	int32_t ___m_nWeekDay;
	// System.Boolean Games.AwardActivity.AwardActivityData::m_bDayAwardFlag
	bool ___m_bDayAwardFlag;
	// System.Int32 Games.AwardActivity.AwardActivityData::m_nOnlineAwardID
	int32_t ___m_nOnlineAwardID;
	// System.Int32 Games.AwardActivity.AwardActivityData::m_nLeftTime
	int32_t ___m_nLeftTime;
	// System.Single Games.AwardActivity.AwardActivityData::m_CurTimeCount
	float ___m_CurTimeCount;
	// System.Int32 Games.AwardActivity.AwardActivityData::m_nNewOnlineAwardID
	int32_t ___m_nNewOnlineAwardID;
	// System.Int32 Games.AwardActivity.AwardActivityData::m_nNewLeftTime
	int32_t ___m_nNewLeftTime;
	// System.Boolean Games.AwardActivity.AwardActivityData::m_bNewOnlineAwardStart
	bool ___m_bNewOnlineAwardStart;
	// System.Int32 Games.AwardActivity.AwardActivityData::m_nActiveness
	int32_t ___m_nActiveness;
	// System.Boolean[] Games.AwardActivity.AwardActivityData::m_bActivenessAwardFlag
	BooleanU5BU5D_t102* ___m_bActivenessAwardFlag;
	// System.Boolean Games.AwardActivity.AwardActivityData::m_IsShowNew7DayOnlineAwardWindow
	bool ___m_IsShowNew7DayOnlineAwardWindow;
	// System.Int32 Games.AwardActivity.AwardActivityData::m_nNew7DayOnlineAwardID
	int32_t ___m_nNew7DayOnlineAwardID;
	// System.Int32 Games.AwardActivity.AwardActivityData::m_nNew7DayLeftTime
	int32_t ___m_nNew7DayLeftTime;
	// System.Boolean Games.AwardActivity.AwardActivityData::m_bNew7DayOnlineAwardStart
	bool ___m_bNew7DayOnlineAwardStart;
	// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine> Games.AwardActivity.AwardActivityData::m_New7DayOnlineAwardTable
	Dictionary_2_t4543 * ___m_New7DayOnlineAwardTable;
	// Games.AwardActivity.NewOnlineDateTime Games.AwardActivity.AwardActivityData::m_sNew7DayOnlineDateTime
	NewOnlineDateTime_t4545  ___m_sNew7DayOnlineDateTime;
};
