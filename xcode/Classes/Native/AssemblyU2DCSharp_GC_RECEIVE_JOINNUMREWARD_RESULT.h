#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_RECEIVE_JOINNUMREWARD_RESULT
struct GC_RECEIVE_JOINNUMREWARD_RESULT_t3536  : public PacketDistributed_t2209
{
	// System.Boolean GC_RECEIVE_JOINNUMREWARD_RESULT::hasRewardIndex
	bool ___hasRewardIndex;
	// System.Int32 GC_RECEIVE_JOINNUMREWARD_RESULT::rewardIndex_
	int32_t ___rewardIndex_;
	// System.Boolean GC_RECEIVE_JOINNUMREWARD_RESULT::hasNdata
	bool ___hasNdata;
	// System.Int32 GC_RECEIVE_JOINNUMREWARD_RESULT::ndata_
	int32_t ___ndata_;
	// System.Int32 GC_RECEIVE_JOINNUMREWARD_RESULT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
