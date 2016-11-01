#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// SelectMyBelleTOMatrixWindow
struct SelectMyBelleTOMatrixWindow_t1880;
// SelectBelleData
struct SelectBelleData_t1874;
// UIImageButton
struct UIImageButton_t1204;
// Belle
struct Belle_t1881;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BelleSelectToMatrixItem
struct BelleSelectToMatrixItem_t1882  : public MonoBehaviour_t18
{
	// UISprite BelleSelectToMatrixItem::m_belleIcon
	UISprite_t1202 * ___m_belleIcon;
	// UILabel BelleSelectToMatrixItem::m_belleName
	UILabel_t1176 * ___m_belleName;
	// UISprite BelleSelectToMatrixItem::m_relationshipIcon
	UISprite_t1202 * ___m_relationshipIcon;
	// UILabel BelleSelectToMatrixItem::m_combatValue
	UILabel_t1176 * ___m_combatValue;
	// UILabel BelleSelectToMatrixItem::m_isInMatirx
	UILabel_t1176 * ___m_isInMatirx;
	// UILabel BelleSelectToMatrixItem::m_notInMatrix
	UILabel_t1176 * ___m_notInMatrix;
	// UILabel BelleSelectToMatrixItem::m_belleMainColor
	UILabel_t1176 * ___m_belleMainColor;
	// UILabel BelleSelectToMatrixItem::m_belleSubColor
	UILabel_t1176 * ___m_belleSubColor;
	// UISprite BelleSelectToMatrixItem::m_belleMainColorPic
	UISprite_t1202 * ___m_belleMainColorPic;
	// UILabel BelleSelectToMatrixItem::m_inCurMatrix
	UILabel_t1176 * ___m_inCurMatrix;
	// UILabel BelleSelectToMatrixItem::m_OnMatrixBtnText
	UILabel_t1176 * ___m_OnMatrixBtnText;
	// UISprite BelleSelectToMatrixItem::m_OnMatrixBtnSprite
	UISprite_t1202 * ___m_OnMatrixBtnSprite;
	// SelectMyBelleTOMatrixWindow BelleSelectToMatrixItem::parentWindow
	SelectMyBelleTOMatrixWindow_t1880 * ___parentWindow;
	// SelectBelleData BelleSelectToMatrixItem::m_RecommonBelleData
	SelectBelleData_t1874 * ___m_RecommonBelleData;
	// System.Int32 BelleSelectToMatrixItem::m_curMatrixId
	int32_t ___m_curMatrixId;
	// UIImageButton BelleSelectToMatrixItem::m_OnMatrixBtn
	UIImageButton_t1204 * ___m_OnMatrixBtn;
	// Belle BelleSelectToMatrixItem::myBelle
	Belle_t1881 * ___myBelle;
};
