#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t934;
// UnityEngine.Material
struct Material_t133;
// PostEffectsBase
#include "AssemblyU2DUnityScriptU2Dfirstpass_PostEffectsBase.h"
// FastBloom/Resolution
#include "AssemblyU2DUnityScriptU2Dfirstpass_FastBloom_Resolution.h"
// FastBloom/BlurType
#include "AssemblyU2DUnityScriptU2Dfirstpass_FastBloom_BlurType.h"
// FastBloom
struct FastBloom_t4574  : public PostEffectsBase_t5965
{
	// System.Single FastBloom::threshhold
	float ___threshhold;
	// System.Single FastBloom::intensity
	float ___intensity;
	// System.Single FastBloom::blurSize
	float ___blurSize;
	// FastBloom/Resolution FastBloom::resolution
	int32_t ___resolution;
	// System.Int32 FastBloom::blurIterations
	int32_t ___blurIterations;
	// FastBloom/BlurType FastBloom::blurType
	int32_t ___blurType;
	// UnityEngine.Shader FastBloom::fastBloomShader
	Shader_t934 * ___fastBloomShader;
	// UnityEngine.Material FastBloom::fastBloomMaterial
	Material_t133 * ___fastBloomMaterial;
};
