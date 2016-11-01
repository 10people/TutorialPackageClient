#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NGUIMath
struct NGUIMath_t5353;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t78;
// UISprite
struct UISprite_t1202;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t114;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1262;
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UIWidget/Pivot
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"

// System.Single NGUIMath::Lerp(System.Single,System.Single,System.Single)
 float NGUIMath_Lerp_m37866 (Object_t * __this/* static, unused */, float ___from, float ___to, float ___factor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::ClampIndex(System.Int32,System.Int32)
 int32_t NGUIMath_ClampIndex_m37867 (Object_t * __this/* static, unused */, int32_t ___val, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::RepeatIndex(System.Int32,System.Int32)
 int32_t NGUIMath_RepeatIndex_m37868 (Object_t * __this/* static, unused */, int32_t ___val, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::WrapAngle(System.Single)
 float NGUIMath_WrapAngle_m37869 (Object_t * __this/* static, unused */, float ___angle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::Wrap01(System.Single)
 float NGUIMath_Wrap01_m37870 (Object_t * __this/* static, unused */, float ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::HexToDecimal(System.Char)
 int32_t NGUIMath_HexToDecimal_m37871 (Object_t * __this/* static, unused */, uint16_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char NGUIMath::DecimalToHexChar(System.Int32)
 uint16_t NGUIMath_DecimalToHexChar_m37872 (Object_t * __this/* static, unused */, int32_t ___num, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::DecimalToHex(System.Int32)
 String_t* NGUIMath_DecimalToHex_m37873 (Object_t * __this/* static, unused */, int32_t ___num, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::ColorToInt(UnityEngine.Color)
 int32_t NGUIMath_ColorToInt_m37874 (Object_t * __this/* static, unused */, Color_t939  ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIMath::IntToColor(System.Int32)
 Color_t939  NGUIMath_IntToColor_m37875 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::IntToBinary(System.Int32,System.Int32)
 String_t* NGUIMath_IntToBinary_m37876 (Object_t * __this/* static, unused */, int32_t ___val, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIMath::HexToColor(System.UInt32)
 Color_t939  NGUIMath_HexToColor_m37877 (Object_t * __this/* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::ConvertToTexCoords(UnityEngine.Rect,System.Int32,System.Int32)
 Rect_t5068  NGUIMath_ConvertToTexCoords_m37878 (Object_t * __this/* static, unused */, Rect_t5068  ___rect, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::ConvertToPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
 Rect_t5068  NGUIMath_ConvertToPixels_m37879 (Object_t * __this/* static, unused */, Rect_t5068  ___rect, int32_t ___width, int32_t ___height, bool ___round, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::MakePixelPerfect(UnityEngine.Rect)
 Rect_t5068  NGUIMath_MakePixelPerfect_m37880 (Object_t * __this/* static, unused */, Rect_t5068  ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::MakePixelPerfect(UnityEngine.Rect,System.Int32,System.Int32)
 Rect_t5068  NGUIMath_MakePixelPerfect_m37881 (Object_t * __this/* static, unused */, Rect_t5068  ___rect, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::ApplyHalfPixelOffset(UnityEngine.Vector3)
 Vector3_t121  NGUIMath_ApplyHalfPixelOffset_m37882 (Object_t * __this/* static, unused */, Vector3_t121  ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::ApplyHalfPixelOffset(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t121  NGUIMath_ApplyHalfPixelOffset_m37883 (Object_t * __this/* static, unused */, Vector3_t121  ___pos, Vector3_t121  ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::ConstrainRect(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
 Vector2_t12  NGUIMath_ConstrainRect_m37884 (Object_t * __this/* static, unused */, Vector2_t12  ___minRect, Vector2_t12  ___maxRect, Vector2_t12  ___minArea, Vector2_t12  ___maxArea, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateAbsoluteWidgetBounds(UnityEngine.Transform)
 Bounds_t1005  NGUIMath_CalculateAbsoluteWidgetBounds_m37885 (Object_t * __this/* static, unused */, Transform_t78 * ___trans, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform)
 Bounds_t1005  NGUIMath_CalculateRelativeWidgetBounds_m37886 (Object_t * __this/* static, unused */, Transform_t78 * ___trans, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,System.Boolean)
 Bounds_t1005  NGUIMath_CalculateRelativeWidgetBounds_m37887 (Object_t * __this/* static, unused */, Transform_t78 * ___trans, bool ___considerInactive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,UnityEngine.Transform)
 Bounds_t1005  NGUIMath_CalculateRelativeWidgetBounds_m37888 (Object_t * __this/* static, unused */, Transform_t78 * ___root, Transform_t78 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,UnityEngine.Transform,System.Boolean)
 Bounds_t1005  NGUIMath_CalculateRelativeWidgetBounds_m37889 (Object_t * __this/* static, unused */, Transform_t78 * ___root, Transform_t78 * ___child, bool ___considerInactive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeInnerBounds(UnityEngine.Transform,UISprite)
 Bounds_t1005  NGUIMath_CalculateRelativeInnerBounds_m37890 (Object_t * __this/* static, unused */, Transform_t78 * ___root, UISprite_t1202 * ___sprite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::SpringDampen(UnityEngine.Vector3&,System.Single,System.Single)
 Vector3_t121  NGUIMath_SpringDampen_m37891 (Object_t * __this/* static, unused */, Vector3_t121 * ___velocity, float ___strength, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::SpringDampen(UnityEngine.Vector2&,System.Single,System.Single)
 Vector2_t12  NGUIMath_SpringDampen_m37892 (Object_t * __this/* static, unused */, Vector2_t12 * ___velocity, float ___strength, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::SpringLerp(System.Single,System.Single)
 float NGUIMath_SpringLerp_m37893 (Object_t * __this/* static, unused */, float ___strength, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::SpringLerp(System.Single,System.Single,System.Single,System.Single)
 float NGUIMath_SpringLerp_m37894 (Object_t * __this/* static, unused */, float ___from, float ___to, float ___strength, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::SpringLerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
 Vector2_t12  NGUIMath_SpringLerp_m37895 (Object_t * __this/* static, unused */, Vector2_t12  ___from, Vector2_t12  ___to, float ___strength, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::SpringLerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
 Vector3_t121  NGUIMath_SpringLerp_m37896 (Object_t * __this/* static, unused */, Vector3_t121  ___from, Vector3_t121  ___to, float ___strength, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion NGUIMath::SpringLerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
 Quaternion_t120  NGUIMath_SpringLerp_m37897 (Object_t * __this/* static, unused */, Quaternion_t120  ___from, Quaternion_t120  ___to, float ___strength, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::RotateTowards(System.Single,System.Single,System.Single)
 float NGUIMath_RotateTowards_m37898 (Object_t * __this/* static, unused */, float ___from, float ___to, float ___maxAngle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistancePointToLineSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
 float NGUIMath_DistancePointToLineSegment_m37899 (Object_t * __this/* static, unused */, Vector2_t12  ___point, Vector2_t12  ___a, Vector2_t12  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistanceToRectangle(UnityEngine.Vector2[],UnityEngine.Vector2)
 float NGUIMath_DistanceToRectangle_m37900 (Object_t * __this/* static, unused */, Vector2U5BU5D_t114* ___screenPoints, Vector2_t12  ___mousePos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistanceToRectangle(UnityEngine.Vector3[],UnityEngine.Vector2,UnityEngine.Camera)
 float NGUIMath_DistanceToRectangle_m37901 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___worldPoints, Vector2_t12  ___mousePos, Camera_t38 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::GetPivotOffset(UIWidget/Pivot)
 Vector2_t12  NGUIMath_GetPivotOffset_m37902 (Object_t * __this/* static, unused */, int32_t ___pv, MethodInfo* method) IL2CPP_METHOD_ATTR;
