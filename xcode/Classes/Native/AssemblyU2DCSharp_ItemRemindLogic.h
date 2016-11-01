#pragma once
#include <stdint.h>
// ItemRemindLogic
struct ItemRemindLogic_t1491;
// UnityEngine.Transform
struct Transform_t78;
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// UILabel
struct UILabel_t1176;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ItemRemindLogic
struct ItemRemindLogic_t1491  : public MonoBehaviour_t18
{
	// UnityEngine.Transform ItemRemindLogic::m_Trans
	Transform_t78 * ___m_Trans;
	// ItemSlotLogic ItemRemindLogic::m_ItemSlot
	ItemSlotLogic_t1237 * ___m_ItemSlot;
	// UILabel ItemRemindLogic::m_NameLabel
	UILabel_t1176 * ___m_NameLabel;
	// System.Collections.Generic.List`1<System.Int32> ItemRemindLogic::m_ItemDataIDBuffer
	List_1_t90 * ___m_ItemDataIDBuffer;
	// System.Boolean ItemRemindLogic::m_bOnShow
	bool ___m_bOnShow;
	// System.Single ItemRemindLogic::m_fStartShowTime
	float ___m_fStartShowTime;
};
struct ItemRemindLogic_t1491_StaticFields{
	// ItemRemindLogic ItemRemindLogic::m_Instance
	ItemRemindLogic_t1491 * ___m_Instance;
};
