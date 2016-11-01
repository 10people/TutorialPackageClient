#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_DUEL_RESPONSE
struct CG_DUEL_RESPONSE_t3181  : public PacketDistributed_t2209
{
	// System.Boolean CG_DUEL_RESPONSE::hasAgree
	bool ___hasAgree;
	// System.Int32 CG_DUEL_RESPONSE::agree_
	int32_t ___agree_;
	// System.Boolean CG_DUEL_RESPONSE::hasGuid
	bool ___hasGuid;
	// System.UInt64 CG_DUEL_RESPONSE::guid_
	uint64_t ___guid_;
	// System.Int32 CG_DUEL_RESPONSE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
