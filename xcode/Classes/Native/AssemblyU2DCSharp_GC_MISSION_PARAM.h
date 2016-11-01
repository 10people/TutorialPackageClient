#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_MISSION_PARAM
struct GC_MISSION_PARAM_t2942  : public PacketDistributed_t2209
{
	// System.Boolean GC_MISSION_PARAM::hasMissionID
	bool ___hasMissionID;
	// System.Int32 GC_MISSION_PARAM::MissionID_
	int32_t ___MissionID_;
	// System.Boolean GC_MISSION_PARAM::hasParamIndex
	bool ___hasParamIndex;
	// System.Int32 GC_MISSION_PARAM::ParamIndex_
	int32_t ___ParamIndex_;
	// System.Boolean GC_MISSION_PARAM::hasParam
	bool ___hasParam;
	// System.Int32 GC_MISSION_PARAM::Param_
	int32_t ___Param_;
	// System.Int32 GC_MISSION_PARAM::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
