#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_PLAY_YANHUA
struct GC_PLAY_YANHUA_t3407  : public PacketDistributed_t2209
{
	// System.Boolean GC_PLAY_YANHUA::hasUsername
	bool ___hasUsername;
	// System.String GC_PLAY_YANHUA::username_
	String_t* ___username_;
	// System.Boolean GC_PLAY_YANHUA::hasItemid
	bool ___hasItemid;
	// System.Int32 GC_PLAY_YANHUA::itemid_
	int32_t ___itemid_;
	// System.Boolean GC_PLAY_YANHUA::hasEffectid
	bool ___hasEffectid;
	// System.Int32 GC_PLAY_YANHUA::effectid_
	int32_t ___effectid_;
	// System.Int32 GC_PLAY_YANHUA::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
