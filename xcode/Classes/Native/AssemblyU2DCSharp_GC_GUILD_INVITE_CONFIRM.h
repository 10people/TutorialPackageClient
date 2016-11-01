#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_GUILD_INVITE_CONFIRM
struct GC_GUILD_INVITE_CONFIRM_t3373  : public PacketDistributed_t2209
{
	// System.Boolean GC_GUILD_INVITE_CONFIRM::hasInviterGuid
	bool ___hasInviterGuid;
	// System.UInt64 GC_GUILD_INVITE_CONFIRM::inviterGuid_
	uint64_t ___inviterGuid_;
	// System.Boolean GC_GUILD_INVITE_CONFIRM::hasInviterGuildGuid
	bool ___hasInviterGuildGuid;
	// System.UInt64 GC_GUILD_INVITE_CONFIRM::inviterGuildGuid_
	uint64_t ___inviterGuildGuid_;
	// System.Boolean GC_GUILD_INVITE_CONFIRM::hasInviterName
	bool ___hasInviterName;
	// System.String GC_GUILD_INVITE_CONFIRM::inviterName_
	String_t* ___inviterName_;
	// System.Boolean GC_GUILD_INVITE_CONFIRM::hasInviterGuidName
	bool ___hasInviterGuidName;
	// System.String GC_GUILD_INVITE_CONFIRM::inviterGuidName_
	String_t* ___inviterGuidName_;
	// System.Int32 GC_GUILD_INVITE_CONFIRM::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
