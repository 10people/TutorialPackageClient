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
// UISprite
struct UISprite_t1202;
// UIPanel
struct UIPanel_t1364;
// UIRoot
struct UIRoot_t5259;
// UnityEngine.Animation
struct Animation_t1252;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIStretch/Style
#include "AssemblyU2DCSharp_UIStretch_Style.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UIStretch
struct UIStretch_t5436  : public MonoBehaviour_t18
{
	// UnityEngine.Camera UIStretch::uiCamera
	Camera_t38 * ___uiCamera;
	// UnityEngine.GameObject UIStretch::container
	GameObject_t9 * ___container;
	// UIStretch/Style UIStretch::style
	int32_t ___style;
	// System.Boolean UIStretch::runOnlyOnce
	bool ___runOnlyOnce;
	// UnityEngine.Vector2 UIStretch::relativeSize
	Vector2_t12  ___relativeSize;
	// UnityEngine.Vector2 UIStretch::initialSize
	Vector2_t12  ___initialSize;
	// UnityEngine.Vector2 UIStretch::borderPadding
	Vector2_t12  ___borderPadding;
	// UIWidget UIStretch::widgetContainer
	UIWidget_t5195 * ___widgetContainer;
	// UnityEngine.Transform UIStretch::mTrans
	Transform_t78 * ___mTrans;
	// UIWidget UIStretch::mWidget
	UIWidget_t5195 * ___mWidget;
	// UISprite UIStretch::mSprite
	UISprite_t1202 * ___mSprite;
	// UIPanel UIStretch::mPanel
	UIPanel_t1364 * ___mPanel;
	// UIRoot UIStretch::mRoot
	UIRoot_t5259 * ___mRoot;
	// UnityEngine.Animation UIStretch::mAnim
	Animation_t1252 * ___mAnim;
	// UnityEngine.Rect UIStretch::mRect
	Rect_t5068  ___mRect;
};
