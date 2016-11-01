#pragma once
#include <stdint.h>
// NcEffectBehaviour
#include "AssemblyU2DCSharp_NcEffectBehaviour.h"
// NcBillboard/AXIS_TYPE
#include "AssemblyU2DCSharp_NcBillboard_AXIS_TYPE.h"
// NcBillboard/ROTATION
#include "AssemblyU2DCSharp_NcBillboard_ROTATION.h"
// NcBillboard/AXIS
#include "AssemblyU2DCSharp_NcBillboard_AXIS.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// NcBillboard
struct NcBillboard_t5061  : public NcEffectBehaviour_t5021
{
	// System.Boolean NcBillboard::m_bCameraLookAt
	bool ___m_bCameraLookAt;
	// System.Boolean NcBillboard::m_bFixedObjectUp
	bool ___m_bFixedObjectUp;
	// System.Boolean NcBillboard::m_bFixedStand
	bool ___m_bFixedStand;
	// NcBillboard/AXIS_TYPE NcBillboard::m_FrontAxis
	int32_t ___m_FrontAxis;
	// NcBillboard/ROTATION NcBillboard::m_RatationMode
	int32_t ___m_RatationMode;
	// NcBillboard/AXIS NcBillboard::m_RatationAxis
	int32_t ___m_RatationAxis;
	// System.Single NcBillboard::m_fRotationValue
	float ___m_fRotationValue;
	// System.Single NcBillboard::m_fRndValue
	float ___m_fRndValue;
	// System.Single NcBillboard::m_fTotalRotationValue
	float ___m_fTotalRotationValue;
	// UnityEngine.Quaternion NcBillboard::m_qOiginal
	Quaternion_t120  ___m_qOiginal;
};
