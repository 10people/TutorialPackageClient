#pragma once
#include <stdint.h>
// NcEffectBehaviour
#include "AssemblyU2DCSharp_NcEffectBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceMode.h"
// NcAddForce
struct NcAddForce_t5050  : public NcEffectBehaviour_t5021
{
	// UnityEngine.Vector3 NcAddForce::m_AddForce
	Vector3_t121  ___m_AddForce;
	// UnityEngine.Vector3 NcAddForce::m_RandomRange
	Vector3_t121  ___m_RandomRange;
	// UnityEngine.ForceMode NcAddForce::m_ForceMode
	int32_t ___m_ForceMode;
};
