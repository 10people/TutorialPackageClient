#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ScriptableObject
struct ScriptableObject_t93;
struct ScriptableObject_t93_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
 void ScriptableObject__ctor_m4323 (ScriptableObject_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
 void ScriptableObject_Internal_CreateScriptableObject_m51999 (Object_t * __this/* static, unused */, ScriptableObject_t93 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
 ScriptableObject_t93 * ScriptableObject_CreateInstance_m52000 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
 ScriptableObject_t93 * ScriptableObject_CreateInstance_m52001 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
 ScriptableObject_t93 * ScriptableObject_CreateInstanceFromType_m52002 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
void ScriptableObject_t93_marshal(const ScriptableObject_t93& unmarshaled, ScriptableObject_t93_marshaled& marshaled);
void ScriptableObject_t93_marshal_back(const ScriptableObject_t93_marshaled& marshaled, ScriptableObject_t93& unmarshaled);
void ScriptableObject_t93_marshal_cleanup(ScriptableObject_t93_marshaled& marshaled);
