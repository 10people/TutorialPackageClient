#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Resources
struct Resources_t7565;
// UnityEngine.Object[]
struct ObjectU5BU5D_t2160;
// System.Type
struct Type_t;
// UnityEngine.Object
struct Object_t982;
struct Object_t982_marshaled;
// System.String
struct String_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t2007;
struct AsyncOperation_t2007_marshaled;

// UnityEngine.Object[] UnityEngine.Resources::FindObjectsOfTypeAll(System.Type)
 ObjectU5BU5D_t2160* Resources_FindObjectsOfTypeAll_m42186 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
 Object_t982 * Resources_Load_m39307 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
 Object_t982 * Resources_Load_m4773 (Object_t * __this/* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
 Object_t982 * Resources_GetBuiltinResource_m52005 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::LoadAssetAtPath(System.String,System.Type)
 Object_t982 * Resources_LoadAssetAtPath_m41689 (Object_t * __this/* static, unused */, String_t* ___assetPath, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
 AsyncOperation_t2007 * Resources_UnloadUnusedAssets_m39892 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
