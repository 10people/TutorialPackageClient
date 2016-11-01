#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TBPan
struct TBPan_t126;
// TBPan/PanEventHandler
struct PanEventHandler_t127;
// DragGesture
struct DragGesture_t81;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void TBPan::.ctor()
 void TBPan__ctor_m392 (TBPan_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan::add_OnPan(TBPan/PanEventHandler)
 void TBPan_add_OnPan_m393 (TBPan_t126 * __this, PanEventHandler_t127 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan::remove_OnPan(TBPan/PanEventHandler)
 void TBPan_remove_OnPan_m394 (TBPan_t126 * __this, PanEventHandler_t127 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan::Awake()
 void TBPan_Awake_m395 (TBPan_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan::Start()
 void TBPan_Start_m396 (TBPan_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan::OnDrag(DragGesture)
 void TBPan_OnDrag_m397 (TBPan_t126 * __this, DragGesture_t81 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan::Update()
 void TBPan_Update_m398 (TBPan_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TBPan::ConstrainToPanningPlane(UnityEngine.Vector3)
 Vector3_t121  TBPan_ConstrainToPanningPlane_m399 (TBPan_t126 * __this, Vector3_t121  ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan::TeleportTo(UnityEngine.Vector3)
 void TBPan_TeleportTo_m400 (TBPan_t126 * __this, Vector3_t121  ___worldPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan::FlyTo(UnityEngine.Vector3)
 void TBPan_FlyTo_m401 (TBPan_t126 * __this, Vector3_t121  ___worldPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TBPan::ConstrainToMoveArea(UnityEngine.Vector3)
 Vector3_t121  TBPan_ConstrainToMoveArea_m402 (TBPan_t126 * __this, Vector3_t121  ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
