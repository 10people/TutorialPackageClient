#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UITable
struct UITable_t1306;
// UISprite
struct UISprite_t1202;
// UnityEngine.BoxCollider
struct BoxCollider_t128;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// GuildHistoryItemLogic
struct GuildHistoryItemLogic_t1438  : public MonoBehaviour_t18
{
	// UILabel GuildHistoryItemLogic::m_DateLabel
	UILabel_t1176 * ___m_DateLabel;
	// UILabel[] GuildHistoryItemLogic::m_RecordLabel
	UILabelU5BU5D_t1203* ___m_RecordLabel;
	// UITable GuildHistoryItemLogic::m_RecordTabel
	UITable_t1306 * ___m_RecordTabel;
	// UISprite GuildHistoryItemLogic::m_Background
	UISprite_t1202 * ___m_Background;
	// UnityEngine.BoxCollider GuildHistoryItemLogic::m_SelfBox
	BoxCollider_t128 * ___m_SelfBox;
	// System.DateTime GuildHistoryItemLogic::m_DateTime
	DateTime_t1171  ___m_DateTime;
	// System.Int32 GuildHistoryItemLogic::m_RecordIndex
	int32_t ___m_RecordIndex;
};
