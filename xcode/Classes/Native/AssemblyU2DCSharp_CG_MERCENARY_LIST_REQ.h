#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_MERCENARY_LIST_REQ
struct CG_MERCENARY_LIST_REQ_t3184  : public PacketDistributed_t2209
{
	// System.Boolean CG_MERCENARY_LIST_REQ::hasSceneclass
	bool ___hasSceneclass;
	// System.Int32 CG_MERCENARY_LIST_REQ::sceneclass_
	int32_t ___sceneclass_;
	// System.Boolean CG_MERCENARY_LIST_REQ::hasDiffcult
	bool ___hasDiffcult;
	// System.Int32 CG_MERCENARY_LIST_REQ::diffcult_
	int32_t ___diffcult_;
	// System.Int32 CG_MERCENARY_LIST_REQ::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
