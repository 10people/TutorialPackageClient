#pragma once
#include <stdint.h>
// UIInputNumber
struct UIInputNumber_t1582;
// UILabel
struct UILabel_t1176;
// System.String
struct String_t;
// UIInputNumber/Validator
struct Validator_t1859;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1193;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t1194;
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// UIInputNumber/KeyboardType
#include "AssemblyU2DCSharp_UIInputNumber_KeyboardType.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIWidget/Pivot
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
// UIInputNumber
struct UIInputNumber_t1582  : public UIWidgetContainer_t1195
{
	// UILabel UIInputNumber::label
	UILabel_t1176 * ___label;
	// System.Int32 UIInputNumber::maxChars
	int32_t ___maxChars;
	// System.String UIInputNumber::caratChar
	String_t* ___caratChar;
	// System.String UIInputNumber::playerPrefsField
	String_t* ___playerPrefsField;
	// UIInputNumber/Validator UIInputNumber::validator
	Validator_t1859 * ___validator;
	// UIInputNumber/KeyboardType UIInputNumber::type
	int32_t ___type;
	// System.Boolean UIInputNumber::isPassword
	bool ___isPassword;
	// System.Boolean UIInputNumber::autoCorrect
	bool ___autoCorrect;
	// System.Boolean UIInputNumber::useLabelTextAtStart
	bool ___useLabelTextAtStart;
	// UnityEngine.Color UIInputNumber::activeColor
	Color_t939  ___activeColor;
	// UnityEngine.GameObject UIInputNumber::selectOnTab
	GameObject_t9 * ___selectOnTab;
	// System.Collections.Generic.List`1<EventDelegate> UIInputNumber::onSubmit
	List_1_t1193 * ___onSubmit;
	// UnityEngine.GameObject UIInputNumber::eventReceiver
	GameObject_t9 * ___eventReceiver;
	// System.String UIInputNumber::functionName
	String_t* ___functionName;
	// System.String UIInputNumber::mText
	String_t* ___mText;
	// System.String UIInputNumber::mDefaultText
	String_t* ___mDefaultText;
	// UnityEngine.Color UIInputNumber::mDefaultColor
	Color_t939  ___mDefaultColor;
	// UIWidget/Pivot UIInputNumber::mPivot
	int32_t ___mPivot;
	// System.Single UIInputNumber::mPosition
	float ___mPosition;
	// UnityEngine.TouchScreenKeyboard UIInputNumber::mKeyboard
	TouchScreenKeyboard_t1194 * ___mKeyboard;
	// System.Boolean UIInputNumber::mDoInit
	bool ___mDoInit;
};
struct UIInputNumber_t1582_StaticFields{
	// UIInputNumber UIInputNumber::current
	UIInputNumber_t1582 * ___current;
};
