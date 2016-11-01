#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1193;
// System.String
struct String_t;
// UITweener[]
struct UITweenerU5BU5D_t5319;
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
// UIPlayTween
struct UIPlayTween_t1696  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject UIPlayTween::tweenTarget
	GameObject_t9 * ___tweenTarget;
	// System.Int32 UIPlayTween::tweenGroup
	int32_t ___tweenGroup;
	// AnimationOrTween.Trigger UIPlayTween::trigger
	int32_t ___trigger;
	// AnimationOrTween.Direction UIPlayTween::playDirection
	int32_t ___playDirection;
	// System.Boolean UIPlayTween::resetOnPlay
	bool ___resetOnPlay;
	// System.Boolean UIPlayTween::resetIfDisabled
	bool ___resetIfDisabled;
	// AnimationOrTween.EnableCondition UIPlayTween::ifDisabledOnPlay
	int32_t ___ifDisabledOnPlay;
	// AnimationOrTween.DisableCondition UIPlayTween::disableWhenFinished
	int32_t ___disableWhenFinished;
	// System.Boolean UIPlayTween::includeChildren
	bool ___includeChildren;
	// System.Collections.Generic.List`1<EventDelegate> UIPlayTween::onFinished
	List_1_t1193 * ___onFinished;
	// UnityEngine.GameObject UIPlayTween::eventReceiver
	GameObject_t9 * ___eventReceiver;
	// System.String UIPlayTween::callWhenFinished
	String_t* ___callWhenFinished;
	// UITweener[] UIPlayTween::mTweens
	UITweenerU5BU5D_t5319* ___mTweens;
	// System.Boolean UIPlayTween::mStarted
	bool ___mStarted;
	// System.Boolean UIPlayTween::mHighlighted
	bool ___mHighlighted;
	// System.Int32 UIPlayTween::mActive
	int32_t ___mActive;
};
