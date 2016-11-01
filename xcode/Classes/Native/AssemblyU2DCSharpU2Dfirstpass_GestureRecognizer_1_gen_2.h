#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<TapGesture>
struct List_1_t995;
// FingerGestures/FingerList
struct FingerList_t26;
// GestureRecognizer`1/GestureEventHandler<TapGesture>
struct GestureEventHandler_t9049;
// System.Predicate`1<TapGesture>
struct Predicate_1_t9050;
// GestureRecognizer
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognizer.h"
// GestureRecognizer`1<TapGesture>
struct GestureRecognizer_1_t993  : public GestureRecognizer_t25
{
	// System.Collections.Generic.List`1<T> GestureRecognizer`1<TapGesture>::gestures
	List_1_t995 * ___gestures;
	// GestureRecognizer`1/GestureEventHandler<T> GestureRecognizer`1<TapGesture>::OnGesture
	GestureEventHandler_t9049 * ___OnGesture;
};
struct GestureRecognizer_1_t993_StaticFields{
	// FingerGestures/FingerList GestureRecognizer`1<TapGesture>::tempTouchList
	FingerList_t26 * ___tempTouchList;
	// System.Predicate`1<T> GestureRecognizer`1<TapGesture>::<>f__am$cache3
	Predicate_1_t9050 * ___U3CU3Ef__am$cache3;
};
