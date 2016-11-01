#pragma once
#include <stdint.h>
// UnityEngine.Transform[]
struct TransformU5BU5D_t77;
// UnityEngine.Material[]
struct MaterialU5BU5D_t933;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Shader
struct Shader_t934;
// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t38;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>
struct Dictionary_2_t935;
// UnityEngine.Texture[]
struct TextureU5BU5D_t936;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// ReflectionFx
struct ReflectionFx_t938  : public MonoBehaviour_t18
{
	// UnityEngine.Transform[] ReflectionFx::reflectiveObjects
	TransformU5BU5D_t77* ___reflectiveObjects;
	// UnityEngine.LayerMask ReflectionFx::reflectionMask
	LayerMask_t39  ___reflectionMask;
	// UnityEngine.Material[] ReflectionFx::reflectiveMaterials
	MaterialU5BU5D_t933* ___reflectiveMaterials;
	// UnityEngine.Transform ReflectionFx::reflectiveSurfaceHeight
	Transform_t78 * ___reflectiveSurfaceHeight;
	// UnityEngine.Shader ReflectionFx::replacementShader
	Shader_t934 * ___replacementShader;
	// System.Boolean ReflectionFx::highQuality
	bool ___highQuality;
	// UnityEngine.Color ReflectionFx::clearColor
	Color_t939  ___clearColor;
	// System.String ReflectionFx::reflectionSampler
	String_t* ___reflectionSampler;
	// System.Single ReflectionFx::clipPlaneOffset
	float ___clipPlaneOffset;
	// UnityEngine.Vector3 ReflectionFx::oldpos
	Vector3_t121  ___oldpos;
	// UnityEngine.Camera ReflectionFx::reflectionCamera
	Camera_t38 * ___reflectionCamera;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean> ReflectionFx::helperCameras
	Dictionary_2_t935 * ___helperCameras;
	// UnityEngine.Texture[] ReflectionFx::initialReflectionTextures
	TextureU5BU5D_t936* ___initialReflectionTextures;
};
