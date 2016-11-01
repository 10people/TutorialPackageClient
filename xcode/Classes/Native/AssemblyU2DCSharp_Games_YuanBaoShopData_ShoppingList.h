#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Object
#include "mscorlib_System_Object.h"
// Games.YuanBaoShopData.ShoppingList
struct ShoppingList_t1669  : public Object_t
{
	// System.UInt64 Games.YuanBaoShopData.ShoppingList::m_Guid
	uint64_t ___m_Guid;
	// System.String Games.YuanBaoShopData.ShoppingList::m_SenderName
	String_t* ___m_SenderName;
	// System.Int32 Games.YuanBaoShopData.ShoppingList::m_CreateTime
	int32_t ___m_CreateTime;
	// System.Int32[] Games.YuanBaoShopData.ShoppingList::m_GoodsID
	Int32U5BU5D_t116* ___m_GoodsID;
	// System.Int32[] Games.YuanBaoShopData.ShoppingList::m_GoodsCount
	Int32U5BU5D_t116* ___m_GoodsCount;
	// System.Int32 Games.YuanBaoShopData.ShoppingList::m_LifeTime
	int32_t ___m_LifeTime;
};
