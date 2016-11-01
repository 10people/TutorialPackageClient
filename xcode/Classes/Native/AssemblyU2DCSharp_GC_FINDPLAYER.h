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
// GC_FINDPLAYER
struct GC_FINDPLAYER_t2029  : public PacketDistributed_t2209
{
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64> GC_FINDPLAYER::guid_
	PopsicleList_1_t2922 * ___guid_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String> GC_FINDPLAYER::Name_
	PopsicleList_1_t2924 * ___Name_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_FINDPLAYER::Level_
	PopsicleList_1_t2923 * ___Level_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_FINDPLAYER::Prof_
	PopsicleList_1_t2923 * ___Prof_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_FINDPLAYER::Combat_
	PopsicleList_1_t2923 * ___Combat_;
	// System.Boolean GC_FINDPLAYER::hasRet
	bool ___hasRet;
	// System.Int32 GC_FINDPLAYER::Ret_
	int32_t ___Ret_;
	// System.Int32 GC_FINDPLAYER::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
