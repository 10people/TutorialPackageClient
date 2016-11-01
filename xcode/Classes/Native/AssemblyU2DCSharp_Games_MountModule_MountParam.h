#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// Games.MountModule.MountParam
struct MountParam_t4800 
{
	// System.Int32 Games.MountModule.MountParam::m_nMountID
	int32_t ___m_nMountID;
	// System.Int32 Games.MountModule.MountParam::m_AutoFlagMountID
	int32_t ___m_AutoFlagMountID;
	// System.Int32[] Games.MountModule.MountParam::m_MountCollect
	Int32U5BU5D_t116* ___m_MountCollect;
	// System.Int32[] Games.MountModule.MountParam::m_MountRemind
	Int32U5BU5D_t116* ___m_MountRemind;
	// System.Int32[] Games.MountModule.MountParam::m_MountDeadlineTime
	Int32U5BU5D_t116* ___m_MountDeadlineTime;
};
// Native definition for marshalling of: Games.MountModule.MountParam
struct MountParam_t4800_marshaled
{
	int32_t ___m_nMountID;
	int32_t ___m_AutoFlagMountID;
	int32_t* ___m_MountCollect;
	int32_t* ___m_MountRemind;
	int32_t* ___m_MountDeadlineTime;
};
