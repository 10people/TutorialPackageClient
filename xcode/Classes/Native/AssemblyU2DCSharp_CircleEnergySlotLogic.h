#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// CircleEnergySlotLogic/OnEnergyFull
struct OnEnergyFull_t1325;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// CircleEnergySlotLogic
struct CircleEnergySlotLogic_t1327  : public MonoBehaviour_t18
{
	// UISprite CircleEnergySlotLogic::m_EnergySprite
	UISprite_t1202 * ___m_EnergySprite;
	// UnityEngine.GameObject CircleEnergySlotLogic::m_EffectRotation
	GameObject_t9 * ___m_EffectRotation;
	// UnityEngine.GameObject CircleEnergySlotLogic::m_EnergyBackground
	GameObject_t9 * ___m_EnergyBackground;
	// System.Single CircleEnergySlotLogic::m_ZeroSpriteFill
	float ___m_ZeroSpriteFill;
	// System.Single CircleEnergySlotLogic::m_MaxSpriteFill
	float ___m_MaxSpriteFill;
	// System.Single CircleEnergySlotLogic::m_ZeroEffectRotation
	float ___m_ZeroEffectRotation;
	// System.Single CircleEnergySlotLogic::m_MaxEffectRotation
	float ___m_MaxEffectRotation;
	// CircleEnergySlotLogic/OnEnergyFull CircleEnergySlotLogic::m_deleEnergyFull
	OnEnergyFull_t1325 * ___m_deleEnergyFull;
};
