#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64>
struct PopsicleList_1_t2922;
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_RET_FINALGUILDWARPOINTINFO
struct GC_RET_FINALGUILDWARPOINTINFO_t1482  : public PacketDistributed_t2209
{
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_RET_FINALGUILDWARPOINTINFO::pointType_
	PopsicleList_1_t2923 * ___pointType_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_RET_FINALGUILDWARPOINTINFO::pointScore_
	PopsicleList_1_t2923 * ___pointScore_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64> GC_RET_FINALGUILDWARPOINTINFO::pointOwnGuildGuid_
	PopsicleList_1_t2922 * ___pointOwnGuildGuid_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_RET_FINALGUILDWARPOINTINFO::isFighting_
	PopsicleList_1_t2923 * ___isFighting_;
	// System.Boolean GC_RET_FINALGUILDWARPOINTINFO::hasMyGuildScore
	bool ___hasMyGuildScore;
	// System.Int32 GC_RET_FINALGUILDWARPOINTINFO::myGuildScore_
	int32_t ___myGuildScore_;
	// System.Boolean GC_RET_FINALGUILDWARPOINTINFO::hasFightGuildScore
	bool ___hasFightGuildScore;
	// System.Int32 GC_RET_FINALGUILDWARPOINTINFO::fightGuildScore_
	int32_t ___fightGuildScore_;
	// System.Boolean GC_RET_FINALGUILDWARPOINTINFO::hasMyGuildName
	bool ___hasMyGuildName;
	// System.String GC_RET_FINALGUILDWARPOINTINFO::myGuildName_
	String_t* ___myGuildName_;
	// System.Boolean GC_RET_FINALGUILDWARPOINTINFO::hasFightGuildBName
	bool ___hasFightGuildBName;
	// System.String GC_RET_FINALGUILDWARPOINTINFO::fightGuildBName_
	String_t* ___fightGuildBName_;
	// System.Int32 GC_RET_FINALGUILDWARPOINTINFO::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
