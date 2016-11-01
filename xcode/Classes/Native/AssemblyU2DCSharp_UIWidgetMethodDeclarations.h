#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIWidget
struct UIWidget_t5195;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1262;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Material
struct Material_t133;
// UnityEngine.Texture
struct Texture_t937;
// UIPanel
struct UIPanel_t1364;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t5196;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t5197;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t5198;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t5362;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIWidget/Pivot
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UIWidget/WidgetType
#include "AssemblyU2DCSharp_UIWidget_WidgetType.h"

// System.Void UIWidget::.ctor()
 void UIWidget__ctor_m38050 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::.cctor()
 void UIWidget__cctor_m38051 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_isVisible()
 bool UIWidget_get_isVisible_m38052 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_width()
 int32_t UIWidget_get_width_m38053 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_width(System.Int32)
 void UIWidget_set_width_m38054 (UIWidget_t5195 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_height()
 int32_t UIWidget_get_height_m38055 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_height(System.Int32)
 void UIWidget_set_height_m38056 (UIWidget_t5195 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UIWidget::get_color()
 Color_t939  UIWidget_get_color_m38057 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_color(UnityEngine.Color)
 void UIWidget_set_color_m38058 (UIWidget_t5195 * __this, Color_t939  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::get_alpha()
 float UIWidget_get_alpha_m38059 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_alpha(System.Single)
 void UIWidget_set_alpha_m38060 (UIWidget_t5195 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::get_finalAlpha()
 float UIWidget_get_finalAlpha_m38061 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/Pivot UIWidget::get_pivot()
 int32_t UIWidget_get_pivot_m38062 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_pivot(UIWidget/Pivot)
 void UIWidget_set_pivot_m38063 (UIWidget_t5195 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_depth()
 int32_t UIWidget_get_depth_m38064 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_depth(System.Int32)
 void UIWidget_set_depth_m38065 (UIWidget_t5195 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_raycastDepth()
 int32_t UIWidget_get_raycastDepth_m38066 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIWidget::get_localCorners()
 Vector3U5BU5D_t1262* UIWidget_get_localCorners_m38067 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_localSize()
 Vector2_t12  UIWidget_get_localSize_m38068 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIWidget::get_worldCorners()
 Vector3U5BU5D_t1262* UIWidget_get_worldCorners_m38069 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIWidget::get_innerWorldCorners()
 Vector3U5BU5D_t1262* UIWidget_get_innerWorldCorners_m38070 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_hasVertices()
 bool UIWidget_get_hasVertices_m38071 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_pivotOffset()
 Vector2_t12  UIWidget_get_pivotOffset_m38072 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIWidget::get_cachedGameObject()
 GameObject_t9 * UIWidget_get_cachedGameObject_m38073 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIWidget::get_cachedTransform()
 Transform_t78 * UIWidget_get_cachedTransform_m38074 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIWidget::get_material()
 Material_t133 * UIWidget_get_material_m38075 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_material(UnityEngine.Material)
 void UIWidget_set_material_m38076 (UIWidget_t5195 * __this, Material_t133 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIWidget::get_mainTexture()
 Texture_t937 * UIWidget_get_mainTexture_m38077 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_mainTexture(UnityEngine.Texture)
 void UIWidget_set_mainTexture_m38078 (UIWidget_t5195 * __this, Texture_t937 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIWidget::get_panel()
 UIPanel_t1364 * UIWidget_get_panel_m38079 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_panel(UIPanel)
 void UIWidget_set_panel_m38080 (UIWidget_t5195 * __this, UIPanel_t1364 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_relativeSize()
 Vector2_t12  UIWidget_get_relativeSize_m38081 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::CompareFunc(UIWidget,UIWidget)
 int32_t UIWidget_CompareFunc_m38082 (Object_t * __this/* static, unused */, UIWidget_t5195 * ___left, UIWidget_t5195 * ___right, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIWidget::CalculateBounds()
 Bounds_t1005  UIWidget_CalculateBounds_m38083 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIWidget::CalculateBounds(UnityEngine.Transform)
 Bounds_t1005  UIWidget_CalculateBounds_m38084 (UIWidget_t5195 * __this, Transform_t78 * ___relativeParent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::RemoveFromPanel()
 void UIWidget_RemoveFromPanel_m38085 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MarkAsChangedLite()
 void UIWidget_MarkAsChangedLite_m38086 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MarkAsChanged()
 void UIWidget_MarkAsChanged_m38087 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::CreatePanel()
 void UIWidget_CreatePanel_m38088 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::CheckLayer()
 void UIWidget_CheckLayer_m38089 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::ParentHasChanged()
 void UIWidget_ParentHasChanged_m38090 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::Awake()
 void UIWidget_Awake_m38091 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnEnable()
 void UIWidget_OnEnable_m38092 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::UpgradeFrom265()
 void UIWidget_UpgradeFrom265_m38093 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::Start()
 void UIWidget_Start_m38094 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::Update()
 void UIWidget_Update_m38095 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnDisable()
 void UIWidget_OnDisable_m38096 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnDestroy()
 void UIWidget_OnDestroy_m38097 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::HasTransformChanged()
 bool UIWidget_HasTransformChanged_m38098 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::UpdateGeometry(UIPanel,System.Boolean)
 bool UIWidget_UpdateGeometry_m38099 (UIWidget_t5195 * __this, UIPanel_t1364 * ___p, bool ___forceVisible, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::WriteToBuffers(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>)
 void UIWidget_WriteToBuffers_m38100 (UIWidget_t5195 * __this, BetterList_1_t5196 * ___v, BetterList_1_t5197 * ___u, BetterList_1_t5198 * ___c, BetterList_1_t5196 * ___n, BetterList_1_t5362 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MakePixelPerfect()
 void UIWidget_MakePixelPerfect_m38101 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_minWidth()
 int32_t UIWidget_get_minWidth_m38102 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_minHeight()
 int32_t UIWidget_get_minHeight_m38103 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_border()
 Vector4_t942  UIWidget_get_border_m38104 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnStart()
 void UIWidget_OnStart_m38105 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
 void UIWidget_OnFill_m38106 (UIWidget_t5195 * __this, BetterList_1_t5196 * ___verts, BetterList_1_t5197 * ___uvs, BetterList_1_t5198 * ___cols, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/WidgetType UIWidget::GetWidgetType()
 int32_t UIWidget_GetWidgetType_m38107 (UIWidget_t5195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
