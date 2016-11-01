#pragma once
#include <stdint.h>
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Generic.List`1<VictoryScoreRoot/ItemInfo>
struct List_1_t1855;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1393;
// UIImageButton
struct UIImageButton_t1204;
// TweenPosition
struct TweenPosition_t1255;
// UIControllerBase`1<VictoryScoreRoot>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_39.h"
// VictoryScoreRoot
struct VictoryScoreRoot_t1856  : public UIControllerBase_1_t1857
{
	// UISprite[] VictoryScoreRoot::m_SpriteReward
	UISpriteU5BU5D_t1201* ___m_SpriteReward;
	// UILabel[] VictoryScoreRoot::m_LabelReward
	UILabelU5BU5D_t1203* ___m_LabelReward;
	// UISprite[] VictoryScoreRoot::m_SpriteDraw
	UISpriteU5BU5D_t1201* ___m_SpriteDraw;
	// UISprite[] VictoryScoreRoot::m_DisableSpriteDraw
	UISpriteU5BU5D_t1201* ___m_DisableSpriteDraw;
	// UILabel[] VictoryScoreRoot::m_LabelDraw
	UILabelU5BU5D_t1203* ___m_LabelDraw;
	// UISprite[] VictoryScoreRoot::m_SignSprite
	UISpriteU5BU5D_t1201* ___m_SignSprite;
	// UISprite[] VictoryScoreRoot::m_QualitySprite
	UISpriteU5BU5D_t1201* ___m_QualitySprite;
	// UILabel VictoryScoreRoot::m_Lianji
	UILabel_t1176 * ___m_Lianji;
	// UILabel VictoryScoreRoot::m_TongGuanTime
	UILabel_t1176 * ___m_TongGuanTime;
	// UILabel VictoryScoreRoot::m_Exp
	UILabel_t1176 * ___m_Exp;
	// UILabel VictoryScoreRoot::m_PetExp
	UILabel_t1176 * ___m_PetExp;
	// UILabel VictoryScoreRoot::m_Money
	UILabel_t1176 * ___m_Money;
	// UILabel VictoryScoreRoot::m_JiFen
	UILabel_t1176 * ___m_JiFen;
	// UILabel VictoryScoreRoot::m_CangJingGeTier
	UILabel_t1176 * ___m_CangJingGeTier;
	// UILabel VictoryScoreRoot::m_CangJingGeTime
	UILabel_t1176 * ___m_CangJingGeTime;
	// UnityEngine.GameObject[] VictoryScoreRoot::m_StarActive
	GameObjectU5BU5D_t1200* ___m_StarActive;
	// UnityEngine.GameObject[] VictoryScoreRoot::m_StarShine
	GameObjectU5BU5D_t1200* ___m_StarShine;
	// UnityEngine.GameObject VictoryScoreRoot::cover
	GameObject_t9 * ___cover;
	// UnityEngine.GameObject VictoryScoreRoot::CangJingGeWindow
	GameObject_t9 * ___CangJingGeWindow;
	// UnityEngine.GameObject VictoryScoreRoot::ScoreWindow
	GameObject_t9 * ___ScoreWindow;
	// UnityEngine.GameObject VictoryScoreRoot::LotteryWindow
	GameObject_t9 * ___LotteryWindow;
	// UnityEngine.GameObject VictoryScoreRoot::GameWinWindow
	GameObject_t9 * ___GameWinWindow;
	// UnityEngine.GameObject VictoryScoreRoot::GameFailWindow
	GameObject_t9 * ___GameFailWindow;
	// UnityEngine.GameObject VictoryScoreRoot::GameStaticWinWindow
	GameObject_t9 * ___GameStaticWinWindow;
	// UnityEngine.GameObject VictoryScoreRoot::BG
	GameObject_t9 * ___BG;
	// UnityEngine.GameObject VictoryScoreRoot::m_OpenCopyButton
	GameObject_t9 * ___m_OpenCopyButton;
	// System.Single VictoryScoreRoot::m_fDrawTime
	float ___m_fDrawTime;
	// System.Int32 VictoryScoreRoot::m_nDrawIndexEx
	int32_t ___m_nDrawIndexEx;
	// System.Boolean VictoryScoreRoot::m_bSend
	bool ___m_bSend;
	// System.Single VictoryScoreRoot::m_fEndTime
	float ___m_fEndTime;
	// UIImageButton VictoryScoreRoot::ButtonAllDraw
	UIImageButton_t1204 * ___ButtonAllDraw;
	// UIImageButton VictoryScoreRoot::ContinueGame
	UIImageButton_t1204 * ___ContinueGame;
	// UIImageButton VictoryScoreRoot::CangJingGeDraw
	UIImageButton_t1204 * ___CangJingGeDraw;
	// UIImageButton VictoryScoreRoot::CangJingGeTier
	UIImageButton_t1204 * ___CangJingGeTier;
	// UIImageButton VictoryScoreRoot::AutoAddFriend
	UIImageButton_t1204 * ___AutoAddFriend;
	// UnityEngine.GameObject[] VictoryScoreRoot::ButtonDraw
	GameObjectU5BU5D_t1200* ___ButtonDraw;
	// UILabel VictoryScoreRoot::m_FailText
	UILabel_t1176 * ___m_FailText;
	// UILabel VictoryScoreRoot::m_StaticWinText
	UILabel_t1176 * ___m_StaticWinText;
	// TweenPosition VictoryScoreRoot::m_WinBGLeftTween
	TweenPosition_t1255 * ___m_WinBGLeftTween;
	// TweenPosition VictoryScoreRoot::m_WinBGRigthTween
	TweenPosition_t1255 * ___m_WinBGRigthTween;
	// UnityEngine.GameObject VictoryScoreRoot::m_ScoreInfo
	GameObject_t9 * ___m_ScoreInfo;
	// UnityEngine.GameObject VictoryScoreRoot::m_LotteryInfo
	GameObject_t9 * ___m_LotteryInfo;
	// System.Boolean VictoryScoreRoot::m_BeginStarActive
	bool ___m_BeginStarActive;
	// System.Single VictoryScoreRoot::m_StarActiveStartTime
	float ___m_StarActiveStartTime;
	// System.Int32 VictoryScoreRoot::CurStarActive
	int32_t ___CurStarActive;
	// System.Boolean VictoryScoreRoot::m_BeginFanPaiShine
	bool ___m_BeginFanPaiShine;
	// System.Single VictoryScoreRoot::m_FanPaiShineStartTime
	float ___m_FanPaiShineStartTime;
	// System.Int32 VictoryScoreRoot::CurFanPaiShineFrame
	int32_t ___CurFanPaiShineFrame;
	// System.Boolean VictoryScoreRoot::m_BeginFanPaiAni
	bool ___m_BeginFanPaiAni;
	// System.Single VictoryScoreRoot::m_FanPaiAniStartTime
	float ___m_FanPaiAniStartTime;
	// System.Int32 VictoryScoreRoot::CurFanPaiAniFrame
	int32_t ___CurFanPaiAniFrame;
	// System.Int32 VictoryScoreRoot::m_PlayerClickIndex
	int32_t ___m_PlayerClickIndex;
	// System.Boolean VictoryScoreRoot::m_BeginFanPaiOther
	bool ___m_BeginFanPaiOther;
	// System.Single VictoryScoreRoot::m_FanPaiOtherStartTime
	float ___m_FanPaiOtherStartTime;
	// System.Int32 VictoryScoreRoot::CurFanPaiOtherFrame
	int32_t ___CurFanPaiOtherFrame;
	// System.Boolean VictoryScoreRoot::m_IsCompleteVictory
	bool ___m_IsCompleteVictory;
	// UnityEngine.GameObject VictoryScoreRoot::m_QuitBtn
	GameObject_t9 * ___m_QuitBtn;
};
struct VictoryScoreRoot_t1856_StaticFields{
	// System.Single VictoryScoreRoot::PerStarActive
	float ___PerStarActive;
	// System.Single VictoryScoreRoot::PerFanPaiShine
	float ___PerFanPaiShine;
	// System.Single VictoryScoreRoot::PerFanPaiAni
	float ___PerFanPaiAni;
	// System.Single VictoryScoreRoot::PerFanPaiOther
	float ___PerFanPaiOther;
	// System.Collections.Generic.List`1<VictoryScoreRoot/ItemInfo> VictoryScoreRoot::m_DrawList
	List_1_t1855 * ___m_DrawList;
	// System.Collections.Generic.List`1<VictoryScoreRoot/ItemInfo> VictoryScoreRoot::m_RewardList
	List_1_t1855 * ___m_RewardList;
	// System.Collections.Generic.List`1<System.UInt64> VictoryScoreRoot::m_UserInCopyScene
	List_1_t1393 * ___m_UserInCopyScene;
	// System.Int32 VictoryScoreRoot::m_nResult
	int32_t ___m_nResult;
	// System.Int32 VictoryScoreRoot::m_nSceneId
	int32_t ___m_nSceneId;
	// System.Int32 VictoryScoreRoot::m_nSolo
	int32_t ___m_nSolo;
	// System.Int32 VictoryScoreRoot::m_Difficult
	int32_t ___m_Difficult;
	// System.Int32 VictoryScoreRoot::m_nStar
	int32_t ___m_nStar;
	// System.Int32 VictoryScoreRoot::m_nScore
	int32_t ___m_nScore;
	// System.Int32 VictoryScoreRoot::m_nCarom
	int32_t ___m_nCarom;
	// System.Int32 VictoryScoreRoot::m_nTime
	int32_t ___m_nTime;
	// System.Int32 VictoryScoreRoot::m_nExp
	int32_t ___m_nExp;
	// System.Int32 VictoryScoreRoot::m_nMoney
	int32_t ___m_nMoney;
	// System.Int32 VictoryScoreRoot::m_nDrawIndex
	int32_t ___m_nDrawIndex;
	// System.Int32 VictoryScoreRoot::m_nPetExp
	int32_t ___m_nPetExp;
	// System.Int32 VictoryScoreRoot::m_FirstRewardIndex
	int32_t ___m_FirstRewardIndex;
	// System.Int32 VictoryScoreRoot::m_nDrawIndexTwo
	int32_t ___m_nDrawIndexTwo;
	// System.Int32 VictoryScoreRoot::m_FanPaiNumber
	int32_t ___m_FanPaiNumber;
	// System.Int32 VictoryScoreRoot::m_OverFanPaiNum
	int32_t ___m_OverFanPaiNum;
};
