#pragma once
#include <stdint.h>
// NcEffectBehaviour
#include "AssemblyU2DCSharp_NcEffectBehaviour.h"
// NcChangeAlpha/TARGET_TYPE
#include "AssemblyU2DCSharp_NcChangeAlpha_TARGET_TYPE.h"
// NcChangeAlpha/CHANGE_MODE
#include "AssemblyU2DCSharp_NcChangeAlpha_CHANGE_MODE.h"
// NcChangeAlpha
struct NcChangeAlpha_t5064  : public NcEffectBehaviour_t5021
{
	// NcChangeAlpha/TARGET_TYPE NcChangeAlpha::m_TargetType
	int32_t ___m_TargetType;
	// System.Single NcChangeAlpha::m_fDelayTime
	float ___m_fDelayTime;
	// System.Single NcChangeAlpha::m_fChangeTime
	float ___m_fChangeTime;
	// System.Boolean NcChangeAlpha::m_bRecursively
	bool ___m_bRecursively;
	// NcChangeAlpha/CHANGE_MODE NcChangeAlpha::m_ChangeMode
	int32_t ___m_ChangeMode;
	// System.Single NcChangeAlpha::m_fFromAlphaValue
	float ___m_fFromAlphaValue;
	// System.Single NcChangeAlpha::m_fToMeshValue
	float ___m_fToMeshValue;
	// System.Single NcChangeAlpha::m_fStartTime
	float ___m_fStartTime;
	// System.Single NcChangeAlpha::m_fStartChangeTime
	float ___m_fStartChangeTime;
};
