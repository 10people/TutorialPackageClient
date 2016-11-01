#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Material
struct Material_t133;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BaseSkillWarningEffect
struct BaseSkillWarningEffect_t2133  : public MonoBehaviour_t18
{
	// System.Single BaseSkillWarningEffect::m_startFillTime
	float ___m_startFillTime;
	// System.Single BaseSkillWarningEffect::m_duringTime
	float ___m_duringTime;
	// UnityEngine.Transform BaseSkillWarningEffect::m_cachedTrans
	Transform_t78 * ___m_cachedTrans;
	// UnityEngine.Material BaseSkillWarningEffect::m_cachedMat
	Material_t133 * ___m_cachedMat;
	// System.Boolean BaseSkillWarningEffect::m_run
	bool ___m_run;
	// System.String BaseSkillWarningEffect::MatFillPropertyName
	String_t* ___MatFillPropertyName;
	// System.String BaseSkillWarningEffect::MatColorOutPropertyName
	String_t* ___MatColorOutPropertyName;
	// System.String BaseSkillWarningEffect::MatColorInPropertyName
	String_t* ___MatColorInPropertyName;
};
