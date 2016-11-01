#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_GUILD_CREATE
struct GC_GUILD_CREATE_t3243  : public PacketDistributed_t2209
{
	// System.Boolean GC_GUILD_CREATE::hasGuildGuid
	bool ___hasGuildGuid;
	// System.UInt64 GC_GUILD_CREATE::guildGuid_
	uint64_t ___guildGuid_;
	// System.Boolean GC_GUILD_CREATE::hasGuildName
	bool ___hasGuildName;
	// System.String GC_GUILD_CREATE::guildName_
	String_t* ___guildName_;
	// System.Int32 GC_GUILD_CREATE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
