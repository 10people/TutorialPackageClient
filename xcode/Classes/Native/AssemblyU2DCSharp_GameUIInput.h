#pragma once
#include <stdint.h>
// GameUIInput
struct GameUIInput_t1185;
// UILabel
struct UILabel_t1176;
// System.String
struct String_t;
// GameUIInput/Validator
struct Validator_t1192;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1193;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t1194;
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// GameUIInput/KeyboardType
#include "AssemblyU2DCSharp_GameUIInput_KeyboardType.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIWidget/Pivot
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
// GameUIInput
struct GameUIInput_t1185  : public UIWidgetContainer_t1195
{
	// UILabel GameUIInput::label
	UILabel_t1176 * ___label;
	// System.Int32 GameUIInput::maxChars
	int32_t ___maxChars;
	// System.String GameUIInput::caratChar
	String_t* ___caratChar;
	// System.String GameUIInput::playerPrefsField
	String_t* ___playerPrefsField;
	// GameUIInput/Validator GameUIInput::validator
	Validator_t1192 * ___validator;
	// GameUIInput/KeyboardType GameUIInput::type
	int32_t ___type;
	// System.Boolean GameUIInput::isPassword
	bool ___isPassword;
	// System.Boolean GameUIInput::autoCorrect
	bool ___autoCorrect;
	// System.Boolean GameUIInput::useLabelTextAtStart
	bool ___useLabelTextAtStart;
	// UnityEngine.Color GameUIInput::activeColor
	Color_t939  ___activeColor;
	// UnityEngine.GameObject GameUIInput::selectOnTab
	GameObject_t9 * ___selectOnTab;
	// System.Collections.Generic.List`1<EventDelegate> GameUIInput::onSubmit
	List_1_t1193 * ___onSubmit;
	// UnityEngine.GameObject GameUIInput::eventReceiver
	GameObject_t9 * ___eventReceiver;
	// System.String GameUIInput::functionName
	String_t* ___functionName;
	// System.String GameUIInput::mText
	String_t* ___mText;
	// System.String GameUIInput::mDefaultText
	String_t* ___mDefaultText;
	// UnityEngine.Color GameUIInput::mDefaultColor
	Color_t939  ___mDefaultColor;
	// UIWidget/Pivot GameUIInput::mPivot
	int32_t ___mPivot;
	// System.Single GameUIInput::mPosition
	float ___mPosition;
	// UnityEngine.TouchScreenKeyboard GameUIInput::mKeyboard
	TouchScreenKeyboard_t1194 * ___mKeyboard;
	// System.Boolean GameUIInput::mDoInit
	bool ___mDoInit;
};
struct GameUIInput_t1185_StaticFields{
	// GameUIInput GameUIInput::current
	GameUIInput_t1185 * ___current;
};
