#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.TextGenerator
struct TextGenerator_t6117;
// UnityEngine.Material
struct Material_t133;
// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.UI.FontData
#include "UnityEngine_UI_UnityEngine_UI_FontData.h"
// UnityEngine.UI.Text
struct Text_t6076  : public MaskableGraphic_t6102
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t6072  ___m_FontData;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t6117 * ___m_TextCache;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t6117 * ___m_TextCacheForLayout;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureChangedCallback
	bool ___m_DisableFontTextureChangedCallback;
};
struct Text_t6076_StaticFields{
	// System.Single UnityEngine.UI.Text::kEpsilon
	float ___kEpsilon;
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t133 * ___s_DefaultText;
};
