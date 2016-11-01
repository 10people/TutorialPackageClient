#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64>
struct PopsicleList_1_t2922;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String>
struct PopsicleList_1_t2924;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_GUILD_RET_INFO
struct GC_GUILD_RET_INFO_t3240  : public PacketDistributed_t2209
{
	// System.Boolean GC_GUILD_RET_INFO::hasGuildGuid
	bool ___hasGuildGuid;
	// System.UInt64 GC_GUILD_RET_INFO::guildGuid_
	uint64_t ___guildGuid_;
	// System.Boolean GC_GUILD_RET_INFO::hasGuildName
	bool ___hasGuildName;
	// System.String GC_GUILD_RET_INFO::guildName_
	String_t* ___guildName_;
	// System.Boolean GC_GUILD_RET_INFO::hasGuildChiefGuid
	bool ___hasGuildChiefGuid;
	// System.UInt64 GC_GUILD_RET_INFO::guildChiefGuid_
	uint64_t ___guildChiefGuid_;
	// System.Boolean GC_GUILD_RET_INFO::hasGuildLevel
	bool ___hasGuildLevel;
	// System.Int32 GC_GUILD_RET_INFO::guildLevel_
	int32_t ___guildLevel_;
	// System.Boolean GC_GUILD_RET_INFO::hasGuildExp
	bool ___hasGuildExp;
	// System.Int32 GC_GUILD_RET_INFO::guildExp_
	int32_t ___guildExp_;
	// System.Boolean GC_GUILD_RET_INFO::hasGuildNotice
	bool ___hasGuildNotice;
	// System.String GC_GUILD_RET_INFO::guildNotice_
	String_t* ___guildNotice_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64> GC_GUILD_RET_INFO::memberGuid_
	PopsicleList_1_t2922 * ___memberGuid_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String> GC_GUILD_RET_INFO::memberName_
	PopsicleList_1_t2924 * ___memberName_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_RET_INFO::memberVIP_
	PopsicleList_1_t2923 * ___memberVIP_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_RET_INFO::memberProf_
	PopsicleList_1_t2923 * ___memberProf_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_RET_INFO::memberLevel_
	PopsicleList_1_t2923 * ___memberLevel_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_RET_INFO::memberContirbute_
	PopsicleList_1_t2923 * ___memberContirbute_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_RET_INFO::memberLastLogout_
	PopsicleList_1_t2923 * ___memberLastLogout_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_RET_INFO::memberState_
	PopsicleList_1_t2923 * ___memberState_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_RET_INFO::memberJob_
	PopsicleList_1_t2923 * ___memberJob_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_RET_INFO::combatval_
	PopsicleList_1_t2923 * ___combatval_;
	// System.Boolean GC_GUILD_RET_INFO::hasPscanacpttimes
	bool ___hasPscanacpttimes;
	// System.Int32 GC_GUILD_RET_INFO::pscanacpttimes_
	int32_t ___pscanacpttimes_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_RET_INFO::GuildHistoryType_
	PopsicleList_1_t2923 * ___GuildHistoryType_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_RET_INFO::GuildHistoryTime_
	PopsicleList_1_t2923 * ___GuildHistoryTime_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String> GC_GUILD_RET_INFO::GuildHistoryText_
	PopsicleList_1_t2924 * ___GuildHistoryText_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_RET_INFO::ViceChiefRoutine_
	PopsicleList_1_t2923 * ___ViceChiefRoutine_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_RET_INFO::ElderRoutine_
	PopsicleList_1_t2923 * ___ElderRoutine_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String> GC_GUILD_RET_INFO::GuildJobName_
	PopsicleList_1_t2924 * ___GuildJobName_;
	// System.Boolean GC_GUILD_RET_INFO::hasLastWeekContri
	bool ___hasLastWeekContri;
	// System.Int32 GC_GUILD_RET_INFO::LastWeekContri_
	int32_t ___LastWeekContri_;
	// System.Boolean GC_GUILD_RET_INFO::hasNeedReserve
	bool ___hasNeedReserve;
	// System.Int32 GC_GUILD_RET_INFO::NeedReserve_
	int32_t ___NeedReserve_;
	// System.Boolean GC_GUILD_RET_INFO::hasGuildDeclaration
	bool ___hasGuildDeclaration;
	// System.String GC_GUILD_RET_INFO::GuildDeclaration_
	String_t* ___GuildDeclaration_;
	// System.Boolean GC_GUILD_RET_INFO::hasHideAndSeekWeek
	bool ___hasHideAndSeekWeek;
	// System.Int32 GC_GUILD_RET_INFO::HideAndSeekWeek_
	int32_t ___HideAndSeekWeek_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_RET_INFO::SceneNpcId_
	PopsicleList_1_t2923 * ___SceneNpcId_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_GUILD_RET_INFO::SceneNpcFind_
	PopsicleList_1_t2923 * ___SceneNpcFind_;
	// System.Int32 GC_GUILD_RET_INFO::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
