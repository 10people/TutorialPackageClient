#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String>
struct PopsicleList_1_t2924;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_RET_ENEMYGUILDINFO
struct GC_RET_ENEMYGUILDINFO_t3425  : public PacketDistributed_t2209
{
	// System.Boolean GC_RET_ENEMYGUILDINFO::hasCurEnemyNum
	bool ___hasCurEnemyNum;
	// System.Int32 GC_RET_ENEMYGUILDINFO::curEnemyNum_
	int32_t ___curEnemyNum_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String> GC_RET_ENEMYGUILDINFO::enemyGuildName_
	PopsicleList_1_t2924 * ___enemyGuildName_;
	// System.Int32 GC_RET_ENEMYGUILDINFO::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
