#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_PLAY_SOUNDS
struct GC_PLAY_SOUNDS_t3161  : public PacketDistributed_t2209
{
	// System.Boolean GC_PLAY_SOUNDS::hasSoundID
	bool ___hasSoundID;
	// System.Int32 GC_PLAY_SOUNDS::SoundID_
	int32_t ___SoundID_;
	// System.Boolean GC_PLAY_SOUNDS::hasSoundType
	bool ___hasSoundType;
	// System.Int32 GC_PLAY_SOUNDS::SoundType_
	int32_t ___SoundType_;
	// System.Int32 GC_PLAY_SOUNDS::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
