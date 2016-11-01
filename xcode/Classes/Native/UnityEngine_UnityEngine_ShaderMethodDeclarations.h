#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Shader
struct Shader_t934;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t937;

// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
 Shader_t934 * Shader_Find_m39308 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Shader::get_isSupported()
 bool Shader_get_isSupported_m38650 (Shader_t934 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::set_maximumLOD(System.Int32)
 void Shader_set_maximumLOD_m41718 (Shader_t934 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::set_globalMaximumLOD(System.Int32)
 void Shader_set_globalMaximumLOD_m41956 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalTexture(System.String,UnityEngine.Texture)
 void Shader_SetGlobalTexture_m40186 (Object_t * __this/* static, unused */, String_t* ___propertyName, Texture_t937 * ___tex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalTexture(System.Int32,UnityEngine.Texture)
 void Shader_SetGlobalTexture_m52487 (Object_t * __this/* static, unused */, int32_t ___nameID, Texture_t937 * ___tex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
 int32_t Shader_PropertyToID_m52488 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
