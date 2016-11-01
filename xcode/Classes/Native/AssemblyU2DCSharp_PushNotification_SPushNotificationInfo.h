#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// PushNotification/SPushNotificationInfo
struct SPushNotificationInfo_t4505 
{
	// System.String PushNotification/SPushNotificationInfo::m_szNews
	String_t* ___m_szNews;
	// System.Int32 PushNotification/SPushNotificationInfo::m_nData
	int32_t ___m_nData;
	// System.Int32 PushNotification/SPushNotificationInfo::m_nRepeatType
	int32_t ___m_nRepeatType;
};
// Native definition for marshalling of: PushNotification/SPushNotificationInfo
struct SPushNotificationInfo_t4505_marshaled
{
	char* ___m_szNews;
	int32_t ___m_nData;
	int32_t ___m_nRepeatType;
};
