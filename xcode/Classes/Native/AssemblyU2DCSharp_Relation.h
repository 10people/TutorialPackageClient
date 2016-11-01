#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Relation
struct Relation_t1442  : public Object_t
{
	// System.UInt64 Relation::m_Guid
	uint64_t ___m_Guid;
	// System.String Relation::m_szName
	String_t* ___m_szName;
	// System.Int32 Relation::m_nLevel
	int32_t ___m_nLevel;
	// System.Int32 Relation::m_nProfession
	int32_t ___m_nProfession;
	// System.Int32 Relation::m_nCombatNum
	int32_t ___m_nCombatNum;
	// System.Int32 Relation::m_nState
	int32_t ___m_nState;
	// System.UInt32 Relation::m_timeInfotime
	uint32_t ___m_timeInfotime;
};
