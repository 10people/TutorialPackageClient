#pragma once
#include <stdint.h>
// System.String
struct String_t;
// GCGame.Table.Tab_RoleBaseAttr
struct Tab_RoleBaseAttr_t615;
// System.Object
#include "mscorlib_System_Object.h"
// BaseAttr
struct BaseAttr_t4471  : public Object_t
{
	// System.Int32 BaseAttr::m_nHP
	int32_t ___m_nHP;
	// System.Int32 BaseAttr::m_nMaxHP
	int32_t ___m_nMaxHP;
	// System.Int32 BaseAttr::m_nMp
	int32_t ___m_nMp;
	// System.Int32 BaseAttr::m_nMaxMp
	int32_t ___m_nMaxMp;
	// System.Int32 BaseAttr::m_nXp
	int32_t ___m_nXp;
	// System.Int32 BaseAttr::m_nMaxXp
	int32_t ___m_nMaxXp;
	// System.String BaseAttr::m_RoleName
	String_t* ___m_RoleName;
	// System.Int32 BaseAttr::m_nLevel
	int32_t ___m_nLevel;
	// System.String BaseAttr::m_strHeadPic
	String_t* ___m_strHeadPic;
	// System.Int32 BaseAttr::m_nRoleBaseID
	int32_t ___m_nRoleBaseID;
	// System.Int32 BaseAttr::m_nForce
	int32_t ___m_nForce;
	// System.Single BaseAttr::m_fMoveSpeed
	float ___m_fMoveSpeed;
	// System.Boolean BaseAttr::m_bDie
	bool ___m_bDie;
	// System.Single BaseAttr::m_fDirection
	float ___m_fDirection;
	// System.Int32 BaseAttr::m_nCombatValue
	int32_t ___m_nCombatValue;
	// System.Int32 BaseAttr::m_nCurStamina
	int32_t ___m_nCurStamina;
	// System.Int32 BaseAttr::m_nOffLineExp
	int32_t ___m_nOffLineExp;
	// System.Int32 BaseAttr::m_nLightSkillLevel
	int32_t ___m_nLightSkillLevel;
	// GCGame.Table.Tab_RoleBaseAttr BaseAttr::m_CachedRoleBase
	Tab_RoleBaseAttr_t615 * ___m_CachedRoleBase;
	// System.Int32 BaseAttr::<Exp>k__BackingField
	int32_t ___U3CExpU3Ek__BackingField;
};
