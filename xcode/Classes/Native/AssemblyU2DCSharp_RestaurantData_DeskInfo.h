#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Object
#include "mscorlib_System_Object.h"
// RestaurantData/DeskState
#include "AssemblyU2DCSharp_RestaurantData_DeskState.h"
// RestaurantData/DeskInfo
struct DeskInfo_t1927  : public Object_t
{
	// System.Boolean RestaurantData/DeskInfo::m_IsActive
	bool ___m_IsActive;
	// System.Int32 RestaurantData/DeskInfo::m_DeskFinishTime
	int32_t ___m_DeskFinishTime;
	// System.Int32[] RestaurantData/DeskInfo::m_GuestIDs
	Int32U5BU5D_t116* ___m_GuestIDs;
	// RestaurantData/DeskState RestaurantData/DeskInfo::m_DestState
	int32_t ___m_DestState;
	// System.Int32 RestaurantData/DeskInfo::m_FoodID
	int32_t ___m_FoodID;
};
