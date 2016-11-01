#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_MASTER_CREATE
struct GC_MASTER_CREATE_t3266  : public PacketDistributed_t2209
{
	// System.Boolean GC_MASTER_CREATE::hasMasterGuid
	bool ___hasMasterGuid;
	// System.UInt64 GC_MASTER_CREATE::masterGuid_
	uint64_t ___masterGuid_;
	// System.Boolean GC_MASTER_CREATE::hasMasterName
	bool ___hasMasterName;
	// System.String GC_MASTER_CREATE::masterName_
	String_t* ___masterName_;
	// System.Int32 GC_MASTER_CREATE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
