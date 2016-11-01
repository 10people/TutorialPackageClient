#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_CHALLENGERANKLIST_REQ
struct CG_CHALLENGERANKLIST_REQ_t3107  : public PacketDistributed_t2209
{
	// System.Boolean CG_CHALLENGERANKLIST_REQ::hasPage
	bool ___hasPage;
	// System.Int32 CG_CHALLENGERANKLIST_REQ::page_
	int32_t ___page_;
	// System.Int32 CG_CHALLENGERANKLIST_REQ::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
