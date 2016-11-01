#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_ASK_STARTGUILDWAR
struct GC_ASK_STARTGUILDWAR_t3302  : public PacketDistributed_t2209
{
	// System.Boolean GC_ASK_STARTGUILDWAR::hasMessaegType
	bool ___hasMessaegType;
	// System.Int32 GC_ASK_STARTGUILDWAR::messaegType_
	int32_t ___messaegType_;
	// System.Boolean GC_ASK_STARTGUILDWAR::hasWarType
	bool ___hasWarType;
	// System.Int32 GC_ASK_STARTGUILDWAR::WarType_
	int32_t ___WarType_;
	// System.Boolean GC_ASK_STARTGUILDWAR::hasPointType
	bool ___hasPointType;
	// System.Int32 GC_ASK_STARTGUILDWAR::PointType_
	int32_t ___PointType_;
	// System.Boolean GC_ASK_STARTGUILDWAR::hasChallengeGuildName
	bool ___hasChallengeGuildName;
	// System.String GC_ASK_STARTGUILDWAR::challengeGuildName_
	String_t* ___challengeGuildName_;
	// System.Boolean GC_ASK_STARTGUILDWAR::hasChallengeGuildGuid
	bool ___hasChallengeGuildGuid;
	// System.UInt64 GC_ASK_STARTGUILDWAR::challengeGuildGuid_
	uint64_t ___challengeGuildGuid_;
	// System.Int32 GC_ASK_STARTGUILDWAR::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
