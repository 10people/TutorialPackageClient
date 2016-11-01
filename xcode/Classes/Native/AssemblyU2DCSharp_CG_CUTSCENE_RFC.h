#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_CUTSCENE_RFC
struct CG_CUTSCENE_RFC_t3573  : public PacketDistributed_t2209
{
	// System.Boolean CG_CUTSCENE_RFC::hasCutsceneID
	bool ___hasCutsceneID;
	// System.Int32 CG_CUTSCENE_RFC::cutsceneID_
	int32_t ___cutsceneID_;
	// System.Boolean CG_CUTSCENE_RFC::hasRfcID
	bool ___hasRfcID;
	// System.Int32 CG_CUTSCENE_RFC::rfcID_
	int32_t ___rfcID_;
	// System.Int32 CG_CUTSCENE_RFC::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
