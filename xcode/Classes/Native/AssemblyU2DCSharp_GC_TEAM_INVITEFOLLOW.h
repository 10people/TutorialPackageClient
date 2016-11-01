#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_TEAM_INVITEFOLLOW
struct GC_TEAM_INVITEFOLLOW_t3493  : public PacketDistributed_t2209
{
	// System.Boolean GC_TEAM_INVITEFOLLOW::hasInviterName
	bool ___hasInviterName;
	// System.String GC_TEAM_INVITEFOLLOW::inviterName_
	String_t* ___inviterName_;
	// System.Int32 GC_TEAM_INVITEFOLLOW::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
