#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneDayNumber>
struct Dictionary_2_t4972;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneNumberEx>
struct Dictionary_2_t4973;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneActivityOnOff>
struct Dictionary_2_t4974;
// System.Object
#include "mscorlib_System_Object.h"
// Games.UserCommonData.UserCommonData
struct UserCommonData_t4952  : public Object_t
{
	// System.Int32[] Games.UserCommonData.UserCommonData::m_CommonData
	Int32U5BU5D_t116* ___m_CommonData;
	// System.Int32[] Games.UserCommonData.UserCommonData::m_CommonFlag
	Int32U5BU5D_t116* ___m_CommonFlag;
	// System.Collections.Generic.Dictionary`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneDayNumber> Games.UserCommonData.UserCommonData::m_CopySceneDayNumber
	Dictionary_2_t4972 * ___m_CopySceneDayNumber;
	// System.Collections.Generic.Dictionary`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneNumberEx> Games.UserCommonData.UserCommonData::m_CopySceneNumberEx
	Dictionary_2_t4973 * ___m_CopySceneNumberEx;
	// System.Collections.Generic.Dictionary`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneActivityOnOff> Games.UserCommonData.UserCommonData::m_IsCSActivity
	Dictionary_2_t4974 * ___m_IsCSActivity;
};
