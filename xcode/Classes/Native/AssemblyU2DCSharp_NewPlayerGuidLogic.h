#pragma once
#include <stdint.h>
// NewPlayerGuidLogic
struct NewPlayerGuidLogic_t1601;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// UnityEngine.BoxCollider
struct BoxCollider_t128;
// UILabel
struct UILabel_t1176;
// NewPlayerGuidLogic/PlayerGuideInfo
struct PlayerGuideInfo_t1600;
// System.Collections.Generic.List`1<TweenAlpha>
struct List_1_t1579;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// NewPlayerGuidLogic/MotionType
#include "AssemblyU2DCSharp_NewPlayerGuidLogic_MotionType.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// NewPlayerGuidLogic
struct NewPlayerGuidLogic_t1601  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject NewPlayerGuidLogic::m_NewPlayerGuideOffSet
	GameObject_t9 * ___m_NewPlayerGuideOffSet;
	// UISprite NewPlayerGuidLogic::m_NewPlayerGuid
	UISprite_t1202 * ___m_NewPlayerGuid;
	// UISprite NewPlayerGuidLogic::m_NewPlayerGuidCircle
	UISprite_t1202 * ___m_NewPlayerGuidCircle;
	// UnityEngine.BoxCollider NewPlayerGuidLogic::m_BoxColliderLeft
	BoxCollider_t128 * ___m_BoxColliderLeft;
	// UnityEngine.BoxCollider NewPlayerGuidLogic::m_BoxColliderRight
	BoxCollider_t128 * ___m_BoxColliderRight;
	// UnityEngine.BoxCollider NewPlayerGuidLogic::m_BoxColliderTop
	BoxCollider_t128 * ___m_BoxColliderTop;
	// UnityEngine.BoxCollider NewPlayerGuidLogic::m_BoxColliderBottom
	BoxCollider_t128 * ___m_BoxColliderBottom;
	// UILabel NewPlayerGuidLogic::m_RemindLabel
	UILabel_t1176 * ___m_RemindLabel;
	// UISprite NewPlayerGuidLogic::m_RemindBackground
	UISprite_t1202 * ___m_RemindBackground;
	// UnityEngine.GameObject NewPlayerGuidLogic::m_RemindObj
	GameObject_t9 * ___m_RemindObj;
	// UnityEngine.GameObject NewPlayerGuidLogic::m_RemindArrowParent
	GameObject_t9 * ___m_RemindArrowParent;
	// UnityEngine.GameObject NewPlayerGuidLogic::m_HandObject
	GameObject_t9 * ___m_HandObject;
	// UILabel NewPlayerGuidLogic::m_FTECenterTxt
	UILabel_t1176 * ___m_FTECenterTxt;
	// UISprite NewPlayerGuidLogic::m_FTECenterTxtBg
	UISprite_t1202 * ___m_FTECenterTxtBg;
	// System.Single NewPlayerGuidLogic::m_AutoCloseWindowTime
	float ___m_AutoCloseWindowTime;
	// System.Single NewPlayerGuidLogic::m_IntervalTime
	float ___m_IntervalTime;
	// System.Int32 NewPlayerGuidLogic::m_HandRadius
	int32_t ___m_HandRadius;
	// NewPlayerGuidLogic/MotionType NewPlayerGuidLogic::m_MotionType
	int32_t ___m_MotionType;
	// System.Boolean NewPlayerGuidLogic::m_OffSetCorrectFlag
	bool ___m_OffSetCorrectFlag;
	// UnityEngine.GameObject NewPlayerGuidLogic::m_UIObj
	GameObject_t9 * ___m_UIObj;
	// System.Boolean NewPlayerGuidLogic::m_bForever
	bool ___m_bForever;
	// UILabel NewPlayerGuidLogic::m_OptDec
	UILabel_t1176 * ___m_OptDec;
	// System.Boolean NewPlayerGuidLogic::m_IsMaskEnable
	bool ___m_IsMaskEnable;
	// System.Single NewPlayerGuidLogic::_offsetX
	float ____offsetX;
	// System.Single NewPlayerGuidLogic::_offsetY
	float ____offsetY;
	// UnityEngine.Vector3 NewPlayerGuidLogic::_offset
	Vector3_t121  ____offset;
	// System.Collections.Generic.List`1<TweenAlpha> NewPlayerGuidLogic::tweenAlphaList
	List_1_t1579 * ___tweenAlphaList;
};
struct NewPlayerGuidLogic_t1601_StaticFields{
	// NewPlayerGuidLogic NewPlayerGuidLogic::m_Instance
	NewPlayerGuidLogic_t1601 * ___m_Instance;
	// System.Single NewPlayerGuidLogic::m_ChangedCloseWindowTime
	float ___m_ChangedCloseWindowTime;
	// System.Single NewPlayerGuidLogic::m_CurCloseTime
	float ___m_CurCloseTime;
	// System.Single NewPlayerGuidLogic::m_CurIntervalTime
	float ___m_CurIntervalTime;
	// System.Single NewPlayerGuidLogic::m_Angle
	float ___m_Angle;
	// System.Single NewPlayerGuidLogic::m_DisOffSet
	float ___m_DisOffSet;
	// System.Boolean NewPlayerGuidLogic::IsOpenFlag
	bool ___IsOpenFlag;
	// System.Int32 NewPlayerGuidLogic::CurrentGuideID
	int32_t ___CurrentGuideID;
	// NewPlayerGuidLogic/PlayerGuideInfo NewPlayerGuidLogic::m_CurPlayerGuideInfo
	PlayerGuideInfo_t1600 * ___m_CurPlayerGuideInfo;
	// System.Int32 NewPlayerGuidLogic::txtFteIndex
	int32_t ___txtFteIndex;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NewPlayerGuidLogic::<>f__switch$map2
	Dictionary_2_t944 * ___U3CU3Ef__switch$map2;
};
