#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_ASK_QUIT_GAME
struct CG_ASK_QUIT_GAME_t3143  : public PacketDistributed_t2209
{
	// System.Boolean CG_ASK_QUIT_GAME::hasType
	bool ___hasType;
	// System.Int32 CG_ASK_QUIT_GAME::type_
	int32_t ___type_;
	// System.Int32 CG_ASK_QUIT_GAME::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
