#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UICamera
struct UICamera_t5405;
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UICamera/MouseOrTouch
struct MouseOrTouch_t5399;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UICamera/DepthEntry
#include "AssemblyU2DCSharp_UICamera_DepthEntry.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UICamera::.ctor()
 void UICamera__ctor_m38249 (UICamera_t5405 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::.cctor()
 void UICamera__cctor_m38250 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_handlesEvents()
 bool UICamera_get_handlesEvents_m38251 (UICamera_t5405 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UICamera::get_cachedCamera()
 Camera_t38 * UICamera_get_cachedCamera_m38252 (UICamera_t5405 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_TouchFingerID()
 int32_t UICamera_get_TouchFingerID_m38253 (UICamera_t5405 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_TouchFingerID(System.Int32)
 void UICamera_set_TouchFingerID_m38254 (UICamera_t5405 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICamera::get_selectedObject()
 GameObject_t9 * UICamera_get_selectedObject_m38255 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_selectedObject(UnityEngine.GameObject)
 void UICamera_set_selectedObject_m38256 (Object_t * __this/* static, unused */, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_touchCount()
 int32_t UICamera_get_touchCount_m38257 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_dragCount()
 int32_t UICamera_get_dragCount_m38258 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnApplicationQuit()
 void UICamera_OnApplicationQuit_m38259 (UICamera_t5405 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UICamera::get_mainCamera()
 Camera_t38 * UICamera_get_mainCamera_m38260 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::get_eventHandler()
 UICamera_t5405 * UICamera_get_eventHandler_m38261 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::CompareFunc(UICamera,UICamera)
 int32_t UICamera_CompareFunc_m38262 (Object_t * __this/* static, unused */, UICamera_t5405 * ___a, UICamera_t5405 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::Raycast(UnityEngine.Vector3,UnityEngine.RaycastHit&)
 bool UICamera_Raycast_m38263 (Object_t * __this/* static, unused */, Vector3_t121  ___inPos, RaycastHit_t11 * ___hit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsVisible(UnityEngine.RaycastHit&)
 bool UICamera_IsVisible_m38264 (Object_t * __this/* static, unused */, RaycastHit_t11 * ___hit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsVisible(UICamera/DepthEntry&)
 bool UICamera_IsVisible_m38265 (Object_t * __this/* static, unused */, DepthEntry_t5402 * ___de, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::FindCameraForLayer(System.Int32)
 UICamera_t5405 * UICamera_FindCameraForLayer_m38266 (Object_t * __this/* static, unused */, int32_t ___layer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(UnityEngine.KeyCode,UnityEngine.KeyCode)
 int32_t UICamera_GetDirection_m38267 (Object_t * __this/* static, unused */, int32_t ___up, int32_t ___down, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode)
 int32_t UICamera_GetDirection_m38268 (Object_t * __this/* static, unused */, int32_t ___up0, int32_t ___up1, int32_t ___down0, int32_t ___down1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(System.String)
 int32_t UICamera_GetDirection_m38269 (Object_t * __this/* static, unused */, String_t* ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsHighlighted(UnityEngine.GameObject)
 bool UICamera_IsHighlighted_m38270 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Highlight(UnityEngine.GameObject,System.Boolean)
 void UICamera_Highlight_m38271 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, bool ___highlighted, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Notify(UnityEngine.GameObject,System.String,System.Object)
 void UICamera_Notify_m38272 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, String_t* ___funcName, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera::GetTouch(System.Int32)
 MouseOrTouch_t5399 * UICamera_GetTouch_m38273 (Object_t * __this/* static, unused */, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::RemoveTouch(System.Int32)
 void UICamera_RemoveTouch_m38274 (Object_t * __this/* static, unused */, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Awake()
 void UICamera_Awake_m38275 (UICamera_t5405 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnEnable()
 void UICamera_OnEnable_m38276 (UICamera_t5405 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnDisable()
 void UICamera_OnDisable_m38277 (UICamera_t5405 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::FixedUpdate()
 void UICamera_FixedUpdate_m38278 (UICamera_t5405 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Update()
 void UICamera_Update_m38279 (UICamera_t5405 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessMouse()
 void UICamera_ProcessMouse_m38280 (UICamera_t5405 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessTouches()
 void UICamera_ProcessTouches_m38281 (UICamera_t5405 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessOthers()
 void UICamera_ProcessOthers_m38282 (UICamera_t5405 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessTouch(System.Boolean,System.Boolean)
 void UICamera_ProcessTouch_m38283 (UICamera_t5405 * __this, bool ___pressed, bool ___unpressed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ShowTooltip(System.Boolean)
 void UICamera_ShowTooltip_m38284 (UICamera_t5405 * __this, bool ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::<Raycast>m__33(UICamera/DepthEntry,UICamera/DepthEntry)
 int32_t UICamera_U3CRaycastU3Em__33_m38285 (Object_t * __this/* static, unused */, DepthEntry_t5402  ___r1, DepthEntry_t5402  ___r2, MethodInfo* method) IL2CPP_METHOD_ATTR;
