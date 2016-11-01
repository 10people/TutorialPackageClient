#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_JOIN_TEAM_REQUEST_RESULT
struct CG_JOIN_TEAM_REQUEST_RESULT_t2974  : public PacketDistributed_t2209
{
	// System.Boolean CG_JOIN_TEAM_REQUEST_RESULT::hasRequesterGuid
	bool ___hasRequesterGuid;
	// System.UInt64 CG_JOIN_TEAM_REQUEST_RESULT::requesterGuid_
	uint64_t ___requesterGuid_;
	// System.Boolean CG_JOIN_TEAM_REQUEST_RESULT::hasResult
	bool ___hasResult;
	// System.Int32 CG_JOIN_TEAM_REQUEST_RESULT::result_
	int32_t ___result_;
	// System.Int32 CG_JOIN_TEAM_REQUEST_RESULT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
