#pragma once
#include <stdint.h>
// System.String
struct String_t;
// BelleOwnWindow
struct BelleOwnWindow_t1972;
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UITexture
struct UITexture_t1378;
// UIButtonMessage
struct UIButtonMessage_t1973;
// UIImageButton
struct UIImageButton_t1204;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// BelleOwnWindow
struct BelleOwnWindow_t1972  : public MonoBehaviour_t18
{
	// UISprite BelleOwnWindow::m_belleAttrTab
	UISprite_t1202 * ___m_belleAttrTab;
	// UISprite BelleOwnWindow::m_relationshipTab
	UISprite_t1202 * ___m_relationshipTab;
	// UILabel BelleOwnWindow::m_belleAttrTabName
	UILabel_t1176 * ___m_belleAttrTabName;
	// UILabel BelleOwnWindow::m_relationshipTabName
	UILabel_t1176 * ___m_relationshipTabName;
	// UnityEngine.Color BelleOwnWindow::hightTabColor
	Color_t939  ___hightTabColor;
	// UnityEngine.Color BelleOwnWindow::normalTabColor
	Color_t939  ___normalTabColor;
	// System.String BelleOwnWindow::curtabStr
	String_t* ___curtabStr;
	// UnityEngine.GameObject BelleOwnWindow::m_belleAttrWin
	GameObject_t9 * ___m_belleAttrWin;
	// UnityEngine.GameObject BelleOwnWindow::m_relationshipWin
	GameObject_t9 * ___m_relationshipWin;
	// UILabel BelleOwnWindow::m_belleName
	UILabel_t1176 * ___m_belleName;
	// UILabel BelleOwnWindow::m_battleValue
	UILabel_t1176 * ___m_battleValue;
	// UITexture BelleOwnWindow::m_bellePic
	UITexture_t1378 * ___m_bellePic;
	// UILabel BelleOwnWindow::m_curCloseLevel
	UILabel_t1176 * ___m_curCloseLevel;
	// UILabel BelleOwnWindow::m_curFavorValue
	UILabel_t1176 * ___m_curFavorValue;
	// UILabel BelleOwnWindow::m_nextAddAttrValue
	UILabel_t1176 * ___m_nextAddAttrValue;
	// UISprite BelleOwnWindow::m_processBar
	UISprite_t1202 * ___m_processBar;
	// UILabel BelleOwnWindow::m_curBelleMainColor
	UILabel_t1176 * ___m_curBelleMainColor;
	// UISprite BelleOwnWindow::m_curBelleMainColorPic
	UISprite_t1202 * ___m_curBelleMainColorPic;
	// UILabel BelleOwnWindow::m_curBelleSubColor
	UILabel_t1176 * ___m_curBelleSubColor;
	// UILabel BelleOwnWindow::m_curBelleItemCount
	UILabel_t1176 * ___m_curBelleItemCount;
	// UISprite BelleOwnWindow::m_curBelleItemIcon
	UISprite_t1202 * ___m_curBelleItemIcon;
	// UILabel BelleOwnWindow::m_curBelleEvaluteLab
	UILabel_t1176 * ___m_curBelleEvaluteLab;
	// UIButtonMessage BelleOwnWindow::messageBtn
	UIButtonMessage_t1973 * ___messageBtn;
	// UILabel BelleOwnWindow::m_labelAlreadyCloseCount
	UILabel_t1176 * ___m_labelAlreadyCloseCount;
	// UnityEngine.GameObject BelleOwnWindow::m_getBelleItemWin
	GameObject_t9 * ___m_getBelleItemWin;
	// UnityEngine.GameObject BelleOwnWindow::m_EvaluBtnObj
	GameObject_t9 * ___m_EvaluBtnObj;
	// UILabel BelleOwnWindow::m_EvaluMaxLabel
	UILabel_t1176 * ___m_EvaluMaxLabel;
	// UnityEngine.GameObject BelleOwnWindow::m_EvaluWin
	GameObject_t9 * ___m_EvaluWin;
	// UILabel BelleOwnWindow::m_EvaCurMianColor
	UILabel_t1176 * ___m_EvaCurMianColor;
	// UISprite BelleOwnWindow::m_EvaCurMianColorPic
	UISprite_t1202 * ___m_EvaCurMianColorPic;
	// UILabel BelleOwnWindow::m_EvaCurSubColor
	UILabel_t1176 * ___m_EvaCurSubColor;
	// UILabel BelleOwnWindow::m_EvaNextMainColor
	UILabel_t1176 * ___m_EvaNextMainColor;
	// UISprite BelleOwnWindow::m_EvaNextMainColorPic
	UISprite_t1202 * ___m_EvaNextMainColorPic;
	// UILabel BelleOwnWindow::m_EvaNextSubColor
	UILabel_t1176 * ___m_EvaNextSubColor;
	// UILabel BelleOwnWindow::m_EvaCostItem_1_Count
	UILabel_t1176 * ___m_EvaCostItem_1_Count;
	// UILabel BelleOwnWindow::m_EvaCostItem_2_Count
	UILabel_t1176 * ___m_EvaCostItem_2_Count;
	// UISprite BelleOwnWindow::m_EvaCostItem_1_Icon
	UISprite_t1202 * ___m_EvaCostItem_1_Icon;
	// UISprite BelleOwnWindow::m_EvaCostItem_2_Icon
	UISprite_t1202 * ___m_EvaCostItem_2_Icon;
	// UnityEngine.GameObject BelleOwnWindow::m_belleDescObj
	GameObject_t9 * ___m_belleDescObj;
	// UILabel BelleOwnWindow::m_belleDescText
	UILabel_t1176 * ___m_belleDescText;
	// UIImageButton BelleOwnWindow::m_btnClose
	UIImageButton_t1204 * ___m_btnClose;
	// UILabel BelleOwnWindow::m_btnCLoseLable
	UILabel_t1176 * ___m_btnCLoseLable;
	// System.Single BelleOwnWindow::m_curTimer
	float ___m_curTimer;
	// System.Boolean BelleOwnWindow::m_isNeedUpdate
	bool ___m_isNeedUpdate;
	// UISprite BelleOwnWindow::objBelleCloseTip
	UISprite_t1202 * ___objBelleCloseTip;
	// UISprite BelleOwnWindow::evoRedTipObj
	UISprite_t1202 * ___evoRedTipObj;
	// System.Int32 BelleOwnWindow::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
};
struct BelleOwnWindow_t1972_StaticFields{
	// System.String BelleOwnWindow::TAB_NORMAL_NAME
	String_t* ___TAB_NORMAL_NAME;
	// System.String BelleOwnWindow::TAB_PRESSED_NAME
	String_t* ___TAB_PRESSED_NAME;
	// System.String BelleOwnWindow::ATTR_TAB_BTN_STR
	String_t* ___ATTR_TAB_BTN_STR;
	// System.String BelleOwnWindow::RELATIONSHIP_STR
	String_t* ___RELATIONSHIP_STR;
	// System.String BelleOwnWindow::TIME_FORMAT
	String_t* ___TIME_FORMAT;
	// BelleOwnWindow BelleOwnWindow::m_Instance
	BelleOwnWindow_t1972 * ___m_Instance;
	// System.Int32 BelleOwnWindow::m_freeCloseTime
	int32_t ___m_freeCloseTime;
	// System.Int32 BelleOwnWindow::m_maxCloseTime
	int32_t ___m_maxCloseTime;
};
