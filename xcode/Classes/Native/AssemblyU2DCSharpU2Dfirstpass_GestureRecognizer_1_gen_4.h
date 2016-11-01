#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<LongPressGesture>
struct List_1_t8868;
// FingerGestures/FingerList
struct FingerList_t26;
// GestureRecognizer`1/GestureEventHandler<LongPressGesture>
struct GestureEventHandler_t8869;
// System.Predicate`1<LongPressGesture>
struct Predicate_1_t8870;
// GestureRecognizer
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognizer.h"
// GestureRecognizer`1<LongPressGesture>
struct GestureRecognizer_1_t8867  : public GestureRecognizer_t25
{
	// System.Collections.Generic.List`1<T> GestureRecognizer`1<LongPressGesture>::gestures
	List_1_t8868 * ___gestures;
	// GestureRecognizer`1/GestureEventHandler<T> GestureRecognizer`1<LongPressGesture>::OnGesture
	GestureEventHandler_t8869 * ___OnGesture;
};
struct GestureRecognizer_1_t8867_StaticFields{
	// FingerGestures/FingerList GestureRecognizer`1<LongPressGesture>::tempTouchList
	FingerList_t26 * ___tempTouchList;
	// System.Predicate`1<T> GestureRecognizer`1<LongPressGesture>::<>f__am$cache3
	Predicate_1_t8870 * ___U3CU3Ef__am$cache3;
};
