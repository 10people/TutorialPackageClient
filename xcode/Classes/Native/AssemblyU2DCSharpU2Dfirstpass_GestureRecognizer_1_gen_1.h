#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<SwipeGesture>
struct List_1_t9024;
// FingerGestures/FingerList
struct FingerList_t26;
// GestureRecognizer`1/GestureEventHandler<SwipeGesture>
struct GestureEventHandler_t9025;
// System.Predicate`1<SwipeGesture>
struct Predicate_1_t9026;
// GestureRecognizer
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognizer.h"
// GestureRecognizer`1<SwipeGesture>
struct GestureRecognizer_1_t992  : public GestureRecognizer_t25
{
	// System.Collections.Generic.List`1<T> GestureRecognizer`1<SwipeGesture>::gestures
	List_1_t9024 * ___gestures;
	// GestureRecognizer`1/GestureEventHandler<T> GestureRecognizer`1<SwipeGesture>::OnGesture
	GestureEventHandler_t9025 * ___OnGesture;
};
struct GestureRecognizer_1_t992_StaticFields{
	// FingerGestures/FingerList GestureRecognizer`1<SwipeGesture>::tempTouchList
	FingerList_t26 * ___tempTouchList;
	// System.Predicate`1<T> GestureRecognizer`1<SwipeGesture>::<>f__am$cache3
	Predicate_1_t9026 * ___U3CU3Ef__am$cache3;
};
