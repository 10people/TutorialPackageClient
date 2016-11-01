#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// UILabel
struct UILabel_t1176;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UISlider
struct UISlider_t1219;
// UISprite
struct UISprite_t1202;
// UIPopupList
struct UIPopupList_t2074;
// UITopGrid
struct UITopGrid_t1343;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1393;
// Games.SwordsMan.SwordsMan
struct SwordsMan_t1175;
// SwordsManLevelupController
struct SwordsManLevelupController_t1942;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Games.SwordsMan.SwordsManContainer/PACK_TYPE
#include "AssemblyU2DCSharp_Games_SwordsMan_SwordsManContainer_PACK_TY.h"
// Games.SwordsMan.SwordsMan/SWORDSMANQUALITY
#include "AssemblyU2DCSharp_Games_SwordsMan_SwordsMan_SWORDSMANQUALITY.h"
// SwordsManToolTipsLogic/SwordsMan_ShowType
#include "AssemblyU2DCSharp_SwordsManToolTipsLogic_SwordsMan_ShowType.h"
// SwordsManLevelupController
struct SwordsManLevelupController_t1942  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject SwordsManLevelupController::m_SwordsManGrid
	GameObject_t9 * ___m_SwordsManGrid;
	// UnityEngine.Transform SwordsManLevelupController::m_GridTranForm
	Transform_t78 * ___m_GridTranForm;
	// UILabel SwordsManLevelupController::m_LableName
	UILabel_t1176 * ___m_LableName;
	// UILabel SwordsManLevelupController::m_LabelLevelValue
	UILabel_t1176 * ___m_LabelLevelValue;
	// UILabel SwordsManLevelupController::m_LabelDesc
	UILabel_t1176 * ___m_LabelDesc;
	// UILabel[] SwordsManLevelupController::m_LabelCurEffect
	UILabelU5BU5D_t1203* ___m_LabelCurEffect;
	// UILabel[] SwordsManLevelupController::m_LabelNextEffect
	UILabelU5BU5D_t1203* ___m_LabelNextEffect;
	// UILabel SwordsManLevelupController::m_LabelExp
	UILabel_t1176 * ___m_LabelExp;
	// UISlider SwordsManLevelupController::m_SliderExp
	UISlider_t1219 * ___m_SliderExp;
	// UISprite SwordsManLevelupController::m_SpriteIcon
	UISprite_t1202 * ___m_SpriteIcon;
	// UISprite SwordsManLevelupController::m_SpriteQuality
	UISprite_t1202 * ___m_SpriteQuality;
	// UIPopupList SwordsManLevelupController::m_SwordsMan_ChooseList
	UIPopupList_t2074 * ___m_SwordsMan_ChooseList;
	// UnityEngine.GameObject SwordsManLevelupController::m_CurEffectTitle
	GameObject_t9 * ___m_CurEffectTitle;
	// UnityEngine.GameObject SwordsManLevelupController::m_NextEffectTitle
	GameObject_t9 * ___m_NextEffectTitle;
	// UnityEngine.GameObject SwordsManLevelupController::m_CurEffectGrid
	GameObject_t9 * ___m_CurEffectGrid;
	// UnityEngine.GameObject SwordsManLevelupController::m_NextEffectGrid
	GameObject_t9 * ___m_NextEffectGrid;
	// UnityEngine.GameObject SwordsManLevelupController::m_ExpTitle
	GameObject_t9 * ___m_ExpTitle;
	// UILabel SwordsManLevelupController::m_LabelTips
	UILabel_t1176 * ___m_LabelTips;
	// UITopGrid SwordsManLevelupController::m_TopGrid
	UITopGrid_t1343 * ___m_TopGrid;
	// Games.SwordsMan.SwordsManContainer/PACK_TYPE SwordsManLevelupController::m_PackType
	int32_t ___m_PackType;
	// Games.SwordsMan.SwordsMan/SWORDSMANQUALITY SwordsManLevelupController::m_curChooseQuality
	int32_t ___m_curChooseQuality;
	// System.Boolean SwordsManLevelupController::m_bClearAllSelect
	bool ___m_bClearAllSelect;
	// System.Int32 SwordsManLevelupController::m_nEatExp
	int32_t ___m_nEatExp;
	// System.UInt64 SwordsManLevelupController::m_SwordsManGuid
	uint64_t ___m_SwordsManGuid;
	// System.Collections.Generic.List`1<System.UInt64> SwordsManLevelupController::m_EatGuidlist
	List_1_t1393 * ___m_EatGuidlist;
};
struct SwordsManLevelupController_t1942_StaticFields{
	// Games.SwordsMan.SwordsMan SwordsManLevelupController::m_sSwordsMan
	SwordsMan_t1175 * ___m_sSwordsMan;
	// SwordsManToolTipsLogic/SwordsMan_ShowType SwordsManLevelupController::m_sShowType
	int32_t ___m_sShowType;
	// SwordsManLevelupController SwordsManLevelupController::m_Instance
	SwordsManLevelupController_t1942 * ___m_Instance;
};
