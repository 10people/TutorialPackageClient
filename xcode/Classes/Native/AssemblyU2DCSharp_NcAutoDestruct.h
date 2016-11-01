#pragma once
#include <stdint.h>
// NcCurveAnimation
struct NcCurveAnimation_t5056;
// NcEffectBehaviour
#include "AssemblyU2DCSharp_NcEffectBehaviour.h"
// NcAutoDestruct/CollisionType
#include "AssemblyU2DCSharp_NcAutoDestruct_CollisionType.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// NcAutoDestruct
struct NcAutoDestruct_t5057  : public NcEffectBehaviour_t5021
{
	// System.Single NcAutoDestruct::m_fLifeTime
	float ___m_fLifeTime;
	// System.Single NcAutoDestruct::m_fSmoothDestroyTime
	float ___m_fSmoothDestroyTime;
	// System.Boolean NcAutoDestruct::m_bDisableEmit
	bool ___m_bDisableEmit;
	// System.Boolean NcAutoDestruct::m_bSmoothHide
	bool ___m_bSmoothHide;
	// System.Boolean NcAutoDestruct::m_bMeshFilterOnlySmoothHide
	bool ___m_bMeshFilterOnlySmoothHide;
	// System.Boolean NcAutoDestruct::m_bEndNcCurveAnimation
	bool ___m_bEndNcCurveAnimation;
	// NcAutoDestruct/CollisionType NcAutoDestruct::m_CollisionType
	int32_t ___m_CollisionType;
	// UnityEngine.LayerMask NcAutoDestruct::m_CollisionLayer
	LayerMask_t39  ___m_CollisionLayer;
	// System.Single NcAutoDestruct::m_fCollisionRadius
	float ___m_fCollisionRadius;
	// System.Single NcAutoDestruct::m_fDestructPosY
	float ___m_fDestructPosY;
	// System.Single NcAutoDestruct::m_fStartTime
	float ___m_fStartTime;
	// System.Single NcAutoDestruct::m_fStartDestroyTime
	float ___m_fStartDestroyTime;
	// NcCurveAnimation NcAutoDestruct::m_NcCurveAnimation
	NcCurveAnimation_t5056 * ___m_NcCurveAnimation;
};
