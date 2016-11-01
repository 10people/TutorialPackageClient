#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Material
struct Material_t133;
// UnityEngine.Shader
struct Shader_t934;
// UnityEngine.Texture
struct Texture_t937;
// System.String
struct String_t;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
 void Material__ctor_m38648 (Material_t133 * __this, Shader_t934 * ___shader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
 void Material__ctor_m42130 (Material_t133 * __this, Material_t133 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityEngine.Material::get_shader()
 Shader_t934 * Material_get_shader_m40243 (Material_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
 void Material_set_shader_m39469 (Material_t133 * __this, Shader_t934 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::get_color()
 Color_t939  Material_get_color_m41740 (Material_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
 void Material_set_color_m40593 (Material_t133 * __this, Color_t939  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
 Texture_t937 * Material_get_mainTexture_m41358 (Material_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
 void Material_set_mainTexture_m41797 (Material_t133 * __this, Texture_t937 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
 void Material_set_mainTextureOffset_m41589 (Material_t133 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
 void Material_set_mainTextureScale_m41590 (Material_t133 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
 void Material_SetColor_m38667 (Material_t133 * __this, String_t* ___propertyName, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
 void Material_SetColor_m52489 (Material_t133 * __this, int32_t ___nameID, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
 void Material_INTERNAL_CALL_SetColor_m52490 (Object_t * __this/* static, unused */, Material_t133 * ___self, int32_t ___nameID, Color_t939 * ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
 Color_t939  Material_GetColor_m38664 (Material_t133 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
 Color_t939  Material_GetColor_m52491 (Material_t133 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
 void Material_SetVector_m41046 (Material_t133 * __this, String_t* ___propertyName, Vector4_t942  ___vector, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
 void Material_SetTexture_m6544 (Material_t133 * __this, String_t* ___propertyName, Texture_t937 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
 void Material_SetTexture_m52492 (Material_t133 * __this, int32_t ___nameID, Texture_t937 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
 Texture_t937 * Material_GetTexture_m6542 (Material_t133 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
 Texture_t937 * Material_GetTexture_m52493 (Material_t133 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
 void Material_SetTextureOffset_m41632 (Material_t133 * __this, String_t* ___propertyName, Vector2_t12  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
 void Material_INTERNAL_CALL_SetTextureOffset_m52494 (Object_t * __this/* static, unused */, Material_t133 * ___self, String_t* ___propertyName, Vector2_t12 * ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureScale(System.String,UnityEngine.Vector2)
 void Material_SetTextureScale_m52495 (Material_t133 * __this, String_t* ___propertyName, Vector2_t12  ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureScale(UnityEngine.Material,System.String,UnityEngine.Vector2&)
 void Material_INTERNAL_CALL_SetTextureScale_m52496 (Object_t * __this/* static, unused */, Material_t133 * ___self, String_t* ___propertyName, Vector2_t12 * ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
 void Material_SetMatrix_m41721 (Material_t133 * __this, String_t* ___propertyName, Matrix4x4_t941  ___matrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
 void Material_SetMatrix_m52497 (Material_t133 * __this, int32_t ___nameID, Matrix4x4_t941  ___matrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetMatrix(UnityEngine.Material,System.Int32,UnityEngine.Matrix4x4&)
 void Material_INTERNAL_CALL_SetMatrix_m52498 (Object_t * __this/* static, unused */, Material_t133 * ___self, int32_t ___nameID, Matrix4x4_t941 * ___matrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
 void Material_SetFloat_m38659 (Material_t133 * __this, String_t* ___propertyName, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
 void Material_SetFloat_m52499 (Material_t133 * __this, int32_t ___nameID, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Material::GetFloat(System.String)
 float Material_GetFloat_m40595 (Material_t133 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Material::GetFloat(System.Int32)
 float Material_GetFloat_m52500 (Material_t133 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
 void Material_SetInt_m43998 (Material_t133 * __this, String_t* ___propertyName, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
 bool Material_HasProperty_m40585 (Material_t133 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
 bool Material_HasProperty_m52501 (Material_t133 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Material::get_passCount()
 int32_t Material_get_passCount_m42369 (Material_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
 bool Material_SetPass_m42364 (Material_t133 * __this, int32_t ___pass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Material::get_renderQueue()
 int32_t Material_get_renderQueue_m41637 (Material_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
 void Material_set_renderQueue_m41638 (Material_t133 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
 void Material_Internal_CreateWithShader_m52502 (Object_t * __this/* static, unused */, Material_t133 * ___mono, Shader_t934 * ___shader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
 void Material_Internal_CreateWithMaterial_m52503 (Object_t * __this/* static, unused */, Material_t133 * ___mono, Material_t133 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::CopyPropertiesFromMaterial(UnityEngine.Material)
 void Material_CopyPropertiesFromMaterial_m42131 (Material_t133 * __this, Material_t133 * ___mat, MethodInfo* method) IL2CPP_METHOD_ATTR;
