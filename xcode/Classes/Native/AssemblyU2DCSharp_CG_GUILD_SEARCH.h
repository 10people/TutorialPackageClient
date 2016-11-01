#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_SEARCH
struct CG_GUILD_SEARCH_t3616  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_SEARCH::hasGuildName
	bool ___hasGuildName;
	// System.String CG_GUILD_SEARCH::GuildName_
	String_t* ___GuildName_;
	// System.Int32 CG_GUILD_SEARCH::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
