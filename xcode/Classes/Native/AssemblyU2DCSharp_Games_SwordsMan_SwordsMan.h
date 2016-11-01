#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Games.SwordsMan.SwordsMan
struct SwordsMan_t1175  : public Object_t
{
	// System.UInt64 Games.SwordsMan.SwordsMan::m_nGuid
	uint64_t ___m_nGuid;
	// System.Int32 Games.SwordsMan.SwordsMan::m_nDataId
	int32_t ___m_nDataId;
	// System.String Games.SwordsMan.SwordsMan::m_szName
	String_t* ___m_szName;
	// System.Int32 Games.SwordsMan.SwordsMan::m_nExp
	int32_t ___m_nExp;
	// System.Int32 Games.SwordsMan.SwordsMan::m_nMaxExp
	int32_t ___m_nMaxExp;
	// System.Int32 Games.SwordsMan.SwordsMan::m_nLevel
	int32_t ___m_nLevel;
	// System.Int32 Games.SwordsMan.SwordsMan::m_nQuality
	int32_t ___m_nQuality;
	// System.Boolean Games.SwordsMan.SwordsMan::m_bLocked
	bool ___m_bLocked;
};
