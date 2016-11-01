#pragma once
#include <stdint.h>
// FunctionButtonLogic
struct FunctionButtonLogic_t1415;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UIGrid
struct UIGrid_t1199;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UIImageButton
struct UIImageButton_t1204;
// UISprite
struct UISprite_t1202;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// FunctionButtonLogic
struct FunctionButtonLogic_t1415  : public MonoBehaviour_t18
{
	// System.Int32 FunctionButtonLogic::m_LeftTimeInt
	int32_t ___m_LeftTimeInt;
	// UnityEngine.GameObject FunctionButtonLogic::m_FirstChild
	GameObject_t9 * ___m_FirstChild;
	// UnityEngine.GameObject FunctionButtonLogic::m_FunctionButtonOffset
	GameObject_t9 * ___m_FunctionButtonOffset;
	// UILabel FunctionButtonLogic::LabelDoubleExpTimer
	UILabel_t1176 * ___LabelDoubleExpTimer;
	// UnityEngine.GameObject FunctionButtonLogic::m_PKNormalBt
	GameObject_t9 * ___m_PKNormalBt;
	// UnityEngine.GameObject FunctionButtonLogic::m_PKKillBt
	GameObject_t9 * ___m_PKKillBt;
	// UnityEngine.GameObject FunctionButtonLogic::m_FunctionButtonGrid
	GameObject_t9 * ___m_FunctionButtonGrid;
	// UnityEngine.GameObject FunctionButtonLogic::m_BtnOpenDetail
	GameObject_t9 * ___m_BtnOpenDetail;
	// UnityEngine.GameObject FunctionButtonLogic::m_BtnCloseDetail
	GameObject_t9 * ___m_BtnCloseDetail;
	// UnityEngine.GameObject FunctionButtonLogic::m_BtnAutoBegin
	GameObject_t9 * ___m_BtnAutoBegin;
	// UnityEngine.GameObject FunctionButtonLogic::m_BtnAutoStop
	GameObject_t9 * ___m_BtnAutoStop;
	// UnityEngine.GameObject FunctionButtonLogic::m_CanHideButtonRoot
	GameObject_t9 * ___m_CanHideButtonRoot;
	// UnityEngine.GameObject FunctionButtonLogic::m_RadarWindow
	GameObject_t9 * ___m_RadarWindow;
	// UnityEngine.GameObject FunctionButtonLogic::m_BtnAchievement
	GameObject_t9 * ___m_BtnAchievement;
	// UnityEngine.GameObject FunctionButtonLogic::m_BtnRank
	GameObject_t9 * ___m_BtnRank;
	// UIGrid FunctionButtonLogic::m_DynamicBtnGrid
	UIGrid_t1199 * ___m_DynamicBtnGrid;
	// UnityEngine.GameObject[] FunctionButtonLogic::m_DynamicButtons
	GameObjectU5BU5D_t1200* ___m_DynamicButtons;
	// UnityEngine.GameObject FunctionButtonLogic::m_FestivalTip
	GameObject_t9 * ___m_FestivalTip;
	// UILabel FunctionButtonLogic::m_LabelTotalAimTips
	UILabel_t1176 * ___m_LabelTotalAimTips;
	// UILabel FunctionButtonLogic::m_LabelTotalAimTips2
	UILabel_t1176 * ___m_LabelTotalAimTips2;
	// UnityEngine.GameObject FunctionButtonLogic::m_LabelDaliyLuckyTip
	GameObject_t9 * ___m_LabelDaliyLuckyTip;
	// UIImageButton FunctionButtonLogic::m_ButtonDailyLuckyDraw
	UIImageButton_t1204 * ___m_ButtonDailyLuckyDraw;
	// UILabel FunctionButtonLogic::AwardTipsText
	UILabel_t1176 * ___AwardTipsText;
	// System.Single FunctionButtonLogic::m_updateTimer
	float ___m_updateTimer;
	// System.Int32 FunctionButtonLogic::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
	// System.Boolean FunctionButtonLogic::m_Direction
	bool ___m_Direction;
	// UnityEngine.GameObject FunctionButtonLogic::m_ButtonAct
	GameObject_t9 * ___m_ButtonAct;
	// UISprite FunctionButtonLogic::m_ButtonActTip
	UISprite_t1202 * ___m_ButtonActTip;
	// UILabel FunctionButtonLogic::m_ZhenQiAssistCount
	UILabel_t1176 * ___m_ZhenQiAssistCount;
	// UnityEngine.GameObject FunctionButtonLogic::m_MoneyTreeButton
	GameObject_t9 * ___m_MoneyTreeButton;
	// UnityEngine.GameObject FunctionButtonLogic::m_NewButton
	GameObject_t9 * ___m_NewButton;
	// System.Int32 FunctionButtonLogic::m_nExitTime
	int32_t ___m_nExitTime;
	// UILabel FunctionButtonLogic::m_ExitTime
	UILabel_t1176 * ___m_ExitTime;
	// UnityEngine.GameObject FunctionButtonLogic::m_AuotTeamCue
	GameObject_t9 * ___m_AuotTeamCue;
	// UnityEngine.Vector3 FunctionButtonLogic::m_DetailButtonOrgPos
	Vector3_t121  ___m_DetailButtonOrgPos;
	// UnityEngine.Vector3 FunctionButtonLogic::m_DetailButtonDisablePos
	Vector3_t121  ___m_DetailButtonDisablePos;
	// UnityEngine.GameObject FunctionButtonLogic::m_ButtonSecondDayAward
	GameObject_t9 * ___m_ButtonSecondDayAward;
	// UILabel FunctionButtonLogic::m_SecondDayAwardTime
	UILabel_t1176 * ___m_SecondDayAwardTime;
	// UILabel FunctionButtonLogic::m_SecondDayAwardText
	UILabel_t1176 * ___m_SecondDayAwardText;
	// UISprite FunctionButtonLogic::m_RemindRedPoint
	UISprite_t1202 * ___m_RemindRedPoint;
	// UnityEngine.GameObject FunctionButtonLogic::m_ButtonExitFB
	GameObject_t9 * ___m_ButtonExitFB;
	// UnityEngine.GameObject FunctionButtonLogic::m_AutoFightObj
	GameObject_t9 * ___m_AutoFightObj;
};
struct FunctionButtonLogic_t1415_StaticFields{
	// FunctionButtonLogic FunctionButtonLogic::m_Instance
	FunctionButtonLogic_t1415 * ___m_Instance;
	// System.Boolean FunctionButtonLogic::m_bShowDetailButtons
	bool ___m_bShowDetailButtons;
	// System.Single FunctionButtonLogic::m_fTimeSecond
	float ___m_fTimeSecond;
};
