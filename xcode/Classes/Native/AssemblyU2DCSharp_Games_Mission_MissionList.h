#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission>
struct Dictionary_2_t4793;
// System.UInt32[]
struct UInt32U5BU5D_t4794;
// System.Object
#include "mscorlib_System_Object.h"
// Games.Mission.MissionList
struct MissionList_t4795  : public Object_t
{
	// System.Byte Games.Mission.MissionList::m_Count
	uint8_t ___m_Count;
	// System.Collections.Generic.Dictionary`2<System.Int32,Games.Mission.CurOwnMission> Games.Mission.MissionList::m_aMission
	Dictionary_2_t4793 * ___m_aMission;
	// System.UInt32[] Games.Mission.MissionList::m_aMissionHaveDoneFlags
	UInt32U5BU5D_t4794* ___m_aMissionHaveDoneFlags;
};
