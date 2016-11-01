#pragma once
#include <stdint.h>
// Games.Mission.MissionList
struct MissionList_t4795;
// Games.Mission.PaoHuanMissionInfo
struct PaoHuanMissionInfo_t4796;
// System.Object
#include "mscorlib_System_Object.h"
// Games.Mission.MissionManager
struct MissionManager_t1565  : public Object_t
{
	// Games.Mission.MissionList Games.Mission.MissionManager::m_MissionList
	MissionList_t4795 * ___m_MissionList;
	// System.Int32 Games.Mission.MissionManager::m_IgnoreMissionPreFlag
	int32_t ___m_IgnoreMissionPreFlag;
	// System.Boolean Games.Mission.MissionManager::m_bMissionAutoCombat
	bool ___m_bMissionAutoCombat;
	// Games.Mission.PaoHuanMissionInfo Games.Mission.MissionManager::PaoHuanInfo
	PaoHuanMissionInfo_t4796 * ___PaoHuanInfo;
};
