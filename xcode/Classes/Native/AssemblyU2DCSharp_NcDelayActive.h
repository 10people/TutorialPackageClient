#pragma once
#include <stdint.h>
// System.String
struct String_t;
// NcEffectBehaviour
#include "AssemblyU2DCSharp_NcEffectBehaviour.h"
// NcDelayActive
struct NcDelayActive_t5073  : public NcEffectBehaviour_t5021
{
	// System.String NcDelayActive::NotAvailable
	String_t* ___NotAvailable;
	// System.Single NcDelayActive::m_fDelayTime
	float ___m_fDelayTime;
	// System.Boolean NcDelayActive::m_bActiveRecursively
	bool ___m_bActiveRecursively;
	// System.Single NcDelayActive::m_fAliveTime
	float ___m_fAliveTime;
	// System.Single NcDelayActive::m_fParentDelayTime
	float ___m_fParentDelayTime;
	// System.Boolean NcDelayActive::m_bAddedInvoke
	bool ___m_bAddedInvoke;
	// System.Single NcDelayActive::m_fStartedTime
	float ___m_fStartedTime;
};
