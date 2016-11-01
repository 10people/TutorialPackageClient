#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64>
struct PopsicleList_1_t2922;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_EQUIP_ENCHANCE
struct CG_EQUIP_ENCHANCE_t3015  : public PacketDistributed_t2209
{
	// System.Boolean CG_EQUIP_ENCHANCE::hasPacktype
	bool ___hasPacktype;
	// System.Int32 CG_EQUIP_ENCHANCE::packtype_
	int32_t ___packtype_;
	// System.Boolean CG_EQUIP_ENCHANCE::hasEquipguid
	bool ___hasEquipguid;
	// System.UInt64 CG_EQUIP_ENCHANCE::equipguid_
	uint64_t ___equipguid_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64> CG_EQUIP_ENCHANCE::materialguid_
	PopsicleList_1_t2922 * ___materialguid_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> CG_EQUIP_ENCHANCE::materialcount_
	PopsicleList_1_t2923 * ___materialcount_;
	// System.Int32 CG_EQUIP_ENCHANCE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
