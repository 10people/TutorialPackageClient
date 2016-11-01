#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameScore
struct GameScore_t943;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t945;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void GameScore::.ctor()
 void GameScore__ctor_m4027 (GameScore_t943 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameScore GameScore::get_Instance()
 GameScore_t943 * GameScore_get_Instance_m4028 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameScore::OnApplicationQuit()
 void GameScore_OnApplicationQuit_m4029 (GameScore_t943 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameScore::get_Deaths()
 int32_t GameScore_get_Deaths_m4030 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> GameScore::get_KillTypes()
 Object_t* GameScore_get_KillTypes_m4031 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameScore::GetKills(System.String)
 int32_t GameScore_GetKills_m4032 (Object_t * __this/* static, unused */, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameScore::get_GameTime()
 float GameScore_get_GameTime_m4033 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameScore::RegisterDeath(UnityEngine.GameObject)
 void GameScore_RegisterDeath_m4034 (Object_t * __this/* static, unused */, GameObject_t9 * ___deadObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameScore::OnLevelWasLoaded(System.Int32)
 void GameScore_OnLevelWasLoaded_m4035 (GameScore_t943 * __this, int32_t ___level, MethodInfo* method) IL2CPP_METHOD_ATTR;
