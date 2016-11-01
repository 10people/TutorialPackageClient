#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TeleportPoint
struct TeleportPoint_t4526;
// UnityEngine.GameObject
struct GameObject_t9;
// GCGame.Table.Tab_Teleport
struct Tab_Teleport_t681;

// System.Void TeleportPoint::.ctor()
 void TeleportPoint__ctor_m32481 (TeleportPoint_t4526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject TeleportPoint::get_HeadInfoBoard()
 GameObject_t9 * TeleportPoint_get_HeadInfoBoard_m32482 (TeleportPoint_t4526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeleportPoint::InitNameBoard()
 void TeleportPoint_InitNameBoard_m32483 (TeleportPoint_t4526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeleportPoint::OnLoadNameBoard(UnityEngine.GameObject)
 void TeleportPoint_OnLoadNameBoard_m32484 (TeleportPoint_t4526 * __this, GameObject_t9 * ___objNameBoard, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeleportPoint::Start()
 void TeleportPoint_Start_m32485 (TeleportPoint_t4526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeleportPoint::OnBecameVisible()
 void TeleportPoint_OnBecameVisible_m32486 (TeleportPoint_t4526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeleportPoint::OnBecameInvisible()
 void TeleportPoint_OnBecameInvisible_m32487 (TeleportPoint_t4526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeleportPoint::FixedUpdate()
 void TeleportPoint_FixedUpdate_m32488 (TeleportPoint_t4526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeleportPoint::EnterNonePKValueSceneOK()
 void TeleportPoint_EnterNonePKValueSceneOK_m32489 (TeleportPoint_t4526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeleportPoint::EnterNonePKValueSceneCancel()
 void TeleportPoint_EnterNonePKValueSceneCancel_m32490 (TeleportPoint_t4526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeleportPoint::SendChangeScene(GCGame.Table.Tab_Teleport)
 void TeleportPoint_SendChangeScene_m32491 (TeleportPoint_t4526 * __this, Tab_Teleport_t681 * ___teleport, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeleportPoint::SendOpenCopyScene()
 void TeleportPoint_SendOpenCopyScene_m32492 (TeleportPoint_t4526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeleportPoint::SendLeaveCopyScene()
 void TeleportPoint_SendLeaveCopyScene_m32493 (TeleportPoint_t4526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeleportPoint::CloseMessageBox()
 void TeleportPoint_CloseMessageBox_m32494 (TeleportPoint_t4526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TeleportPoint::IsCanPK(System.Int32)
 bool TeleportPoint_IsCanPK_m32495 (Object_t * __this/* static, unused */, int32_t ___nSceneClassID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TeleportPoint::IsIncPKValue(System.Int32)
 bool TeleportPoint_IsIncPKValue_m32496 (Object_t * __this/* static, unused */, int32_t ___nSceneClassID, MethodInfo* method) IL2CPP_METHOD_ATTR;
