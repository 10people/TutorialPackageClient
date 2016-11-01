#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_PLAY_EFFECT
struct GC_PLAY_EFFECT_t3090  : public PacketDistributed_t2209
{
	// System.Boolean GC_PLAY_EFFECT::hasObjID
	bool ___hasObjID;
	// System.Int32 GC_PLAY_EFFECT::ObjID_
	int32_t ___ObjID_;
	// System.Boolean GC_PLAY_EFFECT::hasEffectID
	bool ___hasEffectID;
	// System.Int32 GC_PLAY_EFFECT::EffectID_
	int32_t ___EffectID_;
	// System.Boolean GC_PLAY_EFFECT::hasStartMotionID
	bool ___hasStartMotionID;
	// System.Int32 GC_PLAY_EFFECT::StartMotionID_
	int32_t ___StartMotionID_;
	// System.Int32 GC_PLAY_EFFECT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
