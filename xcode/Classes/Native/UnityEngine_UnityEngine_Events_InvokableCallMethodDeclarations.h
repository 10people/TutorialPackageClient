#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall
struct InvokableCall_t7494;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// System.Object[]
struct ObjectU5BU5D_t142;

// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
 void InvokableCall__ctor_m51649 (InvokableCall_t7494 * __this, Object_t * ___target, MethodInfo_t1087 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
 void InvokableCall_Invoke_m51650 (InvokableCall_t7494 * __this, ObjectU5BU5D_t142* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
 bool InvokableCall_Find_m51651 (InvokableCall_t7494 * __this, Object_t * ___targetObj, MethodInfo_t1087 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
