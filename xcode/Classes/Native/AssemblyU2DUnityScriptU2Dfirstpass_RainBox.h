#pragma once
#include <stdint.h>
// UnityEngine.MeshFilter
struct MeshFilter_t1418;
// RainManager
struct RainManager_t5966;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// RainBox
struct RainBox_t5967  : public MonoBehaviour_t18
{
	// UnityEngine.MeshFilter RainBox::mf
	MeshFilter_t1418 * ___mf;
	// UnityEngine.Vector3 RainBox::defaultPosition
	Vector3_t121  ___defaultPosition;
	// UnityEngine.Bounds RainBox::bounds
	Bounds_t1005  ___bounds;
	// RainManager RainBox::manager
	RainManager_t5966 * ___manager;
	// UnityEngine.Transform RainBox::cachedTransform
	Transform_t78 * ___cachedTransform;
	// System.Single RainBox::cachedMinY
	float ___cachedMinY;
	// System.Single RainBox::cachedAreaHeight
	float ___cachedAreaHeight;
	// System.Single RainBox::cachedFallingSpeed
	float ___cachedFallingSpeed;
};
