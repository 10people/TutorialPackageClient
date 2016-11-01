#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_TEAM_CALLMEMBER
struct GC_TEAM_CALLMEMBER_t3507  : public PacketDistributed_t2209
{
	// System.Boolean GC_TEAM_CALLMEMBER::hasInviterName
	bool ___hasInviterName;
	// System.String GC_TEAM_CALLMEMBER::inviterName_
	String_t* ___inviterName_;
	// System.Boolean GC_TEAM_CALLMEMBER::hasSceneID
	bool ___hasSceneID;
	// System.Int32 GC_TEAM_CALLMEMBER::sceneID_
	int32_t ___sceneID_;
	// System.Int32 GC_TEAM_CALLMEMBER::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
