#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_BROADCASTPSSTATE
struct GC_BROADCASTPSSTATE_t3459  : public PacketDistributed_t2209
{
	// System.Boolean GC_BROADCASTPSSTATE::hasObjId
	bool ___hasObjId;
	// System.Int32 GC_BROADCASTPSSTATE::objId_
	int32_t ___objId_;
	// System.Boolean GC_BROADCASTPSSTATE::hasState
	bool ___hasState;
	// System.Int32 GC_BROADCASTPSSTATE::state_
	int32_t ___state_;
	// System.Int32 GC_BROADCASTPSSTATE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
