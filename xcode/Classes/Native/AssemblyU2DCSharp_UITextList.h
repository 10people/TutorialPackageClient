#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Collections.Generic.List`1<UITextList/Paragraph>
struct List_1_t5439;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UITextList/Style
#include "AssemblyU2DCSharp_UITextList_Style.h"
// UITextList
struct UITextList_t5254  : public MonoBehaviour_t18
{
	// UITextList/Style UITextList::style
	int32_t ___style;
	// UILabel UITextList::textLabel
	UILabel_t1176 * ___textLabel;
	// System.Single UITextList::maxHeight
	float ___maxHeight;
	// System.Int32 UITextList::maxEntries
	int32_t ___maxEntries;
	// System.Boolean UITextList::supportScrollWheel
	bool ___supportScrollWheel;
	// System.Char[] UITextList::mSeparator
	CharU5BU5D_t1016* ___mSeparator;
	// System.Collections.Generic.List`1<UITextList/Paragraph> UITextList::mParagraphs
	List_1_t5439 * ___mParagraphs;
	// System.Single UITextList::mScroll
	float ___mScroll;
	// System.Boolean UITextList::mSelected
	bool ___mSelected;
	// System.Int32 UITextList::mTotalLines
	int32_t ___mTotalLines;
};
