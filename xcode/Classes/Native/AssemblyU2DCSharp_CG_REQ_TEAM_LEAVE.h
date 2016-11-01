#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_REQ_TEAM_LEAVE
struct CG_REQ_TEAM_LEAVE_t2965  : public PacketDistributed_t2209
{
	// System.Boolean CG_REQ_TEAM_LEAVE::hasTeamID
	bool ___hasTeamID;
	// System.Int32 CG_REQ_TEAM_LEAVE::teamID_
	int32_t ___teamID_;
	// System.Boolean CG_REQ_TEAM_LEAVE::hasNewTeamMember
	bool ___hasNewTeamMember;
	// System.UInt64 CG_REQ_TEAM_LEAVE::NewTeamMember_
	uint64_t ___NewTeamMember_;
	// System.Int32 CG_REQ_TEAM_LEAVE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
