#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_COPYSCENE_INVITE
struct GC_COPYSCENE_INVITE_t3078  : public PacketDistributed_t2209
{
	// System.Boolean GC_COPYSCENE_INVITE::hasSceneID
	bool ___hasSceneID;
	// System.Int32 GC_COPYSCENE_INVITE::SceneID_
	int32_t ___SceneID_;
	// System.Boolean GC_COPYSCENE_INVITE::hasInviterName
	bool ___hasInviterName;
	// System.String GC_COPYSCENE_INVITE::InviterName_
	String_t* ___InviterName_;
	// System.Boolean GC_COPYSCENE_INVITE::hasDifficult
	bool ___hasDifficult;
	// System.Int32 GC_COPYSCENE_INVITE::Difficult_
	int32_t ___Difficult_;
	// System.Boolean GC_COPYSCENE_INVITE::hasMultipleType
	bool ___hasMultipleType;
	// System.Int32 GC_COPYSCENE_INVITE::MultipleType_
	int32_t ___MultipleType_;
	// System.Int32 GC_COPYSCENE_INVITE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
