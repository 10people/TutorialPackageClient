#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail>
struct Dictionary_2_t4923;
// MailData/MailDelUpdate
struct MailDelUpdate_t4922;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MailData
struct MailData_t4924  : public MonoBehaviour_t18
{
};
struct MailData_t4924_StaticFields{
	// System.Int32 MailData::MailCountMax
	int32_t ___MailCountMax;
	// System.Collections.Generic.Dictionary`2<System.UInt64,MailData/UserMail> MailData::UserMailMap
	Dictionary_2_t4923 * ___UserMailMap;
	// System.UInt64 MailData::m_curPlayGuid
	uint64_t ___m_curPlayGuid;
	// MailData/MailDelUpdate MailData::delMailUpdate
	MailDelUpdate_t4922 * ___delMailUpdate;
};
