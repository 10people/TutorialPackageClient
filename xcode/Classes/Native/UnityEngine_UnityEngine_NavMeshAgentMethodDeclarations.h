#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.NavMeshAgent
struct NavMeshAgent_t4469;
// UnityEngine.NavMeshPath
struct NavMeshPath_t5173;
struct NavMeshPath_t5173_marshaled;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.NavMeshAgent::INTERNAL_set_destination(UnityEngine.Vector3&)
 void NavMeshAgent_INTERNAL_set_destination_m51743 (NavMeshAgent_t4469 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_destination(UnityEngine.Vector3)
 void NavMeshAgent_set_destination_m40340 (NavMeshAgent_t4469 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_stoppingDistance(System.Single)
 void NavMeshAgent_set_stoppingDistance_m40667 (NavMeshAgent_t4469 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_autoBraking(System.Boolean)
 void NavMeshAgent_set_autoBraking_m40664 (NavMeshAgent_t4469 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_autoRepath(System.Boolean)
 void NavMeshAgent_set_autoRepath_m40663 (NavMeshAgent_t4469 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::Stop(System.Boolean)
 void NavMeshAgent_Stop_m51744 (NavMeshAgent_t4469 * __this, bool ___stopUpdates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::Stop()
 void NavMeshAgent_Stop_m40668 (NavMeshAgent_t4469 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NavMeshPath UnityEngine.NavMeshAgent::get_path()
 NavMeshPath_t5173 * NavMeshAgent_get_path_m40665 (NavMeshAgent_t4469 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::CopyPathTo(UnityEngine.NavMeshPath)
 void NavMeshAgent_CopyPathTo_m51745 (NavMeshAgent_t4469 * __this, NavMeshPath_t5173 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMeshAgent::CalculatePath(UnityEngine.Vector3,UnityEngine.NavMeshPath)
 bool NavMeshAgent_CalculatePath_m40666 (NavMeshAgent_t4469 * __this, Vector3_t121  ___targetPosition, NavMeshPath_t5173 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMeshAgent::CalculatePathInternal(UnityEngine.Vector3,UnityEngine.NavMeshPath)
 bool NavMeshAgent_CalculatePathInternal_m51746 (NavMeshAgent_t4469 * __this, Vector3_t121  ___targetPosition, NavMeshPath_t5173 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMeshAgent::INTERNAL_CALL_CalculatePathInternal(UnityEngine.NavMeshAgent,UnityEngine.Vector3&,UnityEngine.NavMeshPath)
 bool NavMeshAgent_INTERNAL_CALL_CalculatePathInternal_m51747 (Object_t * __this/* static, unused */, NavMeshAgent_t4469 * ___self, Vector3_t121 * ___targetPosition, NavMeshPath_t5173 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.NavMeshAgent::get_speed()
 float NavMeshAgent_get_speed_m40698 (NavMeshAgent_t4469 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_speed(System.Single)
 void NavMeshAgent_set_speed_m40658 (NavMeshAgent_t4469 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_angularSpeed(System.Single)
 void NavMeshAgent_set_angularSpeed_m40662 (NavMeshAgent_t4469 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_acceleration(System.Single)
 void NavMeshAgent_set_acceleration_m40661 (NavMeshAgent_t4469 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_radius(System.Single)
 void NavMeshAgent_set_radius_m40659 (NavMeshAgent_t4469 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_height(System.Single)
 void NavMeshAgent_set_height_m40660 (NavMeshAgent_t4469 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
