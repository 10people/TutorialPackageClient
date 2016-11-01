#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIButtonMessage/Trigger
#include "AssemblyU2DCSharp_UIButtonMessage_Trigger.h"
// UIButtonMessage
struct UIButtonMessage_t1973  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject UIButtonMessage::target
	GameObject_t9 * ___target;
	// System.String UIButtonMessage::functionName
	String_t* ___functionName;
	// UIButtonMessage/Trigger UIButtonMessage::trigger
	int32_t ___trigger;
	// System.Boolean UIButtonMessage::includeChildren
	bool ___includeChildren;
	// System.Boolean UIButtonMessage::mStarted
	bool ___mStarted;
	// System.Boolean UIButtonMessage::mHighlighted
	bool ___mHighlighted;
};
