#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t133;
// UnityEngine.UI.Graphic
struct Graphic_t6084;
// UnityEngine.RectTransform
struct RectTransform_t6078;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.Mask
struct Mask_t6183  : public UIBehaviour_t5983
{
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic;
	// UnityEngine.Material UnityEngine.UI.Mask::m_RenderMaterial
	Material_t133 * ___m_RenderMaterial;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t6084 * ___m_Graphic;
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t6078 * ___m_RectTransform;
};
