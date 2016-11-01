#pragma once
#include <stdint.h>
// FingerGestures/FingerList
struct FingerList_t26;
// System.Object
#include "mscorlib_System_Object.h"
// FingerClusterManager/Cluster
struct Cluster_t31  : public Object_t
{
	// System.Int32 FingerClusterManager/Cluster::Id
	int32_t ___Id;
	// System.Single FingerClusterManager/Cluster::StartTime
	float ___StartTime;
	// FingerGestures/FingerList FingerClusterManager/Cluster::Fingers
	FingerList_t26 * ___Fingers;
};
