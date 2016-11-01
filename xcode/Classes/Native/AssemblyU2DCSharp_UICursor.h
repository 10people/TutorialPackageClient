#pragma once
#include <stdint.h>
// UICursor
struct UICursor_t5234;
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.Transform
struct Transform_t78;
// UISprite
struct UISprite_t1202;
// UIAtlas
struct UIAtlas_t1593;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UICursor
struct UICursor_t5234  : public MonoBehaviour_t18
{
	// UnityEngine.Camera UICursor::uiCamera
	Camera_t38 * ___uiCamera;
	// UnityEngine.Transform UICursor::mTrans
	Transform_t78 * ___mTrans;
	// UISprite UICursor::mSprite
	UISprite_t1202 * ___mSprite;
	// UIAtlas UICursor::mAtlas
	UIAtlas_t1593 * ___mAtlas;
	// System.String UICursor::mSpriteName
	String_t* ___mSpriteName;
};
struct UICursor_t5234_StaticFields{
	// UICursor UICursor::mInstance
	UICursor_t5234 * ___mInstance;
};
