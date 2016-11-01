#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_SEND_FASHIONINFO
struct GC_SEND_FASHIONINFO_t3221  : public PacketDistributed_t2209
{
	// System.Boolean GC_SEND_FASHIONINFO::hasFashionID
	bool ___hasFashionID;
	// System.Int32 GC_SEND_FASHIONINFO::FashionID_
	int32_t ___FashionID_;
	// System.Boolean GC_SEND_FASHIONINFO::hasDeadline
	bool ___hasDeadline;
	// System.Int32 GC_SEND_FASHIONINFO::Deadline_
	int32_t ___Deadline_;
	// System.Int32 GC_SEND_FASHIONINFO::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
