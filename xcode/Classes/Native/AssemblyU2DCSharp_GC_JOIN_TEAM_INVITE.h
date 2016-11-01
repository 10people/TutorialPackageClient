#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_JOIN_TEAM_INVITE
struct GC_JOIN_TEAM_INVITE_t2971  : public PacketDistributed_t2209
{
	// System.Boolean GC_JOIN_TEAM_INVITE::hasInviterGuid
	bool ___hasInviterGuid;
	// System.UInt64 GC_JOIN_TEAM_INVITE::inviterGuid_
	uint64_t ___inviterGuid_;
	// System.Boolean GC_JOIN_TEAM_INVITE::hasInviterName
	bool ___hasInviterName;
	// System.String GC_JOIN_TEAM_INVITE::inviterName_
	String_t* ___inviterName_;
	// System.Int32 GC_JOIN_TEAM_INVITE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
