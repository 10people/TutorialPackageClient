#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// FGInputProvider
#include "AssemblyU2DCSharpU2Dfirstpass_FGInputProvider.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// FGTouchInputProvider
struct FGTouchInputProvider_t117  : public FGInputProvider_t60
{
	// System.Int32 FGTouchInputProvider::maxTouches
	int32_t ___maxTouches;
	// System.Boolean FGTouchInputProvider::fixAndroidTouchIdBug
	bool ___fixAndroidTouchIdBug;
	// System.Int32 FGTouchInputProvider::touchIdOffset
	int32_t ___touchIdOffset;
	// UnityEngine.Touch FGTouchInputProvider::nullTouch
	Touch_t118  ___nullTouch;
	// System.Int32[] FGTouchInputProvider::finger2touchMap
	Int32U5BU5D_t116* ___finger2touchMap;
};
