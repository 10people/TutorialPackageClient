#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_MASTER_APPROVE_RESERVE
struct CG_MASTER_APPROVE_RESERVE_t3273  : public PacketDistributed_t2209
{
	// System.Boolean CG_MASTER_APPROVE_RESERVE::hasReserveMember
	bool ___hasReserveMember;
	// System.UInt64 CG_MASTER_APPROVE_RESERVE::reserveMember_
	uint64_t ___reserveMember_;
	// System.Boolean CG_MASTER_APPROVE_RESERVE::hasIsAgree
	bool ___hasIsAgree;
	// System.Int32 CG_MASTER_APPROVE_RESERVE::isAgree_
	int32_t ___isAgree_;
	// System.Int32 CG_MASTER_APPROVE_RESERVE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
