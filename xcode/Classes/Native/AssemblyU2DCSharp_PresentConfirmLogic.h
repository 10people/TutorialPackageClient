#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PresentConfirmLogic/SHOW_TYPE
#include "AssemblyU2DCSharp_PresentConfirmLogic_SHOW_TYPE.h"
// PresentConfirmLogic
struct PresentConfirmLogic_t1667  : public MonoBehaviour_t18
{
	// UILabel PresentConfirmLogic::m_TitleLabel
	UILabel_t1176 * ___m_TitleLabel;
	// UILabel PresentConfirmLogic::m_CostYuanBaoLabel
	UILabel_t1176 * ___m_CostYuanBaoLabel;
	// PresentConfirmLogic/SHOW_TYPE PresentConfirmLogic::m_Type
	int32_t ___m_Type;
	// System.UInt64 PresentConfirmLogic::m_ChooseFriendGuid
	uint64_t ___m_ChooseFriendGuid;
	// System.String PresentConfirmLogic::m_ChooseFriendName
	String_t* ___m_ChooseFriendName;
	// System.UInt64 PresentConfirmLogic::m_ChooseShoppingListGuid
	uint64_t ___m_ChooseShoppingListGuid;
	// System.Int32 PresentConfirmLogic::m_CostYuanBao
	int32_t ___m_CostYuanBao;
};
