#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Obj_FlyWing
struct Obj_FlyWing_t4493;
// Games.LogicObj.Obj_OtherPlayer
struct Obj_OtherPlayer_t1655;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;

// System.Void Obj_FlyWing::.ctor()
 void Obj_FlyWing__ctor_m33468 (Obj_FlyWing_t4493 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_FlyWing::Start()
 void Obj_FlyWing_Start_m33469 (Obj_FlyWing_t4493 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_FlyWing::ShowHideFlyWing(Games.LogicObj.Obj_OtherPlayer,System.Int32,System.Boolean)
 void Obj_FlyWing_ShowHideFlyWing_m33470 (Object_t * __this/* static, unused */, Obj_OtherPlayer_t1655 * ___playerObj, int32_t ___flyWingId, bool ___isShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_FlyWing::CancelEquipFlyWing(Games.LogicObj.Obj_OtherPlayer,System.Boolean)
 void Obj_FlyWing_CancelEquipFlyWing_m33471 (Object_t * __this/* static, unused */, Obj_OtherPlayer_t1655 * ___playerObj, bool ___isClear, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_FlyWing::EquipFlyWing(Games.LogicObj.Obj_OtherPlayer,System.Int32)
 void Obj_FlyWing_EquipFlyWing_m33472 (Object_t * __this/* static, unused */, Obj_OtherPlayer_t1655 * ___playerObj, int32_t ___flyWingId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_FlyWing::InitFlyWingObj(Games.LogicObj.Obj_OtherPlayer,System.Int32)
 void Obj_FlyWing_InitFlyWingObj_m33473 (Obj_FlyWing_t4493 * __this, Obj_OtherPlayer_t1655 * ___otherPlayer, int32_t ___flyWingId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_FlyWing::onAsyLoadFlyWing(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void Obj_FlyWing_onAsyLoadFlyWing_m33474 (Object_t * __this/* static, unused */, String_t* ___modeName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_FlyWing::DestoryFlyWing(Games.LogicObj.Obj_OtherPlayer)
 void Obj_FlyWing_DestoryFlyWing_m33475 (Object_t * __this/* static, unused */, Obj_OtherPlayer_t1655 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
