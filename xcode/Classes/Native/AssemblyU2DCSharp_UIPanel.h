#pragma once
#include <stdint.h>
// BetterList`1<UIPanel>
struct BetterList_1_t5425;
// BetterList`1<UIWidget>
struct BetterList_1_t5374;
// BetterList`1<UIDrawCall>
struct BetterList_1_t5426;
// BetterList`1<UnityEngine.Material>
struct BetterList_1_t5427;
// UIPanel/OnChangeDelegate
struct OnChangeDelegate_t5424;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t5196;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t5362;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t5197;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t5198;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Camera
struct Camera_t38;
// System.Single[]
struct SingleU5BU5D_t744;
// UIPanel[]
struct UIPanelU5BU5D_t5428;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UIDrawCall/Clipping
#include "AssemblyU2DCSharp_UIDrawCall_Clipping.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UIPanel
struct UIPanel_t1364  : public MonoBehaviour_t18
{
	// BetterList`1<UIWidget> UIPanel::mUIWidgets
	BetterList_1_t5374 * ___mUIWidgets;
	// BetterList`1<UIDrawCall> UIPanel::mUIDrawCalls
	BetterList_1_t5426 * ___mUIDrawCalls;
	// BetterList`1<UnityEngine.Material> UIPanel::mMtlChanged
	BetterList_1_t5427 * ___mMtlChanged;
	// BetterList`1<UIDrawCall> UIPanel::mUIDrawCallsRemoved
	BetterList_1_t5426 * ___mUIDrawCallsRemoved;
	// System.Boolean UIPanel::mDepthChanged
	bool ___mDepthChanged;
	// UIPanel/OnChangeDelegate UIPanel::onChange
	OnChangeDelegate_t5424 * ___onChange;
	// System.Boolean UIPanel::showInPanelTool
	bool ___showInPanelTool;
	// System.Boolean UIPanel::generateNormals
	bool ___generateNormals;
	// System.Boolean UIPanel::widgetsAreStatic
	bool ___widgetsAreStatic;
	// System.Boolean UIPanel::cullWhileDragging
	bool ___cullWhileDragging;
	// UnityEngine.Matrix4x4 UIPanel::worldToLocal
	Matrix4x4_t941  ___worldToLocal;
	// System.Single UIPanel::mAlpha
	float ___mAlpha;
	// UIDrawCall/Clipping UIPanel::mClipping
	int32_t ___mClipping;
	// UnityEngine.Vector4 UIPanel::mClipRange
	Vector4_t942  ___mClipRange;
	// UnityEngine.Vector2 UIPanel::mClipSoftness
	Vector2_t12  ___mClipSoftness;
	// System.Int32 UIPanel::mDepth
	int32_t ___mDepth;
	// BetterList`1<UnityEngine.Vector3> UIPanel::mVerts
	BetterList_1_t5196 * ___mVerts;
	// BetterList`1<UnityEngine.Vector3> UIPanel::mNorms
	BetterList_1_t5196 * ___mNorms;
	// BetterList`1<UnityEngine.Vector4> UIPanel::mTans
	BetterList_1_t5362 * ___mTans;
	// BetterList`1<UnityEngine.Vector2> UIPanel::mUvs
	BetterList_1_t5197 * ___mUvs;
	// BetterList`1<UnityEngine.Color32> UIPanel::mCols
	BetterList_1_t5198 * ___mCols;
	// UnityEngine.GameObject UIPanel::mGo
	GameObject_t9 * ___mGo;
	// UnityEngine.Transform UIPanel::mTrans
	Transform_t78 * ___mTrans;
	// UnityEngine.Camera UIPanel::mCam
	Camera_t38 * ___mCam;
	// System.Int32 UIPanel::mLayer
	int32_t ___mLayer;
	// System.Single UIPanel::mCullTime
	float ___mCullTime;
	// System.Single UIPanel::mUpdateTime
	float ___mUpdateTime;
	// System.Single UIPanel::mMatrixTime
	float ___mMatrixTime;
	// System.Int32 UIPanel::mIndex
	int32_t ___mIndex;
	// System.Boolean UIPanel::mSortDrawCall
	bool ___mSortDrawCall;
	// UnityEngine.Vector2 UIPanel::mMin
	Vector2_t12  ___mMin;
	// UnityEngine.Vector2 UIPanel::mMax
	Vector2_t12  ___mMax;
	// UIPanel[] UIPanel::mChildPanels
	UIPanelU5BU5D_t5428* ___mChildPanels;
};
struct UIPanel_t1364_StaticFields{
	// BetterList`1<UIPanel> UIPanel::list
	BetterList_1_t5425 * ___list;
	// System.Boolean UIPanel::indexDirty
	bool ___indexDirty;
	// System.Single[] UIPanel::mTemp
	SingleU5BU5D_t744* ___mTemp;
};
