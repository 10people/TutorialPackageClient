#pragma once
#include <stdint.h>
// UnityEngine.Renderer[]
struct RendererU5BU5D_t5070;
// UnityEngine.Camera
struct Camera_t38;
// System.Collections.Generic.List`1<BreathlingLight>
struct List_1_t5185;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// RandomUVAnimation
struct RandomUVAnimation_t5186  : public MonoBehaviour_t18
{
	// UnityEngine.Color RandomUVAnimation::FlowColor
	Color_t939  ___FlowColor;
	// System.Single RandomUVAnimation::ConvertSpeed
	float ___ConvertSpeed;
	// System.Single RandomUVAnimation::MaxRange
	float ___MaxRange;
	// System.Single RandomUVAnimation::MinRange
	float ___MinRange;
	// UnityEngine.Renderer[] RandomUVAnimation::_renderers
	RendererU5BU5D_t5070* ____renderers;
	// UnityEngine.Camera RandomUVAnimation::MainCam
	Camera_t38 * ___MainCam;
	// System.Single RandomUVAnimation::AddInterval
	float ___AddInterval;
	// System.Single RandomUVAnimation::AddSpeed
	float ___AddSpeed;
	// System.Single RandomUVAnimation::TempTime
	float ___TempTime;
	// System.Single RandomUVAnimation::TempNumTime
	float ___TempNumTime;
	// UnityEngine.Color RandomUVAnimation::_currentColor
	Color_t939  ____currentColor;
	// UnityEngine.Vector4 RandomUVAnimation::_startDir
	Vector4_t942  ____startDir;
	// UnityEngine.Vector4 RandomUVAnimation::_midDir
	Vector4_t942  ____midDir;
	// UnityEngine.Vector4 RandomUVAnimation::_endDir
	Vector4_t942  ____endDir;
	// UnityEngine.Vector4 RandomUVAnimation::_curDir
	Vector4_t942  ____curDir;
	// System.Single RandomUVAnimation::_addTimer
	float ____addTimer;
	// System.Single RandomUVAnimation::_currentRange
	float ____currentRange;
	// System.Collections.Generic.List`1<BreathlingLight> RandomUVAnimation::_lstBreathlingLight
	List_1_t5185 * ____lstBreathlingLight;
	// System.Boolean RandomUVAnimation::isTag
	bool ___isTag;
	// System.Single RandomUVAnimation::_tempTime
	float ____tempTime;
};
