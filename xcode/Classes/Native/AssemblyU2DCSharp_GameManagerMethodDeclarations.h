#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameManager
struct GameManager_t2172;
// Games.Scene.SceneLogic
struct SceneLogic_t2174;
// Games.Scene.ActiveScene
struct ActiveScene_t2175;
// Games.Mission.MissionManager
struct MissionManager_t1565;
// Games.FlyWing.FlyWingMananger
struct FlyWingMananger_t2176;
// GCGame.Table.TableManager
struct TableManager_t332;
// SoundManager
struct SoundManager_t2177;
// NetManager
struct NetManager_t2178;
// PlayerData
struct PlayerData_t2179;
// OtherPlayerData
struct OtherPlayerData_t2180;
// AutoSearchAgent
struct AutoSearchAgent_t2181;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;

// System.Void GameManager::.ctor()
 void GameManager__ctor_m14604 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::.cctor()
 void GameManager__cctor_m14605 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Scene.SceneLogic GameManager::get_SceneLogic()
 SceneLogic_t2174 * GameManager_get_SceneLogic_m14606 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_SceneLogic(Games.Scene.SceneLogic)
 void GameManager_set_SceneLogic_m14607 (GameManager_t2172 * __this, SceneLogic_t2174 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameManager::get_OnLineState()
 bool GameManager_get_OnLineState_m14608 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_OnLineState(System.Boolean)
 void GameManager_set_OnLineState_m14609 (GameManager_t2172 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameManager::get_ShowMainPlayerServerTrace()
 bool GameManager_get_ShowMainPlayerServerTrace_m14610 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_ShowMainPlayerServerTrace(System.Boolean)
 void GameManager_set_ShowMainPlayerServerTrace_m14611 (GameManager_t2172 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Scene.ActiveScene GameManager::get_ActiveScene()
 ActiveScene_t2175 * GameManager_get_ActiveScene_m14612 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_ActiveScene(Games.Scene.ActiveScene)
 void GameManager_set_ActiveScene_m14613 (GameManager_t2172 * __this, ActiveScene_t2175 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Mission.MissionManager GameManager::get_MissionManager()
 MissionManager_t1565 * GameManager_get_MissionManager_m14614 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.FlyWing.FlyWingMananger GameManager::get_FlyWingMananger()
 FlyWingMananger_t2176 * GameManager_get_FlyWingMananger_m14615 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.TableManager GameManager::get_TableManager()
 TableManager_t332 * GameManager_get_TableManager_m14616 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SoundManager GameManager::get_SoundManager()
 SoundManager_t2177 * GameManager_get_SoundManager_m14617 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_SoundManager(SoundManager)
 void GameManager_set_SoundManager_m14618 (GameManager_t2172 * __this, SoundManager_t2177 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NetManager GameManager::get_NetManager()
 NetManager_t2178 * GameManager_get_NetManager_m14619 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_NetManager(NetManager)
 void GameManager_set_NetManager_m14620 (GameManager_t2172 * __this, NetManager_t2178 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerData GameManager::get_PlayerDataPool()
 PlayerData_t2179 * GameManager_get_PlayerDataPool_m14621 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_PlayerDataPool(PlayerData)
 void GameManager_set_PlayerDataPool_m14622 (GameManager_t2172 * __this, PlayerData_t2179 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// OtherPlayerData GameManager::get_OtherPlayerData()
 OtherPlayerData_t2180 * GameManager_get_OtherPlayerData_m14623 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_OtherPlayerData(OtherPlayerData)
 void GameManager_set_OtherPlayerData_m14624 (GameManager_t2172 * __this, OtherPlayerData_t2180 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// AutoSearchAgent GameManager::get_AutoSearch()
 AutoSearchAgent_t2181 * GameManager_get_AutoSearch_m14625 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_AutoSearch(AutoSearchAgent)
 void GameManager_set_AutoSearch_m14626 (GameManager_t2172 * __this, AutoSearchAgent_t2181 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameManager::get_RunningScene()
 int32_t GameManager_get_RunningScene_m14627 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_RunningScene(System.Int32)
 void GameManager_set_RunningScene_m14628 (GameManager_t2172 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameManager::get_LastRunningScene()
 int32_t GameManager_get_LastRunningScene_m14629 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Init()
 void GameManager_Init_m14630 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Awake()
 void GameManager_Awake_m14631 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Start()
 void GameManager_Start_m14632 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Update()
 void GameManager_Update_m14633 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::PlayerStateChange()
 void GameManager_PlayerStateChange_m14634 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnDestroy()
 void GameManager_OnDestroy_m14635 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::InitGame()
 void GameManager_InitGame_m14636 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameManager::InitGlobeManager()
 bool GameManager_InitGlobeManager_m14637 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::ClearGame()
 void GameManager_ClearGame_m14638 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::GetRawData(System.String)
 void GameManager_GetRawData_m14639 (GameManager_t2172 * __this, String_t* ___strPath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::GetWWWRawData()
 Object_t * GameManager_GetWWWRawData_m14640 (GameManager_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
