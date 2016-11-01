#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1116;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Object
#include "mscorlib_System_Object.h"
// Games.Fellow.Fellow
struct Fellow_t1174  : public Object_t
{
	// System.UInt64 Games.Fellow.Fellow::m_nGuid
	uint64_t ___m_nGuid;
	// System.Int32 Games.Fellow.Fellow::m_nDataId
	int32_t ___m_nDataId;
	// System.String Games.Fellow.Fellow::m_szName
	String_t* ___m_szName;
	// System.Int32 Games.Fellow.Fellow::m_callLevel
	int32_t ___m_callLevel;
	// System.Int32 Games.Fellow.Fellow::m_nQuality
	int32_t ___m_nQuality;
	// System.Int32 Games.Fellow.Fellow::m_nExp
	int32_t ___m_nExp;
	// System.Int32 Games.Fellow.Fellow::m_nLevel
	int32_t ___m_nLevel;
	// System.Int32 Games.Fellow.Fellow::m_nStarExp
	int32_t ___m_nStarExp;
	// System.Int32 Games.Fellow.Fellow::m_nStarLevel
	int32_t ___m_nStarLevel;
	// System.Int32 Games.Fellow.Fellow::m_nLucky
	int32_t ___m_nLucky;
	// System.Int32 Games.Fellow.Fellow::m_nProcreateCount
	int32_t ___m_nProcreateCount;
	// System.Int32 Games.Fellow.Fellow::m_nElementAttr
	int32_t ___m_nElementAttr;
	// System.Boolean Games.Fellow.Fellow::m_bLocked
	bool ___m_bLocked;
	// System.Int32 Games.Fellow.Fellow::m_BaseAttack
	int32_t ___m_BaseAttack;
	// System.Int32 Games.Fellow.Fellow::m_BaseHit
	int32_t ___m_BaseHit;
	// System.Int32 Games.Fellow.Fellow::m_BaseCritical
	int32_t ___m_BaseCritical;
	// System.Int32 Games.Fellow.Fellow::m_BaseGuard
	int32_t ___m_BaseGuard;
	// System.Int32 Games.Fellow.Fellow::m_BaseBless
	int32_t ___m_BaseBless;
	// System.Boolean Games.Fellow.Fellow::m_bCalled
	bool ___m_bCalled;
	// System.Int32 Games.Fellow.Fellow::m_combatAttr_Attack
	int32_t ___m_combatAttr_Attack;
	// System.Int32 Games.Fellow.Fellow::m_combatAttr_Bless
	int32_t ___m_combatAttr_Bless;
	// System.Int32 Games.Fellow.Fellow::m_combatAttr_Critical
	int32_t ___m_combatAttr_Critical;
	// System.Int32 Games.Fellow.Fellow::m_combatAttr_Guard
	int32_t ___m_combatAttr_Guard;
	// System.Int32 Games.Fellow.Fellow::m_combatAttr_Hit
	int32_t ___m_combatAttr_Hit;
	// System.Int32 Games.Fellow.Fellow::m_combatValue
	int32_t ___m_combatValue;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Games.Fellow.Fellow::m_TallentSkill
	Dictionary_2_t1116 * ___m_TallentSkill;
	// System.Int32[] Games.Fellow.Fellow::m_ElementSkill
	Int32U5BU5D_t116* ___m_ElementSkill;
};
struct Fellow_t1174_StaticFields{
	// System.Int32 Games.Fellow.Fellow::FELLOW_STARLEVEL_MAX
	int32_t ___FELLOW_STARLEVEL_MAX;
	// System.Int32 Games.Fellow.Fellow::FELLOW_TALLENTSKILL_COUNT
	int32_t ___FELLOW_TALLENTSKILL_COUNT;
	// System.Int32 Games.Fellow.Fellow::FELLOW_TALLENTSKILL_OPENCOUNT
	int32_t ___FELLOW_TALLENTSKILL_OPENCOUNT;
	// System.Int32 Games.Fellow.Fellow::FELLOW_ELEMENTSKILL_COUNT
	int32_t ___FELLOW_ELEMENTSKILL_COUNT;
	// System.Int32 Games.Fellow.Fellow::FELLOW_ELEMENTSKILL_OPENCOUNT
	int32_t ___FELLOW_ELEMENTSKILL_OPENCOUNT;
	// System.Int32 Games.Fellow.Fellow::FELLOW_ELEMENTSKILL_LOCKCOST
	int32_t ___FELLOW_ELEMENTSKILL_LOCKCOST;
	// System.Int32[] Games.Fellow.Fellow::FELLOW_ELEMENTSKILL_LEVELNEED
	Int32U5BU5D_t116* ___FELLOW_ELEMENTSKILL_LEVELNEED;
};
