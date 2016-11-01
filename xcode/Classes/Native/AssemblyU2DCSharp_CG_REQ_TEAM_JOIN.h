#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_REQ_TEAM_JOIN
struct CG_REQ_TEAM_JOIN_t2964  : public PacketDistributed_t2209
{
	// System.Boolean CG_REQ_TEAM_JOIN::hasTeamMemberGuid
	bool ___hasTeamMemberGuid;
	// System.UInt64 CG_REQ_TEAM_JOIN::teamMemberGuid_
	uint64_t ___teamMemberGuid_;
	// System.Int32 CG_REQ_TEAM_JOIN::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
