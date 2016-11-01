#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<FingerClusterManager/Cluster>
struct List_1_t36;
// FingerGestures/FingerList
struct FingerList_t26;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FingerClusterManager
struct FingerClusterManager_t33  : public MonoBehaviour_t18
{
	// System.Single FingerClusterManager::ClusterRadius
	float ___ClusterRadius;
	// System.Single FingerClusterManager::TimeTolerance
	float ___TimeTolerance;
	// System.Int32 FingerClusterManager::lastUpdateFrame
	int32_t ___lastUpdateFrame;
	// System.Int32 FingerClusterManager::nextClusterId
	int32_t ___nextClusterId;
	// System.Collections.Generic.List`1<FingerClusterManager/Cluster> FingerClusterManager::clusters
	List_1_t36 * ___clusters;
	// System.Collections.Generic.List`1<FingerClusterManager/Cluster> FingerClusterManager::clusterPool
	List_1_t36 * ___clusterPool;
	// FingerGestures/FingerList FingerClusterManager::fingersAdded
	FingerList_t26 * ___fingersAdded;
	// FingerGestures/FingerList FingerClusterManager::fingersRemoved
	FingerList_t26 * ___fingersRemoved;
};
