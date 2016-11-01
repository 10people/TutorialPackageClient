#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_JOIN_TEAM_INVITE_RESULT
struct CG_JOIN_TEAM_INVITE_RESULT_t2972  : public PacketDistributed_t2209
{
	// System.Boolean CG_JOIN_TEAM_INVITE_RESULT::hasInviterGuid
	bool ___hasInviterGuid;
	// System.UInt64 CG_JOIN_TEAM_INVITE_RESULT::inviterGuid_
	uint64_t ___inviterGuid_;
	// System.Boolean CG_JOIN_TEAM_INVITE_RESULT::hasResult
	bool ___hasResult;
	// System.Int32 CG_JOIN_TEAM_INVITE_RESULT::result_
	int32_t ___result_;
	// System.Int32 CG_JOIN_TEAM_INVITE_RESULT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
