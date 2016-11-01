#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_JOIN_OTHERPLAYER
struct CG_GUILD_JOIN_OTHERPLAYER_t3417  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_JOIN_OTHERPLAYER::hasUserGuid
	bool ___hasUserGuid;
	// System.UInt64 CG_GUILD_JOIN_OTHERPLAYER::userGuid_
	uint64_t ___userGuid_;
	// System.Boolean CG_GUILD_JOIN_OTHERPLAYER::hasUserName
	bool ___hasUserName;
	// System.String CG_GUILD_JOIN_OTHERPLAYER::userName_
	String_t* ___userName_;
	// System.Int32 CG_GUILD_JOIN_OTHERPLAYER::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
