#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_REQ_CHANGE_NOTICE
struct CG_GUILD_REQ_CHANGE_NOTICE_t3241  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_REQ_CHANGE_NOTICE::hasGuildNotice
	bool ___hasGuildNotice;
	// System.String CG_GUILD_REQ_CHANGE_NOTICE::guildNotice_
	String_t* ___guildNotice_;
	// System.Int32 CG_GUILD_REQ_CHANGE_NOTICE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
