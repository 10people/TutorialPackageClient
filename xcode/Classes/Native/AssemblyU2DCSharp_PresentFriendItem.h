#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PresentRootLogic/TAB_INDEX
#include "AssemblyU2DCSharp_PresentRootLogic_TAB_INDEX.h"
// PresentFriendItem
struct PresentFriendItem_t1668  : public MonoBehaviour_t18
{
	// UILabel PresentFriendItem::m_CartFriendNameLabel
	UILabel_t1176 * ___m_CartFriendNameLabel;
	// UILabel PresentFriendItem::m_PresentFriendNameLabel
	UILabel_t1176 * ___m_PresentFriendNameLabel;
	// UILabel PresentFriendItem::m_PresentTimeLabel
	UILabel_t1176 * ___m_PresentTimeLabel;
	// System.UInt64 PresentFriendItem::m_FriendGuid
	uint64_t ___m_FriendGuid;
	// System.String PresentFriendItem::m_FriendName
	String_t* ___m_FriendName;
	// PresentRootLogic/TAB_INDEX PresentFriendItem::m_Type
	int32_t ___m_Type;
	// System.UInt64 PresentFriendItem::m_ShoppingListGuid
	uint64_t ___m_ShoppingListGuid;
};
