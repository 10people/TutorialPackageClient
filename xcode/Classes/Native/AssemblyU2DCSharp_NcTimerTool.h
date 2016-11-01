#pragma once
#include <stdint.h>
// System.Single[]
struct SingleU5BU5D_t744;
// System.Object
#include "mscorlib_System_Object.h"
// NcTimerTool
struct NcTimerTool_t5025  : public Object_t
{
	// System.Boolean NcTimerTool::m_bEnable
	bool ___m_bEnable;
	// System.Single NcTimerTool::m_fLastEngineTime
	float ___m_fLastEngineTime;
	// System.Single NcTimerTool::m_fCurrentTime
	float ___m_fCurrentTime;
	// System.Single NcTimerTool::m_fLastTime
	float ___m_fLastTime;
	// System.Single NcTimerTool::m_fTimeScale
	float ___m_fTimeScale;
	// System.Int32 NcTimerTool::m_nSmoothCount
	int32_t ___m_nSmoothCount;
	// System.Int32 NcTimerTool::m_nSmoothIndex
	int32_t ___m_nSmoothIndex;
	// System.Single NcTimerTool::m_fSmoothRate
	float ___m_fSmoothRate;
	// System.Single[] NcTimerTool::m_fSmoothTimes
	SingleU5BU5D_t744* ___m_fSmoothTimes;
	// System.Single NcTimerTool::m_fLastSmoothDeltaTime
	float ___m_fLastSmoothDeltaTime;
};
