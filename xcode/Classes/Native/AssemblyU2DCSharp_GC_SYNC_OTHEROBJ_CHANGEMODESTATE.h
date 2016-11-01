#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_SYNC_OTHEROBJ_CHANGEMODESTATE
struct GC_SYNC_OTHEROBJ_CHANGEMODESTATE_t3602  : public PacketDistributed_t2209
{
	// System.Boolean GC_SYNC_OTHEROBJ_CHANGEMODESTATE::hasNSenderId
	bool ___hasNSenderId;
	// System.Int32 GC_SYNC_OTHEROBJ_CHANGEMODESTATE::nSenderId_
	int32_t ___nSenderId_;
	// System.Boolean GC_SYNC_OTHEROBJ_CHANGEMODESTATE::hasNChangeState
	bool ___hasNChangeState;
	// System.Int32 GC_SYNC_OTHEROBJ_CHANGEMODESTATE::nChangeState_
	int32_t ___nChangeState_;
	// System.Int32 GC_SYNC_OTHEROBJ_CHANGEMODESTATE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
