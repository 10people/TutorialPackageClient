#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_REQ_CHANGE_DECLARATION
struct CG_GUILD_REQ_CHANGE_DECLARATION_t3621  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_REQ_CHANGE_DECLARATION::hasGuildDeclaration
	bool ___hasGuildDeclaration;
	// System.String CG_GUILD_REQ_CHANGE_DECLARATION::guildDeclaration_
	String_t* ___guildDeclaration_;
	// System.Int32 CG_GUILD_REQ_CHANGE_DECLARATION::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
