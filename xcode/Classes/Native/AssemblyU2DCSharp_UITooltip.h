#pragma once
#include <stdint.h>
// UITooltip
struct UITooltip_t5440;
// UnityEngine.Camera
struct Camera_t38;
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UnityEngine.Transform
struct Transform_t78;
// UIWidget[]
struct UIWidgetU5BU5D_t5441;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UITooltip
struct UITooltip_t5440  : public MonoBehaviour_t18
{
	// UnityEngine.Camera UITooltip::uiCamera
	Camera_t38 * ___uiCamera;
	// UILabel UITooltip::text
	UILabel_t1176 * ___text;
	// UISprite UITooltip::background
	UISprite_t1202 * ___background;
	// System.Single UITooltip::appearSpeed
	float ___appearSpeed;
	// System.Boolean UITooltip::scalingTransitions
	bool ___scalingTransitions;
	// UnityEngine.Transform UITooltip::mTrans
	Transform_t78 * ___mTrans;
	// System.Single UITooltip::mTarget
	float ___mTarget;
	// System.Single UITooltip::mCurrent
	float ___mCurrent;
	// UnityEngine.Vector3 UITooltip::mPos
	Vector3_t121  ___mPos;
	// UnityEngine.Vector3 UITooltip::mSize
	Vector3_t121  ___mSize;
	// UIWidget[] UITooltip::mWidgets
	UIWidgetU5BU5D_t5441* ___mWidgets;
};
struct UITooltip_t5440_StaticFields{
	// UITooltip UITooltip::mInstance
	UITooltip_t5440 * ___mInstance;
};
