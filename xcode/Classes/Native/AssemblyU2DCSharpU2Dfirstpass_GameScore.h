#pragma once
#include <stdint.h>
// GameScore
struct GameScore_t943;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameScore
struct GameScore_t943  : public MonoBehaviour_t18
{
	// System.String GameScore::playerLayerName
	String_t* ___playerLayerName;
	// System.String GameScore::enemyLayerName
	String_t* ___enemyLayerName;
	// System.Int32 GameScore::deaths
	int32_t ___deaths;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> GameScore::kills
	Dictionary_2_t944 * ___kills;
	// System.Single GameScore::startTime
	float ___startTime;
};
struct GameScore_t943_StaticFields{
	// GameScore GameScore::instance
	GameScore_t943 * ___instance;
};
