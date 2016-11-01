#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_LOGIN_QUEUE_STATUS
struct GC_LOGIN_QUEUE_STATUS_t3315  : public PacketDistributed_t2209
{
	// System.Boolean GC_LOGIN_QUEUE_STATUS::hasStatus
	bool ___hasStatus;
	// System.Int32 GC_LOGIN_QUEUE_STATUS::status_
	int32_t ___status_;
	// System.Boolean GC_LOGIN_QUEUE_STATUS::hasIndex
	bool ___hasIndex;
	// System.Int32 GC_LOGIN_QUEUE_STATUS::index_
	int32_t ___index_;
	// System.Int32 GC_LOGIN_QUEUE_STATUS::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
