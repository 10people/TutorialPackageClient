#pragma once
#include <stdint.h>
// RestaurantData/RestaurantInfo
struct RestaurantInfo_t1825;
// RestaurantData/UpdatePlayerDataDelegate
struct UpdatePlayerDataDelegate_t4963;
// System.Object
#include "mscorlib_System_Object.h"
// RestaurantData
struct RestaurantData_t4964  : public Object_t
{
};
struct RestaurantData_t4964_StaticFields{
	// System.Int32 RestaurantData::GuestCountMax
	int32_t ___GuestCountMax;
	// System.Int32 RestaurantData::DeskCountMax
	int32_t ___DeskCountMax;
	// System.Int32 RestaurantData::FinishFoodMax
	int32_t ___FinishFoodMax;
	// System.Int32 RestaurantData::FoodLevelMax
	int32_t ___FoodLevelMax;
	// System.Int32 RestaurantData::m_restaurantTipsCount
	int32_t ___m_restaurantTipsCount;
	// RestaurantData/RestaurantInfo RestaurantData::m_PlayerRestaurantInfo
	RestaurantInfo_t1825 * ___m_PlayerRestaurantInfo;
	// RestaurantData/RestaurantInfo RestaurantData::m_FriendRestaurantInfo
	RestaurantInfo_t1825 * ___m_FriendRestaurantInfo;
	// RestaurantData/UpdatePlayerDataDelegate RestaurantData::delUpdatePlayerData
	UpdatePlayerDataDelegate_t4963 * ___delUpdatePlayerData;
	// RestaurantData/UpdatePlayerDataDelegate RestaurantData::delUpdateFriendData
	UpdatePlayerDataDelegate_t4963 * ___delUpdateFriendData;
	// RestaurantData/UpdatePlayerDataDelegate RestaurantData::delUpdatePlayerDeskData
	UpdatePlayerDataDelegate_t4963 * ___delUpdatePlayerDeskData;
	// RestaurantData/UpdatePlayerDataDelegate RestaurantData::delUpdateFriendDeskData
	UpdatePlayerDataDelegate_t4963 * ___delUpdateFriendDeskData;
};
