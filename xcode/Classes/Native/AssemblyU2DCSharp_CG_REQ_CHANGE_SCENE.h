#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_REQ_CHANGE_SCENE
struct CG_REQ_CHANGE_SCENE_t2944  : public PacketDistributed_t2209
{
	// System.Boolean CG_REQ_CHANGE_SCENE::hasCtype
	bool ___hasCtype;
	// System.Int32 CG_REQ_CHANGE_SCENE::ctype_
	int32_t ___ctype_;
	// System.Boolean CG_REQ_CHANGE_SCENE::hasTeleportid
	bool ___hasTeleportid;
	// System.Int32 CG_REQ_CHANGE_SCENE::teleportid_
	int32_t ___teleportid_;
	// System.Boolean CG_REQ_CHANGE_SCENE::hasSceneclassid
	bool ___hasSceneclassid;
	// System.Int32 CG_REQ_CHANGE_SCENE::sceneclassid_
	int32_t ___sceneclassid_;
	// System.Boolean CG_REQ_CHANGE_SCENE::hasSceneinstid
	bool ___hasSceneinstid;
	// System.Int32 CG_REQ_CHANGE_SCENE::sceneinstid_
	int32_t ___sceneinstid_;
	// System.Boolean CG_REQ_CHANGE_SCENE::hasPosX
	bool ___hasPosX;
	// System.Int32 CG_REQ_CHANGE_SCENE::posX_
	int32_t ___posX_;
	// System.Boolean CG_REQ_CHANGE_SCENE::hasPosZ
	bool ___hasPosZ;
	// System.Int32 CG_REQ_CHANGE_SCENE::posZ_
	int32_t ___posZ_;
	// System.Int32 CG_REQ_CHANGE_SCENE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
