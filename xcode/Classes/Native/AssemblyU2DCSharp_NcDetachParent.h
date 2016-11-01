#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// NcDetachObject
struct NcDetachObject_t5022;
// NcTransformTool
struct NcTransformTool_t5030;
// NcEffectBehaviour
#include "AssemblyU2DCSharp_NcEffectBehaviour.h"
// NcDetachParent
struct NcDetachParent_t5074  : public NcEffectBehaviour_t5021
{
	// System.Boolean NcDetachParent::m_bFollowParentTransform
	bool ___m_bFollowParentTransform;
	// System.Boolean NcDetachParent::m_bParentHideToStartDestroy
	bool ___m_bParentHideToStartDestroy;
	// System.Single NcDetachParent::m_fSmoothDestroyTime
	float ___m_fSmoothDestroyTime;
	// System.Boolean NcDetachParent::m_bDisableEmit
	bool ___m_bDisableEmit;
	// System.Boolean NcDetachParent::m_bSmoothHide
	bool ___m_bSmoothHide;
	// System.Boolean NcDetachParent::m_bMeshFilterOnlySmoothHide
	bool ___m_bMeshFilterOnlySmoothHide;
	// System.Boolean NcDetachParent::m_bStartDetach
	bool ___m_bStartDetach;
	// System.Single NcDetachParent::m_fStartDestroyTime
	float ___m_fStartDestroyTime;
	// UnityEngine.GameObject NcDetachParent::m_ParentGameObject
	GameObject_t9 * ___m_ParentGameObject;
	// NcDetachObject NcDetachParent::m_ncDetachObject
	NcDetachObject_t5022 * ___m_ncDetachObject;
	// NcTransformTool NcDetachParent::m_OriginalPos
	NcTransformTool_t5030 * ___m_OriginalPos;
};
