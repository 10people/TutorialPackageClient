#pragma once
#include <stdint.h>
// MobileHardwareInfo
struct MobileHardwareInfo_t2187;
// System.Object
#include "mscorlib_System_Object.h"
// Games.GlobeDefine.GameDefine_Globe/HardwardLevel
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_Hardwar.h"
// MobileHardwareInfo
struct MobileHardwareInfo_t2187  : public Object_t
{
	// System.Int32 MobileHardwareInfo::m_IOSMemorySize
	int32_t ___m_IOSMemorySize;
	// System.Int32 MobileHardwareInfo::m_AndroidLowMemorySize
	int32_t ___m_AndroidLowMemorySize;
	// System.Int32 MobileHardwareInfo::m_AndroidMiddleMemorySize
	int32_t ___m_AndroidMiddleMemorySize;
	// Games.GlobeDefine.GameDefine_Globe/HardwardLevel MobileHardwareInfo::m_HardwareLevel
	int32_t ___m_HardwareLevel;
};
struct MobileHardwareInfo_t2187_StaticFields{
	// MobileHardwareInfo MobileHardwareInfo::m_Instance
	MobileHardwareInfo_t2187 * ___m_Instance;
};
