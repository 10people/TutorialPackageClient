#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_SELECTROLE
struct CG_SELECTROLE_t2981  : public PacketDistributed_t2209
{
	// System.Boolean CG_SELECTROLE::hasRoleGUID
	bool ___hasRoleGUID;
	// System.UInt64 CG_SELECTROLE::roleGUID_
	uint64_t ___roleGUID_;
	// System.Int32 CG_SELECTROLE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
