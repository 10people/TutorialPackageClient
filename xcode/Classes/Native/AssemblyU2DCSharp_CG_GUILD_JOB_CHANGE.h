#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64>
struct PopsicleList_1_t2922;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_JOB_CHANGE
struct CG_GUILD_JOB_CHANGE_t3249  : public PacketDistributed_t2209
{
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64> CG_GUILD_JOB_CHANGE::approver_
	PopsicleList_1_t2922 * ___approver_;
	// System.Boolean CG_GUILD_JOB_CHANGE::hasJobID
	bool ___hasJobID;
	// System.Int32 CG_GUILD_JOB_CHANGE::jobID_
	int32_t ___jobID_;
	// System.Int32 CG_GUILD_JOB_CHANGE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
