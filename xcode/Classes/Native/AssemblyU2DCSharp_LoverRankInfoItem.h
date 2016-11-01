#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// LoverFlowerWindow
struct LoverFlowerWindow_t1897;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LoverRankInfoItem
struct LoverRankInfoItem_t1898  : public MonoBehaviour_t18
{
	// UILabel LoverRankInfoItem::Rank
	UILabel_t1176 * ___Rank;
	// UILabel LoverRankInfoItem::Name
	UILabel_t1176 * ___Name;
	// UILabel LoverRankInfoItem::Num
	UILabel_t1176 * ___Num;
	// LoverFlowerWindow LoverRankInfoItem::m_parentWindow
	LoverFlowerWindow_t1897 * ___m_parentWindow;
	// UnityEngine.GameObject LoverRankInfoItem::RankInfoBack
	GameObject_t9 * ___RankInfoBack;
	// System.UInt64 LoverRankInfoItem::m_Guid
	uint64_t ___m_Guid;
};
