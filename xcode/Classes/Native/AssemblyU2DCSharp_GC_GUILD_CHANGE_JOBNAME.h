#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_GUILD_CHANGE_JOBNAME
struct GC_GUILD_CHANGE_JOBNAME_t3619  : public PacketDistributed_t2209
{
	// System.Boolean GC_GUILD_CHANGE_JOBNAME::hasGuildJobId
	bool ___hasGuildJobId;
	// System.Int32 GC_GUILD_CHANGE_JOBNAME::GuildJobId_
	int32_t ___GuildJobId_;
	// System.Boolean GC_GUILD_CHANGE_JOBNAME::hasGuildJobName
	bool ___hasGuildJobName;
	// System.String GC_GUILD_CHANGE_JOBNAME::GuildJobName_
	String_t* ___GuildJobName_;
	// System.Int32 GC_GUILD_CHANGE_JOBNAME::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
