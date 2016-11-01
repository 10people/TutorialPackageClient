#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_JOIN_TEAM_REQUEST
struct GC_JOIN_TEAM_REQUEST_t2973  : public PacketDistributed_t2209
{
	// System.Boolean GC_JOIN_TEAM_REQUEST::hasRequesterGuid
	bool ___hasRequesterGuid;
	// System.UInt64 GC_JOIN_TEAM_REQUEST::requesterGuid_
	uint64_t ___requesterGuid_;
	// System.Boolean GC_JOIN_TEAM_REQUEST::hasRequesterName
	bool ___hasRequesterName;
	// System.String GC_JOIN_TEAM_REQUEST::requesterName_
	String_t* ___requesterName_;
	// System.Boolean GC_JOIN_TEAM_REQUEST::hasRequesterlevel
	bool ___hasRequesterlevel;
	// System.Int32 GC_JOIN_TEAM_REQUEST::requesterlevel_
	int32_t ___requesterlevel_;
	// System.Int32 GC_JOIN_TEAM_REQUEST::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
