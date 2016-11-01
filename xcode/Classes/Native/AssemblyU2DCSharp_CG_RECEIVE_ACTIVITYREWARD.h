#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_RECEIVE_ACTIVITYREWARD
struct CG_RECEIVE_ACTIVITYREWARD_t3523  : public PacketDistributed_t2209
{
	// System.Boolean CG_RECEIVE_ACTIVITYREWARD::hasRewardIndex
	bool ___hasRewardIndex;
	// System.Int32 CG_RECEIVE_ACTIVITYREWARD::rewardIndex_
	int32_t ___rewardIndex_;
	// System.Boolean CG_RECEIVE_ACTIVITYREWARD::hasIsreplacement
	bool ___hasIsreplacement;
	// System.Int32 CG_RECEIVE_ACTIVITYREWARD::isreplacement_
	int32_t ___isreplacement_;
	// System.Int32 CG_RECEIVE_ACTIVITYREWARD::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
