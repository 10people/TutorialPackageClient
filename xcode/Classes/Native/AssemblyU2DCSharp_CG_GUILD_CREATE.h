#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_CREATE
struct CG_GUILD_CREATE_t3242  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_CREATE::hasGuildName
	bool ___hasGuildName;
	// System.String CG_GUILD_CREATE::guildName_
	String_t* ___guildName_;
	// System.Boolean CG_GUILD_CREATE::hasGuildDeclaration
	bool ___hasGuildDeclaration;
	// System.String CG_GUILD_CREATE::GuildDeclaration_
	String_t* ___GuildDeclaration_;
	// System.Int32 CG_GUILD_CREATE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
