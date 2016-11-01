#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UISlider
struct UISlider_t1219;
// SwordsManToolTipsLogic
struct SwordsManToolTipsLogic_t1767;
// Games.SwordsMan.SwordsMan
struct SwordsMan_t1175;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SwordsManToolTipsLogic/SwordsMan_ShowType
#include "AssemblyU2DCSharp_SwordsManToolTipsLogic_SwordsMan_ShowType.h"
// SwordsManToolTipsLogic
struct SwordsManToolTipsLogic_t1767  : public MonoBehaviour_t18
{
	// UILabel SwordsManToolTipsLogic::m_LableName
	UILabel_t1176 * ___m_LableName;
	// UISprite SwordsManToolTipsLogic::m_SpriteIcon
	UISprite_t1202 * ___m_SpriteIcon;
	// UISprite SwordsManToolTipsLogic::m_SpriteQuality
	UISprite_t1202 * ___m_SpriteQuality;
	// UILabel SwordsManToolTipsLogic::m_LabelLevelValue
	UILabel_t1176 * ___m_LabelLevelValue;
	// UILabel SwordsManToolTipsLogic::m_LabelDesc
	UILabel_t1176 * ___m_LabelDesc;
	// UnityEngine.GameObject SwordsManToolTipsLogic::m_CurEffectTitle
	GameObject_t9 * ___m_CurEffectTitle;
	// UnityEngine.GameObject SwordsManToolTipsLogic::m_NextEffectTitle
	GameObject_t9 * ___m_NextEffectTitle;
	// UnityEngine.GameObject SwordsManToolTipsLogic::m_ExpTitle
	GameObject_t9 * ___m_ExpTitle;
	// UILabel[] SwordsManToolTipsLogic::m_LabelCurEffect
	UILabelU5BU5D_t1203* ___m_LabelCurEffect;
	// UILabel[] SwordsManToolTipsLogic::m_LabelNextEffect
	UILabelU5BU5D_t1203* ___m_LabelNextEffect;
	// UILabel SwordsManToolTipsLogic::m_LabelExp
	UILabel_t1176 * ___m_LabelExp;
	// UISlider SwordsManToolTipsLogic::m_SliderExp
	UISlider_t1219 * ___m_SliderExp;
	// UnityEngine.GameObject SwordsManToolTipsLogic::m_EquipButton
	GameObject_t9 * ___m_EquipButton;
	// UnityEngine.GameObject SwordsManToolTipsLogic::m_UnEquipButton
	GameObject_t9 * ___m_UnEquipButton;
	// UnityEngine.GameObject SwordsManToolTipsLogic::m_LevelUpButton
	GameObject_t9 * ___m_LevelUpButton;
	// UnityEngine.GameObject SwordsManToolTipsLogic::m_LockButton
	GameObject_t9 * ___m_LockButton;
	// UnityEngine.GameObject SwordsManToolTipsLogic::m_UnLockButton
	GameObject_t9 * ___m_UnLockButton;
	// UnityEngine.GameObject SwordsManToolTipsLogic::m_CurEffectGrid
	GameObject_t9 * ___m_CurEffectGrid;
	// UnityEngine.GameObject SwordsManToolTipsLogic::m_NextEffectGrid
	GameObject_t9 * ___m_NextEffectGrid;
	// Games.SwordsMan.SwordsMan SwordsManToolTipsLogic::m_SwordsMan
	SwordsMan_t1175 * ___m_SwordsMan;
	// SwordsManToolTipsLogic/SwordsMan_ShowType SwordsManToolTipsLogic::m_ShowType
	int32_t ___m_ShowType;
};
struct SwordsManToolTipsLogic_t1767_StaticFields{
	// SwordsManToolTipsLogic SwordsManToolTipsLogic::m_Instance
	SwordsManToolTipsLogic_t1767 * ___m_Instance;
	// Games.SwordsMan.SwordsMan SwordsManToolTipsLogic::m_curItem
	SwordsMan_t1175 * ___m_curItem;
	// SwordsManToolTipsLogic/SwordsMan_ShowType SwordsManToolTipsLogic::m_curType
	int32_t ___m_curType;
};
