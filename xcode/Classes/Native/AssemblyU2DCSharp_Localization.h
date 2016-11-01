#pragma once
#include <stdint.h>
// Localization
struct Localization_t5323;
// System.String
struct String_t;
// UnityEngine.TextAsset[]
struct TextAssetU5BU5D_t5351;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t908;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Localization
struct Localization_t5323  : public MonoBehaviour_t18
{
	// System.String Localization::startingLanguage
	String_t* ___startingLanguage;
	// UnityEngine.TextAsset[] Localization::languages
	TextAssetU5BU5D_t5351* ___languages;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Localization::mDictionary
	Dictionary_2_t908 * ___mDictionary;
	// System.String Localization::mLanguage
	String_t* ___mLanguage;
};
struct Localization_t5323_StaticFields{
	// Localization Localization::mInstance
	Localization_t5323 * ___mInstance;
};
