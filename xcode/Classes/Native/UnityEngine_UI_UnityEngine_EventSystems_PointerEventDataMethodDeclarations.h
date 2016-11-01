#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t5984;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5982;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Inp.h"

// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
 void PointerEventData__ctor_m42513 (PointerEventData_t5984 * __this, EventSystem_t5982 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
 GameObject_t9 * PointerEventData_get_pointerEnter_m42514 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
 void PointerEventData_set_pointerEnter_m42515 (PointerEventData_t5984 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
 GameObject_t9 * PointerEventData_get_lastPress_m42516 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_lastPress(UnityEngine.GameObject)
 void PointerEventData_set_lastPress_m42517 (PointerEventData_t5984 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_rawPointerPress()
 GameObject_t9 * PointerEventData_get_rawPointerPress_m42518 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
 void PointerEventData_set_rawPointerPress_m42519 (PointerEventData_t5984 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
 GameObject_t9 * PointerEventData_get_pointerDrag_m42520 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
 void PointerEventData_set_pointerDrag_m42521 (PointerEventData_t5984 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
 RaycastResult_t5986  PointerEventData_get_pointerCurrentRaycast_m42522 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
 void PointerEventData_set_pointerCurrentRaycast_m42523 (PointerEventData_t5984 * __this, RaycastResult_t5986  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerPressRaycast()
 RaycastResult_t5986  PointerEventData_get_pointerPressRaycast_m42524 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
 void PointerEventData_set_pointerPressRaycast_m42525 (PointerEventData_t5984 * __this, RaycastResult_t5986  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
 bool PointerEventData_get_eligibleForClick_m42526 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
 void PointerEventData_set_eligibleForClick_m42527 (PointerEventData_t5984 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
 int32_t PointerEventData_get_pointerId_m42528 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerId(System.Int32)
 void PointerEventData_set_pointerId_m42529 (PointerEventData_t5984 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
 Vector2_t12  PointerEventData_get_position_m42530 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
 void PointerEventData_set_position_m42531 (PointerEventData_t5984 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
 Vector2_t12  PointerEventData_get_delta_m42532 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
 void PointerEventData_set_delta_m42533 (PointerEventData_t5984 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
 Vector2_t12  PointerEventData_get_pressPosition_m42534 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
 void PointerEventData_set_pressPosition_m42535 (PointerEventData_t5984 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldPosition()
 Vector3_t121  PointerEventData_get_worldPosition_m42536 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldPosition(UnityEngine.Vector3)
 void PointerEventData_set_worldPosition_m42537 (PointerEventData_t5984 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldNormal()
 Vector3_t121  PointerEventData_get_worldNormal_m42538 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldNormal(UnityEngine.Vector3)
 void PointerEventData_set_worldNormal_m42539 (PointerEventData_t5984 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
 float PointerEventData_get_clickTime_m42540 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
 void PointerEventData_set_clickTime_m42541 (PointerEventData_t5984 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
 int32_t PointerEventData_get_clickCount_m42542 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
 void PointerEventData_set_clickCount_m42543 (PointerEventData_t5984 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
 Vector2_t12  PointerEventData_get_scrollDelta_m42544 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_scrollDelta(UnityEngine.Vector2)
 void PointerEventData_set_scrollDelta_m42545 (PointerEventData_t5984 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_useDragThreshold()
 bool PointerEventData_get_useDragThreshold_m42546 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
 void PointerEventData_set_useDragThreshold_m42547 (PointerEventData_t5984 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
 bool PointerEventData_get_dragging_m42548 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
 void PointerEventData_set_dragging_m42549 (PointerEventData_t5984 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
 int32_t PointerEventData_get_button_m42550 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
 void PointerEventData_set_button_m42551 (PointerEventData_t5984 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsPointerMoving()
 bool PointerEventData_IsPointerMoving_m42552 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsScrolling()
 bool PointerEventData_IsScrolling_m42553 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_enterEventCamera()
 Camera_t38 * PointerEventData_get_enterEventCamera_m42554 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
 Camera_t38 * PointerEventData_get_pressEventCamera_m42555 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
 GameObject_t9 * PointerEventData_get_pointerPress_m42556 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
 void PointerEventData_set_pointerPress_m42557 (PointerEventData_t5984 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerEventData::ToString()
 String_t* PointerEventData_ToString_m42558 (PointerEventData_t5984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
