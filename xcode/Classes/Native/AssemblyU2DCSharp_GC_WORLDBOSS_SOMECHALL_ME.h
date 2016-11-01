#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_WORLDBOSS_SOMECHALL_ME
struct GC_WORLDBOSS_SOMECHALL_ME_t3395  : public PacketDistributed_t2209
{
	// System.Boolean GC_WORLDBOSS_SOMECHALL_ME::hasTeamId
	bool ___hasTeamId;
	// System.Int32 GC_WORLDBOSS_SOMECHALL_ME::teamId_
	int32_t ___teamId_;
	// System.Boolean GC_WORLDBOSS_SOMECHALL_ME::hasTeamName
	bool ___hasTeamName;
	// System.String GC_WORLDBOSS_SOMECHALL_ME::teamName_
	String_t* ___teamName_;
	// System.Int32 GC_WORLDBOSS_SOMECHALL_ME::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
