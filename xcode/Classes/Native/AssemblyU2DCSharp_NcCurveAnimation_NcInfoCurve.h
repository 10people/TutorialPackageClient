#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.AnimationCurve
struct AnimationCurve_t4583;
struct AnimationCurve_t4583_marshaled;
// System.String[]
struct StringU5BU5D_t333;
// System.Boolean[]
struct BooleanU5BU5D_t102;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t1420;
// System.Object
#include "mscorlib_System_Object.h"
// NcCurveAnimation/NcInfoCurve/APPLY_TYPE
#include "AssemblyU2DCSharp_NcCurveAnimation_NcInfoCurve_APPLY_TYPE.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// NcCurveAnimation/NcInfoCurve
struct NcInfoCurve_t5066  : public Object_t
{
	// System.Boolean NcCurveAnimation/NcInfoCurve::m_bEnabled
	bool ___m_bEnabled;
	// System.String NcCurveAnimation/NcInfoCurve::m_CurveName
	String_t* ___m_CurveName;
	// UnityEngine.AnimationCurve NcCurveAnimation/NcInfoCurve::m_AniCurve
	AnimationCurve_t4583 * ___m_AniCurve;
	// NcCurveAnimation/NcInfoCurve/APPLY_TYPE NcCurveAnimation/NcInfoCurve::m_ApplyType
	int32_t ___m_ApplyType;
	// System.Boolean[] NcCurveAnimation/NcInfoCurve::m_bApplyOption
	BooleanU5BU5D_t102* ___m_bApplyOption;
	// System.Boolean NcCurveAnimation/NcInfoCurve::m_bRecursively
	bool ___m_bRecursively;
	// System.Single NcCurveAnimation/NcInfoCurve::m_fValueScale
	float ___m_fValueScale;
	// UnityEngine.Vector4 NcCurveAnimation/NcInfoCurve::m_FromColor
	Vector4_t942  ___m_FromColor;
	// UnityEngine.Vector4 NcCurveAnimation/NcInfoCurve::m_ToColor
	Vector4_t942  ___m_ToColor;
	// System.Int32 NcCurveAnimation/NcInfoCurve::m_nTag
	int32_t ___m_nTag;
	// System.Int32 NcCurveAnimation/NcInfoCurve::m_nSortGroup
	int32_t ___m_nSortGroup;
	// UnityEngine.Vector4 NcCurveAnimation/NcInfoCurve::m_OriginalValue
	Vector4_t942  ___m_OriginalValue;
	// UnityEngine.Vector4 NcCurveAnimation/NcInfoCurve::m_BeforeValue
	Vector4_t942  ___m_BeforeValue;
	// UnityEngine.Vector4[] NcCurveAnimation/NcInfoCurve::m_ChildOriginalColorValues
	Vector4U5BU5D_t1420* ___m_ChildOriginalColorValues;
	// UnityEngine.Vector4[] NcCurveAnimation/NcInfoCurve::m_ChildBeforeColorValues
	Vector4U5BU5D_t1420* ___m_ChildBeforeColorValues;
};
struct NcInfoCurve_t5066_StaticFields{
	// System.Single NcCurveAnimation/NcInfoCurve::m_fOverDraw
	float ___m_fOverDraw;
	// System.String[] NcCurveAnimation/NcInfoCurve::m_TypeName
	StringU5BU5D_t333* ___m_TypeName;
};
