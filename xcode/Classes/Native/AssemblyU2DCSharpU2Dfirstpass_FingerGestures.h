#pragma once
#include <stdint.h>
// FGInputProvider
struct FGInputProvider_t60;
// FingerClusterManager
struct FingerClusterManager_t33;
// System.Collections.Generic.List`1<GestureRecognizer>
struct List_1_t63;
// FingerGestures
struct FingerGestures_t75;
// FingerGestures/Finger[]
struct FingerU5BU5D_t76;
// FingerGestures/FingerList
struct FingerList_t26;
// FingerGestures/GlobalTouchFilterDelegate
struct GlobalTouchFilterDelegate_t74;
// UnityEngine.Transform[]
struct TransformU5BU5D_t77;
// FingerGestures/SwipeDirection[]
struct SwipeDirectionU5BU5D_t79;
// Gesture/EventHandler
struct EventHandler_t22;
// FingerEventDetector`1/FingerEventHandler<FingerEvent>
struct FingerEventHandler_t80;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FingerGestures
struct FingerGestures_t75  : public MonoBehaviour_t18
{
	// System.Boolean FingerGestures::makePersistent
	bool ___makePersistent;
	// System.Boolean FingerGestures::detectUnityRemote
	bool ___detectUnityRemote;
	// FGInputProvider FingerGestures::mouseInputProviderPrefab
	FGInputProvider_t60 * ___mouseInputProviderPrefab;
	// FGInputProvider FingerGestures::touchInputProviderPrefab
	FGInputProvider_t60 * ___touchInputProviderPrefab;
	// FingerClusterManager FingerGestures::fingerClusterManager
	FingerClusterManager_t33 * ___fingerClusterManager;
	// FGInputProvider FingerGestures::inputProvider
	FGInputProvider_t60 * ___inputProvider;
	// System.Single FingerGestures::pixelDistanceScale
	float ___pixelDistanceScale;
	// System.Boolean FingerGestures::adjustPixelScaleForRetinaDisplay
	bool ___adjustPixelScaleForRetinaDisplay;
	// System.Single FingerGestures::retinaPixelScale
	float ___retinaPixelScale;
	// FingerGestures/Finger[] FingerGestures::fingers
	FingerU5BU5D_t76* ___fingers;
	// FingerGestures/FingerList FingerGestures::touches
	FingerList_t26 * ___touches;
	// FingerGestures/GlobalTouchFilterDelegate FingerGestures::globalTouchFilterFunc
	GlobalTouchFilterDelegate_t74 * ___globalTouchFilterFunc;
	// UnityEngine.Transform[] FingerGestures::fingerNodes
	TransformU5BU5D_t77* ___fingerNodes;
};
struct FingerGestures_t75_StaticFields{
	// System.Collections.Generic.List`1<GestureRecognizer> FingerGestures::gestureRecognizers
	List_1_t63 * ___gestureRecognizers;
	// FingerGestures FingerGestures::instance
	FingerGestures_t75 * ___instance;
	// FingerGestures/SwipeDirection[] FingerGestures::AngleToDirectionMap
	SwipeDirectionU5BU5D_t79* ___AngleToDirectionMap;
	// Gesture/EventHandler FingerGestures::OnGestureEvent
	EventHandler_t22 * ___OnGestureEvent;
	// FingerEventDetector`1/FingerEventHandler<FingerEvent> FingerGestures::OnFingerEvent
	FingerEventHandler_t80 * ___OnFingerEvent;
};
