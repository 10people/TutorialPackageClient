#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Material
struct Material_t133;
// UnityEngine.Mesh
struct Mesh_t1049;
// UnityEngine.MeshFilter
struct MeshFilter_t1418;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1419;
// System.Int32[]
struct Int32U5BU5D_t116;
// UIPanel
struct UIPanel_t1364;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIDrawCall/Clipping
#include "AssemblyU2DCSharp_UIDrawCall_Clipping.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UIDrawCall
struct UIDrawCall_t1752  : public MonoBehaviour_t18
{
	// UnityEngine.Transform UIDrawCall::mTrans
	Transform_t78 * ___mTrans;
	// UnityEngine.Material UIDrawCall::mSharedMat
	Material_t133 * ___mSharedMat;
	// UnityEngine.Mesh UIDrawCall::mMesh0
	Mesh_t1049 * ___mMesh0;
	// UnityEngine.Mesh UIDrawCall::mMesh1
	Mesh_t1049 * ___mMesh1;
	// UnityEngine.MeshFilter UIDrawCall::mFilter
	MeshFilter_t1418 * ___mFilter;
	// UnityEngine.MeshRenderer UIDrawCall::mRen
	MeshRenderer_t1419 * ___mRen;
	// UIDrawCall/Clipping UIDrawCall::mClipping
	int32_t ___mClipping;
	// UnityEngine.Vector4 UIDrawCall::mClipRange
	Vector4_t942  ___mClipRange;
	// UnityEngine.Vector2 UIDrawCall::mClipSoft
	Vector2_t12  ___mClipSoft;
	// UnityEngine.Material UIDrawCall::mMat
	Material_t133 * ___mMat;
	// System.Int32[] UIDrawCall::mIndices
	Int32U5BU5D_t116* ___mIndices;
	// System.Boolean UIDrawCall::mDirty
	bool ___mDirty;
	// System.Boolean UIDrawCall::mReset
	bool ___mReset;
	// System.Boolean UIDrawCall::mEven
	bool ___mEven;
	// System.Int32 UIDrawCall::mRenderQueue
	int32_t ___mRenderQueue;
	// System.Int32 UIDrawCall::mDepth
	int32_t ___mDepth;
	// UIPanel UIDrawCall::<panel>k__BackingField
	UIPanel_t1364 * ___U3CpanelU3Ek__BackingField;
};
