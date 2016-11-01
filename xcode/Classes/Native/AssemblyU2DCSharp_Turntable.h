#pragma once
#include <stdint.h>
// Turntable
struct Turntable_t1750;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Turntable
struct Turntable_t1750  : public MonoBehaviour_t18
{
	// System.Single Turntable::speed
	float ___speed;
	// System.Single Turntable::radius
	float ___radius;
	// System.Int32 Turntable::changeGears
	int32_t ___changeGears;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Turntable::skillbarlist
	List_1_t1289 * ___skillbarlist;
	// System.Int32 Turntable::m_TurnDirection
	int32_t ___m_TurnDirection;
	// System.Int32 Turntable::m_Gears
	int32_t ___m_Gears;
	// System.Boolean Turntable::m_bTurning
	bool ___m_bTurning;
	// System.Single Turntable::m_TurnEuler
	float ___m_TurnEuler;
	// UnityEngine.Vector3 Turntable::m_SkillBarTurnVec
	Vector3_t121  ___m_SkillBarTurnVec;
};
struct Turntable_t1750_StaticFields{
	// System.Int32 Turntable::TruntableOpen_SkillNum
	int32_t ___TruntableOpen_SkillNum;
	// Turntable Turntable::m_Instance
	Turntable_t1750 * ___m_Instance;
};
