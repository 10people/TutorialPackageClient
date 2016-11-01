#pragma once
#include <stdint.h>
// System.String
struct String_t;
// FingerEventDetector`1/FingerEventHandler<FingerDownEvent>
struct FingerEventHandler_t41;
// FingerEventDetector`1<FingerDownEvent>
#include "AssemblyU2DCSharpU2Dfirstpass_FingerEventDetector_1_gen.h"
// FingerDownDetector
struct FingerDownDetector_t42  : public FingerEventDetector_1_t43
{
	// System.String FingerDownDetector::MessageName
	String_t* ___MessageName;
	// FingerEventDetector`1/FingerEventHandler<FingerDownEvent> FingerDownDetector::OnFingerDown
	FingerEventHandler_t41 * ___OnFingerDown;
};
