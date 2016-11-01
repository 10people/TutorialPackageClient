#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// HongBaoItem
struct HongBaoItem_t1489  : public MonoBehaviour_t18
{
	// UILabel HongBaoItem::m_SenderNameLabel
	UILabel_t1176 * ___m_SenderNameLabel;
	// UILabel HongBaoItem::m_YuanBaoLabel
	UILabel_t1176 * ___m_YuanBaoLabel;
	// System.UInt64 HongBaoItem::m_Guid
	uint64_t ___m_Guid;
	// System.String HongBaoItem::m_SenderName
	String_t* ___m_SenderName;
	// System.UInt64 HongBaoItem::m_SenderGuid
	uint64_t ___m_SenderGuid;
	// System.Int32 HongBaoItem::m_nYuanBao
	int32_t ___m_nYuanBao;
};
