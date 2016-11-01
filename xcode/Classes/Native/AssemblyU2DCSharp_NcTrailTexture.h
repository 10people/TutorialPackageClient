#pragma once
#include <stdint.h>
// UnityEngine.Color[]
struct ColorU5BU5D_t1421;
// System.Single[]
struct SingleU5BU5D_t744;
// System.Collections.Generic.List`1<NcTrailTexture/Point>
struct List_1_t5106;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Mesh
struct Mesh_t1049;
// NcEffectBehaviour
#include "AssemblyU2DCSharp_NcEffectBehaviour.h"
// NcTrailTexture/AXIS_TYPE
#include "AssemblyU2DCSharp_NcTrailTexture_AXIS_TYPE.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// NcTrailTexture
struct NcTrailTexture_t5107  : public NcEffectBehaviour_t5021
{
	// System.Single NcTrailTexture::m_fDelayTime
	float ___m_fDelayTime;
	// System.Single NcTrailTexture::m_fEmitTime
	float ___m_fEmitTime;
	// System.Boolean NcTrailTexture::m_bSmoothHide
	bool ___m_bSmoothHide;
	// System.Boolean NcTrailTexture::m_bEmit
	bool ___m_bEmit;
	// System.Single NcTrailTexture::m_fStartTime
	float ___m_fStartTime;
	// System.Single NcTrailTexture::m_fStopTime
	float ___m_fStopTime;
	// System.Single NcTrailTexture::m_fLifeTime
	float ___m_fLifeTime;
	// NcTrailTexture/AXIS_TYPE NcTrailTexture::m_TipAxis
	int32_t ___m_TipAxis;
	// System.Single NcTrailTexture::m_fTipSize
	float ___m_fTipSize;
	// System.Boolean NcTrailTexture::m_bCenterAlign
	bool ___m_bCenterAlign;
	// System.Boolean NcTrailTexture::m_UvFlipHorizontal
	bool ___m_UvFlipHorizontal;
	// System.Boolean NcTrailTexture::m_UvFlipVirtical
	bool ___m_UvFlipVirtical;
	// System.Int32 NcTrailTexture::m_nFadeHeadCount
	int32_t ___m_nFadeHeadCount;
	// System.Int32 NcTrailTexture::m_nFadeTailCount
	int32_t ___m_nFadeTailCount;
	// UnityEngine.Color[] NcTrailTexture::m_Colors
	ColorU5BU5D_t1421* ___m_Colors;
	// System.Single[] NcTrailTexture::m_SizeRates
	SingleU5BU5D_t744* ___m_SizeRates;
	// System.Boolean NcTrailTexture::m_bInterpolation
	bool ___m_bInterpolation;
	// System.Int32 NcTrailTexture::m_nMaxSmoothCount
	int32_t ___m_nMaxSmoothCount;
	// System.Int32 NcTrailTexture::m_nSubdivisions
	int32_t ___m_nSubdivisions;
	// System.Collections.Generic.List`1<NcTrailTexture/Point> NcTrailTexture::m_SmoothedPoints
	List_1_t5106 * ___m_SmoothedPoints;
	// System.Single NcTrailTexture::m_fMinVertexDistance
	float ___m_fMinVertexDistance;
	// System.Single NcTrailTexture::m_fMaxVertexDistance
	float ___m_fMaxVertexDistance;
	// System.Single NcTrailTexture::m_fMaxAngle
	float ___m_fMaxAngle;
	// System.Boolean NcTrailTexture::m_bAutoDestruct
	bool ___m_bAutoDestruct;
	// System.Collections.Generic.List`1<NcTrailTexture/Point> NcTrailTexture::m_Points
	List_1_t5106 * ___m_Points;
	// UnityEngine.Transform NcTrailTexture::m_base
	Transform_t78 * ___m_base;
	// UnityEngine.GameObject NcTrailTexture::m_TrialObject
	GameObject_t9 * ___m_TrialObject;
	// UnityEngine.Mesh NcTrailTexture::m_TrailMesh
	Mesh_t1049 * ___m_TrailMesh;
	// UnityEngine.Vector3 NcTrailTexture::m_LastPosition
	Vector3_t121  ___m_LastPosition;
	// UnityEngine.Vector3 NcTrailTexture::m_LastCameraPosition1
	Vector3_t121  ___m_LastCameraPosition1;
	// UnityEngine.Vector3 NcTrailTexture::m_LastCameraPosition2
	Vector3_t121  ___m_LastCameraPosition2;
	// System.Boolean NcTrailTexture::m_bLastFrameEmit
	bool ___m_bLastFrameEmit;
};
