#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_RET_PLAYER_DECORATION_INFO
struct GC_RET_PLAYER_DECORATION_INFO_t3455  : public PacketDistributed_t2209
{
	// System.Boolean GC_RET_PLAYER_DECORATION_INFO::hasDecoration
	bool ___hasDecoration;
	// System.Int32 GC_RET_PLAYER_DECORATION_INFO::Decoration_
	int32_t ___Decoration_;
	// System.Boolean GC_RET_PLAYER_DECORATION_INFO::hasDecorationRank
	bool ___hasDecorationRank;
	// System.Int32 GC_RET_PLAYER_DECORATION_INFO::DecorationRank_
	int32_t ___DecorationRank_;
	// System.Int32 GC_RET_PLAYER_DECORATION_INFO::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
