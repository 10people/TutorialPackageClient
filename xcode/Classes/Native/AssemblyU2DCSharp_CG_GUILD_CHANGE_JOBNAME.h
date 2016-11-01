#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_CHANGE_JOBNAME
struct CG_GUILD_CHANGE_JOBNAME_t3608  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_CHANGE_JOBNAME::hasGuildJobId
	bool ___hasGuildJobId;
	// System.Int32 CG_GUILD_CHANGE_JOBNAME::GuildJobId_
	int32_t ___GuildJobId_;
	// System.Boolean CG_GUILD_CHANGE_JOBNAME::hasGuildJobName
	bool ___hasGuildJobName;
	// System.String CG_GUILD_CHANGE_JOBNAME::GuildJobName_
	String_t* ___GuildJobName_;
	// System.Int32 CG_GUILD_CHANGE_JOBNAME::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
