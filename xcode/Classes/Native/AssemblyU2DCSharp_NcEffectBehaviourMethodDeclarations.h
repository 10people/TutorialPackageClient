#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NcEffectBehaviour
struct NcEffectBehaviour_t5021;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Texture[]
struct TextureU5BU5D_t936;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// UnityEngine.Material
struct Material_t133;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void NcEffectBehaviour::.ctor()
 void NcEffectBehaviour__ctor_m35923 (NcEffectBehaviour_t5021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::.cctor()
 void NcEffectBehaviour__cctor_m35924 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcEffectBehaviour::GetEngineTime()
 float NcEffectBehaviour_GetEngineTime_m35925 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcEffectBehaviour::GetEngineDeltaTime()
 float NcEffectBehaviour_GetEngineDeltaTime_m35926 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcEffectBehaviour::GetAnimationState()
 int32_t NcEffectBehaviour_GetAnimationState_m35927 (NcEffectBehaviour_t5021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NcEffectBehaviour::GetRootInstanceEffect()
 GameObject_t9 * NcEffectBehaviour_GetRootInstanceEffect_m35928 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::SetActive(UnityEngine.GameObject,System.Boolean)
 void NcEffectBehaviour_SetActive_m35929 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, bool ___bActive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::SetActiveRecursively(UnityEngine.GameObject,System.Boolean)
 void NcEffectBehaviour_SetActiveRecursively_m35930 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, bool ___bActive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcEffectBehaviour::IsActive(UnityEngine.GameObject)
 bool NcEffectBehaviour_IsActive_m35931 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::RemoveAllChildObject(UnityEngine.GameObject,System.Boolean)
 void NcEffectBehaviour_RemoveAllChildObject_m35932 (Object_t * __this/* static, unused */, GameObject_t9 * ___parent, bool ___bImmediate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::HideNcDelayActive(UnityEngine.GameObject)
 void NcEffectBehaviour_HideNcDelayActive_m35933 (Object_t * __this/* static, unused */, GameObject_t9 * ___tarObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture[] NcEffectBehaviour::PreloadTexture(UnityEngine.GameObject)
 TextureU5BU5D_t936* NcEffectBehaviour_PreloadTexture_m35934 (Object_t * __this/* static, unused */, GameObject_t9 * ___tarObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture[] NcEffectBehaviour::PreloadTexture(UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>)
 TextureU5BU5D_t936* NcEffectBehaviour_PreloadTexture_m35935 (Object_t * __this/* static, unused */, GameObject_t9 * ___tarObj, List_1_t1289 * ___parentPrefabList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture[] NcEffectBehaviour::PreloadPrefab(UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Boolean)
 TextureU5BU5D_t936* NcEffectBehaviour_PreloadPrefab_m35936 (Object_t * __this/* static, unused */, GameObject_t9 * ___tarObj, List_1_t1289 * ___parentPrefabList, bool ___bCheckDup, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::AddRuntimeMaterial(UnityEngine.Material)
 void NcEffectBehaviour_AddRuntimeMaterial_m35937 (NcEffectBehaviour_t5021 * __this, Material_t133 * ___addMaterial, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::AdjustSpeedRuntime(UnityEngine.GameObject,System.Single)
 void NcEffectBehaviour_AdjustSpeedRuntime_m35938 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, float ___fSpeedRate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NcEffectBehaviour::GetMaterialColorName(UnityEngine.Material)
 String_t* NcEffectBehaviour_GetMaterialColorName_m35939 (Object_t * __this/* static, unused */, Material_t133 * ___mat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::DisableEmit()
 void NcEffectBehaviour_DisableEmit_m35940 (NcEffectBehaviour_t5021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcEffectBehaviour::IsSafe()
 bool NcEffectBehaviour_IsSafe_m35941 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NcEffectBehaviour::CreateEditorGameObject(UnityEngine.GameObject)
 GameObject_t9 * NcEffectBehaviour_CreateEditorGameObject_m35942 (NcEffectBehaviour_t5021 * __this, GameObject_t9 * ___srcGameObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NcEffectBehaviour::CreateGameObject(System.String)
 GameObject_t9 * NcEffectBehaviour_CreateGameObject_m35943 (NcEffectBehaviour_t5021 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NcEffectBehaviour::CreateGameObject(UnityEngine.GameObject)
 GameObject_t9 * NcEffectBehaviour_CreateGameObject_m35944 (NcEffectBehaviour_t5021 * __this, GameObject_t9 * ___original, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NcEffectBehaviour::CreateGameObject(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
 GameObject_t9 * NcEffectBehaviour_CreateGameObject_m35945 (NcEffectBehaviour_t5021 * __this, GameObject_t9 * ___prefabObj, Vector3_t121  ___position, Quaternion_t120  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NcEffectBehaviour::CreateGameObject(UnityEngine.GameObject,UnityEngine.GameObject)
 GameObject_t9 * NcEffectBehaviour_CreateGameObject_m35946 (NcEffectBehaviour_t5021 * __this, GameObject_t9 * ___parentObj, GameObject_t9 * ___prefabObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NcEffectBehaviour::CreateGameObject(UnityEngine.GameObject,UnityEngine.Transform,UnityEngine.GameObject)
 GameObject_t9 * NcEffectBehaviour_CreateGameObject_m35947 (NcEffectBehaviour_t5021 * __this, GameObject_t9 * ___parentObj, Transform_t78 * ___parentTrans, GameObject_t9 * ___prefabObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::ChangeParent(UnityEngine.Transform,UnityEngine.Transform,System.Boolean,UnityEngine.Transform)
 void NcEffectBehaviour_ChangeParent_m35948 (NcEffectBehaviour_t5021 * __this, Transform_t78 * ___newParent, Transform_t78 * ___child, bool ___bKeepingLocalTransform, Transform_t78 * ___addTransform, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::UpdateMeshColors(UnityEngine.Color)
 void NcEffectBehaviour_UpdateMeshColors_m35949 (NcEffectBehaviour_t5021 * __this, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::OnDestroy()
 void NcEffectBehaviour_OnDestroy_m35950 (NcEffectBehaviour_t5021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::OnApplicationQuit()
 void NcEffectBehaviour_OnApplicationQuit_m35951 (NcEffectBehaviour_t5021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::OnUpdateEffectSpeed(System.Single,System.Boolean)
 void NcEffectBehaviour_OnUpdateEffectSpeed_m35952 (NcEffectBehaviour_t5021 * __this, float ___fSpeedRate, bool ___bRuntime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::OnUpdateToolData()
 void NcEffectBehaviour_OnUpdateToolData_m35953 (NcEffectBehaviour_t5021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
