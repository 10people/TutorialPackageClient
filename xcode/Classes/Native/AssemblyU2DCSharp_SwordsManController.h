#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// SwordsManController
struct SwordsManController_t1941;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// SwordsManController
struct SwordsManController_t1941  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject SwordsManController::m_SwordsManGrid
	GameObject_t9 * ___m_SwordsManGrid;
	// UILabel SwordsManController::m_LabelCoinValue
	UILabel_t1176 * ___m_LabelCoinValue;
	// UILabel SwordsManController::m_LabelScoreValue
	UILabel_t1176 * ___m_LabelScoreValue;
	// UILabel SwordsManController::m_LabelCostCoin
	UILabel_t1176 * ___m_LabelCostCoin;
	// UILabel SwordsManController::m_LabelTenVisitCostCoin
	UILabel_t1176 * ___m_LabelTenVisitCostCoin;
	// UILabel SwordsManController::m_LabelCombatValue
	UILabel_t1176 * ___m_LabelCombatValue;
	// UILabel[] SwordsManController::m_LabelSlots
	UILabelU5BU5D_t1203* ___m_LabelSlots;
	// UnityEngine.GameObject[] SwordsManController::m_SwordsManIcons
	GameObjectU5BU5D_t1200* ___m_SwordsManIcons;
	// UnityEngine.GameObject[] SwordsManController::m_SwordsManQualitys
	GameObjectU5BU5D_t1200* ___m_SwordsManQualitys;
	// UnityEngine.GameObject[] SwordsManController::m_SlotLock
	GameObjectU5BU5D_t1200* ___m_SlotLock;
	// UILabel[] SwordsManController::m_SwordsManLevel
	UILabelU5BU5D_t1203* ___m_SwordsManLevel;
	// UnityEngine.GameObject[] SwordsManController::m_SwordsManLock
	GameObjectU5BU5D_t1200* ___m_SwordsManLock;
	// UILabel SwordsManController::m_LabelPacSize
	UILabel_t1176 * ___m_LabelPacSize;
	// UnityEngine.GameObject SwordsManController::m_VisitWindow
	GameObject_t9 * ___m_VisitWindow;
	// UnityEngine.GameObject SwordsManController::m_SwordsManEquipWindow
	GameObject_t9 * ___m_SwordsManEquipWindow;
	// UISprite[] SwordsManController::m_SwordsManVisitStateSprite
	UISpriteU5BU5D_t1201* ___m_SwordsManVisitStateSprite;
	// UnityEngine.GameObject SwordsManController::m_VisitButton
	GameObject_t9 * ___m_VisitButton;
	// UnityEngine.GameObject SwordsManController::m_BackButton
	GameObject_t9 * ___m_BackButton;
};
struct SwordsManController_t1941_StaticFields{
	// System.Int32 SwordsManController::VISIT_SWORDSMAN_COSTCOIN
	int32_t ___VISIT_SWORDSMAN_COSTCOIN;
	// System.Int32 SwordsManController::TNE_VISIT_SWORDSMAN_COUNT
	int32_t ___TNE_VISIT_SWORDSMAN_COUNT;
	// UnityEngine.Color SwordsManController::m_WhiteQualityColor
	Color_t939  ___m_WhiteQualityColor;
	// UnityEngine.Color SwordsManController::m_GreenQualityColor
	Color_t939  ___m_GreenQualityColor;
	// UnityEngine.Color SwordsManController::m_BlueQualityColor
	Color_t939  ___m_BlueQualityColor;
	// UnityEngine.Color SwordsManController::m_PurpleQualityColor
	Color_t939  ___m_PurpleQualityColor;
	// UnityEngine.Color SwordsManController::m_OrangeQualityColor
	Color_t939  ___m_OrangeQualityColor;
	// SwordsManController SwordsManController::m_Instance
	SwordsManController_t1941 * ___m_Instance;
};
