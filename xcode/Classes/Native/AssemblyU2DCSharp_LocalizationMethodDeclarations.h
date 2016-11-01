#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Localization
struct Localization_t5323;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t1020;

// System.Void Localization::.ctor()
 void Localization__ctor_m37850 (Localization_t5323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::get_isActive()
 bool Localization_get_isActive_m37851 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Localization Localization::get_instance()
 Localization_t5323 * Localization_get_instance_m37852 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::get_currentLanguage()
 String_t* Localization_get_currentLanguage_m37853 (Localization_t5323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::set_currentLanguage(System.String)
 void Localization_set_currentLanguage_m37854 (Localization_t5323 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Awake()
 void Localization_Awake_m37855 (Localization_t5323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::OnEnable()
 void Localization_OnEnable_m37856 (Localization_t5323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::OnDestroy()
 void Localization_OnDestroy_m37857 (Localization_t5323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Load(UnityEngine.TextAsset)
 void Localization_Load_m37858 (Localization_t5323 * __this, TextAsset_t1020 * ___asset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Get(System.String)
 String_t* Localization_Get_m37859 (Localization_t5323 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Localize(System.String)
 String_t* Localization_Localize_m37860 (Object_t * __this/* static, unused */, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
