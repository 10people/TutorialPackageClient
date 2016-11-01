#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t744;
// System.Object
#include "mscorlib_System_Object.h"
// GCGame.Table.Tab_DailyMissionQuality
struct Tab_DailyMissionQuality_t423  : public Object_t
{
	// System.Single GCGame.Table.Tab_DailyMissionQuality::m_AwardFactor
	float ___m_AwardFactor;
	// System.Int32 GCGame.Table.Tab_DailyMissionQuality::m_Id
	int32_t ___m_Id;
	// System.Int32 GCGame.Table.Tab_DailyMissionQuality::m_InitRate
	int32_t ___m_InitRate;
	// System.Single[] GCGame.Table.Tab_DailyMissionQuality::m_LevelFactor
	SingleU5BU5D_t744* ___m_LevelFactor;
	// System.Int32 GCGame.Table.Tab_DailyMissionQuality::m_RandomRate
	int32_t ___m_RandomRate;
	// System.Int32 GCGame.Table.Tab_DailyMissionQuality::m_TimeRandomRate
	int32_t ___m_TimeRandomRate;
};
