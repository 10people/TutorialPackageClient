#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIScrollBar
struct UIScrollBar_t1190;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Camera
struct Camera_t38;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// UIScrollBar/Direction
#include "AssemblyU2DCSharp_UIScrollBar_Direction.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIScrollBar::.ctor()
 void UIScrollBar__ctor_m37694 (UIScrollBar_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIScrollBar::get_cachedTransform()
 Transform_t78 * UIScrollBar_get_cachedTransform_m37695 (UIScrollBar_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UIScrollBar::get_cachedCamera()
 Camera_t38 * UIScrollBar_get_cachedCamera_m37696 (UIScrollBar_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite UIScrollBar::get_background()
 UISprite_t1202 * UIScrollBar_get_background_m37697 (UIScrollBar_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_background(UISprite)
 void UIScrollBar_set_background_m37698 (UIScrollBar_t1190 * __this, UISprite_t1202 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite UIScrollBar::get_foreground()
 UISprite_t1202 * UIScrollBar_get_foreground_m37699 (UIScrollBar_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_foreground(UISprite)
 void UIScrollBar_set_foreground_m37700 (UIScrollBar_t1190 * __this, UISprite_t1202 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIScrollBar/Direction UIScrollBar::get_direction()
 int32_t UIScrollBar_get_direction_m37701 (UIScrollBar_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_direction(UIScrollBar/Direction)
 void UIScrollBar_set_direction_m37702 (UIScrollBar_t1190 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollBar::get_inverted()
 bool UIScrollBar_get_inverted_m37703 (UIScrollBar_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_inverted(System.Boolean)
 void UIScrollBar_set_inverted_m37704 (UIScrollBar_t1190 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIScrollBar::get_value()
 float UIScrollBar_get_value_m37705 (UIScrollBar_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_value(System.Single)
 void UIScrollBar_set_value_m37706 (UIScrollBar_t1190 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIScrollBar::get_scrollValue()
 float UIScrollBar_get_scrollValue_m37707 (UIScrollBar_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_scrollValue(System.Single)
 void UIScrollBar_set_scrollValue_m37708 (UIScrollBar_t1190 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIScrollBar::get_barSize()
 float UIScrollBar_get_barSize_m37709 (UIScrollBar_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_barSize(System.Single)
 void UIScrollBar_set_barSize_m37710 (UIScrollBar_t1190 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIScrollBar::get_alpha()
 float UIScrollBar_get_alpha_m37711 (UIScrollBar_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_alpha(System.Single)
 void UIScrollBar_set_alpha_m37712 (UIScrollBar_t1190 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::CenterOnPos(UnityEngine.Vector2)
 void UIScrollBar_CenterOnPos_m37713 (UIScrollBar_t1190 * __this, Vector2_t12  ___localPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::Reposition(UnityEngine.Vector2)
 void UIScrollBar_Reposition_m37714 (UIScrollBar_t1190 * __this, Vector2_t12  ___screenPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::OnPressBackground(UnityEngine.GameObject,System.Boolean)
 void UIScrollBar_OnPressBackground_m37715 (UIScrollBar_t1190 * __this, GameObject_t9 * ___go, bool ___isPressed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::OnDragBackground(UnityEngine.GameObject,UnityEngine.Vector2)
 void UIScrollBar_OnDragBackground_m37716 (UIScrollBar_t1190 * __this, GameObject_t9 * ___go, Vector2_t12  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::OnPressForeground(UnityEngine.GameObject,System.Boolean)
 void UIScrollBar_OnPressForeground_m37717 (UIScrollBar_t1190 * __this, GameObject_t9 * ___go, bool ___isPressed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::OnDragForeground(UnityEngine.GameObject,UnityEngine.Vector2)
 void UIScrollBar_OnDragForeground_m37718 (UIScrollBar_t1190 * __this, GameObject_t9 * ___go, Vector2_t12  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::Start()
 void UIScrollBar_Start_m37719 (UIScrollBar_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::Update()
 void UIScrollBar_Update_m37720 (UIScrollBar_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::ForceUpdate()
 void UIScrollBar_ForceUpdate_m37721 (UIScrollBar_t1190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
