#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.RenderTexture
struct RenderTexture_t940;
// UnityEngine.Material
struct Material_t133;
// MirrorReflection
struct MirrorReflection_t5144;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// MirrorReflection
struct MirrorReflection_t5144  : public MonoBehaviour_t18
{
	// System.Int32 MirrorReflection::m_TextureSize
	int32_t ___m_TextureSize;
	// System.Single MirrorReflection::m_ClipPlaneOffset
	float ___m_ClipPlaneOffset;
	// UnityEngine.LayerMask MirrorReflection::m_ReflectLayers
	LayerMask_t39  ___m_ReflectLayers;
	// UnityEngine.Camera MirrorReflection::m_ReflectionCamera
	Camera_t38 * ___m_ReflectionCamera;
	// UnityEngine.Material MirrorReflection::oceanMaterial
	Material_t133 * ___oceanMaterial;
	// UnityEngine.Camera MirrorReflection::cam
	Camera_t38 * ___cam;
	// System.Boolean MirrorReflection::enableMirrorReflection
	bool ___enableMirrorReflection;
	// System.Single MirrorReflection::alpha
	float ___alpha;
};
struct MirrorReflection_t5144_StaticFields{
	// UnityEngine.RenderTexture MirrorReflection::m_ReflectionTexture
	RenderTexture_t940 * ___m_ReflectionTexture;
	// MirrorReflection MirrorReflection::_instance
	MirrorReflection_t5144 * ____instance;
};
