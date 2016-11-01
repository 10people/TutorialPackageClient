#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<PointCloudGesture>
struct List_1_t8965;
// FingerGestures/FingerList
struct FingerList_t26;
// GestureRecognizer`1/GestureEventHandler<PointCloudGesture>
struct GestureEventHandler_t8966;
// System.Predicate`1<PointCloudGesture>
struct Predicate_1_t8967;
// GestureRecognizer
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognizer.h"
// GestureRecognizer`1<PointCloudGesture>
struct GestureRecognizer_1_t8964  : public GestureRecognizer_t25
{
	// System.Collections.Generic.List`1<T> GestureRecognizer`1<PointCloudGesture>::gestures
	List_1_t8965 * ___gestures;
	// GestureRecognizer`1/GestureEventHandler<T> GestureRecognizer`1<PointCloudGesture>::OnGesture
	GestureEventHandler_t8966 * ___OnGesture;
};
struct GestureRecognizer_1_t8964_StaticFields{
	// FingerGestures/FingerList GestureRecognizer`1<PointCloudGesture>::tempTouchList
	FingerList_t26 * ___tempTouchList;
	// System.Predicate`1<T> GestureRecognizer`1<PointCloudGesture>::<>f__am$cache3
	Predicate_1_t8967 * ___U3CU3Ef__am$cache3;
};
