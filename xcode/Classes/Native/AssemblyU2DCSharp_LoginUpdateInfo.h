#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UILabel
struct UILabel_t1176;
// UnityEngine.BoxCollider
struct BoxCollider_t128;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LoginUpdateInfo
struct LoginUpdateInfo_t2013  : public MonoBehaviour_t18
{
	// UILabel LoginUpdateInfo::m_UpdateInfo
	UILabel_t1176 * ___m_UpdateInfo;
	// UnityEngine.BoxCollider LoginUpdateInfo::m_BoxCollider
	BoxCollider_t128 * ___m_BoxCollider;
	// System.Boolean LoginUpdateInfo::m_IsShowed
	bool ___m_IsShowed;
	// System.Single LoginUpdateInfo::m_UpdateTime
	float ___m_UpdateTime;
};
struct LoginUpdateInfo_t2013_StaticFields{
	// System.Boolean LoginUpdateInfo::m_IsChangeType
	bool ___m_IsChangeType;
	// System.Boolean LoginUpdateInfo::m_bReceiveData
	bool ___m_bReceiveData;
	// System.String LoginUpdateInfo::m_UpdateInofText
	String_t* ___m_UpdateInofText;
	// System.Boolean LoginUpdateInfo::m_bRequesting
	bool ___m_bRequesting;
	// System.Boolean LoginUpdateInfo::m_IsShow
	bool ___m_IsShow;
	// System.String LoginUpdateInfo::m_OnOffString
	String_t* ___m_OnOffString;
	// System.Collections.Generic.List`1<System.String> LoginUpdateInfo::newsList
	List_1_t1333 * ___newsList;
};
