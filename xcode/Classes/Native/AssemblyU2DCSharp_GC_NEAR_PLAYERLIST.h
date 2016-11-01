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
// GC_NEAR_PLAYERLIST
struct GC_NEAR_PLAYERLIST_t2042  : public PacketDistributed_t2209
{
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64> GC_NEAR_PLAYERLIST::Guid_
	PopsicleList_1_t2922 * ___Guid_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String> GC_NEAR_PLAYERLIST::Name_
	PopsicleList_1_t2924 * ___Name_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_NEAR_PLAYERLIST::Level_
	PopsicleList_1_t2923 * ___Level_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_NEAR_PLAYERLIST::Prof_
	PopsicleList_1_t2923 * ___Prof_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_NEAR_PLAYERLIST::CombatNum_
	PopsicleList_1_t2923 * ___CombatNum_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_NEAR_PLAYERLIST::VipLevel_
	PopsicleList_1_t2923 * ___VipLevel_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String> GC_NEAR_PLAYERLIST::GuildName_
	PopsicleList_1_t2924 * ___GuildName_;
	// System.Int32 GC_NEAR_PLAYERLIST::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
