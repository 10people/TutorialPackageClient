#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PartnerSkillItemLogic
struct PartnerSkillItemLogic_t1646  : public MonoBehaviour_t18
{
	// UISprite PartnerSkillItemLogic::m_SkillIcon
	UISprite_t1202 * ___m_SkillIcon;
	// UISprite PartnerSkillItemLogic::m_QualityPic
	UISprite_t1202 * ___m_QualityPic;
	// UnityEngine.GameObject PartnerSkillItemLogic::m_LockSprite
	GameObject_t9 * ___m_LockSprite;
	// System.String PartnerSkillItemLogic::toolTipMsg
	String_t* ___toolTipMsg;
	// System.Int32 PartnerSkillItemLogic::m_TallentSkillId
	int32_t ___m_TallentSkillId;
	// System.Int32 PartnerSkillItemLogic::m_ElementSkillId
	int32_t ___m_ElementSkillId;
};
