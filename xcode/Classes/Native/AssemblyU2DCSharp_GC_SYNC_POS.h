#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_SYNC_POS
struct GC_SYNC_POS_t2950  : public PacketDistributed_t2209
{
	// System.Boolean GC_SYNC_POS::hasServerId
	bool ___hasServerId;
	// System.Int32 GC_SYNC_POS::serverId_
	int32_t ___serverId_;
	// System.Boolean GC_SYNC_POS::hasPosX
	bool ___hasPosX;
	// System.Int32 GC_SYNC_POS::posX_
	int32_t ___posX_;
	// System.Boolean GC_SYNC_POS::hasPosZ
	bool ___hasPosZ;
	// System.Int32 GC_SYNC_POS::posZ_
	int32_t ___posZ_;
	// System.Int32 GC_SYNC_POS::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
