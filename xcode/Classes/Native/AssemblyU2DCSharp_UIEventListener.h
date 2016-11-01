#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// UIEventListener/VoidDelegate
struct VoidDelegate_t5363;
// UIEventListener/BoolDelegate
struct BoolDelegate_t5364;
// UIEventListener/FloatDelegate
struct FloatDelegate_t5365;
// UIEventListener/VectorDelegate
struct VectorDelegate_t5366;
// UIEventListener/ObjectDelegate
struct ObjectDelegate_t5368;
// UIEventListener/StringDelegate
struct StringDelegate_t5367;
// UIEventListener/KeyCodeDelegate
struct KeyCodeDelegate_t5369;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIEventListener
struct UIEventListener_t5370  : public MonoBehaviour_t18
{
	// System.Object UIEventListener::parameter
	Object_t * ___parameter;
	// UIEventListener/VoidDelegate UIEventListener::onSubmit
	VoidDelegate_t5363 * ___onSubmit;
	// UIEventListener/VoidDelegate UIEventListener::onClick
	VoidDelegate_t5363 * ___onClick;
	// UIEventListener/VoidDelegate UIEventListener::onDoubleClick
	VoidDelegate_t5363 * ___onDoubleClick;
	// UIEventListener/BoolDelegate UIEventListener::onHover
	BoolDelegate_t5364 * ___onHover;
	// UIEventListener/BoolDelegate UIEventListener::onPress
	BoolDelegate_t5364 * ___onPress;
	// UIEventListener/BoolDelegate UIEventListener::onSelect
	BoolDelegate_t5364 * ___onSelect;
	// UIEventListener/FloatDelegate UIEventListener::onScroll
	FloatDelegate_t5365 * ___onScroll;
	// UIEventListener/VectorDelegate UIEventListener::onDrag
	VectorDelegate_t5366 * ___onDrag;
	// UIEventListener/ObjectDelegate UIEventListener::onDrop
	ObjectDelegate_t5368 * ___onDrop;
	// UIEventListener/StringDelegate UIEventListener::onInput
	StringDelegate_t5367 * ___onInput;
	// UIEventListener/KeyCodeDelegate UIEventListener::onKey
	KeyCodeDelegate_t5369 * ___onKey;
};
