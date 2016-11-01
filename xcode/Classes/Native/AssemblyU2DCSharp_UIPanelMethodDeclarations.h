#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIPanel
struct UIPanel_t1364;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// BetterList`1<UIDrawCall>
struct BetterList_1_t5426;
// UIWidget
struct UIWidget_t5195;
// UIDrawCall
struct UIDrawCall_t1752;
// UnityEngine.Material
struct Material_t133;
// UIDrawCall/Clipping
#include "AssemblyU2DCSharp_UIDrawCall_Clipping.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UIPanel::.ctor()
 void UIPanel__ctor_m38429 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::.cctor()
 void UIPanel__cctor_m38430 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIPanel::get_cachedGameObject()
 GameObject_t9 * UIPanel_get_cachedGameObject_m38431 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIPanel::get_cachedTransform()
 Transform_t78 * UIPanel_get_cachedTransform_m38432 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_alpha()
 float UIPanel_get_alpha_m38433 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_alpha(System.Single)
 void UIPanel_set_alpha_m38434 (UIPanel_t1364 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_depth()
 int32_t UIPanel_get_depth_m38435 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_depth(System.Int32)
 void UIPanel_set_depth_m38436 (UIPanel_t1364 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_index()
 int32_t UIPanel_get_index_m38437 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_index(System.Int32)
 void UIPanel_set_index_m38438 (UIPanel_t1364 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_sortDrawCall()
 bool UIPanel_get_sortDrawCall_m38439 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_sortDrawCall(System.Boolean)
 void UIPanel_set_sortDrawCall_m38440 (UIPanel_t1364 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::CompareFunc(UIPanel,UIPanel)
 int32_t UIPanel_CompareFunc_m38441 (Object_t * __this/* static, unused */, UIPanel_t1364 * ___a, UIPanel_t1364 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_drawCallCount()
 int32_t UIPanel_get_drawCallCount_m38442 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SetAlphaRecursive(System.Single,System.Boolean)
 void UIPanel_SetAlphaRecursive_m38443 (UIPanel_t1364 * __this, float ___val, bool ___rebuildList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall/Clipping UIPanel::get_clipping()
 int32_t UIPanel_get_clipping_m38444 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipping(UIDrawCall/Clipping)
 void UIPanel_set_clipping_m38445 (UIPanel_t1364 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_clipRange()
 Vector4_t942  UIPanel_get_clipRange_m38446 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipRange(UnityEngine.Vector4)
 void UIPanel_set_clipRange_m38447 (UIPanel_t1364 * __this, Vector4_t942  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::get_clipSoftness()
 Vector2_t12  UIPanel_get_clipSoftness_m38448 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipSoftness(UnityEngine.Vector2)
 void UIPanel_set_clipSoftness_m38449 (UIPanel_t1364 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
 bool UIPanel_IsVisible_m38450 (UIPanel_t1364 * __this, Vector3_t121  ___a, Vector3_t121  ___b, Vector3_t121  ___c, Vector3_t121  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UnityEngine.Vector3)
 bool UIPanel_IsVisible_m38451 (UIPanel_t1364 * __this, Vector3_t121  ___worldPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UIWidget)
 bool UIPanel_IsVisible_m38452 (UIPanel_t1364 * __this, UIWidget_t5195 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SetDirty()
 void UIPanel_SetDirty_m38453 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIPanel::GetDrawCall(UnityEngine.Material,System.Int32)
 UIDrawCall_t1752 * UIPanel_GetDrawCall_m38454 (UIPanel_t1364 * __this, Material_t133 * ___mtl, int32_t ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Awake()
 void UIPanel_Awake_m38455 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Start()
 void UIPanel_Start_m38456 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnEnable()
 void UIPanel_OnEnable_m38457 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnDisable()
 void UIPanel_OnDisable_m38458 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateTransformMatrix()
 void UIPanel_UpdateTransformMatrix_m38459 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateDrawcalls()
 void UIPanel_UpdateDrawcalls_m38460 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::LateUpdate()
 void UIPanel_LateUpdate_m38461 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::DestroyDrawCall(UIDrawCall,System.Int32)
 void UIPanel_DestroyDrawCall_m38462 (Object_t * __this/* static, unused */, UIDrawCall_t1752 * ___dc, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateLayers()
 void UIPanel_UpdateLayers_m38463 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateWidgets()
 void UIPanel_UpdateWidgets_m38464 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Refresh()
 void UIPanel_Refresh_m38465 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIPanel::CalculateConstrainOffset(UnityEngine.Vector2,UnityEngine.Vector2)
 Vector3_t121  UIPanel_CalculateConstrainOffset_m38466 (UIPanel_t1364 * __this, Vector2_t12  ___min, Vector2_t12  ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::ConstrainTargetToBounds(UnityEngine.Transform,UnityEngine.Bounds&,System.Boolean)
 bool UIPanel_ConstrainTargetToBounds_m38467 (UIPanel_t1364 * __this, Transform_t78 * ___target, Bounds_t1005 * ___targetBounds, bool ___immediate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::ConstrainTargetToBounds(UnityEngine.Transform,System.Boolean)
 bool UIPanel_ConstrainTargetToBounds_m38468 (UIPanel_t1364 * __this, Transform_t78 * ___target, bool ___immediate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SetChildLayer(UnityEngine.Transform,System.Int32)
 void UIPanel_SetChildLayer_m38469 (Object_t * __this/* static, unused */, Transform_t78 * ___t, int32_t ___layer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform,System.Boolean)
 UIPanel_t1364 * UIPanel_Find_m38470 (Object_t * __this/* static, unused */, Transform_t78 * ___trans, bool ___createIfMissing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform)
 UIPanel_t1364 * UIPanel_Find_m38471 (Object_t * __this/* static, unused */, Transform_t78 * ___trans, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SubmitDrawCall(UIDrawCall,UnityEngine.Material)
 void UIPanel_SubmitDrawCall_m38472 (UIPanel_t1364 * __this, UIDrawCall_t1752 * ___dc, Material_t133 * ___mtl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::AddWidget(UIWidget)
 void UIPanel_AddWidget_m38473 (UIPanel_t1364 * __this, UIWidget_t5195 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::RemoveWidget(UIWidget)
 void UIPanel_RemoveWidget_m38474 (UIPanel_t1364 * __this, UIWidget_t5195 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::MarkMtlChanged(UnityEngine.Material)
 void UIPanel_MarkMtlChanged_m38475 (UIPanel_t1364 * __this, Material_t133 * ___mtl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::FillChangedDrawCalls()
 void UIPanel_FillChangedDrawCalls_m38476 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::FillDrawCall(UnityEngine.Material)
 void UIPanel_FillDrawCall_m38477 (UIPanel_t1364 * __this, Material_t133 * ___mtl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::RebuildDrawCallMesh(UnityEngine.Material,System.Int32)
 void UIPanel_RebuildDrawCallMesh_m38478 (UIPanel_t1364 * __this, Material_t133 * ___mtl, int32_t ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIPanel::CreateDrawCall(UnityEngine.Material,System.Int32)
 UIDrawCall_t1752 * UIPanel_CreateDrawCall_m38479 (UIPanel_t1364 * __this, Material_t133 * ___mtl, int32_t ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::ClearData()
 void UIPanel_ClearData_m38480 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIPanel::get_drawCalls()
 BetterList_1_t5426 * UIPanel_get_drawCalls_m38481 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::DestroyRemovedDrawCalls()
 void UIPanel_DestroyRemovedDrawCalls_m38482 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::RemoveDrawCall(UnityEngine.Material,System.Int32)
 void UIPanel_RemoveDrawCall_m38483 (UIPanel_t1364 * __this, Material_t133 * ___mtl, int32_t ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdatePanelIndex()
 void UIPanel_UpdatePanelIndex_m38484 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateDrawcallRenderQueue()
 void UIPanel_UpdateDrawcallRenderQueue_m38485 (UIPanel_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
