#pragma once
#include <stdint.h>
// UnityEngine.UI.Graphic
struct Graphic_t6084;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t6152;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t6150;
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
// UnityEngine.UI.Toggle/ToggleTransition
#include "UnityEngine_UI_UnityEngine_UI_Toggle_ToggleTransition.h"
// UnityEngine.UI.Toggle
struct Toggle_t6153  : public Selectable_t6064
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t6084 * ___graphic;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t6152 * ___m_Group;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t6150 * ___onValueChanged;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn;
};
