#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AssetBundle
struct AssetBundle_t2010;
// UnityEngine.Object
struct Object_t982;
struct Object_t982_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t2160;

// UnityEngine.Object UnityEngine.AssetBundle::get_mainAsset()
 Object_t982 * AssetBundle_get_mainAsset_m40244 (AssetBundle_t2010 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::Load(System.String)
 Object_t982 * AssetBundle_Load_m40236 (AssetBundle_t2010 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::Load(System.String,System.Type)
 Object_t982 * AssetBundle_Load_m40226 (AssetBundle_t2010 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAll(System.Type)
 ObjectU5BU5D_t2160* AssetBundle_LoadAll_m51991 (AssetBundle_t2010 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAll()
 ObjectU5BU5D_t2160* AssetBundle_LoadAll_m40220 (AssetBundle_t2010 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
 void AssetBundle_Unload_m39972 (AssetBundle_t2010 * __this, bool ___unloadAllLoadedObjects, MethodInfo* method) IL2CPP_METHOD_ATTR;
