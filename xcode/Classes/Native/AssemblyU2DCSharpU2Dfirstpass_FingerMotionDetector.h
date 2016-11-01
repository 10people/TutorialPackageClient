#pragma once
#include <stdint.h>
// System.String
struct String_t;
// FingerEventDetector`1/FingerEventHandler<FingerMotionEvent>
struct FingerEventHandler_t52;
// FingerEventDetector`1<FingerMotionEvent>
#include "AssemblyU2DCSharpU2Dfirstpass_FingerEventDetector_1_gen_1.h"
// FingerMotionDetector
struct FingerMotionDetector_t53  : public FingerEventDetector_1_t54
{
	// System.String FingerMotionDetector::MoveMessageName
	String_t* ___MoveMessageName;
	// System.String FingerMotionDetector::StationaryMessageName
	String_t* ___StationaryMessageName;
	// System.Boolean FingerMotionDetector::TrackMove
	bool ___TrackMove;
	// System.Boolean FingerMotionDetector::TrackStationary
	bool ___TrackStationary;
	// FingerEventDetector`1/FingerEventHandler<FingerMotionEvent> FingerMotionDetector::OnFingerMove
	FingerEventHandler_t52 * ___OnFingerMove;
	// FingerEventDetector`1/FingerEventHandler<FingerMotionEvent> FingerMotionDetector::OnFingerStationary
	FingerEventHandler_t52 * ___OnFingerStationary;
};
