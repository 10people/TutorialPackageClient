#pragma once
#include <stdint.h>
// UIPopupList
struct UIPopupList_t2074;
// UIAtlas
struct UIAtlas_t1593;
// UIFont
struct UIFont_t1286;
// UILabel
struct UILabel_t1176;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1193;
// UIPanel
struct UIPanel_t1364;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// System.Collections.Generic.List`1<UILabel>
struct List_1_t1747;
// UIPopupList/LegacyEvent
struct LegacyEvent_t5322;
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// UIPopupList/Position
#include "AssemblyU2DCSharp_UIPopupList_Position.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIPopupList
struct UIPopupList_t2074  : public UIWidgetContainer_t1195
{
	// UIAtlas UIPopupList::atlas
	UIAtlas_t1593 * ___atlas;
	// UIFont UIPopupList::font
	UIFont_t1286 * ___font;
	// UILabel UIPopupList::textLabel
	UILabel_t1176 * ___textLabel;
	// System.String UIPopupList::backgroundSprite
	String_t* ___backgroundSprite;
	// System.String UIPopupList::highlightSprite
	String_t* ___highlightSprite;
	// UIPopupList/Position UIPopupList::position
	int32_t ___position;
	// System.Collections.Generic.List`1<System.String> UIPopupList::items
	List_1_t1333 * ___items;
	// UnityEngine.Vector2 UIPopupList::padding
	Vector2_t12  ___padding;
	// System.Single UIPopupList::textScale
	float ___textScale;
	// UnityEngine.Color UIPopupList::textColor
	Color_t939  ___textColor;
	// UnityEngine.Color UIPopupList::backgroundColor
	Color_t939  ___backgroundColor;
	// UnityEngine.Color UIPopupList::highlightColor
	Color_t939  ___highlightColor;
	// System.Boolean UIPopupList::isAnimated
	bool ___isAnimated;
	// System.Boolean UIPopupList::isLocalized
	bool ___isLocalized;
	// System.Collections.Generic.List`1<EventDelegate> UIPopupList::onChange
	List_1_t1193 * ___onChange;
	// System.String UIPopupList::mSelectedItem
	String_t* ___mSelectedItem;
	// UIPanel UIPopupList::mPanel
	UIPanel_t1364 * ___mPanel;
	// UnityEngine.GameObject UIPopupList::mChild
	GameObject_t9 * ___mChild;
	// UISprite UIPopupList::mBackground
	UISprite_t1202 * ___mBackground;
	// UISprite UIPopupList::mHighlight
	UISprite_t1202 * ___mHighlight;
	// UILabel UIPopupList::mHighlightedLabel
	UILabel_t1176 * ___mHighlightedLabel;
	// System.Collections.Generic.List`1<UILabel> UIPopupList::mLabelList
	List_1_t1747 * ___mLabelList;
	// System.Single UIPopupList::mBgBorder
	float ___mBgBorder;
	// UnityEngine.GameObject UIPopupList::eventReceiver
	GameObject_t9 * ___eventReceiver;
	// System.String UIPopupList::functionName
	String_t* ___functionName;
	// UIPopupList/LegacyEvent UIPopupList::mLegacyEvent
	LegacyEvent_t5322 * ___mLegacyEvent;
	// System.Boolean UIPopupList::useDicTable
	bool ___useDicTable;
};
struct UIPopupList_t2074_StaticFields{
	// System.Single UIPopupList::animSpeed
	float ___animSpeed;
	// UIPopupList UIPopupList::current
	UIPopupList_t2074 * ___current;
};
