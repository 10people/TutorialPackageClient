#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// NcTimerTool
#include "AssemblyU2DCSharp_NcTimerTool.h"
// NcRandomTimerTool
struct NcRandomTimerTool_t5028  : public NcTimerTool_t5025
{
	// System.Single NcRandomTimerTool::m_fRandomTime
	float ___m_fRandomTime;
	// System.Single NcRandomTimerTool::m_fUpdateTime
	float ___m_fUpdateTime;
	// System.Single NcRandomTimerTool::m_fMinIntervalTime
	float ___m_fMinIntervalTime;
	// System.Int32 NcRandomTimerTool::m_nRepeatCount
	int32_t ___m_nRepeatCount;
	// System.Int32 NcRandomTimerTool::m_nCallCount
	int32_t ___m_nCallCount;
	// System.Object NcRandomTimerTool::m_ArgObject
	Object_t * ___m_ArgObject;
};
