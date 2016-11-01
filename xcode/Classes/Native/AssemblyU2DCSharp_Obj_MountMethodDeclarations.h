#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Obj_Mount
struct Obj_Mount_t4395;
// Games.ObjAnimModule.ObjAnimModel
struct ObjAnimModel_t4799;
// Games.LogicObj.Obj_OtherPlayer
struct Obj_OtherPlayer_t1655;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// Games.GlobeDefine.CharacterDefine/MountAction
#include "AssemblyU2DCSharp_Games_GlobeDefine_CharacterDefine_MountAct.h"

// System.Void Obj_Mount::.ctor()
 void Obj_Mount__ctor_m34103 (Obj_Mount_t4395 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.ObjAnimModule.ObjAnimModel Obj_Mount::get_MountPlayer()
 ObjAnimModel_t4799 * Obj_Mount_get_MountPlayer_m34104 (Obj_Mount_t4395 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_Mount::set_MountPlayer(Games.ObjAnimModule.ObjAnimModel)
 void Obj_Mount_set_MountPlayer_m34105 (Obj_Mount_t4395 * __this, ObjAnimModel_t4799 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.LogicObj.Obj_OtherPlayer Obj_Mount::get_PlayerObj()
 Obj_OtherPlayer_t1655 * Obj_Mount_get_PlayerObj_m34106 (Obj_Mount_t4395 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_Mount::set_PlayerObj(Games.LogicObj.Obj_OtherPlayer)
 void Obj_Mount_set_PlayerObj_m34107 (Obj_Mount_t4395 * __this, Obj_OtherPlayer_t1655 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Obj_Mount::get_MountID()
 int32_t Obj_Mount_get_MountID_m34108 (Obj_Mount_t4395 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_Mount::set_MountID(System.Int32)
 void Obj_Mount_set_MountID_m34109 (Obj_Mount_t4395 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_Mount::Start()
 void Obj_Mount_Start_m34110 (Obj_Mount_t4395 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_Mount::InitMount(Games.LogicObj.Obj_OtherPlayer,System.Int32)
 void Obj_Mount_InitMount_m34111 (Obj_Mount_t4395 * __this, Obj_OtherPlayer_t1655 * ___PlayerObj, int32_t ___nMountID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_Mount::OnAsycLoadMount(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void Obj_Mount_OnAsycLoadMount_m34112 (Object_t * __this/* static, unused */, String_t* ___modelName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_Mount::ChangeMount(Games.LogicObj.Obj_OtherPlayer,System.Int32)
 void Obj_Mount_ChangeMount_m34113 (Obj_Mount_t4395 * __this, Obj_OtherPlayer_t1655 * ___PlayerObj, int32_t ___nMountID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_Mount::OnAsycLoadChangeMount(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void Obj_Mount_OnAsycLoadChangeMount_m34114 (Object_t * __this/* static, unused */, String_t* ___modelName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_Mount::RideMount(Games.LogicObj.Obj_OtherPlayer,System.Int32)
 void Obj_Mount_RideMount_m34115 (Object_t * __this/* static, unused */, Obj_OtherPlayer_t1655 * ___PlayerObj, int32_t ___nMountID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_Mount::UnMount(Games.LogicObj.Obj_OtherPlayer)
 void Obj_Mount_UnMount_m34116 (Object_t * __this/* static, unused */, Obj_OtherPlayer_t1655 * ___PlayerObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Obj_Mount::GetMountAnimation(Games.GlobeDefine.CharacterDefine/MountAction,Games.LogicObj.Obj_Character)
 int32_t Obj_Mount_GetMountAnimation_m34117 (Obj_Mount_t4395 * __this, int32_t ___value, Obj_Character_t1772 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_Mount::PlayMountPlayerAnima(Games.GlobeDefine.CharacterDefine/MountAction,Games.LogicObj.Obj_Character)
 void Obj_Mount_PlayMountPlayerAnima_m34118 (Obj_Mount_t4395 * __this, int32_t ___value, Obj_Character_t1772 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Obj_Mount::DestroyMount(Obj_Mount)
 void Obj_Mount_DestroyMount_m34119 (Object_t * __this/* static, unused */, Obj_Mount_t4395 * ___MountObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
