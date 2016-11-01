#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_MISSION_STATE
struct GC_MISSION_STATE_t2941  : public PacketDistributed_t2209
{
	// System.Boolean GC_MISSION_STATE::hasMissionID
	bool ___hasMissionID;
	// System.Int32 GC_MISSION_STATE::MissionID_
	int32_t ___MissionID_;
	// System.Boolean GC_MISSION_STATE::hasState
	bool ___hasState;
	// System.Int32 GC_MISSION_STATE::State_
	int32_t ___State_;
	// System.Int32 GC_MISSION_STATE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
