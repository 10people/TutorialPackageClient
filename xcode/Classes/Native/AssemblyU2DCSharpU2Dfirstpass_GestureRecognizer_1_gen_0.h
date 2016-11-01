#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<PinchGesture>
struct List_1_t8894;
// FingerGestures/FingerList
struct FingerList_t26;
// GestureRecognizer`1/GestureEventHandler<PinchGesture>
struct GestureEventHandler_t8895;
// System.Predicate`1<PinchGesture>
struct Predicate_1_t8896;
// GestureRecognizer
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognizer.h"
// GestureRecognizer`1<PinchGesture>
struct GestureRecognizer_1_t985  : public GestureRecognizer_t25
{
	// System.Collections.Generic.List`1<T> GestureRecognizer`1<PinchGesture>::gestures
	List_1_t8894 * ___gestures;
	// GestureRecognizer`1/GestureEventHandler<T> GestureRecognizer`1<PinchGesture>::OnGesture
	GestureEventHandler_t8895 * ___OnGesture;
};
struct GestureRecognizer_1_t985_StaticFields{
	// FingerGestures/FingerList GestureRecognizer`1<PinchGesture>::tempTouchList
	FingerList_t26 * ___tempTouchList;
	// System.Predicate`1<T> GestureRecognizer`1<PinchGesture>::<>f__am$cache3
	Predicate_1_t8896 * ___U3CU3Ef__am$cache3;
};
