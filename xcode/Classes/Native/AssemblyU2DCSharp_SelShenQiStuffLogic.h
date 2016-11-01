#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Generic.List`1<UIToggle>
struct List_1_t1322;
// System.Collections.Generic.List`1<Games.Item.GameItem>
struct List_1_t1244;
// Games.Item.GameItem
struct GameItem_t1172;
// LivingSkillShenQiStuffLogic
struct LivingSkillShenQiStuffLogic_t1513;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SelShenQiStuffLogic
struct SelShenQiStuffLogic_t1714  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject SelShenQiStuffLogic::m_BackPackItems
	GameObject_t9 * ___m_BackPackItems;
	// UnityEngine.GameObject SelShenQiStuffLogic::m_BackPackItemGrid
	GameObject_t9 * ___m_BackPackItemGrid;
	// UnityEngine.GameObject SelShenQiStuffLogic::m_NoCanSelItemLable
	GameObject_t9 * ___m_NoCanSelItemLable;
	// UnityEngine.GameObject SelShenQiStuffLogic::m_SelShenQiStuffItem
	GameObject_t9 * ___m_SelShenQiStuffItem;
	// System.Collections.Generic.List`1<UIToggle> SelShenQiStuffLogic::m_ItemInfoSelectToggle
	List_1_t1322 * ___m_ItemInfoSelectToggle;
	// System.Int32 SelShenQiStuffLogic::m_Cur_StartItem
	int32_t ___m_Cur_StartItem;
	// System.Int32 SelShenQiStuffLogic::m_Cur_EndItem
	int32_t ___m_Cur_EndItem;
	// System.Collections.Generic.List`1<Games.Item.GameItem> SelShenQiStuffLogic::m_CurItemList
	List_1_t1244 * ___m_CurItemList;
	// Games.Item.GameItem SelShenQiStuffLogic::m_SelItemInfo
	GameItem_t1172 * ___m_SelItemInfo;
	// LivingSkillShenQiStuffLogic SelShenQiStuffLogic::m_curShenQiStuffLogic
	LivingSkillShenQiStuffLogic_t1513 * ___m_curShenQiStuffLogic;
	// System.Int32 SelShenQiStuffLogic::m_nNeedItemDataId
	int32_t ___m_nNeedItemDataId;
	// System.Boolean SelShenQiStuffLogic::m_bLoadItem
	bool ___m_bLoadItem;
};
