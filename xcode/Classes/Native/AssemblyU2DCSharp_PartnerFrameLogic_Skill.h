#pragma once
#include <stdint.h>
// PartnerFrameLogic_Skill
struct PartnerFrameLogic_Skill_t1636;
// PartnerSkillItemNew[]
struct PartnerSkillItemNewU5BU5D_t1639;
// UnityEngine.GameObject
struct GameObject_t9;
// PartnerSkillLevelUpItem
struct PartnerSkillLevelUpItem_t1641;
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// PartnerLearnElementSkillLogic[]
struct PartnerLearnElementSkillLogicU5BU5D_t1642;
// UIButton
struct UIButton_t1578;
// Games.Fellow.Fellow
struct Fellow_t1174;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1116;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PartnerFrameLogic_Skill/LEVELUP_WINDOWTYPE
#include "AssemblyU2DCSharp_PartnerFrameLogic_Skill_LEVELUP_WINDOWTYPE.h"
// PartnerFrameLogic_Skill
struct PartnerFrameLogic_Skill_t1636  : public MonoBehaviour_t18
{
	// PartnerSkillItemNew[] PartnerFrameLogic_Skill::m_TalentSkill
	PartnerSkillItemNewU5BU5D_t1639* ___m_TalentSkill;
	// PartnerSkillItemNew[] PartnerFrameLogic_Skill::m_ElementSkill
	PartnerSkillItemNewU5BU5D_t1639* ___m_ElementSkill;
	// UnityEngine.GameObject PartnerFrameLogic_Skill::m_SkillInfo
	GameObject_t9 * ___m_SkillInfo;
	// UnityEngine.GameObject PartnerFrameLogic_Skill::m_SkillLevelUpWindow
	GameObject_t9 * ___m_SkillLevelUpWindow;
	// PartnerSkillLevelUpItem PartnerFrameLogic_Skill::m_SkillCurLevel
	PartnerSkillLevelUpItem_t1641 * ___m_SkillCurLevel;
	// PartnerSkillLevelUpItem PartnerFrameLogic_Skill::m_SkillNextLevel
	PartnerSkillLevelUpItem_t1641 * ___m_SkillNextLevel;
	// ItemSlotLogic PartnerFrameLogic_Skill::m_SkillBookSlot
	ItemSlotLogic_t1237 * ___m_SkillBookSlot;
	// UILabel PartnerFrameLogic_Skill::m_SkillLevelUpCostName
	UILabel_t1176 * ___m_SkillLevelUpCostName;
	// UISprite PartnerFrameLogic_Skill::m_SkillLevelUpCostSprite
	UISprite_t1202 * ___m_SkillLevelUpCostSprite;
	// UILabel PartnerFrameLogic_Skill::m_SkillLevelUpCostLabel
	UILabel_t1176 * ___m_SkillLevelUpCostLabel;
	// UnityEngine.GameObject PartnerFrameLogic_Skill::m_SkillChooseWindow
	GameObject_t9 * ___m_SkillChooseWindow;
	// UnityEngine.GameObject PartnerFrameLogic_Skill::m_SkillChooseGrid
	GameObject_t9 * ___m_SkillChooseGrid;
	// UnityEngine.GameObject PartnerFrameLogic_Skill::m_SkillChooseItem
	GameObject_t9 * ___m_SkillChooseItem;
	// UnityEngine.GameObject PartnerFrameLogic_Skill::m_LearnSkillWindow
	GameObject_t9 * ___m_LearnSkillWindow;
	// UISprite PartnerFrameLogic_Skill::m_NewElementSkillIcon
	UISprite_t1202 * ___m_NewElementSkillIcon;
	// UILabel PartnerFrameLogic_Skill::m_NewElementSkillName
	UILabel_t1176 * ___m_NewElementSkillName;
	// PartnerLearnElementSkillLogic[] PartnerFrameLogic_Skill::m_OldElementSkill
	PartnerLearnElementSkillLogicU5BU5D_t1642* ___m_OldElementSkill;
	// UIButton PartnerFrameLogic_Skill::m_LearnSkillOpenButton
	UIButton_t1578 * ___m_LearnSkillOpenButton;
	// UnityEngine.GameObject PartnerFrameLogic_Skill::m_LearnSkillCloseButton
	GameObject_t9 * ___m_LearnSkillCloseButton;
	// UnityEngine.GameObject PartnerFrameLogic_Skill::m_LearnSkillAddTips
	GameObject_t9 * ___m_LearnSkillAddTips;
	// UnityEngine.GameObject PartnerFrameLogic_Skill::m_LearnSkillAddSkillBook
	GameObject_t9 * ___m_LearnSkillAddSkillBook;
	// UnityEngine.GameObject PartnerFrameLogic_Skill::m_UpgradeCloseButton
	GameObject_t9 * ___m_UpgradeCloseButton;
	// UnityEngine.GameObject PartnerFrameLogic_Skill::m_GetInfoBtn
	GameObject_t9 * ___m_GetInfoBtn;
	// UnityEngine.GameObject PartnerFrameLogic_Skill::m_GetInfoDialog
	GameObject_t9 * ___m_GetInfoDialog;
	// UnityEngine.GameObject PartnerFrameLogic_Skill::m_GetInfoGrid
	GameObject_t9 * ___m_GetInfoGrid;
	// UnityEngine.GameObject PartnerFrameLogic_Skill::m_GetInfoCloseBg
	GameObject_t9 * ___m_GetInfoCloseBg;
	// UnityEngine.GameObject PartnerFrameLogic_Skill::m_GetInfoItemTemplate
	GameObject_t9 * ___m_GetInfoItemTemplate;
	// Games.Fellow.Fellow PartnerFrameLogic_Skill::m_Fellow
	Fellow_t1174 * ___m_Fellow;
	// System.Int32 PartnerFrameLogic_Skill::m_LevelUpTalentSkillChooseBuffer
	int32_t ___m_LevelUpTalentSkillChooseBuffer;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> PartnerFrameLogic_Skill::m_TalentSkillBookBuffer
	Dictionary_2_t1116 * ___m_TalentSkillBookBuffer;
	// System.Int32 PartnerFrameLogic_Skill::m_LevelUpSkillChooseBuffer
	int32_t ___m_LevelUpSkillChooseBuffer;
	// System.Int32 PartnerFrameLogic_Skill::m_LearnSkillChooseBuffer
	int32_t ___m_LearnSkillChooseBuffer;
	// PartnerFrameLogic_Skill/LEVELUP_WINDOWTYPE PartnerFrameLogic_Skill::m_LevelUpWindowType
	int32_t ___m_LevelUpWindowType;
};
struct PartnerFrameLogic_Skill_t1636_StaticFields{
	// PartnerFrameLogic_Skill PartnerFrameLogic_Skill::m_Instance
	PartnerFrameLogic_Skill_t1636 * ___m_Instance;
};
