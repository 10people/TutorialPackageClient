#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_REQ_TEAM_CHANGE_LEADER
struct CG_REQ_TEAM_CHANGE_LEADER_t2967  : public PacketDistributed_t2209
{
	// System.Boolean CG_REQ_TEAM_CHANGE_LEADER::hasTeamMemberGuid
	bool ___hasTeamMemberGuid;
	// System.UInt64 CG_REQ_TEAM_CHANGE_LEADER::teamMemberGuid_
	uint64_t ___teamMemberGuid_;
	// System.Int32 CG_REQ_TEAM_CHANGE_LEADER::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
