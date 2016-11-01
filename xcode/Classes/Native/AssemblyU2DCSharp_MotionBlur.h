#pragma once
#include <stdint.h>
// UnityEngine.RenderTexture
struct RenderTexture_t940;
// ImageEffectBase
#include "AssemblyU2DCSharp_ImageEffectBase.h"
// MotionBlur
struct MotionBlur_t1047  : public ImageEffectBase_t1046
{
	// System.Single MotionBlur::blurAmount
	float ___blurAmount;
	// System.Boolean MotionBlur::extraBlur
	bool ___extraBlur;
	// UnityEngine.RenderTexture MotionBlur::accumTexture
	RenderTexture_t940 * ___accumTexture;
};
