#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_REQ_TEAM_KICK_MEMBER
struct CG_REQ_TEAM_KICK_MEMBER_t2966  : public PacketDistributed_t2209
{
	// System.Boolean CG_REQ_TEAM_KICK_MEMBER::hasTeamMemberGuid
	bool ___hasTeamMemberGuid;
	// System.UInt64 CG_REQ_TEAM_KICK_MEMBER::teamMemberGuid_
	uint64_t ___teamMemberGuid_;
	// System.Int32 CG_REQ_TEAM_KICK_MEMBER::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
