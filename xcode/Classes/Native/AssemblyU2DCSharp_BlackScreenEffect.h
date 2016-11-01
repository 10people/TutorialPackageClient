#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t934;
// UnityEngine.Material
struct Material_t133;
// UnityEngine.AnimationCurve
struct AnimationCurve_t4583;
struct AnimationCurve_t4583_marshaled;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BlackType
#include "AssemblyU2DCSharp_BlackType.h"
// BlackScreenEffect
struct BlackScreenEffect_t5182  : public MonoBehaviour_t18
{
	// UnityEngine.Shader BlackScreenEffect::_blackScreenShader
	Shader_t934 * ____blackScreenShader;
	// System.Single BlackScreenEffect::_TransTime
	float ____TransTime;
	// System.Boolean BlackScreenEffect::_IsLoop
	bool ____IsLoop;
	// BlackType BlackScreenEffect::_BlackType
	int32_t ____BlackType;
	// UnityEngine.AnimationCurve BlackScreenEffect::_AnimationCurve
	AnimationCurve_t4583 * ____AnimationCurve;
	// System.Single BlackScreenEffect::timeCounter
	float ___timeCounter;
	// System.Single BlackScreenEffect::timeCounterAnim
	float ___timeCounterAnim;
	// System.Boolean BlackScreenEffect::isPingPongSecRange
	bool ___isPingPongSecRange;
	// System.Boolean BlackScreenEffect::isEnd
	bool ___isEnd;
};
struct BlackScreenEffect_t5182_StaticFields{
	// UnityEngine.Material BlackScreenEffect::s_blackMaterial
	Material_t133 * ___s_blackMaterial;
};
