#pragma once
#include <stdint.h>
// NcTimerTool
struct NcTimerTool_t5025;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// NcEffectBehaviour
#include "AssemblyU2DCSharp_NcEffectBehaviour.h"
// NcEffectAniBehaviour
struct NcEffectAniBehaviour_t5026  : public NcEffectBehaviour_t5021
{
	// NcTimerTool NcEffectAniBehaviour::m_Timer
	NcTimerTool_t5025 * ___m_Timer;
	// UnityEngine.GameObject NcEffectAniBehaviour::m_OnEndAniGameObject
	GameObject_t9 * ___m_OnEndAniGameObject;
	// System.Boolean NcEffectAniBehaviour::m_bEndAnimation
	bool ___m_bEndAnimation;
	// System.String NcEffectAniBehaviour::m_OnEndAniFunction
	String_t* ___m_OnEndAniFunction;
};
