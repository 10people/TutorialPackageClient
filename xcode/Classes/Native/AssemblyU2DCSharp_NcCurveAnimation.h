#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<NcCurveAnimation/NcInfoCurve>
struct List_1_t5069;
// UnityEngine.Transform
struct Transform_t78;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t133;
// System.String[]
struct StringU5BU5D_t333;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t5070;
// UnityEngine.MeshFilter
struct MeshFilter_t1418;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_t5071;
// NcUvAnimation
struct NcUvAnimation_t5072;
// NcEffectAniBehaviour
#include "AssemblyU2DCSharp_NcEffectAniBehaviour.h"
// NcCurveAnimation
struct NcCurveAnimation_t5056  : public NcEffectAniBehaviour_t5026
{
	// System.Collections.Generic.List`1<NcCurveAnimation/NcInfoCurve> NcCurveAnimation::m_CurveInfoList
	List_1_t5069 * ___m_CurveInfoList;
	// System.Single NcCurveAnimation::m_fDelayTime
	float ___m_fDelayTime;
	// System.Single NcCurveAnimation::m_fDurationTime
	float ___m_fDurationTime;
	// System.Boolean NcCurveAnimation::m_bAutoDestruct
	bool ___m_bAutoDestruct;
	// System.Single NcCurveAnimation::m_fStartTime
	float ___m_fStartTime;
	// System.Single NcCurveAnimation::m_fElapsedRate
	float ___m_fElapsedRate;
	// UnityEngine.Transform NcCurveAnimation::m_Transform
	Transform_t78 * ___m_Transform;
	// System.String NcCurveAnimation::m_ColorName
	String_t* ___m_ColorName;
	// UnityEngine.Material NcCurveAnimation::m_MainMaterial
	Material_t133 * ___m_MainMaterial;
	// System.String[] NcCurveAnimation::m_ChildColorNames
	StringU5BU5D_t333* ___m_ChildColorNames;
	// UnityEngine.Renderer[] NcCurveAnimation::m_ChildRenderers
	RendererU5BU5D_t5070* ___m_ChildRenderers;
	// UnityEngine.MeshFilter NcCurveAnimation::m_MainMeshFilter
	MeshFilter_t1418 * ___m_MainMeshFilter;
	// UnityEngine.MeshFilter[] NcCurveAnimation::m_ChildMeshFilters
	MeshFilterU5BU5D_t5071* ___m_ChildMeshFilters;
	// NcUvAnimation NcCurveAnimation::m_NcUvAnimation
	NcUvAnimation_t5072 * ___m_NcUvAnimation;
};
