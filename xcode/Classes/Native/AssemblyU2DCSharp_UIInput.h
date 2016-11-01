#pragma once
#include <stdint.h>
// UIInput
struct UIInput_t1231;
// UILabel
struct UILabel_t1176;
// System.String
struct String_t;
// UIInput/Validator
struct Validator_t5418;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1193;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t1194;
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// UIInput/KeyboardType
#include "AssemblyU2DCSharp_UIInput_KeyboardType.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIWidget/Pivot
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
// UIInput
struct UIInput_t1231  : public UIWidgetContainer_t1195
{
	// UILabel UIInput::label
	UILabel_t1176 * ___label;
	// System.Int32 UIInput::maxChars
	int32_t ___maxChars;
	// System.String UIInput::caratChar
	String_t* ___caratChar;
	// System.String UIInput::playerPrefsField
	String_t* ___playerPrefsField;
	// UIInput/Validator UIInput::validator
	Validator_t5418 * ___validator;
	// UIInput/KeyboardType UIInput::type
	int32_t ___type;
	// System.Boolean UIInput::isPassword
	bool ___isPassword;
	// System.Boolean UIInput::autoCorrect
	bool ___autoCorrect;
	// System.Boolean UIInput::useLabelTextAtStart
	bool ___useLabelTextAtStart;
	// UnityEngine.Color UIInput::activeColor
	Color_t939  ___activeColor;
	// UnityEngine.GameObject UIInput::selectOnTab
	GameObject_t9 * ___selectOnTab;
	// System.Collections.Generic.List`1<EventDelegate> UIInput::onSubmit
	List_1_t1193 * ___onSubmit;
	// UnityEngine.GameObject UIInput::eventReceiver
	GameObject_t9 * ___eventReceiver;
	// System.String UIInput::functionName
	String_t* ___functionName;
	// System.String UIInput::mText
	String_t* ___mText;
	// System.String UIInput::mDefaultText
	String_t* ___mDefaultText;
	// UnityEngine.Color UIInput::mDefaultColor
	Color_t939  ___mDefaultColor;
	// UIWidget/Pivot UIInput::mPivot
	int32_t ___mPivot;
	// System.Single UIInput::mPosition
	float ___mPosition;
	// UnityEngine.TouchScreenKeyboard UIInput::mKeyboard
	TouchScreenKeyboard_t1194 * ___mKeyboard;
	// System.Boolean UIInput::mDoInit
	bool ___mDoInit;
};
struct UIInput_t1231_StaticFields{
	// UIInput UIInput::current
	UIInput_t1231 * ___current;
};
