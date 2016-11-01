#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Mask
struct Mask_t6183;
// UnityEngine.UI.Graphic
struct Graphic_t6084;
// UnityEngine.RectTransform
struct RectTransform_t6078;
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.Material
struct Material_t133;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.Mask::.ctor()
 void Mask__ctor_m43533 (Mask_t6183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Mask::get_graphic()
 Graphic_t6084 * Mask_get_graphic_m43534 (Mask_t6183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::get_showMaskGraphic()
 bool Mask_get_showMaskGraphic_m43535 (Mask_t6183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::set_showMaskGraphic(System.Boolean)
 void Mask_set_showMaskGraphic_m43536 (Mask_t6183 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Mask::get_rectTransform()
 RectTransform_t6078 * Mask_get_rectTransform_m43537 (Mask_t6183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::MaskEnabled()
 bool Mask_MaskEnabled_m43538 (Mask_t6183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnSiblingGraphicEnabledDisabled()
 void Mask_OnSiblingGraphicEnabledDisabled_m43539 (Mask_t6183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::NotifyMaskStateChanged()
 void Mask_NotifyMaskStateChanged_m43540 (Mask_t6183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::ClearCachedMaterial()
 void Mask_ClearCachedMaterial_m43541 (Mask_t6183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnEnable()
 void Mask_OnEnable_m43542 (Mask_t6183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnDisable()
 void Mask_OnDisable_m43543 (Mask_t6183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
 bool Mask_IsRaycastLocationValid_m43544 (Mask_t6183 * __this, Vector2_t12  ___sp, Camera_t38 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Mask::GetModifiedMaterial(UnityEngine.Material)
 Material_t133 * Mask_GetModifiedMaterial_m43545 (Mask_t6183 * __this, Material_t133 * ___baseMaterial, MethodInfo* method) IL2CPP_METHOD_ATTR;
