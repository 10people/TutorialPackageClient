#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_REQ_UPGRADETRAINING
struct CG_REQ_UPGRADETRAINING_t3570  : public PacketDistributed_t2209
{
	// System.Boolean CG_REQ_UPGRADETRAINING::hasExpcost
	bool ___hasExpcost;
	// System.Int32 CG_REQ_UPGRADETRAINING::expcost_
	int32_t ___expcost_;
	// System.Boolean CG_REQ_UPGRADETRAINING::hasChoice
	bool ___hasChoice;
	// System.Int32 CG_REQ_UPGRADETRAINING::choice_
	int32_t ___choice_;
	// System.Int32 CG_REQ_UPGRADETRAINING::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
