#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// RebuyChooseWindow
struct RebuyChooseWindow_t1921;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ReBuyItem
struct ReBuyItem_t1922  : public MonoBehaviour_t18
{
	// System.Int32 ReBuyItem::m_RebuyCopySceneId
	int32_t ___m_RebuyCopySceneId;
	// System.Boolean ReBuyItem::m_RebuyCopySceneSingle
	bool ___m_RebuyCopySceneSingle;
	// System.Int32 ReBuyItem::m_RebuyCopySceneCount
	int32_t ___m_RebuyCopySceneCount;
	// UILabel ReBuyItem::m_LabelName
	UILabel_t1176 * ___m_LabelName;
	// UILabel ReBuyItem::m_LabelCount
	UILabel_t1176 * ___m_LabelCount;
	// RebuyChooseWindow ReBuyItem::m_RebuyChooseWindow
	RebuyChooseWindow_t1921 * ___m_RebuyChooseWindow;
};
