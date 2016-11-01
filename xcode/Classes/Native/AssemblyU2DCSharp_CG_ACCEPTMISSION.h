#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_ACCEPTMISSION
struct CG_ACCEPTMISSION_t2935  : public PacketDistributed_t2209
{
	// System.Boolean CG_ACCEPTMISSION::hasMissionID
	bool ___hasMissionID;
	// System.Int32 CG_ACCEPTMISSION::MissionID_
	int32_t ___MissionID_;
	// System.Int32 CG_ACCEPTMISSION::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
