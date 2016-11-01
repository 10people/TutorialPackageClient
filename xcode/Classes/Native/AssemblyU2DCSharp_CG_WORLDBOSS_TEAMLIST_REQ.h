#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_WORLDBOSS_TEAMLIST_REQ
struct CG_WORLDBOSS_TEAMLIST_REQ_t3190  : public PacketDistributed_t2209
{
	// System.Boolean CG_WORLDBOSS_TEAMLIST_REQ::hasPage
	bool ___hasPage;
	// System.Int32 CG_WORLDBOSS_TEAMLIST_REQ::page_
	int32_t ___page_;
	// System.Int32 CG_WORLDBOSS_TEAMLIST_REQ::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
