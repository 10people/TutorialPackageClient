#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// VillainData/UpdateVillainDelegate
struct UpdateVillainDelegate_t4983;
// VillainData
struct VillainData_t4984;
// System.Object
#include "mscorlib_System_Object.h"
// VillainData
struct VillainData_t4984  : public Object_t
{
	// System.Int32 VillainData::m_nRound
	int32_t ___m_nRound;
	// System.Int32 VillainData::m_nNormalVillainCount
	int32_t ___m_nNormalVillainCount;
	// System.Int32 VillainData::m_nSuperVillainCount
	int32_t ___m_nSuperVillainCount;
	// System.Collections.Generic.List`1<System.Int32> VillainData::m_NormalSceneClassList
	List_1_t90 * ___m_NormalSceneClassList;
	// System.Collections.Generic.List`1<System.Int32> VillainData::m_SuperSceneClassList
	List_1_t90 * ___m_SuperSceneClassList;
};
struct VillainData_t4984_StaticFields{
	// System.Int32 VillainData::m_MaxSceneClass
	int32_t ___m_MaxSceneClass;
	// System.Int32 VillainData::m_nLevelLimit
	int32_t ___m_nLevelLimit;
	// System.Int32 VillainData::NormalNpcGroupID
	int32_t ___NormalNpcGroupID;
	// System.Int32 VillainData::SuperNpcGroupID
	int32_t ___SuperNpcGroupID;
	// System.Int32 VillainData::NianShouGroupID
	int32_t ___NianShouGroupID;
	// VillainData/UpdateVillainDelegate VillainData::delUpdateVillain
	UpdateVillainDelegate_t4983 * ___delUpdateVillain;
	// VillainData VillainData::m_VillainInfo
	VillainData_t4984 * ___m_VillainInfo;
};
