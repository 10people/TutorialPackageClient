#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_REQ_BLACK_USERINFO
struct CG_REQ_BLACK_USERINFO_t3567  : public PacketDistributed_t2209
{
	// System.Boolean CG_REQ_BLACK_USERINFO::hasGuid
	bool ___hasGuid;
	// System.UInt64 CG_REQ_BLACK_USERINFO::guid_
	uint64_t ___guid_;
	// System.Int32 CG_REQ_BLACK_USERINFO::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
