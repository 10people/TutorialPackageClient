#pragma once
#include <stdint.h>
// GCGame.Table.Tab_SkillEx
struct Tab_SkillEx_t639;
// GCGame.Table.Tab_SkillBase
struct Tab_SkillBase_t637;
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// Games.SkillModle.SkillCore/SkillTargetData
struct SkillTargetData_t2118;
// System.Object
#include "mscorlib_System_Object.h"
// Games.SkillModle.SkillCore
struct SkillCore_t4465  : public Object_t
{
	// System.Int32 Games.SkillModle.SkillCore::m_nLastSkillId
	int32_t ___m_nLastSkillId;
	// System.Int32 Games.SkillModle.SkillCore::m_nLastSendId
	int32_t ___m_nLastSendId;
	// System.Int32 Games.SkillModle.SkillCore::m_nLastTargetId
	int32_t ___m_nLastTargetId;
	// System.Boolean Games.SkillModle.SkillCore::m_bIsUsingSkill
	bool ___m_bIsUsingSkill;
	// System.Single Games.SkillModle.SkillCore::m_fLastUseSkillTime
	float ___m_fLastUseSkillTime;
	// System.Single Games.SkillModle.SkillCore::m_OldCameraScan
	float ___m_OldCameraScan;
	// GCGame.Table.Tab_SkillEx Games.SkillModle.SkillCore::m_UsingSkillExInfo
	Tab_SkillEx_t639 * ___m_UsingSkillExInfo;
	// GCGame.Table.Tab_SkillBase Games.SkillModle.SkillCore::m_UsingSkillBaseInfo
	Tab_SkillBase_t637 * ___m_UsingSkillBaseInfo;
	// System.Int32 Games.SkillModle.SkillCore::m_UsingSkillStartAni
	int32_t ___m_UsingSkillStartAni;
	// Games.LogicObj.Obj_Character Games.SkillModle.SkillCore::m_SkillSender
	Obj_Character_t1772 * ___m_SkillSender;
	// Games.SkillModle.SkillCore/SkillTargetData Games.SkillModle.SkillCore::m_TargetData
	SkillTargetData_t2118 * ___m_TargetData;
};
