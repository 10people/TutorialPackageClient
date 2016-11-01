#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_RECEIVE_ACTIVITYREWARD_RESULT
struct GC_RECEIVE_ACTIVITYREWARD_RESULT_t3524  : public PacketDistributed_t2209
{
	// System.Boolean GC_RECEIVE_ACTIVITYREWARD_RESULT::hasRewardIndex
	bool ___hasRewardIndex;
	// System.Int32 GC_RECEIVE_ACTIVITYREWARD_RESULT::rewardIndex_
	int32_t ___rewardIndex_;
	// System.Boolean GC_RECEIVE_ACTIVITYREWARD_RESULT::hasNdata
	bool ___hasNdata;
	// System.Int32 GC_RECEIVE_ACTIVITYREWARD_RESULT::ndata_
	int32_t ___ndata_;
	// System.Int32 GC_RECEIVE_ACTIVITYREWARD_RESULT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
