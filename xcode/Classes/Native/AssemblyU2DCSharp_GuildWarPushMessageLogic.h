#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// GuildWarPushMessageLogic
struct GuildWarPushMessageLogic_t1485;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GuildWarPushMessageInfo
#include "AssemblyU2DCSharp_GuildWarPushMessageInfo.h"
// GuildWarPushMessageLogic
struct GuildWarPushMessageLogic_t1485  : public MonoBehaviour_t18
{
	// UILabel GuildWarPushMessageLogic::m_MessageNumLabel
	UILabel_t1176 * ___m_MessageNumLabel;
	// GuildWarPushMessageInfo GuildWarPushMessageLogic::m_curPopMessage
	GuildWarPushMessageInfo_t1486  ___m_curPopMessage;
	// System.Int32 GuildWarPushMessageLogic::m_curMessageNum
	int32_t ___m_curMessageNum;
	// System.Boolean GuildWarPushMessageLogic::m_bIsWaitAnswer
	bool ___m_bIsWaitAnswer;
};
struct GuildWarPushMessageLogic_t1485_StaticFields{
	// GuildWarPushMessageLogic GuildWarPushMessageLogic::m_Instance
	GuildWarPushMessageLogic_t1485 * ___m_Instance;
};
