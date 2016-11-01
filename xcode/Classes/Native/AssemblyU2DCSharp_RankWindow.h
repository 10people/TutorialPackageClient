#pragma once
#include <stdint.h>
// RankItem[]
struct RankItemU5BU5D_t2034;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UILabel
struct UILabel_t1176;
// UIImageButton
struct UIImageButton_t1204;
// UIGrid
struct UIGrid_t1199;
// UITopGrid
struct UITopGrid_t1343;
// UnityEngine.GameObject
struct GameObject_t9;
// RankItemMenu
struct RankItemMenu_t1681;
// RankItem
struct RankItem_t1919;
// UnityEngine.Transform
struct Transform_t78;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// System.Collections.Generic.List`1<RankSubClassItem>
struct List_1_t2035;
// System.Collections.Generic.List`1<RankClassItem>
struct List_1_t2036;
// RankWindow
struct RankWindow_t2037;
// TabController
struct TabController_t1209;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RankWindow
struct RankWindow_t2037  : public MonoBehaviour_t18
{
	// RankItem[] RankWindow::m_RankItem
	RankItemU5BU5D_t2034* ___m_RankItem;
	// UILabel[] RankWindow::m_RankItemTitle
	UILabelU5BU5D_t1203* ___m_RankItemTitle;
	// UILabel RankWindow::m_MeRank
	UILabel_t1176 * ___m_MeRank;
	// UILabel RankWindow::m_MeRankDesc
	UILabel_t1176 * ___m_MeRankDesc;
	// UIImageButton RankWindow::NextImageButton
	UIImageButton_t1204 * ___NextImageButton;
	// UIImageButton RankWindow::PrevImageButton
	UIImageButton_t1204 * ___PrevImageButton;
	// UILabel RankWindow::m_Page
	UILabel_t1176 * ___m_Page;
	// System.Int32 RankWindow::m_nPage
	int32_t ___m_nPage;
	// System.Boolean RankWindow::m_IsPage
	bool ___m_IsPage;
	// System.Int32 RankWindow::m_nRankType
	int32_t ___m_nRankType;
	// System.Int32 RankWindow::m_nTipWaitWindow
	int32_t ___m_nTipWaitWindow;
	// UIGrid RankWindow::m_TitleGrid
	UIGrid_t1199 * ___m_TitleGrid;
	// UITopGrid RankWindow::m_ItemTopGrid
	UITopGrid_t1343 * ___m_ItemTopGrid;
	// UILabel RankWindow::m_ChongZhiTime
	UILabel_t1176 * ___m_ChongZhiTime;
	// UnityEngine.GameObject RankWindow::m_RepRootObject
	GameObject_t9 * ___m_RepRootObject;
	// UILabel RankWindow::m_RepValue
	UILabel_t1176 * ___m_RepValue;
	// UnityEngine.GameObject RankWindow::m_RankRewardDescRootObject
	GameObject_t9 * ___m_RankRewardDescRootObject;
	// UILabel RankWindow::m_RankRewardDescLabel
	UILabel_t1176 * ___m_RankRewardDescLabel;
	// UnityEngine.GameObject RankWindow::m_RankRewardDescBtn
	GameObject_t9 * ___m_RankRewardDescBtn;
	// RankItemMenu RankWindow::m_MenuWindow
	RankItemMenu_t1681 * ___m_MenuWindow;
	// RankItem RankWindow::m_CurSelectItem
	RankItem_t1919 * ___m_CurSelectItem;
	// UnityEngine.GameObject RankWindow::m_SubActivityGrid
	GameObject_t9 * ___m_SubActivityGrid;
	// UIGrid RankWindow::m_SubActivityUIGrid
	UIGrid_t1199 * ___m_SubActivityUIGrid;
	// UnityEngine.GameObject RankWindow::m_SubHaoXiaGrid
	GameObject_t9 * ___m_SubHaoXiaGrid;
	// UIGrid RankWindow::m_SubHaoXiaUIGrid
	UIGrid_t1199 * ___m_SubHaoXiaUIGrid;
	// UnityEngine.GameObject RankWindow::m_SubJunJieGrid
	GameObject_t9 * ___m_SubJunJieGrid;
	// UIGrid RankWindow::m_SubJunJieUIGrid
	UIGrid_t1199 * ___m_SubJunJieUIGrid;
	// UnityEngine.GameObject RankWindow::m_SubZhiZunGrid
	GameObject_t9 * ___m_SubZhiZunGrid;
	// UIGrid RankWindow::m_SubZhiZunUIGrid
	UIGrid_t1199 * ___m_SubZhiZunUIGrid;
	// UnityEngine.GameObject RankWindow::m_SubJuYiGrid
	GameObject_t9 * ___m_SubJuYiGrid;
	// UIGrid RankWindow::m_SubJuYiUIGrid
	UIGrid_t1199 * ___m_SubJuYiUIGrid;
	// UnityEngine.Transform RankWindow::m_ActivityGridTrans
	Transform_t78 * ___m_ActivityGridTrans;
	// UnityEngine.GameObject RankWindow::m_prefClassItem
	GameObject_t9 * ___m_prefClassItem;
	// UnityEngine.GameObject RankWindow::m_prefSubClassItem
	GameObject_t9 * ___m_prefSubClassItem;
	// UnityEngine.GameObject RankWindow::m_RankClass
	GameObject_t9 * ___m_RankClass;
	// UnityEngine.GameObject RankWindow::m_RankInfo
	GameObject_t9 * ___m_RankInfo;
	// UILabel RankWindow::m_CaoZuoLabel
	UILabel_t1176 * ___m_CaoZuoLabel;
	// UnityEngine.GameObject RankWindow::m_SubActivityBt
	GameObject_t9 * ___m_SubActivityBt;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> RankWindow::m_ClickSprite
	List_1_t1289 * ___m_ClickSprite;
	// System.Collections.Generic.List`1<RankSubClassItem> RankWindow::m_RankSubClassList
	List_1_t2035 * ___m_RankSubClassList;
	// System.Collections.Generic.List`1<RankClassItem> RankWindow::m_RankClassList
	List_1_t2036 * ___m_RankClassList;
	// System.Int32 RankWindow::m_nTotalPage
	int32_t ___m_nTotalPage;
	// UnityEngine.GameObject RankWindow::m_LeftPublicGrid
	GameObject_t9 * ___m_LeftPublicGrid;
	// TabController RankWindow::m_TypeTabController
	TabController_t1209 * ___m_TypeTabController;
	// System.Boolean RankWindow::<isRankDataReturn>k__BackingField
	bool ___U3CisRankDataReturnU3Ek__BackingField;
};
struct RankWindow_t2037_StaticFields{
	// RankWindow RankWindow::m_Instance
	RankWindow_t2037 * ___m_Instance;
};
