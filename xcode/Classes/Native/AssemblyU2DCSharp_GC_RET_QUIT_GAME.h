#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_RET_QUIT_GAME
struct GC_RET_QUIT_GAME_t3145  : public PacketDistributed_t2209
{
	// System.Boolean GC_RET_QUIT_GAME::hasType
	bool ___hasType;
	// System.Int32 GC_RET_QUIT_GAME::type_
	int32_t ___type_;
	// System.Boolean GC_RET_QUIT_GAME::hasResult
	bool ___hasResult;
	// System.Int32 GC_RET_QUIT_GAME::result_
	int32_t ___result_;
	// System.Int32 GC_RET_QUIT_GAME::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
