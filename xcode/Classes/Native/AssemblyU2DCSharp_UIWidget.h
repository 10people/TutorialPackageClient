#pragma once
#include <stdint.h>
// BetterList`1<UIWidget>
struct BetterList_1_t5374;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// UIPanel
struct UIPanel_t1364;
// UIGeometry
struct UIGeometry_t5371;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1262;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIWidget/Pivot
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UIWidget
struct UIWidget_t5195  : public MonoBehaviour_t18
{
	// UnityEngine.Color UIWidget::mColor
	Color_t939  ___mColor;
	// UIWidget/Pivot UIWidget::mPivot
	int32_t ___mPivot;
	// System.Int32 UIWidget::mWidth
	int32_t ___mWidth;
	// System.Int32 UIWidget::mHeight
	int32_t ___mHeight;
	// System.Int32 UIWidget::mDepth
	int32_t ___mDepth;
	// UnityEngine.GameObject UIWidget::mGo
	GameObject_t9 * ___mGo;
	// UnityEngine.Transform UIWidget::mTrans
	Transform_t78 * ___mTrans;
	// UIPanel UIWidget::mPanel
	UIPanel_t1364 * ___mPanel;
	// System.Boolean UIWidget::mChanged
	bool ___mChanged;
	// System.Boolean UIWidget::mPlayMode
	bool ___mPlayMode;
	// System.Boolean UIWidget::mStarted
	bool ___mStarted;
	// UnityEngine.Matrix4x4 UIWidget::mLocalToPanel
	Matrix4x4_t941  ___mLocalToPanel;
	// System.Boolean UIWidget::mVisibleByPanel
	bool ___mVisibleByPanel;
	// System.Single UIWidget::mLastAlpha
	float ___mLastAlpha;
	// UIGeometry UIWidget::mGeom
	UIGeometry_t5371 * ___mGeom;
	// UnityEngine.Vector3[] UIWidget::mCorners
	Vector3U5BU5D_t1262* ___mCorners;
	// System.Boolean UIWidget::mForceVisible
	bool ___mForceVisible;
	// UnityEngine.Vector3 UIWidget::mOldV0
	Vector3_t121  ___mOldV0;
	// UnityEngine.Vector3 UIWidget::mOldV1
	Vector3_t121  ___mOldV1;
};
struct UIWidget_t5195_StaticFields{
	// BetterList`1<UIWidget> UIWidget::list
	BetterList_1_t5374 * ___list;
};
