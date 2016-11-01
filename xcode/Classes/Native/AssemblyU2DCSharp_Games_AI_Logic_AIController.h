#pragma once
#include <stdint.h>
// Games.AI_Logic.BaseAI
struct BaseAI_t4518;
// Games.AI_Logic.Threat
struct Threat_t4519;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Games.AI_Logic.AIController
struct AIController_t4467  : public MonoBehaviour_t18
{
	// Games.AI_Logic.BaseAI Games.AI_Logic.AIController::m_NormalAI
	BaseAI_t4518 * ___m_NormalAI;
	// Games.AI_Logic.BaseAI Games.AI_Logic.AIController::m_CombatAI
	BaseAI_t4518 * ___m_CombatAI;
	// Games.AI_Logic.BaseAI Games.AI_Logic.AIController::m_DeadAI
	BaseAI_t4518 * ___m_DeadAI;
	// Games.AI_Logic.BaseAI Games.AI_Logic.AIController::m_CurrentAIState
	BaseAI_t4518 * ___m_CurrentAIState;
	// System.Boolean Games.AI_Logic.AIController::m_bCombatFlag
	bool ___m_bCombatFlag;
	// System.Single Games.AI_Logic.AIController::m_fLastUpdateTime
	float ___m_fLastUpdateTime;
	// Games.AI_Logic.Threat Games.AI_Logic.AIController::m_ThreadInfo
	Threat_t4519 * ___m_ThreadInfo;
};
struct AIController_t4467_StaticFields{
	// System.Single Games.AI_Logic.AIController::m_fUpdateInterval
	float ___m_fUpdateInterval;
};
