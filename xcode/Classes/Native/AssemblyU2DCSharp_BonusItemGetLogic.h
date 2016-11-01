#pragma once
#include <stdint.h>
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// UIImageButton
struct UIImageButton_t1204;
// UILabel
struct UILabel_t1176;
// UnityEngine.Animation
struct Animation_t1252;
// UnityEngine.Animation[]
struct AnimationU5BU5D_t1253;
// TweenPosition[]
struct TweenPositionU5BU5D_t1254;
// TweenRotation[]
struct TweenRotationU5BU5D_t1256;
// TweenScale[]
struct TweenScaleU5BU5D_t1258;
// TweenAlpha[]
struct TweenAlphaU5BU5D_t1260;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1262;
// System.Boolean[]
struct BooleanU5BU5D_t102;
// System.String[]
struct StringU5BU5D_t333;
// UIControllerBase`1<BonusItemGetLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_1.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// BonusItemGetLogic/BONUSTYPE
#include "AssemblyU2DCSharp_BonusItemGetLogic_BONUSTYPE.h"
// BonusItemGetLogic
struct BonusItemGetLogic_t1263  : public UIControllerBase_1_t1264
{
	// UISprite[] BonusItemGetLogic::m_ItemIconArray
	UISpriteU5BU5D_t1201* ___m_ItemIconArray;
	// UILabel[] BonusItemGetLogic::m_ItemNameArray
	UILabelU5BU5D_t1203* ___m_ItemNameArray;
	// UISprite[] BonusItemGetLogic::m_ItemObjArray
	UISpriteU5BU5D_t1201* ___m_ItemObjArray;
	// UISprite[] BonusItemGetLogic::m_ItemImpactArray
	UISpriteU5BU5D_t1201* ___m_ItemImpactArray;
	// UISprite[] BonusItemGetLogic::m_ItemQualityArray
	UISpriteU5BU5D_t1201* ___m_ItemQualityArray;
	// UISprite BonusItemGetLogic::m_BoxSprite
	UISprite_t1202 * ___m_BoxSprite;
	// UnityEngine.GameObject BonusItemGetLogic::m_BoxObj
	GameObject_t9 * ___m_BoxObj;
	// UIImageButton BonusItemGetLogic::m_CancleButton
	UIImageButton_t1204 * ___m_CancleButton;
	// UIImageButton BonusItemGetLogic::m_ContinueButton
	UIImageButton_t1204 * ___m_ContinueButton;
	// UILabel BonusItemGetLogic::m_ContinueButtonLabel
	UILabel_t1176 * ___m_ContinueButtonLabel;
	// UnityEngine.Animation BonusItemGetLogic::m_BoxLightAnimation
	Animation_t1252 * ___m_BoxLightAnimation;
	// UnityEngine.Animation[] BonusItemGetLogic::m_StarAnimationArray
	AnimationU5BU5D_t1253* ___m_StarAnimationArray;
	// UnityEngine.Animation[] BonusItemGetLogic::m_StarFlyAnimationArray
	AnimationU5BU5D_t1253* ___m_StarFlyAnimationArray;
	// UISprite[] BonusItemGetLogic::m_StarSpriteArray
	UISpriteU5BU5D_t1201* ___m_StarSpriteArray;
	// UISprite[] BonusItemGetLogic::m_StarFLySpriteArray
	UISpriteU5BU5D_t1201* ___m_StarFLySpriteArray;
	// TweenPosition[] BonusItemGetLogic::m_ItemObjTweenPosition
	TweenPositionU5BU5D_t1254* ___m_ItemObjTweenPosition;
	// TweenRotation[] BonusItemGetLogic::m_ItemObjTweenRotation
	TweenRotationU5BU5D_t1256* ___m_ItemObjTweenRotation;
	// TweenScale[] BonusItemGetLogic::m_ItemObjTweenScale
	TweenScaleU5BU5D_t1258* ___m_ItemObjTweenScale;
	// TweenPosition[] BonusItemGetLogic::m_StarFlyTweenPosition
	TweenPositionU5BU5D_t1254* ___m_StarFlyTweenPosition;
	// TweenScale[] BonusItemGetLogic::m_StarFlyTweenScale
	TweenScaleU5BU5D_t1258* ___m_StarFlyTweenScale;
	// TweenAlpha[] BonusItemGetLogic::m_StarFlyTweenAlpha
	TweenAlphaU5BU5D_t1260* ___m_StarFlyTweenAlpha;
	// UnityEngine.Vector3 BonusItemGetLogic::m_InitPosition
	Vector3_t121  ___m_InitPosition;
	// UnityEngine.Vector3 BonusItemGetLogic::m_InitRotation
	Vector3_t121  ___m_InitRotation;
	// UnityEngine.Vector3 BonusItemGetLogic::m_FinalRotation
	Vector3_t121  ___m_FinalRotation;
	// UnityEngine.Vector3 BonusItemGetLogic::m_InitScale
	Vector3_t121  ___m_InitScale;
	// UnityEngine.Vector3 BonusItemGetLogic::m_FinalScale
	Vector3_t121  ___m_FinalScale;
	// UnityEngine.Vector3[] BonusItemGetLogic::m_ItemIconPositionArray
	Vector3U5BU5D_t1262* ___m_ItemIconPositionArray;
	// System.Boolean[] BonusItemGetLogic::m_ShowItemImpctArray
	BooleanU5BU5D_t102* ___m_ShowItemImpctArray;
	// System.String[] BonusItemGetLogic::m_ItemQualityName
	StringU5BU5D_t333* ___m_ItemQualityName;
	// System.Int32 BonusItemGetLogic::m_nItemIconShowCount
	int32_t ___m_nItemIconShowCount;
	// System.Int32 BonusItemGetLogic::m_nCurItemIconShow
	int32_t ___m_nCurItemIconShow;
	// BonusItemGetLogic/BONUSTYPE BonusItemGetLogic::m_BonusType
	int32_t ___m_BonusType;
	// System.Single BonusItemGetLogic::m_fFrameTimeDiff
	float ___m_fFrameTimeDiff;
	// System.Boolean BonusItemGetLogic::m_bShowItemObj
	bool ___m_bShowItemObj;
};
