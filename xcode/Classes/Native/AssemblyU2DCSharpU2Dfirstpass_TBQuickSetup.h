#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// ScreenRaycaster
struct ScreenRaycaster_t17;
// FingerDownDetector
struct FingerDownDetector_t42;
// FingerUpDetector
struct FingerUpDetector_t57;
// FingerHoverDetector
struct FingerHoverDetector_t47;
// FingerMotionDetector
struct FingerMotionDetector_t53;
// DragRecognizer
struct DragRecognizer_t82;
// LongPressRecognizer
struct LongPressRecognizer_t85;
// SwipeRecognizer
struct SwipeRecognizer_t106;
// TapRecognizer
struct TapRecognizer_t109;
// PinchRecognizer
struct PinchRecognizer_t88;
// TwistRecognizer
struct TwistRecognizer_t112;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TBQuickSetup
struct TBQuickSetup_t137  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject TBQuickSetup::MessageTarget
	GameObject_t9 * ___MessageTarget;
	// System.Int32 TBQuickSetup::MaxSimultaneousGestures
	int32_t ___MaxSimultaneousGestures;
	// ScreenRaycaster TBQuickSetup::screenRaycaster
	ScreenRaycaster_t17 * ___screenRaycaster;
	// FingerDownDetector TBQuickSetup::FingerDown
	FingerDownDetector_t42 * ___FingerDown;
	// FingerUpDetector TBQuickSetup::FingerUp
	FingerUpDetector_t57 * ___FingerUp;
	// FingerHoverDetector TBQuickSetup::FingerHover
	FingerHoverDetector_t47 * ___FingerHover;
	// FingerMotionDetector TBQuickSetup::FingerMotion
	FingerMotionDetector_t53 * ___FingerMotion;
	// DragRecognizer TBQuickSetup::Drag
	DragRecognizer_t82 * ___Drag;
	// LongPressRecognizer TBQuickSetup::LongPress
	LongPressRecognizer_t85 * ___LongPress;
	// SwipeRecognizer TBQuickSetup::Swipe
	SwipeRecognizer_t106 * ___Swipe;
	// TapRecognizer TBQuickSetup::Tap
	TapRecognizer_t109 * ___Tap;
	// PinchRecognizer TBQuickSetup::Pinch
	PinchRecognizer_t88 * ___Pinch;
	// TwistRecognizer TBQuickSetup::Twist
	TwistRecognizer_t112 * ___Twist;
	// TapRecognizer TBQuickSetup::DoubleTap
	TapRecognizer_t109 * ___DoubleTap;
	// DragRecognizer TBQuickSetup::TwoFingerDrag
	DragRecognizer_t82 * ___TwoFingerDrag;
	// TapRecognizer TBQuickSetup::TwoFingerTap
	TapRecognizer_t109 * ___TwoFingerTap;
	// SwipeRecognizer TBQuickSetup::TwoFingerSwipe
	SwipeRecognizer_t106 * ___TwoFingerSwipe;
	// LongPressRecognizer TBQuickSetup::TwoFingerLongPress
	LongPressRecognizer_t85 * ___TwoFingerLongPress;
};
