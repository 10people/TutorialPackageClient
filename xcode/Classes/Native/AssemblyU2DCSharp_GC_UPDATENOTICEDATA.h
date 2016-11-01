#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String>
struct PopsicleList_1_t2924;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_UPDATENOTICEDATA
struct GC_UPDATENOTICEDATA_t2961  : public PacketDistributed_t2209
{
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String> GC_UPDATENOTICEDATA::news_
	PopsicleList_1_t2924 * ___news_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String> GC_UPDATENOTICEDATA::data_
	PopsicleList_1_t2924 * ___data_;
	// System.Boolean GC_UPDATENOTICEDATA::hasIsShow
	bool ___hasIsShow;
	// System.Int32 GC_UPDATENOTICEDATA::IsShow_
	int32_t ___IsShow_;
	// System.Int32 GC_UPDATENOTICEDATA::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
