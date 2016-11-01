#pragma once
#include <stdint.h>
// UnityEngine.Animation
struct Animation_t1252;
// System.String
struct String_t;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1193;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AnimationOrTween.Trigger
#include "AssemblyU2DCSharp_AnimationOrTween_Trigger.h"
// AnimationOrTween.Direction
#include "AssemblyU2DCSharp_AnimationOrTween_Direction.h"
// AnimationOrTween.EnableCondition
#include "AssemblyU2DCSharp_AnimationOrTween_EnableCondition.h"
// AnimationOrTween.DisableCondition
#include "AssemblyU2DCSharp_AnimationOrTween_DisableCondition.h"
// UIPlayAnimation
struct UIPlayAnimation_t5316  : public MonoBehaviour_t18
{
	// UnityEngine.Animation UIPlayAnimation::target
	Animation_t1252 * ___target;
	// System.String UIPlayAnimation::clipName
	String_t* ___clipName;
	// AnimationOrTween.Trigger UIPlayAnimation::trigger
	int32_t ___trigger;
	// AnimationOrTween.Direction UIPlayAnimation::playDirection
	int32_t ___playDirection;
	// System.Boolean UIPlayAnimation::resetOnPlay
	bool ___resetOnPlay;
	// System.Boolean UIPlayAnimation::clearSelection
	bool ___clearSelection;
	// AnimationOrTween.EnableCondition UIPlayAnimation::ifDisabledOnPlay
	int32_t ___ifDisabledOnPlay;
	// AnimationOrTween.DisableCondition UIPlayAnimation::disableWhenFinished
	int32_t ___disableWhenFinished;
	// System.Collections.Generic.List`1<EventDelegate> UIPlayAnimation::onFinished
	List_1_t1193 * ___onFinished;
	// UnityEngine.GameObject UIPlayAnimation::eventReceiver
	GameObject_t9 * ___eventReceiver;
	// System.String UIPlayAnimation::callWhenFinished
	String_t* ___callWhenFinished;
	// System.Boolean UIPlayAnimation::mStarted
	bool ___mStarted;
	// System.Boolean UIPlayAnimation::mHighlighted
	bool ___mHighlighted;
	// System.Int32 UIPlayAnimation::mActive
	int32_t ___mActive;
};
