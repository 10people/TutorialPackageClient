#pragma once
#include <stdint.h>
// DiscreteGesture
#include "AssemblyU2DCSharpU2Dfirstpass_DiscreteGesture.h"
// TapGesture
struct TapGesture_t108  : public DiscreteGesture_t5
{
	// System.Int32 TapGesture::taps
	int32_t ___taps;
	// System.Boolean TapGesture::Down
	bool ___Down;
	// System.Boolean TapGesture::WasDown
	bool ___WasDown;
	// System.Single TapGesture::LastDownTime
	float ___LastDownTime;
	// System.Single TapGesture::LastTapTime
	float ___LastTapTime;
};
