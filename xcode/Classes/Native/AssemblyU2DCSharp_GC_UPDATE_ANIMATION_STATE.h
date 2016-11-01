#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_UPDATE_ANIMATION_STATE
struct GC_UPDATE_ANIMATION_STATE_t3126  : public PacketDistributed_t2209
{
	// System.Boolean GC_UPDATE_ANIMATION_STATE::hasObjId
	bool ___hasObjId;
	// System.Int32 GC_UPDATE_ANIMATION_STATE::objId_
	int32_t ___objId_;
	// System.Boolean GC_UPDATE_ANIMATION_STATE::hasAnimationState
	bool ___hasAnimationState;
	// System.Int32 GC_UPDATE_ANIMATION_STATE::AnimationState_
	int32_t ___AnimationState_;
	// System.Int32 GC_UPDATE_ANIMATION_STATE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
