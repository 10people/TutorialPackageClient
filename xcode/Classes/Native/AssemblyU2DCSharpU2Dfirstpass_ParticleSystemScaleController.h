#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<ParticleSystemScalerData>
struct List_1_t931;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ParticleSystemScaleController
struct ParticleSystemScaleController_t932  : public MonoBehaviour_t18
{
	// System.Collections.Generic.List`1<ParticleSystemScalerData> ParticleSystemScaleController::m_ControllableParticle
	List_1_t931 * ___m_ControllableParticle;
	// System.Single ParticleSystemScaleController::m_curScaleValue
	float ___m_curScaleValue;
	// System.Boolean ParticleSystemScaleController::_needToChange
	bool ____needToChange;
	// System.Single ParticleSystemScaleController::_startChangeTime
	float ____startChangeTime;
};
