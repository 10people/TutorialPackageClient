#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SkillBarSwitch/SKILL_BAR_STATE
#include "AssemblyU2DCSharp_SkillBarSwitch_SKILL_BAR_STATE.h"
// SkillBarSwitch/SWITCH_DIRECTION
#include "AssemblyU2DCSharp_SkillBarSwitch_SWITCH_DIRECTION.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// SkillBarSwitch
struct SkillBarSwitch_t1735  : public MonoBehaviour_t18
{
	// SkillBarSwitch/SKILL_BAR_STATE SkillBarSwitch::m_eCurSkillBarState
	int32_t ___m_eCurSkillBarState;
	// SkillBarSwitch/SWITCH_DIRECTION SkillBarSwitch::m_SwitchDirection
	int32_t ___m_SwitchDirection;
	// System.Boolean SkillBarSwitch::m_SwitchGo
	bool ___m_SwitchGo;
	// System.Int32 SkillBarSwitch::m_TouchID
	int32_t ___m_TouchID;
	// UnityEngine.GameObject SkillBarSwitch::m_SkillBarGroup1
	GameObject_t9 * ___m_SkillBarGroup1;
	// UnityEngine.GameObject SkillBarSwitch::m_SkillBarGroup2
	GameObject_t9 * ___m_SkillBarGroup2;
	// UnityEngine.Vector3 SkillBarSwitch::posReady
	Vector3_t121  ___posReady;
	// System.Single SkillBarSwitch::speedSwitch
	float ___speedSwitch;
};
