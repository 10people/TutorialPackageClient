#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_WISHINGWELL_WISH
struct CG_WISHINGWELL_WISH_t3465  : public PacketDistributed_t2209
{
	// System.Boolean CG_WISHINGWELL_WISH::hasMessage
	bool ___hasMessage;
	// System.String CG_WISHINGWELL_WISH::Message_
	String_t* ___Message_;
	// System.Int32 CG_WISHINGWELL_WISH::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
