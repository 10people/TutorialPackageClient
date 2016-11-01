#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIDrawCall
struct UIDrawCall_t1752;
// UIPanel
struct UIPanel_t1364;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Material
struct Material_t133;
// UnityEngine.Texture
struct Texture_t937;
// UnityEngine.Mesh
struct Mesh_t1049;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t5196;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t5362;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t5197;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t5198;
// UIDrawCall/Clipping
#include "AssemblyU2DCSharp_UIDrawCall_Clipping.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIDrawCall::.ctor()
 void UIDrawCall__ctor_m37972 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_depth()
 int32_t UIDrawCall_get_depth_m37973 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_depth(System.Int32)
 void UIDrawCall_set_depth_m37974 (UIDrawCall_t1752 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIDrawCall::get_panel()
 UIPanel_t1364 * UIDrawCall_get_panel_m37975 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_panel(UIPanel)
 void UIDrawCall_set_panel_m37976 (UIDrawCall_t1752 * __this, UIPanel_t1364 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDrawCall::get_isDirty()
 bool UIDrawCall_get_isDirty_m37977 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_isDirty(System.Boolean)
 void UIDrawCall_set_isDirty_m37978 (UIDrawCall_t1752 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_renderQueue()
 int32_t UIDrawCall_get_renderQueue_m37979 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_renderQueue(System.Int32)
 void UIDrawCall_set_renderQueue_m37980 (UIDrawCall_t1752 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIDrawCall::get_cachedTransform()
 Transform_t78 * UIDrawCall_get_cachedTransform_m37981 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::get_material()
 Material_t133 * UIDrawCall_get_material_m37982 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_material(UnityEngine.Material)
 void UIDrawCall_set_material_m37983 (UIDrawCall_t1752 * __this, Material_t133 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::get_dynamicMat()
 Material_t133 * UIDrawCall_get_dynamicMat_m37984 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_dynamicMat(UnityEngine.Material)
 void UIDrawCall_set_dynamicMat_m37985 (UIDrawCall_t1752 * __this, Material_t133 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIDrawCall::get_mainTexture()
 Texture_t937 * UIDrawCall_get_mainTexture_m37986 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_mainTexture(UnityEngine.Texture)
 void UIDrawCall_set_mainTexture_m37987 (UIDrawCall_t1752 * __this, Texture_t937 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_triangles()
 int32_t UIDrawCall_get_triangles_m37988 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDrawCall::get_isClipped()
 bool UIDrawCall_get_isClipped_m37989 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall/Clipping UIDrawCall::get_clipping()
 int32_t UIDrawCall_get_clipping_m37990 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_clipping(UIDrawCall/Clipping)
 void UIDrawCall_set_clipping_m37991 (UIDrawCall_t1752 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIDrawCall::get_clipRange()
 Vector4_t942  UIDrawCall_get_clipRange_m37992 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_clipRange(UnityEngine.Vector4)
 void UIDrawCall_set_clipRange_m37993 (UIDrawCall_t1752 * __this, Vector4_t942  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIDrawCall::get_clipSoftness()
 Vector2_t12  UIDrawCall_get_clipSoftness_m37994 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_clipSoftness(UnityEngine.Vector2)
 void UIDrawCall_set_clipSoftness_m37995 (UIDrawCall_t1752 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UIDrawCall::GetMesh(System.Boolean&,System.Int32)
 Mesh_t1049 * UIDrawCall_GetMesh_m37996 (UIDrawCall_t1752 * __this, bool* ___rebuildIndices, int32_t ___vertexCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::RebuildMaterial()
 void UIDrawCall_RebuildMaterial_m37997 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::UpdateMaterials()
 void UIDrawCall_UpdateMaterials_m37998 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::Set(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
 void UIDrawCall_Set_m37999 (UIDrawCall_t1752 * __this, BetterList_1_t5196 * ___verts, BetterList_1_t5196 * ___norms, BetterList_1_t5362 * ___tans, BetterList_1_t5197 * ___uvs, BetterList_1_t5198 * ___cols, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnWillRenderObject()
 void UIDrawCall_OnWillRenderObject_m38000 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnDestroy()
 void UIDrawCall_OnDestroy_m38001 (UIDrawCall_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::CompareFunc(UIDrawCall,UIDrawCall)
 int32_t UIDrawCall_CompareFunc_m38002 (Object_t * __this/* static, unused */, UIDrawCall_t1752 * ___left, UIDrawCall_t1752 * ___right, MethodInfo* method) IL2CPP_METHOD_ATTR;
