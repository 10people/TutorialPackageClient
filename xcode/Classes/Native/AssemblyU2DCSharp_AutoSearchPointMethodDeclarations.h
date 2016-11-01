#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AutoSearchPoint
struct AutoSearchPoint_t4537;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void AutoSearchPoint::.ctor()
 void AutoSearchPoint__ctor_m32591 (AutoSearchPoint_t4537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchPoint::.ctor(System.Int32,System.Single,System.Single)
 void AutoSearchPoint__ctor_m32592 (AutoSearchPoint_t4537 * __this, int32_t ___sceneId, float ___posX, float ___posZ, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchPoint::Clean()
 void AutoSearchPoint_Clean_m32593 (AutoSearchPoint_t4537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AutoSearchPoint::get_SceneID()
 int32_t AutoSearchPoint_get_SceneID_m32594 (AutoSearchPoint_t4537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchPoint::set_SceneID(System.Int32)
 void AutoSearchPoint_set_SceneID_m32595 (AutoSearchPoint_t4537 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AutoSearchPoint::get_PosX()
 float AutoSearchPoint_get_PosX_m32596 (AutoSearchPoint_t4537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchPoint::set_PosX(System.Single)
 void AutoSearchPoint_set_PosX_m32597 (AutoSearchPoint_t4537 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AutoSearchPoint::get_PosZ()
 float AutoSearchPoint_get_PosZ_m32598 (AutoSearchPoint_t4537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchPoint::set_PosZ(System.Single)
 void AutoSearchPoint_set_PosZ_m32599 (AutoSearchPoint_t4537 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// AutoSearchPoint AutoSearchPoint::MakePoint(UnityEngine.GameObject)
 AutoSearchPoint_t4537 * AutoSearchPoint_MakePoint_m32600 (Object_t * __this/* static, unused */, GameObject_t9 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
