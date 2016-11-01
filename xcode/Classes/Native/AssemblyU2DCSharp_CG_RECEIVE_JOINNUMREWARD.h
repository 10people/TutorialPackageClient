#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_RECEIVE_JOINNUMREWARD
struct CG_RECEIVE_JOINNUMREWARD_t3535  : public PacketDistributed_t2209
{
	// System.Boolean CG_RECEIVE_JOINNUMREWARD::hasRewardIndex
	bool ___hasRewardIndex;
	// System.Int32 CG_RECEIVE_JOINNUMREWARD::rewardIndex_
	int32_t ___rewardIndex_;
	// System.Int32 CG_RECEIVE_JOINNUMREWARD::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
