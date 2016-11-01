#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.Shader
struct Shader_t934;
// UnityEngine.Material
struct Material_t133;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FastBloom/Resolution
#include "AssemblyU2DUnityScriptU2Dfirstpass_FastBloom_Resolution.h"
// FastBloom/BlurType
#include "AssemblyU2DUnityScriptU2Dfirstpass_FastBloom_BlurType.h"
// ScreenCopySDK.Blitcamera
struct Blitcamera_t4807  : public MonoBehaviour_t18
{
	// UnityEngine.Camera ScreenCopySDK.Blitcamera::m_UICamera
	Camera_t38 * ___m_UICamera;
	// System.Single ScreenCopySDK.Blitcamera::threshhold
	float ___threshhold;
	// System.Single ScreenCopySDK.Blitcamera::intensity
	float ___intensity;
	// System.Single ScreenCopySDK.Blitcamera::blurSize
	float ___blurSize;
	// System.Int32 ScreenCopySDK.Blitcamera::blurIterations
	int32_t ___blurIterations;
	// FastBloom/Resolution ScreenCopySDK.Blitcamera::resolution
	int32_t ___resolution;
	// FastBloom/BlurType ScreenCopySDK.Blitcamera::blurType
	int32_t ___blurType;
	// System.Boolean ScreenCopySDK.Blitcamera::m_isBloomActived
	bool ___m_isBloomActived;
	// UnityEngine.Shader ScreenCopySDK.Blitcamera::fastBloomShader
	Shader_t934 * ___fastBloomShader;
	// UnityEngine.Material ScreenCopySDK.Blitcamera::fastBloomMaterial
	Material_t133 * ___fastBloomMaterial;
	// UnityEngine.Shader ScreenCopySDK.Blitcamera::blitShader
	Shader_t934 * ___blitShader;
	// UnityEngine.Material ScreenCopySDK.Blitcamera::blitMaterial
	Material_t133 * ___blitMaterial;
};
