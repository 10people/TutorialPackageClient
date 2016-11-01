#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.NavMeshPath
struct NavMeshPath_t5173;
struct NavMeshPath_t5173_marshaled;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1262;

// System.Void UnityEngine.NavMeshPath::.ctor()
 void NavMeshPath__ctor_m41822 (NavMeshPath_t5173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshPath::DestroyNavMeshPath()
 void NavMeshPath_DestroyNavMeshPath_m51749 (NavMeshPath_t5173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshPath::Finalize()
 void NavMeshPath_Finalize_m51750 (NavMeshPath_t5173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.NavMeshPath::CalculateCornersInternal()
 Vector3U5BU5D_t1262* NavMeshPath_CalculateCornersInternal_m51751 (NavMeshPath_t5173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshPath::ClearCornersInternal()
 void NavMeshPath_ClearCornersInternal_m51752 (NavMeshPath_t5173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshPath::ClearCorners()
 void NavMeshPath_ClearCorners_m51753 (NavMeshPath_t5173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshPath::CalculateCorners()
 void NavMeshPath_CalculateCorners_m51754 (NavMeshPath_t5173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.NavMeshPath::get_corners()
 Vector3U5BU5D_t1262* NavMeshPath_get_corners_m41823 (NavMeshPath_t5173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void NavMeshPath_t5173_marshal(const NavMeshPath_t5173& unmarshaled, NavMeshPath_t5173_marshaled& marshaled);
void NavMeshPath_t5173_marshal_back(const NavMeshPath_t5173_marshaled& marshaled, NavMeshPath_t5173& unmarshaled);
void NavMeshPath_t5173_marshal_cleanup(NavMeshPath_t5173_marshaled& marshaled);
