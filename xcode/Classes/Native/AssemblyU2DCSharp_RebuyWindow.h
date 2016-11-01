#pragma once
#include <stdint.h>
// RebuyWindow
struct RebuyWindow_t1794;
// ReBuyItem[]
struct ReBuyItemU5BU5D_t2038;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Boolean[]
struct BooleanU5BU5D_t102;
// RebuyChooseWindow
struct RebuyChooseWindow_t1921;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RebuyWindow
struct RebuyWindow_t1794  : public MonoBehaviour_t18
{
	// ReBuyItem[] RebuyWindow::m_ReBuyitems
	ReBuyItemU5BU5D_t2038* ___m_ReBuyitems;
	// System.Int32[] RebuyWindow::m_nBuybackSCN
	Int32U5BU5D_t116* ___m_nBuybackSCN;
	// System.Boolean[] RebuyWindow::m_nBuybackSCNSingle
	BooleanU5BU5D_t102* ___m_nBuybackSCNSingle;
	// RebuyChooseWindow RebuyWindow::m_RebuyChooseWindow
	RebuyChooseWindow_t1921 * ___m_RebuyChooseWindow;
};
struct RebuyWindow_t1794_StaticFields{
	// System.Int32 RebuyWindow::REBUY_ITEM_MAX
	int32_t ___REBUY_ITEM_MAX;
	// RebuyWindow RebuyWindow::m_Instance
	RebuyWindow_t1794 * ___m_Instance;
};
