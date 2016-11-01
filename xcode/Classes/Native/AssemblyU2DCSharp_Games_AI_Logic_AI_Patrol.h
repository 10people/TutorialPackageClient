#pragma once
#include <stdint.h>
// Games.AI_Logic.PatrolPoint
struct PatrolPoint_t4522;
// Games.AI_Logic.BaseAI
#include "AssemblyU2DCSharp_Games_AI_Logic_BaseAI.h"
// Games.AI_Logic.AI_Patrol
struct AI_Patrol_t4523  : public BaseAI_t4518
{
	// System.Int32 Games.AI_Logic.AI_Patrol::m_nCurrentPatrolIdx
	int32_t ___m_nCurrentPatrolIdx;
	// System.Single Games.AI_Logic.AI_Patrol::m_fStopDistance
	float ___m_fStopDistance;
	// System.Single Games.AI_Logic.AI_Patrol::m_fReachedStopTimeInterval
	float ___m_fReachedStopTimeInterval;
	// System.Single Games.AI_Logic.AI_Patrol::m_fLastReachedStopTime
	float ___m_fLastReachedStopTime;
	// System.Boolean Games.AI_Logic.AI_Patrol::m_bIsReachedStop
	bool ___m_bIsReachedStop;
	// System.Int32 Games.AI_Logic.AI_Patrol::PatrolTableID
	int32_t ___PatrolTableID;
	// Games.AI_Logic.PatrolPoint Games.AI_Logic.AI_Patrol::m_patrolPoint
	PatrolPoint_t4522 * ___m_patrolPoint;
};
