#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UISprite
struct UISprite_t1202;
// UnityEngine.Material
struct Material_t133;
// UIAtlas
struct UIAtlas_t1593;
// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t5344;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t5196;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t5197;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t5198;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t114;
// UISprite/Type
#include "AssemblyU2DCSharp_UISprite_Type.h"
// UISprite/FillDirection
#include "AssemblyU2DCSharp_UISprite_FillDirection.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UIWidget/WidgetType
#include "AssemblyU2DCSharp_UIWidget_WidgetType.h"

// System.Void UISprite::.ctor()
 void UISprite__ctor_m38507 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite/Type UISprite::get_type()
 int32_t UISprite_get_type_m38508 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_type(UISprite/Type)
 void UISprite_set_type_m38509 (UISprite_t1202 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UISprite::get_material()
 Material_t133 * UISprite_get_material_m38510 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UISprite::get_atlas()
 UIAtlas_t1593 * UISprite_get_atlas_m38511 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_atlas(UIAtlas)
 void UISprite_set_atlas_m38512 (UISprite_t1202 * __this, UIAtlas_t1593 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UISprite::get_spriteName()
 String_t* UISprite_get_spriteName_m38513 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_spriteName(System.String)
 void UISprite_set_spriteName_m38514 (UISprite_t1202 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_isValid()
 bool UISprite_get_isValid_m38515 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_fillCenter()
 bool UISprite_get_fillCenter_m38516 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_fillCenter(System.Boolean)
 void UISprite_set_fillCenter_m38517 (UISprite_t1202 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite/FillDirection UISprite::get_fillDirection()
 int32_t UISprite_get_fillDirection_m38518 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_fillDirection(UISprite/FillDirection)
 void UISprite_set_fillDirection_m38519 (UISprite_t1202 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UISprite::get_fillAmount()
 float UISprite_get_fillAmount_m38520 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_fillAmount(System.Single)
 void UISprite_set_fillAmount_m38521 (UISprite_t1202 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_invert()
 bool UISprite_get_invert_m38522 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_invert(System.Boolean)
 void UISprite_set_invert_m38523 (UISprite_t1202 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UISprite::get_border()
 Vector4_t942  UISprite_get_border_m38524 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UISprite::get_minWidth()
 int32_t UISprite_get_minWidth_m38525 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UISprite::get_minHeight()
 int32_t UISprite_get_minHeight_m38526 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISpriteData UISprite::GetAtlasSprite()
 UISpriteData_t5344 * UISprite_GetAtlasSprite_m38527 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::SetAtlasSprite(UISpriteData)
 void UISprite_SetAtlasSprite_m38528 (UISprite_t1202 * __this, UISpriteData_t5344 * ___sp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::MakePixelPerfect()
 void UISprite_MakePixelPerfect_m38529 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::Update()
 void UISprite_Update_m38530 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
 void UISprite_OnFill_m38531 (UISprite_t1202 * __this, BetterList_1_t5196 * ___verts, BetterList_1_t5197 * ___uvs, BetterList_1_t5198 * ___cols, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/WidgetType UISprite::GetWidgetType()
 int32_t UISprite_GetWidgetType_m38532 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UISprite::get_drawingDimensions()
 Vector4_t942  UISprite_get_drawingDimensions_m38533 (UISprite_t1202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::SimpleFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
 void UISprite_SimpleFill_m38534 (UISprite_t1202 * __this, BetterList_1_t5196 * ___verts, BetterList_1_t5197 * ___uvs, BetterList_1_t5198 * ___cols, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::SlicedFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
 void UISprite_SlicedFill_m38535 (UISprite_t1202 * __this, BetterList_1_t5196 * ___verts, BetterList_1_t5197 * ___uvs, BetterList_1_t5198 * ___cols, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::TiledFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
 void UISprite_TiledFill_m38536 (UISprite_t1202 * __this, BetterList_1_t5196 * ___verts, BetterList_1_t5197 * ___uvs, BetterList_1_t5198 * ___cols, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::FilledFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
 void UISprite_FilledFill_m38537 (UISprite_t1202 * __this, BetterList_1_t5196 * ___verts, BetterList_1_t5197 * ___uvs, BetterList_1_t5198 * ___cols, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::RadialCut(UnityEngine.Vector2[],UnityEngine.Vector2[],System.Single,System.Boolean,System.Int32)
 bool UISprite_RadialCut_m38538 (Object_t * __this/* static, unused */, Vector2U5BU5D_t114* ___xy, Vector2U5BU5D_t114* ___uv, float ___fill, bool ___invert, int32_t ___corner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::RadialCut(UnityEngine.Vector2[],System.Single,System.Single,System.Boolean,System.Int32)
 void UISprite_RadialCut_m38539 (Object_t * __this/* static, unused */, Vector2U5BU5D_t114* ___xy, float ___cos, float ___sin, bool ___invert, int32_t ___corner, MethodInfo* method) IL2CPP_METHOD_ATTR;
