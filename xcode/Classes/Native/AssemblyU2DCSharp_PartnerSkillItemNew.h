#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PartnerSkillItemNew
struct PartnerSkillItemNew_t1640  : public MonoBehaviour_t18
{
	// UISprite PartnerSkillItemNew::sprSkillIcon
	UISprite_t1202 * ___sprSkillIcon;
	// UILabel PartnerSkillItemNew::lblSkillLv
	UILabel_t1176 * ___lblSkillLv;
	// UnityEngine.GameObject PartnerSkillItemNew::objLock
	GameObject_t9 * ___objLock;
	// UnityEngine.GameObject PartnerSkillItemNew::enhanceSkill
	GameObject_t9 * ___enhanceSkill;
	// UnityEngine.GameObject PartnerSkillItemNew::objDetail
	GameObject_t9 * ___objDetail;
	// UnityEngine.GameObject PartnerSkillItemNew::objDetailBg
	GameObject_t9 * ___objDetailBg;
	// UILabel PartnerSkillItemNew::lblSkillName
	UILabel_t1176 * ___lblSkillName;
	// UILabel PartnerSkillItemNew::lblSkillDesc
	UILabel_t1176 * ___lblSkillDesc;
	// UILabel PartnerSkillItemNew::lblSkillEffect
	UILabel_t1176 * ___lblSkillEffect;
	// System.Int32 PartnerSkillItemNew::m_TallentSkillId
	int32_t ___m_TallentSkillId;
	// System.Int32 PartnerSkillItemNew::m_ElementSkillId
	int32_t ___m_ElementSkillId;
};
