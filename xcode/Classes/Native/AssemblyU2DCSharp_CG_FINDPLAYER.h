#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_FINDPLAYER
struct CG_FINDPLAYER_t3041  : public PacketDistributed_t2209
{
	// System.Boolean CG_FINDPLAYER::hasGuid
	bool ___hasGuid;
	// System.UInt64 CG_FINDPLAYER::Guid_
	uint64_t ___Guid_;
	// System.Boolean CG_FINDPLAYER::hasName
	bool ___hasName;
	// System.String CG_FINDPLAYER::Name_
	String_t* ___Name_;
	// System.Int32 CG_FINDPLAYER::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
