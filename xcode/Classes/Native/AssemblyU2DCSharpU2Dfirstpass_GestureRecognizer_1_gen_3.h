#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<TwistGesture>
struct List_1_t9072;
// FingerGestures/FingerList
struct FingerList_t26;
// GestureRecognizer`1/GestureEventHandler<TwistGesture>
struct GestureEventHandler_t9073;
// System.Predicate`1<TwistGesture>
struct Predicate_1_t9074;
// GestureRecognizer
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognizer.h"
// GestureRecognizer`1<TwistGesture>
struct GestureRecognizer_1_t996  : public GestureRecognizer_t25
{
	// System.Collections.Generic.List`1<T> GestureRecognizer`1<TwistGesture>::gestures
	List_1_t9072 * ___gestures;
	// GestureRecognizer`1/GestureEventHandler<T> GestureRecognizer`1<TwistGesture>::OnGesture
	GestureEventHandler_t9073 * ___OnGesture;
};
struct GestureRecognizer_1_t996_StaticFields{
	// FingerGestures/FingerList GestureRecognizer`1<TwistGesture>::tempTouchList
	FingerList_t26 * ___tempTouchList;
	// System.Predicate`1<T> GestureRecognizer`1<TwistGesture>::<>f__am$cache3
	Predicate_1_t9074 * ___U3CU3Ef__am$cache3;
};
