#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UIImageButton
struct UIImageButton_t1204;
// UIPanel
struct UIPanel_t1364;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// UIControllerBase`1<DailyLuckyDrawLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_5.h"
// Games.DailyLuckyDraw.DLDDRAWTYPE
#include "AssemblyU2DCSharp_Games_DailyLuckyDraw_DLDDRAWTYPE.h"
// DailyLuckyDrawLogic
struct DailyLuckyDrawLogic_t1365  : public UIControllerBase_1_t1366
{
	// UILabel DailyLuckyDrawLogic::m_LabelFreeTimes
	UILabel_t1176 * ___m_LabelFreeTimes;
	// UILabel DailyLuckyDrawLogic::m_LabelBindYuanBaoCount
	UILabel_t1176 * ___m_LabelBindYuanBaoCount;
	// UILabel DailyLuckyDrawLogic::m_LabelYuanBaoCount
	UILabel_t1176 * ___m_LabelYuanBaoCount;
	// UnityEngine.GameObject DailyLuckyDrawLogic::m_BtnBonuxArraw
	GameObject_t9 * ___m_BtnBonuxArraw;
	// UISprite[] DailyLuckyDrawLogic::m_BonusBoxArray
	UISpriteU5BU5D_t1201* ___m_BonusBoxArray;
	// UILabel DailyLuckyDrawLogic::m_ResultTextLabel
	UILabel_t1176 * ___m_ResultTextLabel;
	// UIImageButton DailyLuckyDrawLogic::m_BtnDrawOne
	UIImageButton_t1204 * ___m_BtnDrawOne;
	// UIImageButton DailyLuckyDrawLogic::m_BtnDrawTen
	UIImageButton_t1204 * ___m_BtnDrawTen;
	// UIImageButton DailyLuckyDrawLogic::m_BtnDrawTime
	UIImageButton_t1204 * ___m_BtnDrawTime;
	// UIImageButton DailyLuckyDrawLogic::m_BtnDrawOneCost
	UIImageButton_t1204 * ___m_BtnDrawOneCost;
	// UIPanel DailyLuckyDrawLogic::m_InfoTextPanel
	UIPanel_t1364 * ___m_InfoTextPanel;
	// System.Single DailyLuckyDrawLogic::m_fFrameTimeDiff
	float ___m_fFrameTimeDiff;
	// System.Boolean DailyLuckyDrawLogic::m_bShowDrawOneTurnTable
	bool ___m_bShowDrawOneTurnTable;
	// System.Boolean DailyLuckyDrawLogic::m_bShowDrawTenTurnTalbe
	bool ___m_bShowDrawTenTurnTalbe;
	// System.Int32 DailyLuckyDrawLogic::m_nArrawTurnCount
	int32_t ___m_nArrawTurnCount;
	// System.Int32 DailyLuckyDrawLogic::m_nMaxArrawTurnCount
	int32_t ___m_nMaxArrawTurnCount;
	// System.Single DailyLuckyDrawLogic::m_fRoteateTimeTick
	float ___m_fRoteateTimeTick;
	// System.Boolean DailyLuckyDrawLogic::m_bBonusEffectShow
	bool ___m_bBonusEffectShow;
	// Games.DailyLuckyDraw.DLDDRAWTYPE DailyLuckyDrawLogic::m_nDrawOneType
	int32_t ___m_nDrawOneType;
	// System.Collections.Generic.List`1<System.String> DailyLuckyDrawLogic::m_ResultTextList
	List_1_t1333 * ___m_ResultTextList;
};
