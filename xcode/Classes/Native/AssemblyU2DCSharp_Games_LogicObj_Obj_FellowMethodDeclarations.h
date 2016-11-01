#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.LogicObj.Obj_Fellow
struct Obj_Fellow_t4475;
// Obj_Init_Data
struct Obj_Init_Data_t4391;
// UnityEngine.GameObject
struct GameObject_t9;
// Games.LogicObj.Obj_MainPlayer
struct Obj_MainPlayer_t1732;
// System.String
struct String_t;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Games.LogicObj.Obj_Fellow::.ctor()
 void Obj_Fellow__ctor_m31547 (Obj_Fellow_t4475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Fellow::Init(Obj_Init_Data)
 bool Obj_Fellow_Init_m31548 (Obj_Fellow_t4475 * __this, Obj_Init_Data_t4391 * ___initData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Fellow::OnBecameVisible()
 void Obj_Fellow_OnBecameVisible_m31549 (Obj_Fellow_t4475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Fellow::OnBecameInvisible()
 void Obj_Fellow_OnBecameInvisible_m31550 (Obj_Fellow_t4475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Fellow::FixedUpdate()
 void Obj_Fellow_FixedUpdate_m31551 (Obj_Fellow_t4475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Fellow::InitNameBoard()
 void Obj_Fellow_InitNameBoard_m31552 (Obj_Fellow_t4475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Fellow::OnLoadNameBoard(UnityEngine.GameObject)
 void Obj_Fellow_OnLoadNameBoard_m31553 (Obj_Fellow_t4475 * __this, GameObject_t9 * ___objNameBoard, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Games.LogicObj.Obj_Fellow::GetNameBoardColor()
 Color_t939  Obj_Fellow_GetNameBoardColor_m31554 (Obj_Fellow_t4475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_Fellow::get_Quality()
 int32_t Obj_Fellow_get_Quality_m31555 (Obj_Fellow_t4475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Fellow::set_Quality(System.Int32)
 void Obj_Fellow_set_Quality_m31556 (Obj_Fellow_t4475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_Fellow::get_OwnerObjId()
 int32_t Obj_Fellow_get_OwnerObjId_m31557 (Obj_Fellow_t4475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Fellow::set_OwnerObjId(System.Int32)
 void Obj_Fellow_set_OwnerObjId_m31558 (Obj_Fellow_t4475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Fellow::IsOwnedByMainPlayer()
 bool Obj_Fellow_IsOwnedByMainPlayer_m31559 (Obj_Fellow_t4475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Fellow::SetMoveSpeedAsMainPlayer()
 void Obj_Fellow_SetMoveSpeedAsMainPlayer_m31560 (Obj_Fellow_t4475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Fellow::UpdateFellowMove()
 void Obj_Fellow_UpdateFellowMove_m31561 (Obj_Fellow_t4475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Games.LogicObj.Obj_Fellow::GetFellowPos(Games.LogicObj.Obj_MainPlayer)
 Vector3_t121  Obj_Fellow_GetFellowPos_m31562 (Obj_Fellow_t4475 * __this, Obj_MainPlayer_t1732 * ___mainPlayer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Fellow::SetBordName(System.String)
 void Obj_Fellow_SetBordName_m31563 (Obj_Fellow_t4475 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
