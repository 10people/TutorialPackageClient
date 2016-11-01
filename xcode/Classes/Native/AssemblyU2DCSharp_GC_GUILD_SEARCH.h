#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64>
struct PopsicleList_1_t2922;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String>
struct PopsicleList_1_t2924;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_GUILD_SEARCH
struct GC_GUILD_SEARCH_t1459  : public PacketDistributed_t2209
{
	// System.Boolean GC_GUILD_SEARCH::hasNoneResult
	bool ___hasNoneResult;
	// System.Int32 GC_GUILD_SEARCH::NoneResult_
	int32_t ___NoneResult_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64> GC_GUILD_SEARCH::preserveGuildGuid_
	PopsicleList_1_t2922 * ___preserveGuildGuid_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64> GC_GUILD_SEARCH::guildGuid_
	PopsicleList_1_t2922 * ___guildGuid_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String> GC_GUILD_SEARCH::guildName_
	PopsicleList_1_t2924 * ___guildName_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String> GC_GUILD_SEARCH::guildChiefName_
	PopsicleList_1_t2924 * ___guildChiefName_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_SEARCH::guildLevel_
	PopsicleList_1_t2923 * ___guildLevel_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_SEARCH::guildMemberNum_
	PopsicleList_1_t2923 * ___guildMemberNum_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_SEARCH::guildCombat_
	PopsicleList_1_t2923 * ___guildCombat_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_SEARCH::isEnemyGuild_
	PopsicleList_1_t2923 * ___isEnemyGuild_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_SEARCH::guildApplyNum_
	PopsicleList_1_t2923 * ___guildApplyNum_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_SEARCH::guildApplyMaxNum_
	PopsicleList_1_t2923 * ___guildApplyMaxNum_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String> GC_GUILD_SEARCH::GuildDeclaration_
	PopsicleList_1_t2924 * ___GuildDeclaration_;
	// System.Int32 GC_GUILD_SEARCH::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
