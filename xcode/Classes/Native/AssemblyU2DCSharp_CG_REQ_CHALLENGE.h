#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_REQ_CHALLENGE
struct CG_REQ_CHALLENGE_t3109  : public PacketDistributed_t2209
{
	// System.Boolean CG_REQ_CHALLENGE::hasOpponentGuid
	bool ___hasOpponentGuid;
	// System.UInt64 CG_REQ_CHALLENGE::opponentGuid_
	uint64_t ___opponentGuid_;
	// System.Int32 CG_REQ_CHALLENGE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
