#pragma once
#include <stdint.h>
// PartnerFrameLogic_Develop
struct PartnerFrameLogic_Develop_t1628;
// PartnerFrameLogic_Star
struct PartnerFrameLogic_Star_t1635;
// PartnerFrameLogic_Skill
struct PartnerFrameLogic_Skill_t1636;
// TabController
struct TabController_t1209;
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// ModelDragLogic
struct ModelDragLogic_t1242;
// Games.Fellow.Fellow
struct Fellow_t1174;
// Games.FakeObject.FakeObject
struct FakeObject_t1241;
// System.Predicate`1<Games.Fellow.Fellow>
struct Predicate_1_t1629;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PartnerFrameLogic_Develop/DEVELOPCONTENT
#include "AssemblyU2DCSharp_PartnerFrameLogic_Develop_DEVELOPCONTENT.h"
// PartnerFrameLogic_Develop
struct PartnerFrameLogic_Develop_t1628  : public MonoBehaviour_t18
{
	// PartnerFrameLogic_Star PartnerFrameLogic_Develop::m_PartnerFrameLogic_Star
	PartnerFrameLogic_Star_t1635 * ___m_PartnerFrameLogic_Star;
	// PartnerFrameLogic_Skill PartnerFrameLogic_Develop::m_PartnerFrameLogic_Skill
	PartnerFrameLogic_Skill_t1636 * ___m_PartnerFrameLogic_Skill;
	// TabController PartnerFrameLogic_Develop::m_TabController
	TabController_t1209 * ___m_TabController;
	// UILabel PartnerFrameLogic_Develop::m_NameLabel
	UILabel_t1176 * ___m_NameLabel;
	// UILabel PartnerFrameLogic_Develop::m_CombatValueLabel
	UILabel_t1176 * ___m_CombatValueLabel;
	// UILabel PartnerFrameLogic_Develop::m_LevelLabel
	UILabel_t1176 * ___m_LevelLabel;
	// UILabel PartnerFrameLogic_Develop::m_ExpLabel
	UILabel_t1176 * ___m_ExpLabel;
	// UISprite PartnerFrameLogic_Develop::m_IconSprite
	UISprite_t1202 * ___m_IconSprite;
	// UISprite PartnerFrameLogic_Develop::m_QualitySprite
	UISprite_t1202 * ___m_QualitySprite;
	// UISprite PartnerFrameLogic_Develop::m_QualityIcon
	UISprite_t1202 * ___m_QualityIcon;
	// UnityEngine.GameObject PartnerFrameLogic_Develop::m_ModelViewTopLeft
	GameObject_t9 * ___m_ModelViewTopLeft;
	// UnityEngine.GameObject PartnerFrameLogic_Develop::m_ModelViewBottomRight
	GameObject_t9 * ___m_ModelViewBottomRight;
	// ModelDragLogic PartnerFrameLogic_Develop::m_ModelDrag
	ModelDragLogic_t1242 * ___m_ModelDrag;
	// UnityEngine.GameObject PartnerFrameLogic_Develop::m_Content
	GameObject_t9 * ___m_Content;
	// UnityEngine.GameObject PartnerFrameLogic_Develop::m_EmptyContent
	GameObject_t9 * ___m_EmptyContent;
	// PartnerFrameLogic_Develop/DEVELOPCONTENT PartnerFrameLogic_Develop::m_CurTab
	int32_t ___m_CurTab;
	// Games.Fellow.Fellow PartnerFrameLogic_Develop::m_Fellow
	Fellow_t1174 * ___m_Fellow;
	// Games.FakeObject.FakeObject PartnerFrameLogic_Develop::m_PartnerFakeObj
	FakeObject_t1241 * ___m_PartnerFakeObj;
	// UnityEngine.GameObject PartnerFrameLogic_Develop::m_FakeObjGameObject
	GameObject_t9 * ___m_FakeObjGameObject;
	// UnityEngine.GameObject PartnerFrameLogic_Develop::m_TalentLevelUpButton
	GameObject_t9 * ___m_TalentLevelUpButton;
	// UnityEngine.GameObject PartnerFrameLogic_Develop::m_OkButton
	GameObject_t9 * ___m_OkButton;
	// System.Int32 PartnerFrameLogic_Develop::m_NewPlayerGuideFlag_Step
	int32_t ___m_NewPlayerGuideFlag_Step;
};
struct PartnerFrameLogic_Develop_t1628_StaticFields{
	// PartnerFrameLogic_Develop PartnerFrameLogic_Develop::m_Instance
	PartnerFrameLogic_Develop_t1628 * ___m_Instance;
	// PartnerFrameLogic_Develop/DEVELOPCONTENT PartnerFrameLogic_Develop::m_DefaultTab
	int32_t ___m_DefaultTab;
	// System.UInt64 PartnerFrameLogic_Develop::m_DefaultFellowGuid
	uint64_t ___m_DefaultFellowGuid;
	// System.Predicate`1<Games.Fellow.Fellow> PartnerFrameLogic_Develop::<>f__am$cache19
	Predicate_1_t1629 * ___U3CU3Ef__am$cache19;
};
