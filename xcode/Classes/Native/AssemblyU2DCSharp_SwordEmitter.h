#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Color[]
struct ColorU5BU5D_t1421;
// System.Collections.Generic.List`1<SwordEmitter/SwordData>
struct List_1_t5141;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SwordEmitter/Type
#include "AssemblyU2DCSharp_SwordEmitter_Type.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// SwordEmitter
struct SwordEmitter_t5142  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject SwordEmitter::Sword
	GameObject_t9 * ___Sword;
	// SwordEmitter/Type SwordEmitter::FlyDir
	int32_t ___FlyDir;
	// System.Int32 SwordEmitter::SwordCount
	int32_t ___SwordCount;
	// System.Single SwordEmitter::LifeTime
	float ___LifeTime;
	// System.Single SwordEmitter::Delay
	float ___Delay;
	// System.Single SwordEmitter::ColorDuration
	float ___ColorDuration;
	// System.Boolean SwordEmitter::IsColorLoop
	bool ___IsColorLoop;
	// System.Single SwordEmitter::Height
	float ___Height;
	// System.Single SwordEmitter::Radius
	float ___Radius;
	// System.Single SwordEmitter::RadiusRangeMin
	float ___RadiusRangeMin;
	// System.Single SwordEmitter::RadiusRangeMax
	float ___RadiusRangeMax;
	// System.Single SwordEmitter::RadiusRangeTimeMin
	float ___RadiusRangeTimeMin;
	// System.Single SwordEmitter::RadiusRangeTimeMax
	float ___RadiusRangeTimeMax;
	// System.Single SwordEmitter::Speed
	float ___Speed;
	// System.Single SwordEmitter::SpeedRangeMin
	float ___SpeedRangeMin;
	// System.Single SwordEmitter::SpeedRangeMax
	float ___SpeedRangeMax;
	// System.Single SwordEmitter::SpeedRangeTimeMin
	float ___SpeedRangeTimeMin;
	// System.Single SwordEmitter::SpeedRangeTimeMax
	float ___SpeedRangeTimeMax;
	// UnityEngine.Vector3 SwordEmitter::LocalRotSpeed
	Vector3_t121  ___LocalRotSpeed;
	// UnityEngine.Color[] SwordEmitter::ChangeColors
	ColorU5BU5D_t1421* ___ChangeColors;
	// System.Collections.Generic.List`1<SwordEmitter/SwordData> SwordEmitter::m_swordList
	List_1_t5141 * ___m_swordList;
	// System.Single SwordEmitter::m_durationTimer
	float ___m_durationTimer;
	// System.Single SwordEmitter::m_lifeTimer
	float ___m_lifeTimer;
	// System.Single SwordEmitter::m_delayTimer
	float ___m_delayTimer;
};
