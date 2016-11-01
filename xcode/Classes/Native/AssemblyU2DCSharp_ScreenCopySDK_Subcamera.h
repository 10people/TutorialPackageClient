#pragma once
#include <stdint.h>
// ScreenCopySDK.Blitcamera
struct Blitcamera_t4807;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FastBloom/Resolution
#include "AssemblyU2DUnityScriptU2Dfirstpass_FastBloom_Resolution.h"
// FastBloom/BlurType
#include "AssemblyU2DUnityScriptU2Dfirstpass_FastBloom_BlurType.h"
// ScreenCopySDK.Subcamera
struct Subcamera_t4811  : public MonoBehaviour_t18
{
	// ScreenCopySDK.Blitcamera ScreenCopySDK.Subcamera::m_Blitcamera
	Blitcamera_t4807 * ___m_Blitcamera;
	// System.Single ScreenCopySDK.Subcamera::threshhold
	float ___threshhold;
	// System.Single ScreenCopySDK.Subcamera::intensity
	float ___intensity;
	// System.Single ScreenCopySDK.Subcamera::blurSize
	float ___blurSize;
	// System.Int32 ScreenCopySDK.Subcamera::blurIterations
	int32_t ___blurIterations;
	// FastBloom/Resolution ScreenCopySDK.Subcamera::resolution
	int32_t ___resolution;
	// FastBloom/BlurType ScreenCopySDK.Subcamera::blurType
	int32_t ___blurType;
	// System.Boolean ScreenCopySDK.Subcamera::isBloomActived
	bool ___isBloomActived;
	// System.Boolean ScreenCopySDK.Subcamera::m_bForceIt
	bool ___m_bForceIt;
};
