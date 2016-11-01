#pragma once
#include <stdint.h>
// System.String
struct String_t;
// FingerEventDetector`1/FingerEventHandler<FingerUpEvent>
struct FingerEventHandler_t56;
// FingerEventDetector`1<FingerUpEvent>
#include "AssemblyU2DCSharpU2Dfirstpass_FingerEventDetector_1_gen_2.h"
// FingerUpDetector
struct FingerUpDetector_t57  : public FingerEventDetector_1_t58
{
	// System.String FingerUpDetector::MessageName
	String_t* ___MessageName;
	// FingerEventDetector`1/FingerEventHandler<FingerUpEvent> FingerUpDetector::OnFingerUp
	FingerEventHandler_t56 * ___OnFingerUp;
};
