#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_REQ_NEAR_LIST
struct CG_REQ_NEAR_LIST_t2975  : public PacketDistributed_t2209
{
	// System.Boolean CG_REQ_NEAR_LIST::hasIsNearPlayerList
	bool ___hasIsNearPlayerList;
	// System.Int32 CG_REQ_NEAR_LIST::isNearPlayerList_
	int32_t ___isNearPlayerList_;
	// System.Int32 CG_REQ_NEAR_LIST::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
