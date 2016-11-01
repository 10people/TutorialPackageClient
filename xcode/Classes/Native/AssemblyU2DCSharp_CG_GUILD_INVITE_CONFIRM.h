#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_INVITE_CONFIRM
struct CG_GUILD_INVITE_CONFIRM_t3374  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_INVITE_CONFIRM::hasInviterGuid
	bool ___hasInviterGuid;
	// System.UInt64 CG_GUILD_INVITE_CONFIRM::inviterGuid_
	uint64_t ___inviterGuid_;
	// System.Boolean CG_GUILD_INVITE_CONFIRM::hasInviterGuildGuid
	bool ___hasInviterGuildGuid;
	// System.UInt64 CG_GUILD_INVITE_CONFIRM::inviterGuildGuid_
	uint64_t ___inviterGuildGuid_;
	// System.Boolean CG_GUILD_INVITE_CONFIRM::hasAgree
	bool ___hasAgree;
	// System.Int32 CG_GUILD_INVITE_CONFIRM::agree_
	int32_t ___agree_;
	// System.Boolean CG_GUILD_INVITE_CONFIRM::hasInviterName
	bool ___hasInviterName;
	// System.String CG_GUILD_INVITE_CONFIRM::inviterName_
	String_t* ___inviterName_;
	// System.Int32 CG_GUILD_INVITE_CONFIRM::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
