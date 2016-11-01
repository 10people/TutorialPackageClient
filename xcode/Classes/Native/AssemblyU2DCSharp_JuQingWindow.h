#pragma once
#include <stdint.h>
// JuQingWindow
struct JuQingWindow_t1795;
// UILabel
struct UILabel_t1176;
// JuQingLevelItem
struct JuQingLevelItem_t1895;
// UnityEngine.GameObject
struct GameObject_t9;
// UICabalGrid
struct UICabalGrid_t1791;
// TabController
struct TabController_t1209;
// JuQingChapterAwardItem[]
struct JuQingChapterAwardItemU5BU5D_t2003;
// UISprite
struct UISprite_t1202;
// ItemSlotLogic[]
struct ItemSlotLogicU5BU5D_t1679;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// JuQingLevelAwardItem[]
struct JuQingLevelAwardItemU5BU5D_t2004;
// System.Single[]
struct SingleU5BU5D_t744;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// JuQingWindow
struct JuQingWindow_t1795  : public MonoBehaviour_t18
{
	// UILabel JuQingWindow::ChapterTitleLabel
	UILabel_t1176 * ___ChapterTitleLabel;
	// JuQingLevelItem JuQingWindow::Level1
	JuQingLevelItem_t1895 * ___Level1;
	// JuQingLevelItem JuQingWindow::Level2
	JuQingLevelItem_t1895 * ___Level2;
	// JuQingLevelItem JuQingWindow::Level3
	JuQingLevelItem_t1895 * ___Level3;
	// JuQingLevelItem JuQingWindow::Level4
	JuQingLevelItem_t1895 * ___Level4;
	// UnityEngine.GameObject JuQingWindow::ChapterItem
	GameObject_t9 * ___ChapterItem;
	// UICabalGrid JuQingWindow::ChapterListGrid
	UICabalGrid_t1791 * ___ChapterListGrid;
	// UnityEngine.GameObject JuQingWindow::m_ButtonEntyOne
	GameObject_t9 * ___m_ButtonEntyOne;
	// UnityEngine.GameObject JuQingWindow::m_ButtonEntySecond
	GameObject_t9 * ___m_ButtonEntySecond;
	// UnityEngine.GameObject JuQingWindow::m_ButtonEntyThird
	GameObject_t9 * ___m_ButtonEntyThird;
	// UnityEngine.GameObject JuQingWindow::m_ButtonEntyForth
	GameObject_t9 * ___m_ButtonEntyForth;
	// TabController JuQingWindow::TabController
	TabController_t1209 * ___TabController;
	// JuQingChapterAwardItem[] JuQingWindow::m_ChapterAwardItem
	JuQingChapterAwardItemU5BU5D_t2003* ___m_ChapterAwardItem;
	// UISprite JuQingWindow::m_ChapterAwardSprite
	UISprite_t1202 * ___m_ChapterAwardSprite;
	// UnityEngine.GameObject JuQingWindow::m_StarBoxTip
	GameObject_t9 * ___m_StarBoxTip;
	// ItemSlotLogic[] JuQingWindow::m_StarBoxTipItem
	ItemSlotLogicU5BU5D_t1679* ___m_StarBoxTipItem;
	// UnityEngine.GameObject JuQingWindow::m_StarBoxTipItemGrid
	GameObject_t9 * ___m_StarBoxTipItemGrid;
	// UISprite JuQingWindow::m_StarBoxTipBG
	UISprite_t1202 * ___m_StarBoxTipBG;
	// UnityEngine.GameObject[] JuQingWindow::m_LevelArrowNor
	GameObjectU5BU5D_t1200* ___m_LevelArrowNor;
	// UnityEngine.GameObject[] JuQingWindow::m_LevelArrowDis
	GameObjectU5BU5D_t1200* ___m_LevelArrowDis;
	// JuQingLevelAwardItem[] JuQingWindow::m_LevelAwardItem
	JuQingLevelAwardItemU5BU5D_t2004* ___m_LevelAwardItem;
	// System.Int32 JuQingWindow::currentSelectedChapterIdx
	int32_t ___currentSelectedChapterIdx;
	// System.Int32 JuQingWindow::m_NewPlayerGuideIndex
	int32_t ___m_NewPlayerGuideIndex;
	// UnityEngine.GameObject JuQingWindow::m_FirstLevelAwardBtn
	GameObject_t9 * ___m_FirstLevelAwardBtn;
	// UnityEngine.GameObject JuQingWindow::m_FirstChapterAwardBtn
	GameObject_t9 * ___m_FirstChapterAwardBtn;
};
struct JuQingWindow_t1795_StaticFields{
	// JuQingWindow JuQingWindow::m_Instance
	JuQingWindow_t1795 * ___m_Instance;
	// System.Single[] JuQingWindow::StarBoxTipPosX_ChapterAward
	SingleU5BU5D_t744* ___StarBoxTipPosX_ChapterAward;
	// System.Single[] JuQingWindow::StarBoxTipPosX_LevelAward
	SingleU5BU5D_t744* ___StarBoxTipPosX_LevelAward;
};
