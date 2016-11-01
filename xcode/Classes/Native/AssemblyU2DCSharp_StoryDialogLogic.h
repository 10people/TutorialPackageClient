#pragma once
#include <stdint.h>
// StoryDialogLogic
struct StoryDialogLogic_t1764;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UITexture
struct UITexture_t1378;
// TweenHeight
struct TweenHeight_t1589;
// Callback`1<System.Boolean>
struct Callback_1_t1765;
// System.String[]
struct StringU5BU5D_t333;
// System.String
struct String_t;
// System.Collections.Generic.List`1<TweenAlpha>
struct List_1_t1579;
// TweenPosition
struct TweenPosition_t1255;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// StoryDialogLogic
struct StoryDialogLogic_t1764  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject StoryDialogLogic::m_StoryDialogRoot
	GameObject_t9 * ___m_StoryDialogRoot;
	// UnityEngine.GameObject StoryDialogLogic::m_StoryDialogTop
	GameObject_t9 * ___m_StoryDialogTop;
	// UnityEngine.GameObject StoryDialogLogic::m_StoryDialogBottom
	GameObject_t9 * ___m_StoryDialogBottom;
	// UnityEngine.GameObject StoryDialogLogic::m_StoryDialogAsync
	GameObject_t9 * ___m_StoryDialogAsync;
	// UISprite StoryDialogLogic::m_StoryDialogMovieUp
	UISprite_t1202 * ___m_StoryDialogMovieUp;
	// UISprite StoryDialogLogic::m_StoryDialogMovieDn
	UISprite_t1202 * ___m_StoryDialogMovieDn;
	// UISprite StoryDialogLogic::m_StoryDialogTopBG
	UISprite_t1202 * ___m_StoryDialogTopBG;
	// UILabel StoryDialogLogic::m_StoryDialogTopLabel
	UILabel_t1176 * ___m_StoryDialogTopLabel;
	// UISprite StoryDialogLogic::m_StoryDialogTopRole
	UISprite_t1202 * ___m_StoryDialogTopRole;
	// UISprite StoryDialogLogic::m_StoryDialogBottomBG
	UISprite_t1202 * ___m_StoryDialogBottomBG;
	// UISprite StoryDialogLogic::m_StoryDialogBottomBG2
	UISprite_t1202 * ___m_StoryDialogBottomBG2;
	// UILabel StoryDialogLogic::m_StoryDialogBottomLabel
	UILabel_t1176 * ___m_StoryDialogBottomLabel;
	// UITexture StoryDialogLogic::m_StoryDialogBottomRole
	UITexture_t1378 * ___m_StoryDialogBottomRole;
	// UILabel StoryDialogLogic::m_SpeakerName
	UILabel_t1176 * ___m_SpeakerName;
	// UILabel StoryDialogLogic::m_NextLabel
	UILabel_t1176 * ___m_NextLabel;
	// UISprite StoryDialogLogic::m_MingziBG
	UISprite_t1202 * ___m_MingziBG;
	// UISprite StoryDialogLogic::m_StoryDialogAsyncBG
	UISprite_t1202 * ___m_StoryDialogAsyncBG;
	// UILabel StoryDialogLogic::m_StoryDialogAsyncLabel
	UILabel_t1176 * ___m_StoryDialogAsyncLabel;
	// UISprite StoryDialogLogic::m_StoryDialogAsyncRole
	UISprite_t1202 * ___m_StoryDialogAsyncRole;
	// UILabel StoryDialogLogic::m_AsyncSpeakerName
	UILabel_t1176 * ___m_AsyncSpeakerName;
	// System.Boolean StoryDialogLogic::m_bIsDefaultDialog
	bool ___m_bIsDefaultDialog;
	// TweenHeight StoryDialogLogic::m_cahcedMoveBgUpTweener
	TweenHeight_t1589 * ___m_cahcedMoveBgUpTweener;
	// TweenHeight StoryDialogLogic::m_cahcedMoveBgDownTweener
	TweenHeight_t1589 * ___m_cahcedMoveBgDownTweener;
	// System.String[] StoryDialogLogic::m_MainPlayerHalfPic
	StringU5BU5D_t333* ___m_MainPlayerHalfPic;
	// System.Boolean StoryDialogLogic::m_bAniDialog
	bool ___m_bAniDialog;
	// System.Single StoryDialogLogic::m_fAniDialogTimer
	float ___m_fAniDialogTimer;
	// System.String StoryDialogLogic::m_strAniDialog
	String_t* ___m_strAniDialog;
	// System.Int32 StoryDialogLogic::m_nAniDialogTextIndex
	int32_t ___m_nAniDialogTextIndex;
	// System.Boolean StoryDialogLogic::m_bAniDialogTopUI
	bool ___m_bAniDialogTopUI;
	// System.Single StoryDialogLogic::m_AniDialogTime
	float ___m_AniDialogTime;
	// System.Single StoryDialogLogic::m_NextPageTimer
	float ___m_NextPageTimer;
	// System.Single StoryDialogLogic::m_AlphaFrom
	float ___m_AlphaFrom;
	// System.Single StoryDialogLogic::m_AlphaTo
	float ___m_AlphaTo;
	// System.Single StoryDialogLogic::m_AlphaDuration
	float ___m_AlphaDuration;
	// System.Single StoryDialogLogic::m_PositionTo
	float ___m_PositionTo;
	// System.Single StoryDialogLogic::m_PositionDuration
	float ___m_PositionDuration;
	// UnityEngine.Vector3 StoryDialogLogic::m_RolePicPosition
	Vector3_t121  ___m_RolePicPosition;
	// UnityEngine.GameObject StoryDialogLogic::m_NpcNamePic
	GameObject_t9 * ___m_NpcNamePic;
	// System.Boolean StoryDialogLogic::isAddAnimation
	bool ___isAddAnimation;
	// System.Collections.Generic.List`1<TweenAlpha> StoryDialogLogic::m_TweenAlpha
	List_1_t1579 * ___m_TweenAlpha;
	// TweenPosition StoryDialogLogic::m_TweenPosition
	TweenPosition_t1255 * ___m_TweenPosition;
};
struct StoryDialogLogic_t1764_StaticFields{
	// StoryDialogLogic StoryDialogLogic::m_Instance
	StoryDialogLogic_t1764 * ___m_Instance;
	// System.Int32 StoryDialogLogic::m_nDialogType
	int32_t ___m_nDialogType;
	// System.Single StoryDialogLogic::m_fProtectTimer
	float ___m_fProtectTimer;
	// System.Int32 StoryDialogLogic::m_nClientStoryID
	int32_t ___m_nClientStoryID;
	// System.Int32 StoryDialogLogic::m_CurDialogIndex
	int32_t ___m_CurDialogIndex;
	// Callback`1<System.Boolean> StoryDialogLogic::m_DialogEndCallback
	Callback_1_t1765 * ___m_DialogEndCallback;
};
