#pragma once
#include <stdint.h>
// AutoSearchPath
struct AutoSearchPath_t4536;
// AutoSearchPoint
struct AutoSearchPoint_t4537;
// System.Collections.Generic.List`1<MapConnectPath>
struct List_1_t4538;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AutoSearchAgent
struct AutoSearchAgent_t2181  : public MonoBehaviour_t18
{
	// AutoSearchPath AutoSearchAgent::m_Path
	AutoSearchPath_t4536 * ___m_Path;
	// System.Boolean AutoSearchAgent::m_bIsAutoSearching
	bool ___m_bIsAutoSearching;
	// System.Single AutoSearchAgent::m_fUpdateInterval
	float ___m_fUpdateInterval;
	// System.Single AutoSearchAgent::m_fLastUpdateTime
	float ___m_fLastUpdateTime;
	// System.Int32 AutoSearchAgent::m_bNotEnamyNpcFlag
	int32_t ___m_bNotEnamyNpcFlag;
	// AutoSearchPoint AutoSearchAgent::m_EndPointCache
	AutoSearchPoint_t4537 * ___m_EndPointCache;
	// System.Collections.Generic.List`1<MapConnectPath> AutoSearchAgent::m_ConnectPath
	List_1_t4538 * ___m_ConnectPath;
};
