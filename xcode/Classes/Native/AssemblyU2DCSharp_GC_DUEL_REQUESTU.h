#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_DUEL_REQUESTU
struct GC_DUEL_REQUESTU_t3180  : public PacketDistributed_t2209
{
	// System.Boolean GC_DUEL_REQUESTU::hasName
	bool ___hasName;
	// System.String GC_DUEL_REQUESTU::name_
	String_t* ___name_;
	// System.Boolean GC_DUEL_REQUESTU::hasGuid
	bool ___hasGuid;
	// System.UInt64 GC_DUEL_REQUESTU::guid_
	uint64_t ___guid_;
	// System.Int32 GC_DUEL_REQUESTU::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
