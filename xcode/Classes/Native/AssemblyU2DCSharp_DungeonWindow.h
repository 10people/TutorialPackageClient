#pragma once
#include <stdint.h>
// DungeonWindow
struct DungeonWindow_t1786;
// TabController
struct TabController_t1209;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UISprite
struct UISprite_t1202;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DungeonWindow
struct DungeonWindow_t1786  : public MonoBehaviour_t18
{
	// TabController DungeonWindow::m_TabLevel
	TabController_t1209 * ___m_TabLevel;
	// TabController DungeonWindow::m_TabNum
	TabController_t1209 * ___m_TabNum;
	// UILabel DungeonWindow::m_Story
	UILabel_t1176 * ___m_Story;
	// UILabel DungeonWindow::m_TiNeng
	UILabel_t1176 * ___m_TiNeng;
	// UILabel DungeonWindow::m_Level
	UILabel_t1176 * ___m_Level;
	// UILabel DungeonWindow::m_Time
	UILabel_t1176 * ___m_Time;
	// UILabel DungeonWindow::m_ZhanLi
	UILabel_t1176 * ___m_ZhanLi;
	// UILabel DungeonWindow::m_ZhanLiDesc
	UILabel_t1176 * ___m_ZhanLiDesc;
	// UILabel DungeonWindow::m_ShengYuCiShu
	UILabel_t1176 * ___m_ShengYuCiShu;
	// UILabel DungeonWindow::m_TiNengXiaoHao
	UILabel_t1176 * ___m_TiNengXiaoHao;
	// UILabel DungeonWindow::m_Exp
	UILabel_t1176 * ___m_Exp;
	// UILabel DungeonWindow::m_Money
	UILabel_t1176 * ___m_Money;
	// UILabel DungeonWindow::m_NanDuLabel
	UILabel_t1176 * ___m_NanDuLabel;
	// UILabel DungeonWindow::m_SceneName
	UILabel_t1176 * ___m_SceneName;
	// UnityEngine.GameObject DungeonWindow::m_ZuiDuiPingTai
	GameObject_t9 * ___m_ZuiDuiPingTai;
	// UnityEngine.GameObject DungeonWindow::m_Mercenary
	GameObject_t9 * ___m_Mercenary;
	// UnityEngine.GameObject DungeonWindow::m_SaoDang
	GameObject_t9 * ___m_SaoDang;
	// UnityEngine.GameObject DungeonWindow::m_HanRen
	GameObject_t9 * ___m_HanRen;
	// UnityEngine.GameObject[] DungeonWindow::m_DropItem
	GameObjectU5BU5D_t1200* ___m_DropItem;
	// UISprite[] DungeonWindow::m_DropItemSprite
	UISpriteU5BU5D_t1201* ___m_DropItemSprite;
	// System.Int32 DungeonWindow::CopySceneId
	int32_t ___CopySceneId;
	// System.Int32 DungeonWindow::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
	// UnityEngine.GameObject DungeonWindow::m_BtnEnter
	GameObject_t9 * ___m_BtnEnter;
	// UILabel DungeonWindow::m_ChongZhiCiShu
	UILabel_t1176 * ___m_ChongZhiCiShu;
	// UnityEngine.GameObject DungeonWindow::m_BtnDanren
	GameObject_t9 * ___m_BtnDanren;
	// UnityEngine.GameObject DungeonWindow::m_BtnDuiWu
	GameObject_t9 * ___m_BtnDuiWu;
	// UILabel DungeonWindow::m_ButtonAutoTeamLabel
	UILabel_t1176 * ___m_ButtonAutoTeamLabel;
	// UILabel DungeonWindow::m_Title
	UILabel_t1176 * ___m_Title;
	// UILabel DungeonWindow::m_SweepCDTime
	UILabel_t1176 * ___m_SweepCDTime;
	// UISprite DungeonWindow::m_SweepYuanbaoSprite
	UISprite_t1202 * ___m_SweepYuanbaoSprite;
	// UILabel DungeonWindow::m_SweepYuanbaoLabel
	UILabel_t1176 * ___m_SweepYuanbaoLabel;
	// UILabel DungeonWindow::m_localTimeLabel
	UILabel_t1176 * ___m_localTimeLabel;
	// System.Single DungeonWindow::timeSend
	float ___timeSend;
	// System.Single DungeonWindow::OnHanRentimeSend
	float ___OnHanRentimeSend;
	// UnityEngine.GameObject DungeonWindow::m_cangjingge
	GameObject_t9 * ___m_cangjingge;
	// System.Int32 DungeonWindow::<Diffcult>k__BackingField
	int32_t ___U3CDiffcultU3Ek__BackingField;
	// System.Int32 DungeonWindow::<CopyMode>k__BackingField
	int32_t ___U3CCopyModeU3Ek__BackingField;
	// System.Int32 DungeonWindow::<Send>k__BackingField
	int32_t ___U3CSendU3Ek__BackingField;
};
struct DungeonWindow_t1786_StaticFields{
	// DungeonWindow DungeonWindow::m_Instance
	DungeonWindow_t1786 * ___m_Instance;
};
