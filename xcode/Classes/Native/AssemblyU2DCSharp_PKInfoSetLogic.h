#pragma once
#include <stdint.h>
// PKInfoSetLogic
struct PKInfoSetLogic_t1621;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// PKInfoSetLogic
struct PKInfoSetLogic_t1621  : public MonoBehaviour_t18
{
	// System.Int32 PKInfoSetLogic::m_nPKModle
	int32_t ___m_nPKModle;
	// System.Int32 PKInfoSetLogic::m_nPKCDTime
	int32_t ___m_nPKCDTime;
	// System.Int32 PKInfoSetLogic::m_nPKValue
	int32_t ___m_nPKValue;
	// UILabel PKInfoSetLogic::m_PkValueLable
	UILabel_t1176 * ___m_PkValueLable;
	// UILabel PKInfoSetLogic::m_PKStateLable
	UILabel_t1176 * ___m_PKStateLable;
	// UILabel PKInfoSetLogic::m_LeftLabel
	UILabel_t1176 * ___m_LeftLabel;
	// UILabel PKInfoSetLogic::m_RightLabel
	UILabel_t1176 * ___m_RightLabel;
	// UnityEngine.GameObject PKInfoSetLogic::m_LeftImageNormal
	GameObject_t9 * ___m_LeftImageNormal;
	// UnityEngine.GameObject PKInfoSetLogic::m_LeftImageHigh
	GameObject_t9 * ___m_LeftImageHigh;
	// UnityEngine.GameObject PKInfoSetLogic::m_RightImageNormal
	GameObject_t9 * ___m_RightImageNormal;
	// UnityEngine.GameObject PKInfoSetLogic::m_RightImageHigh
	GameObject_t9 * ___m_RightImageHigh;
	// UnityEngine.GameObject PKInfoSetLogic::m_LeftButtonBG
	GameObject_t9 * ___m_LeftButtonBG;
	// UnityEngine.GameObject PKInfoSetLogic::m_RightButtonBG
	GameObject_t9 * ___m_RightButtonBG;
	// UISprite PKInfoSetLogic::m_RightSprite
	UISprite_t1202 * ___m_RightSprite;
	// UISprite PKInfoSetLogic::m_LeftSprite
	UISprite_t1202 * ___m_LeftSprite;
	// System.String PKInfoSetLogic::m_LeftLabelText
	String_t* ___m_LeftLabelText;
	// System.String PKInfoSetLogic::m_RightLabelText
	String_t* ___m_RightLabelText;
	// System.Boolean PKInfoSetLogic::m_IsModeClick
	bool ___m_IsModeClick;
	// System.Int32 PKInfoSetLogic::m_nNewPlayerGuideIndex
	int32_t ___m_nNewPlayerGuideIndex;
	// UnityEngine.GameObject PKInfoSetLogic::m_PkButton
	GameObject_t9 * ___m_PkButton;
	// UnityEngine.GameObject PKInfoSetLogic::m_CloseButton
	GameObject_t9 * ___m_CloseButton;
};
struct PKInfoSetLogic_t1621_StaticFields{
	// PKInfoSetLogic PKInfoSetLogic::m_Instance
	PKInfoSetLogic_t1621 * ___m_Instance;
	// UnityEngine.Color PKInfoSetLogic::LabelGrayColor
	Color_t939  ___LabelGrayColor;
	// UnityEngine.Color PKInfoSetLogic::LabelHighColor
	Color_t939  ___LabelHighColor;
};
