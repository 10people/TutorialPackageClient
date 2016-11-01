#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_DAILYMISSION_UPDATE_RET
struct GC_DAILYMISSION_UPDATE_RET_t3163  : public PacketDistributed_t2209
{
	// System.Boolean GC_DAILYMISSION_UPDATE_RET::hasType
	bool ___hasType;
	// System.Int32 GC_DAILYMISSION_UPDATE_RET::type_
	int32_t ___type_;
	// System.Boolean GC_DAILYMISSION_UPDATE_RET::hasDonecount
	bool ___hasDonecount;
	// System.Int32 GC_DAILYMISSION_UPDATE_RET::donecount_
	int32_t ___donecount_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_DAILYMISSION_UPDATE_RET::missionID_
	PopsicleList_1_t2923 * ___missionID_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_DAILYMISSION_UPDATE_RET::qualityType_
	PopsicleList_1_t2923 * ___qualityType_;
	// System.Int32 GC_DAILYMISSION_UPDATE_RET::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
