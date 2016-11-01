#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NcDetachObject
struct NcDetachObject_t5022;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void NcDetachObject::.ctor()
 void NcDetachObject__ctor_m35905 (NcDetachObject_t5022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcDetachObject NcDetachObject::Create(UnityEngine.GameObject,UnityEngine.GameObject)
 NcDetachObject_t5022 * NcDetachObject_Create_m35906 (Object_t * __this/* static, unused */, GameObject_t9 * ___parentObj, GameObject_t9 * ___linkObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcDetachObject::OnUpdateEffectSpeed(System.Single,System.Boolean)
 void NcDetachObject_OnUpdateEffectSpeed_m35907 (NcDetachObject_t5022 * __this, float ___fSpeedRate, bool ___bRuntime, MethodInfo* method) IL2CPP_METHOD_ATTR;
