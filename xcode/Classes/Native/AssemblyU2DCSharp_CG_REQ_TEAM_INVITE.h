#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_REQ_TEAM_INVITE
struct CG_REQ_TEAM_INVITE_t2963  : public PacketDistributed_t2209
{
	// System.Boolean CG_REQ_TEAM_INVITE::hasGuid
	bool ___hasGuid;
	// System.UInt64 CG_REQ_TEAM_INVITE::guid_
	uint64_t ___guid_;
	// System.Int32 CG_REQ_TEAM_INVITE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
