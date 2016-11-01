#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.GameObject
struct GameObject_t9;
// UIWidget
struct UIWidget_t5195;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Animation
struct Animation_t1252;
// UIRoot
struct UIRoot_t5259;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIAnchor/Side
#include "AssemblyU2DCSharp_UIAnchor_Side.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UIAnchor
struct UIAnchor_t5391  : public MonoBehaviour_t18
{
	// System.Boolean UIAnchor::mNeedsHalfPixelOffset
	bool ___mNeedsHalfPixelOffset;
	// UnityEngine.Camera UIAnchor::uiCamera
	Camera_t38 * ___uiCamera;
	// UnityEngine.GameObject UIAnchor::container
	GameObject_t9 * ___container;
	// UIAnchor/Side UIAnchor::side
	int32_t ___side;
	// System.Boolean UIAnchor::halfPixelOffset
	bool ___halfPixelOffset;
	// System.Boolean UIAnchor::runOnlyOnce
	bool ___runOnlyOnce;
	// UnityEngine.Vector2 UIAnchor::relativeOffset
	Vector2_t12  ___relativeOffset;
	// UnityEngine.Vector2 UIAnchor::pixelOffset
	Vector2_t12  ___pixelOffset;
	// UIWidget UIAnchor::widgetContainer
	UIWidget_t5195 * ___widgetContainer;
	// UnityEngine.Transform UIAnchor::mTrans
	Transform_t78 * ___mTrans;
	// UnityEngine.Animation UIAnchor::mAnim
	Animation_t1252 * ___mAnim;
	// UnityEngine.Rect UIAnchor::mRect
	Rect_t5068  ___mRect;
	// UIRoot UIAnchor::mRoot
	UIRoot_t5259 * ___mRoot;
};
