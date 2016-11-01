#pragma once
#include <stdint.h>
// SkillBarLogic
struct SkillBarLogic_t1726;
// TransformerBeginData
struct TransformerBeginData_t1784;
// System.Object
#include "mscorlib_System_Object.h"
// TransformController/TransStep
#include "AssemblyU2DCSharp_TransformController_TransStep.h"
// TransformController
struct TransformController_t1729  : public Object_t
{
	// SkillBarLogic TransformController::m_SkillBarLogic
	SkillBarLogic_t1726 * ___m_SkillBarLogic;
	// TransformController/TransStep TransformController::m_TransStep
	int32_t ___m_TransStep;
	// System.Int32 TransformController::m_nNearEndTime
	int32_t ___m_nNearEndTime;
	// System.Int32 TransformController::m_nChooseStartTime
	int32_t ___m_nChooseStartTime;
	// System.Int32 TransformController::m_nEffectStartTime
	int32_t ___m_nEffectStartTime;
	// System.Boolean TransformController::m_bHasShowNearEndEffect
	bool ___m_bHasShowNearEndEffect;
	// TransformerBeginData TransformController::m_BeginDataPVE
	TransformerBeginData_t1784 * ___m_BeginDataPVE;
	// TransformerBeginData TransformController::m_BeginDataPVP
	TransformerBeginData_t1784 * ___m_BeginDataPVP;
	// System.Boolean TransformController::m_bChoosedPvE
	bool ___m_bChoosedPvE;
};
