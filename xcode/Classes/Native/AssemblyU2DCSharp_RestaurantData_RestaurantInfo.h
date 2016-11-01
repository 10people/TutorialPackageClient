#pragma once
#include <stdint.h>
// RestaurantData/DeskInfo[]
struct DeskInfoU5BU5D_t4962;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1393;
// System.Object
#include "mscorlib_System_Object.h"
// RestaurantData/RestaurantInfo
struct RestaurantInfo_t1825  : public Object_t
{
	// System.Int32 RestaurantData/RestaurantInfo::m_RestaurantExp
	int32_t ___m_RestaurantExp;
	// System.Int32 RestaurantData/RestaurantInfo::m_RestaurantLevel
	int32_t ___m_RestaurantLevel;
	// System.UInt64 RestaurantData/RestaurantInfo::m_FrinedGuid
	uint64_t ___m_FrinedGuid;
	// RestaurantData/DeskInfo[] RestaurantData/RestaurantInfo::m_Desks
	DeskInfoU5BU5D_t4962* ___m_Desks;
	// System.String RestaurantData/RestaurantInfo::m_MasterName
	String_t* ___m_MasterName;
	// System.Collections.Generic.List`1<System.UInt64> RestaurantData/RestaurantInfo::m_VisitFrindList
	List_1_t1393 * ___m_VisitFrindList;
};
