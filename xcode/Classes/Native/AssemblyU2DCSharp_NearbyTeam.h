#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// NearbyTeam
struct NearbyTeam_t1213  : public Object_t
{
	// System.Int32 NearbyTeam::m_TeamID
	int32_t ___m_TeamID;
	// System.UInt64 NearbyTeam::m_Guid
	uint64_t ___m_Guid;
	// System.String NearbyTeam::m_szName
	String_t* ___m_szName;
	// System.Int32 NearbyTeam::m_nLevel
	int32_t ___m_nLevel;
	// System.Int32 NearbyTeam::m_nProfession
	int32_t ___m_nProfession;
	// System.Int32 NearbyTeam::m_nCombatNum
	int32_t ___m_nCombatNum;
	// System.Int32 NearbyTeam::m_nTeamCombatNum
	int32_t ___m_nTeamCombatNum;
};
