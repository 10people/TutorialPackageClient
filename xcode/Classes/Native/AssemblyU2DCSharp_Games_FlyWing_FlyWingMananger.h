#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>
struct Dictionary_2_t4730;
// System.Object
#include "mscorlib_System_Object.h"
// Games.FlyWing.FlyWingMananger
struct FlyWingMananger_t2176  : public Object_t
{
	// System.Collections.Generic.List`1<System.Int32> Games.FlyWing.FlyWingMananger::m_DreamFlyWingData
	List_1_t90 * ___m_DreamFlyWingData;
	// System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData> Games.FlyWing.FlyWingMananger::m_FlyWingDataDictionary
	Dictionary_2_t4730 * ___m_FlyWingDataDictionary;
	// System.Int32 Games.FlyWing.FlyWingMananger::m_CurEquipFlyWingId
	int32_t ___m_CurEquipFlyWingId;
	// System.Int32 Games.FlyWing.FlyWingMananger::m_CurDreamFlyWingId
	int32_t ___m_CurDreamFlyWingId;
	// System.Boolean Games.FlyWing.FlyWingMananger::m_IsShowFlyWing
	bool ___m_IsShowFlyWing;
};
