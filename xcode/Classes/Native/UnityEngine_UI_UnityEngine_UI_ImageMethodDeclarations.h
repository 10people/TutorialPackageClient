#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Image
struct Image_t6101;
// UnityEngine.Sprite
struct Sprite_t6100;
// UnityEngine.Texture
struct Texture_t937;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t6085;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t114;
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.UI.Image/Type
#include "UnityEngine_UI_UnityEngine_UI_Image_Type.h"
// UnityEngine.UI.Image/FillMethod
#include "UnityEngine_UI_UnityEngine_UI_Image_FillMethod.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.Image::.ctor()
 void Image__ctor_m42829 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::.cctor()
 void Image__cctor_m42830 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
 Sprite_t6100 * Image_get_sprite_m42831 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
 void Image_set_sprite_m42832 (Image_t6101 * __this, Sprite_t6100 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_overrideSprite()
 Sprite_t6100 * Image_get_overrideSprite_m42833 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_overrideSprite(UnityEngine.Sprite)
 void Image_set_overrideSprite_m42834 (Image_t6101 * __this, Sprite_t6100 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image/Type UnityEngine.UI.Image::get_type()
 int32_t Image_get_type_m42835 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_type(UnityEngine.UI.Image/Type)
 void Image_set_type_m42836 (Image_t6101 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_preserveAspect()
 bool Image_get_preserveAspect_m42837 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_preserveAspect(System.Boolean)
 void Image_set_preserveAspect_m42838 (Image_t6101 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_fillCenter()
 bool Image_get_fillCenter_m42839 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillCenter(System.Boolean)
 void Image_set_fillCenter_m42840 (Image_t6101 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::get_fillMethod()
 int32_t Image_get_fillMethod_m42841 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillMethod(UnityEngine.UI.Image/FillMethod)
 void Image_set_fillMethod_m42842 (Image_t6101 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_fillAmount()
 float Image_get_fillAmount_m42843 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
 void Image_set_fillAmount_m42844 (Image_t6101 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_fillClockwise()
 bool Image_get_fillClockwise_m42845 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillClockwise(System.Boolean)
 void Image_set_fillClockwise_m42846 (Image_t6101 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Image::get_fillOrigin()
 int32_t Image_get_fillOrigin_m42847 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillOrigin(System.Int32)
 void Image_set_fillOrigin_m42848 (Image_t6101 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_eventAlphaThreshold()
 float Image_get_eventAlphaThreshold_m42849 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_eventAlphaThreshold(System.Single)
 void Image_set_eventAlphaThreshold_m42850 (Image_t6101 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Image::get_mainTexture()
 Texture_t937 * Image_get_mainTexture_m42851 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_hasBorder()
 bool Image_get_hasBorder_m42852 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_pixelsPerUnit()
 float Image_get_pixelsPerUnit_m42853 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnBeforeSerialize()
 void Image_OnBeforeSerialize_m42854 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnAfterDeserialize()
 void Image_OnAfterDeserialize_m42855 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.UI.Image::GetDrawingDimensions(System.Boolean)
 Vector4_t942  Image_GetDrawingDimensions_m42856 (Image_t6101 * __this, bool ___shouldPreserveAspect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::SetNativeSize()
 void Image_SetNativeSize_m42857 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Image_OnFillVBO_m42858 (Image_t6101 * __this, List_1_t6085 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateSimpleSprite(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Boolean)
 void Image_GenerateSimpleSprite_m42859 (Image_t6101 * __this, List_1_t6085 * ___vbo, bool ___preserveAspect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateSlicedSprite(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Image_GenerateSlicedSprite_m42860 (Image_t6101 * __this, List_1_t6085 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateTiledSprite(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Image_GenerateTiledSprite_m42861 (Image_t6101 * __this, List_1_t6085 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::AddQuad(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.UIVertex,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
 void Image_AddQuad_m42862 (Image_t6101 * __this, List_1_t6085 * ___vbo, UIVertex_t6103  ___v, Vector2_t12  ___posMin, Vector2_t12  ___posMax, Vector2_t12  ___uvMin, Vector2_t12  ___uvMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.UI.Image::GetAdjustedBorders(UnityEngine.Vector4,UnityEngine.Rect)
 Vector4_t942  Image_GetAdjustedBorders_m42863 (Image_t6101 * __this, Vector4_t942  ___border, Rect_t5068  ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateFilledSprite(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Boolean)
 void Image_GenerateFilledSprite_m42864 (Image_t6101 * __this, List_1_t6085 * ___vbo, bool ___preserveAspect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::RadialCut(UnityEngine.Vector2[],UnityEngine.Vector2[],System.Single,System.Boolean,System.Int32)
 bool Image_RadialCut_m42865 (Object_t * __this/* static, unused */, Vector2U5BU5D_t114* ___xy, Vector2U5BU5D_t114* ___uv, float ___fill, bool ___invert, int32_t ___corner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::RadialCut(UnityEngine.Vector2[],System.Single,System.Single,System.Boolean,System.Int32)
 void Image_RadialCut_m42866 (Object_t * __this/* static, unused */, Vector2U5BU5D_t114* ___xy, float ___cos, float ___sin, bool ___invert, int32_t ___corner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::CalculateLayoutInputHorizontal()
 void Image_CalculateLayoutInputHorizontal_m42867 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::CalculateLayoutInputVertical()
 void Image_CalculateLayoutInputVertical_m42868 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_minWidth()
 float Image_get_minWidth_m42869 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_preferredWidth()
 float Image_get_preferredWidth_m42870 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_flexibleWidth()
 float Image_get_flexibleWidth_m42871 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_minHeight()
 float Image_get_minHeight_m42872 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_preferredHeight()
 float Image_get_preferredHeight_m42873 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_flexibleHeight()
 float Image_get_flexibleHeight_m42874 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Image::get_layoutPriority()
 int32_t Image_get_layoutPriority_m42875 (Image_t6101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
 bool Image_IsRaycastLocationValid_m42876 (Image_t6101 * __this, Vector2_t12  ___screenPoint, Camera_t38 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Image::MapCoordinate(UnityEngine.Vector2,UnityEngine.Rect)
 Vector2_t12  Image_MapCoordinate_m42877 (Image_t6101 * __this, Vector2_t12  ___local, Rect_t5068  ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
