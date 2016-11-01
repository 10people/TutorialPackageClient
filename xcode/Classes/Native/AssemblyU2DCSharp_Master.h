#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t1167;
// System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>
struct Dictionary_2_t4777;
// System.Object
#include "mscorlib_System_Object.h"
// Master
struct Master_t4778  : public Object_t
{
	// System.UInt64 Master::m_MasterGuid
	uint64_t ___m_MasterGuid;
	// System.String Master::m_MasterName
	String_t* ___m_MasterName;
	// System.UInt64 Master::m_MasterChiefGuid
	uint64_t ___m_MasterChiefGuid;
	// System.String Master::m_MasterChiefName
	String_t* ___m_MasterChiefName;
	// System.Int32 Master::m_MasterTorch
	int32_t ___m_MasterTorch;
	// System.String Master::m_MasterNotice
	String_t* ___m_MasterNotice;
	// System.Int32 Master::m_MasterCreateTime
	int32_t ___m_MasterCreateTime;
	// System.Int32 Master::m_MasterOnlineNum
	int32_t ___m_MasterOnlineNum;
	// System.Int32 Master::m_MasterMemberNum
	int32_t ___m_MasterMemberNum;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> Master::m_MasterSkillList
	Dictionary_2_t1167 * ___m_MasterSkillList;
	// System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember> Master::m_MasterMemberList
	Dictionary_2_t4777 * ___m_MasterMemberList;
	// System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember> Master::m_MasterReserveMemberList
	Dictionary_2_t4777 * ___m_MasterReserveMemberList;
};
