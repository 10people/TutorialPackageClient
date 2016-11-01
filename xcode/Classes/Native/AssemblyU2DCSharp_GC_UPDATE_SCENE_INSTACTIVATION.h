#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_UPDATE_SCENE_INSTACTIVATION
struct GC_UPDATE_SCENE_INSTACTIVATION_t3125  : public PacketDistributed_t2209
{
	// System.Boolean GC_UPDATE_SCENE_INSTACTIVATION::hasSceneclassid
	bool ___hasSceneclassid;
	// System.Int32 GC_UPDATE_SCENE_INSTACTIVATION::sceneclassid_
	int32_t ___sceneclassid_;
	// System.Boolean GC_UPDATE_SCENE_INSTACTIVATION::hasSceneinstcount
	bool ___hasSceneinstcount;
	// System.Int32 GC_UPDATE_SCENE_INSTACTIVATION::sceneinstcount_
	int32_t ___sceneinstcount_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_UPDATE_SCENE_INSTACTIVATION::sceneactivation_
	PopsicleList_1_t2923 * ___sceneactivation_;
	// System.Int32 GC_UPDATE_SCENE_INSTACTIVATION::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
