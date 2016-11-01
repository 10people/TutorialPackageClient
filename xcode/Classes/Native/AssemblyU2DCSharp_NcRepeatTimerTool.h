#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// NcTimerTool
#include "AssemblyU2DCSharp_NcTimerTool.h"
// NcRepeatTimerTool
struct NcRepeatTimerTool_t5029  : public NcTimerTool_t5025
{
	// System.Single NcRepeatTimerTool::m_fUpdateTime
	float ___m_fUpdateTime;
	// System.Single NcRepeatTimerTool::m_fIntervalTime
	float ___m_fIntervalTime;
	// System.Int32 NcRepeatTimerTool::m_nRepeatCount
	int32_t ___m_nRepeatCount;
	// System.Int32 NcRepeatTimerTool::m_nCallCount
	int32_t ___m_nCallCount;
	// System.Object NcRepeatTimerTool::m_ArgObject
	Object_t * ___m_ArgObject;
};
