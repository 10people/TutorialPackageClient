#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.PlayerPrefs
struct PlayerPrefs_t7636;
// System.String
struct String_t;

// System.Boolean UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)
 bool PlayerPrefs_TrySetInt_m52643 (Object_t * __this/* static, unused */, String_t* ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PlayerPrefs::TrySetFloat(System.String,System.Single)
 bool PlayerPrefs_TrySetFloat_m52644 (Object_t * __this/* static, unused */, String_t* ___key, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PlayerPrefs::TrySetSetString(System.String,System.String)
 bool PlayerPrefs_TrySetSetString_m52645 (Object_t * __this/* static, unused */, String_t* ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
 void PlayerPrefs_SetInt_m41159 (Object_t * __this/* static, unused */, String_t* ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
 int32_t PlayerPrefs_GetInt_m41161 (Object_t * __this/* static, unused */, String_t* ___key, int32_t ___defaultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
 void PlayerPrefs_SetFloat_m42091 (Object_t * __this/* static, unused */, String_t* ___key, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
 float PlayerPrefs_GetFloat_m42090 (Object_t * __this/* static, unused */, String_t* ___key, float ___defaultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
 void PlayerPrefs_SetString_m39039 (Object_t * __this/* static, unused */, String_t* ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
 String_t* PlayerPrefs_GetString_m41158 (Object_t * __this/* static, unused */, String_t* ___key, String_t* ___defaultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
 String_t* PlayerPrefs_GetString_m39041 (Object_t * __this/* static, unused */, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
 bool PlayerPrefs_HasKey_m39040 (Object_t * __this/* static, unused */, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
 void PlayerPrefs_DeleteKey_m39038 (Object_t * __this/* static, unused */, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::Save()
 void PlayerPrefs_Save_m41160 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
