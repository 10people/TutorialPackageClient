#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PostEffectsBase
struct PostEffectsBase_t5965;
// UnityEngine.Material
struct Material_t133;
// UnityEngine.Shader
struct Shader_t934;
// UnityEngine.RenderTexture
struct RenderTexture_t940;

// System.Void PostEffectsBase::.ctor()
 void PostEffectsBase__ctor_m42325 (PostEffectsBase_t5965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
 Material_t133 * PostEffectsBase_CheckShaderAndCreateMaterial_m42326 (PostEffectsBase_t5965 * __this, Shader_t934 * ___s, Material_t133 * ___m2Create, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
 Material_t133 * PostEffectsBase_CreateMaterial_m42327 (PostEffectsBase_t5965 * __this, Shader_t934 * ___s, Material_t133 * ___m2Create, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::OnEnable()
 void PostEffectsBase_OnEnable_m42328 (PostEffectsBase_t5965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckSupport()
 bool PostEffectsBase_CheckSupport_m42329 (PostEffectsBase_t5965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckResources()
 bool PostEffectsBase_CheckResources_m42330 (PostEffectsBase_t5965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::Start()
 void PostEffectsBase_Start_m42331 (PostEffectsBase_t5965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckSupport(System.Boolean)
 bool PostEffectsBase_CheckSupport_m42332 (PostEffectsBase_t5965 * __this, bool ___needDepth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
 bool PostEffectsBase_CheckSupport_m42333 (PostEffectsBase_t5965 * __this, bool ___needDepth, bool ___needHdr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::Dx11Support()
 bool PostEffectsBase_Dx11Support_m42334 (PostEffectsBase_t5965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::ReportAutoDisable()
 void PostEffectsBase_ReportAutoDisable_m42335 (PostEffectsBase_t5965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckShader(UnityEngine.Shader)
 bool PostEffectsBase_CheckShader_m42336 (PostEffectsBase_t5965 * __this, Shader_t934 * ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::NotSupported()
 void PostEffectsBase_NotSupported_m42337 (PostEffectsBase_t5965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
 void PostEffectsBase_DrawBorder_m42338 (PostEffectsBase_t5965 * __this, RenderTexture_t940 * ___dest, Material_t133 * ___material, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::Main()
 void PostEffectsBase_Main_m42339 (PostEffectsBase_t5965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
