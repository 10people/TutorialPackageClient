#pragma once
#include <stdint.h>
// GameManager
struct GameManager_t2172;
// UnityEngine.Shader
struct Shader_t934;
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
// GameRes.ResourcesManager
struct ResourcesManager_t2182;
// GameManager/LoadRawDataFinishDelegate
struct LoadRawDataFinishDelegate_t2171;
// GameManager/InitDataFinishDelegate
struct InitDataFinishDelegate_t2170;
// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t1517;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameManager
struct GameManager_t2172  : public MonoBehaviour_t18
{
	// Games.Scene.SceneLogic GameManager::m_SceneLogic
	SceneLogic_t2174 * ___m_SceneLogic;
	// System.Boolean GameManager::m_bOnLineState
	bool ___m_bOnLineState;
	// System.Boolean GameManager::m_bShowMainPlayerServerTrace
	bool ___m_bShowMainPlayerServerTrace;
	// Games.Scene.ActiveScene GameManager::m_ActiveScene
	ActiveScene_t2175 * ___m_ActiveScene;
	// Games.Mission.MissionManager GameManager::m_MissionManager
	MissionManager_t1565 * ___m_MissionManager;
	// Games.FlyWing.FlyWingMananger GameManager::m_FlyWingMananger
	FlyWingMananger_t2176 * ___m_FlyWingMananger;
	// GCGame.Table.TableManager GameManager::m_TableManager
	TableManager_t332 * ___m_TableManager;
	// SoundManager GameManager::m_SoundManager
	SoundManager_t2177 * ___m_SoundManager;
	// NetManager GameManager::m_NetManager
	NetManager_t2178 * ___m_NetManager;
	// PlayerData GameManager::m_PlayerDataPool
	PlayerData_t2179 * ___m_PlayerDataPool;
	// OtherPlayerData GameManager::m_OtherPlayerData
	OtherPlayerData_t2180 * ___m_OtherPlayerData;
	// AutoSearchAgent GameManager::m_AutoSearch
	AutoSearchAgent_t2181 * ___m_AutoSearch;
	// System.Int32 GameManager::m_RunningScene
	int32_t ___m_RunningScene;
	// System.Int32 GameManager::m_LastRunningScene
	int32_t ___m_LastRunningScene;
	// GameRes.ResourcesManager GameManager::m_ResourcesManager
	ResourcesManager_t2182 * ___m_ResourcesManager;
	// GameManager/LoadRawDataFinishDelegate GameManager::rawDataCallback
	LoadRawDataFinishDelegate_t2171 * ___rawDataCallback;
	// GameManager/InitDataFinishDelegate GameManager::initDataCallback
	InitDataFinishDelegate_t2170 * ___initDataCallback;
	// System.String GameManager::strRawPath
	String_t* ___strRawPath;
	// System.Int32 GameManager::m_MaxErrorNum
	int32_t ___m_MaxErrorNum;
	// UnityEngine.WWW GameManager::rawWWW
	WWW_t1517 * ___rawWWW;
	// System.Int32 GameManager::m_loadErrorNum
	int32_t ___m_loadErrorNum;
};
struct GameManager_t2172_StaticFields{
	// GameManager GameManager::gameManager
	GameManager_t2172 * ___gameManager;
	// System.Boolean GameManager::dataInitialized
	bool ___dataInitialized;
	// UnityEngine.Shader GameManager::m_ShaderForStealth
	Shader_t934 * ___m_ShaderForStealth;
};
