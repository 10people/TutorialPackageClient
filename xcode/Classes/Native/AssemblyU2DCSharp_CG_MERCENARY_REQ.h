#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64>
struct PopsicleList_1_t2922;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_MERCENARY_REQ
struct CG_MERCENARY_REQ_t3188  : public PacketDistributed_t2209
{
	// System.Boolean CG_MERCENARY_REQ::hasSceneclass
	bool ___hasSceneclass;
	// System.Int32 CG_MERCENARY_REQ::sceneclass_
	int32_t ___sceneclass_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64> CG_MERCENARY_REQ::guid_
	PopsicleList_1_t2922 * ___guid_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> CG_MERCENARY_REQ::source_
	PopsicleList_1_t2923 * ___source_;
	// System.Int32 CG_MERCENARY_REQ::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
