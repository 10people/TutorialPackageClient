#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// GuildPreviewInfo
struct GuildPreviewInfo_t1446  : public Object_t
{
	// System.UInt64 GuildPreviewInfo::m_GuildGuid
	uint64_t ___m_GuildGuid;
	// System.String GuildPreviewInfo::m_GuildName
	String_t* ___m_GuildName;
	// System.Int32 GuildPreviewInfo::m_GuildLevel
	int32_t ___m_GuildLevel;
	// System.String GuildPreviewInfo::m_GuildChiefName
	String_t* ___m_GuildChiefName;
	// System.Int32 GuildPreviewInfo::m_GuildCurMemberNum
	int32_t ___m_GuildCurMemberNum;
	// System.Int32 GuildPreviewInfo::m_GuildCombatValue
	int32_t ___m_GuildCombatValue;
	// System.Boolean GuildPreviewInfo::m_bIsEnemyGuild
	bool ___m_bIsEnemyGuild;
	// System.Int32 GuildPreviewInfo::m_GuildCurApplyNum
	int32_t ___m_GuildCurApplyNum;
	// System.Int32 GuildPreviewInfo::m_GuildMaxApplyNum
	int32_t ___m_GuildMaxApplyNum;
	// System.String GuildPreviewInfo::m_GuildDeclaration
	String_t* ___m_GuildDeclaration;
};
