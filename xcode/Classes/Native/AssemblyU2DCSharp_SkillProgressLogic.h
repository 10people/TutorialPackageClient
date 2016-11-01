#pragma once
#include <stdint.h>
// SkillProgressLogic
struct SkillProgressLogic_t1743;
// UnityEngine.GameObject
struct GameObject_t9;
// UISlider
struct UISlider_t1219;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SkillProgressLogic/ProgressModel
#include "AssemblyU2DCSharp_SkillProgressLogic_ProgressModel.h"
// SkillProgressLogic
struct SkillProgressLogic_t1743  : public MonoBehaviour_t18
{
	// System.Single SkillProgressLogic::m_fContinueTime
	float ___m_fContinueTime;
	// SkillProgressLogic/ProgressModel SkillProgressLogic::m_playModel
	int32_t ___m_playModel;
	// UnityEngine.GameObject SkillProgressLogic::m_FirstChild
	GameObject_t9 * ___m_FirstChild;
	// System.Single SkillProgressLogic::m_fElapseTime
	float ___m_fElapseTime;
	// System.Single SkillProgressLogic::m_fRecordTime
	float ___m_fRecordTime;
	// UISlider SkillProgressLogic::m_ProgressSlider
	UISlider_t1219 * ___m_ProgressSlider;
};
struct SkillProgressLogic_t1743_StaticFields{
	// SkillProgressLogic SkillProgressLogic::m_Instance
	SkillProgressLogic_t1743 * ___m_Instance;
};
