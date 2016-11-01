#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_FIGHTGUILDWARPOINT
struct CG_FIGHTGUILDWARPOINT_t3309  : public PacketDistributed_t2209
{
	// System.Boolean CG_FIGHTGUILDWARPOINT::hasWarType
	bool ___hasWarType;
	// System.Int32 CG_FIGHTGUILDWARPOINT::WarType_
	int32_t ___WarType_;
	// System.Boolean CG_FIGHTGUILDWARPOINT::hasPointType
	bool ___hasPointType;
	// System.Int32 CG_FIGHTGUILDWARPOINT::pointType_
	int32_t ___pointType_;
	// System.Int32 CG_FIGHTGUILDWARPOINT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
