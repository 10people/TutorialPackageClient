#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// AttackBarInfo
struct AttackBarInfo_t1724  : public Object_t
{
	// System.Int32 AttackBarInfo::nSkillFirstIndex
	int32_t ___nSkillFirstIndex;
	// System.Single AttackBarInfo::fCurrentStartTime
	float ___fCurrentStartTime;
	// System.Single AttackBarInfo::nCurrentCDTime
	float ___nCurrentCDTime;
	// System.Single AttackBarInfo::fRemainCDTime
	float ___fRemainCDTime;
	// UISprite AttackBarInfo::attackIconPic
	UISprite_t1202 * ___attackIconPic;
	// System.Single AttackBarInfo::fDisabledRemTime
	float ___fDisabledRemTime;
	// System.Single AttackBarInfo::fCurDisabledStartTime
	float ___fCurDisabledStartTime;
	// System.Single AttackBarInfo::fCurDisabledTime
	float ___fCurDisabledTime;
	// System.Int32 AttackBarInfo::nCurSkillId
	int32_t ___nCurSkillId;
	// System.Boolean AttackBarInfo::isPress
	bool ___isPress;
	// System.Single AttackBarInfo::fPressTime
	float ___fPressTime;
	// System.Boolean AttackBarInfo::canUseNext
	bool ___canUseNext;
	// System.Single AttackBarInfo::canUseNextUpdateTime
	float ___canUseNextUpdateTime;
	// UnityEngine.GameObject AttackBarInfo::attackObj
	GameObject_t9 * ___attackObj;
	// System.Int32 AttackBarInfo::m_nNormalSkillId
	int32_t ___m_nNormalSkillId;
	// System.String AttackBarInfo::m_strNormalAttackSpriteName
	String_t* ___m_strNormalAttackSpriteName;
};
