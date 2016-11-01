#pragma once
#include <stdint.h>
// System.Boolean[]
struct BooleanU5BU5D_t102;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// PayActivityData
struct PayActivityData_t4938 
{
	// System.Boolean[] PayActivityData::m_Flags
	BooleanU5BU5D_t102* ___m_Flags;
	// System.Int32 PayActivityData::m_MonthCardBeginTime
	int32_t ___m_MonthCardBeginTime;
	// System.Int32 PayActivityData::m_MonthCardYBTotal
	int32_t ___m_MonthCardYBTotal;
	// System.Int32 PayActivityData::m_StartServerDays
	int32_t ___m_StartServerDays;
	// System.Boolean PayActivityData::m_RebateOpen
	bool ___m_RebateOpen;
	// System.Single PayActivityData::m_RebateRate
	float ___m_RebateRate;
	// System.Single PayActivityData::m_OldServerRate
	float ___m_OldServerRate;
	// System.Int32 PayActivityData::m_GrowUpLevel
	int32_t ___m_GrowUpLevel;
	// System.Boolean PayActivityData::m_bDayCardOpen
	bool ___m_bDayCardOpen;
};
// Native definition for marshalling of: PayActivityData
struct PayActivityData_t4938_marshaled
{
	int32_t* ___m_Flags;
	int32_t ___m_MonthCardBeginTime;
	int32_t ___m_MonthCardYBTotal;
	int32_t ___m_StartServerDays;
	int32_t ___m_RebateOpen;
	float ___m_RebateRate;
	float ___m_OldServerRate;
	int32_t ___m_GrowUpLevel;
	int32_t ___m_bDayCardOpen;
};
