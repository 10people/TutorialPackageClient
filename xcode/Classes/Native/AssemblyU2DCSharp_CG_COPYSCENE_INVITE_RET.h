#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_COPYSCENE_INVITE_RET
struct CG_COPYSCENE_INVITE_RET_t3080  : public PacketDistributed_t2209
{
	// System.Boolean CG_COPYSCENE_INVITE_RET::hasSceneID
	bool ___hasSceneID;
	// System.Int32 CG_COPYSCENE_INVITE_RET::SceneID_
	int32_t ___SceneID_;
	// System.Boolean CG_COPYSCENE_INVITE_RET::hasInviteResult
	bool ___hasInviteResult;
	// System.Int32 CG_COPYSCENE_INVITE_RET::InviteResult_
	int32_t ___InviteResult_;
	// System.Boolean CG_COPYSCENE_INVITE_RET::hasDifficult
	bool ___hasDifficult;
	// System.Int32 CG_COPYSCENE_INVITE_RET::Difficult_
	int32_t ___Difficult_;
	// System.Int32 CG_COPYSCENE_INVITE_RET::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
