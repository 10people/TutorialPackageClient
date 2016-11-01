#pragma once
#include <stdint.h>
// ComboSkillTipLogic
struct ComboSkillTipLogic_t1329;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UISpriteAnimation[]
struct UISpriteAnimationU5BU5D_t1330;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1116;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t1332;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ComboSkillTipLogic
struct ComboSkillTipLogic_t1329  : public MonoBehaviour_t18
{
	// UISprite[] ComboSkillTipLogic::m_SkillIcons
	UISpriteU5BU5D_t1201* ___m_SkillIcons;
	// UISprite[] ComboSkillTipLogic::m_bgIcons
	UISpriteU5BU5D_t1201* ___m_bgIcons;
	// UISprite[] ComboSkillTipLogic::m_arrowIcons
	UISpriteU5BU5D_t1201* ___m_arrowIcons;
	// UISpriteAnimation[] ComboSkillTipLogic::m_Effects
	UISpriteAnimationU5BU5D_t1330* ___m_Effects;
	// UnityEngine.GameObject ComboSkillTipLogic::m_Offset
	GameObject_t9 * ___m_Offset;
	// System.Int32 ComboSkillTipLogic::m_nComboCnt
	int32_t ___m_nComboCnt;
	// System.Int32 ComboSkillTipLogic::m_nCurrentStep
	int32_t ___m_nCurrentStep;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> ComboSkillTipLogic::comboStep
	Dictionary_2_t1116 * ___comboStep;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.String>> ComboSkillTipLogic::comboIconDic
	Dictionary_2_t1332 * ___comboIconDic;
	// System.Int32 ComboSkillTipLogic::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
};
struct ComboSkillTipLogic_t1329_StaticFields{
	// System.Int32 ComboSkillTipLogic::MAX_COMBO_COUNT
	int32_t ___MAX_COMBO_COUNT;
	// ComboSkillTipLogic ComboSkillTipLogic::m_Instance
	ComboSkillTipLogic_t1329 * ___m_Instance;
};
