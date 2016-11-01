#pragma once
#include <stdint.h>
// NetManager
struct NetManager_t2178;
// System.String
struct String_t;
// NetWorkLogic/ConnectDelegate
struct ConnectDelegate_t2201;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// NetManager
struct NetManager_t2178  : public MonoBehaviour_t18
{
	// System.Boolean NetManager::m_bAskConnecting
	bool ___m_bAskConnecting;
	// System.String NetManager::m_connectIP
	String_t* ___m_connectIP;
	// System.Int32 NetManager::m_connectPort
	int32_t ___m_connectPort;
	// NetWorkLogic/ConnectDelegate NetManager::m_delConnect
	ConnectDelegate_t2201 * ___m_delConnect;
};
struct NetManager_t2178_StaticFields{
	// System.Boolean NetManager::IsReconnecting
	bool ___IsReconnecting;
	// NetManager NetManager::m_netManager
	NetManager_t2178 * ___m_netManager;
	// NetManager NetManager::m_instance
	NetManager_t2178 * ___m_instance;
	// System.Boolean NetManager::m_IsAskConnecting
	bool ___m_IsAskConnecting;
};
