#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Collections.Generic.List`1<GameTextList/Paragraph>
struct List_1_t1189;
// UIScrollBar
struct UIScrollBar_t1190;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameTextList/Style
#include "AssemblyU2DCSharp_GameTextList_Style.h"
// GameTextList
struct GameTextList_t1184  : public MonoBehaviour_t18
{
	// GameTextList/Style GameTextList::style
	int32_t ___style;
	// UILabel GameTextList::textLabel
	UILabel_t1176 * ___textLabel;
	// System.Single GameTextList::maxHeight
	float ___maxHeight;
	// System.Int32 GameTextList::maxEntries
	int32_t ___maxEntries;
	// System.Boolean GameTextList::supportScrollWheel
	bool ___supportScrollWheel;
	// System.Char[] GameTextList::mSeparator
	CharU5BU5D_t1016* ___mSeparator;
	// System.Collections.Generic.List`1<GameTextList/Paragraph> GameTextList::mParagraphs
	List_1_t1189 * ___mParagraphs;
	// System.Single GameTextList::mScroll
	float ___mScroll;
	// System.Boolean GameTextList::mSelected
	bool ___mSelected;
	// System.Int32 GameTextList::mTotalLines
	int32_t ___mTotalLines;
	// UIScrollBar GameTextList::m_ChatScrollBar
	UIScrollBar_t1190 * ___m_ChatScrollBar;
	// System.Single GameTextList::m_FakeScrollBarValue
	float ___m_FakeScrollBarValue;
	// System.Int32 GameTextList::m_offsetbuffer
	int32_t ___m_offsetbuffer;
	// System.Int32 GameTextList::m_ChatCount
	int32_t ___m_ChatCount;
	// System.Int32 GameTextList::NEEDCLEAR_COUNT
	int32_t ___NEEDCLEAR_COUNT;
};
