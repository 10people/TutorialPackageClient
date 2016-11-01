#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerClusterManager
struct FingerClusterManager_t33;
// FingerGestures/IFingerList
struct IFingerList_t30;
// System.Collections.Generic.List`1<FingerClusterManager/Cluster>
struct List_1_t36;
// FingerClusterManager/Cluster
struct Cluster_t31;
// FingerGestures/Finger
struct Finger_t8;

// System.Void FingerClusterManager::.ctor()
 void FingerClusterManager__ctor_m73 (FingerClusterManager_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/IFingerList FingerClusterManager::get_FingersAdded()
 Object_t * FingerClusterManager_get_FingersAdded_m74 (FingerClusterManager_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/IFingerList FingerClusterManager::get_FingersRemoved()
 Object_t * FingerClusterManager_get_FingersRemoved_m75 (FingerClusterManager_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FingerClusterManager/Cluster> FingerClusterManager::get_Clusters()
 List_1_t36 * FingerClusterManager_get_Clusters_m76 (FingerClusterManager_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FingerClusterManager/Cluster> FingerClusterManager::GetClustersPool()
 List_1_t36 * FingerClusterManager_GetClustersPool_m77 (FingerClusterManager_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerClusterManager::Awake()
 void FingerClusterManager_Awake_m78 (FingerClusterManager_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerClusterManager::Update()
 void FingerClusterManager_Update_m79 (FingerClusterManager_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerClusterManager/Cluster FingerClusterManager::FindClusterById(System.Int32)
 Cluster_t31 * FingerClusterManager_FindClusterById_m80 (FingerClusterManager_t33 * __this, int32_t ___clusterId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerClusterManager/Cluster FingerClusterManager::NewCluster()
 Cluster_t31 * FingerClusterManager_NewCluster_m81 (FingerClusterManager_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerClusterManager/Cluster FingerClusterManager::FindExistingCluster(FingerGestures/Finger)
 Cluster_t31 * FingerClusterManager_FindExistingCluster_m82 (FingerClusterManager_t33 * __this, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
