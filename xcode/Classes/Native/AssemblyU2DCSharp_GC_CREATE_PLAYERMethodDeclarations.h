#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_CREATE_PLAYER
struct GC_CREATE_PLAYER_t2947;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_CREATE_PLAYER::.ctor()
 void GC_CREATE_PLAYER__ctor_m16542 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasServerId()
 bool GC_CREATE_PLAYER_get_HasServerId_m16543 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_ServerId()
 int32_t GC_CREATE_PLAYER_get_ServerId_m16544 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_ServerId(System.Int32)
 void GC_CREATE_PLAYER_set_ServerId_m16545 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetServerId(System.Int32)
 void GC_CREATE_PLAYER_SetServerId_m16546 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasGuid()
 bool GC_CREATE_PLAYER_get_HasGuid_m16547 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_CREATE_PLAYER::get_Guid()
 uint64_t GC_CREATE_PLAYER_get_Guid_m16548 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_Guid(System.UInt64)
 void GC_CREATE_PLAYER_set_Guid_m16549 (GC_CREATE_PLAYER_t2947 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetGuid(System.UInt64)
 void GC_CREATE_PLAYER_SetGuid_m16550 (GC_CREATE_PLAYER_t2947 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasSceneInst()
 bool GC_CREATE_PLAYER_get_HasSceneInst_m16551 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_SceneInst()
 int32_t GC_CREATE_PLAYER_get_SceneInst_m16552 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_SceneInst(System.Int32)
 void GC_CREATE_PLAYER_set_SceneInst_m16553 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetSceneInst(System.Int32)
 void GC_CREATE_PLAYER_SetSceneInst_m16554 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasSceneClass()
 bool GC_CREATE_PLAYER_get_HasSceneClass_m16555 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_SceneClass()
 int32_t GC_CREATE_PLAYER_get_SceneClass_m16556 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_SceneClass(System.Int32)
 void GC_CREATE_PLAYER_set_SceneClass_m16557 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetSceneClass(System.Int32)
 void GC_CREATE_PLAYER_SetSceneClass_m16558 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasDataId()
 bool GC_CREATE_PLAYER_get_HasDataId_m16559 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_DataId()
 int32_t GC_CREATE_PLAYER_get_DataId_m16560 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_DataId(System.Int32)
 void GC_CREATE_PLAYER_set_DataId_m16561 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetDataId(System.Int32)
 void GC_CREATE_PLAYER_SetDataId_m16562 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasPosX()
 bool GC_CREATE_PLAYER_get_HasPosX_m16563 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_PosX()
 int32_t GC_CREATE_PLAYER_get_PosX_m16564 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_PosX(System.Int32)
 void GC_CREATE_PLAYER_set_PosX_m16565 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetPosX(System.Int32)
 void GC_CREATE_PLAYER_SetPosX_m16566 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasPosZ()
 bool GC_CREATE_PLAYER_get_HasPosZ_m16567 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_PosZ()
 int32_t GC_CREATE_PLAYER_get_PosZ_m16568 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_PosZ(System.Int32)
 void GC_CREATE_PLAYER_set_PosZ_m16569 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetPosZ(System.Int32)
 void GC_CREATE_PLAYER_SetPosZ_m16570 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasCurforce()
 bool GC_CREATE_PLAYER_get_HasCurforce_m16571 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_Curforce()
 int32_t GC_CREATE_PLAYER_get_Curforce_m16572 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_Curforce(System.Int32)
 void GC_CREATE_PLAYER_set_Curforce_m16573 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetCurforce(System.Int32)
 void GC_CREATE_PLAYER_SetCurforce_m16574 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasName()
 bool GC_CREATE_PLAYER_get_HasName_m16575 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_CREATE_PLAYER::get_Name()
 String_t* GC_CREATE_PLAYER_get_Name_m16576 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_Name(System.String)
 void GC_CREATE_PLAYER_set_Name_m16577 (GC_CREATE_PLAYER_t2947 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetName(System.String)
 void GC_CREATE_PLAYER_SetName_m16578 (GC_CREATE_PLAYER_t2947 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasCurProfession()
 bool GC_CREATE_PLAYER_get_HasCurProfession_m16579 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_CurProfession()
 int32_t GC_CREATE_PLAYER_get_CurProfession_m16580 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_CurProfession(System.Int32)
 void GC_CREATE_PLAYER_set_CurProfession_m16581 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetCurProfession(System.Int32)
 void GC_CREATE_PLAYER_SetCurProfession_m16582 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasFacedir()
 bool GC_CREATE_PLAYER_get_HasFacedir_m16583 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_Facedir()
 int32_t GC_CREATE_PLAYER_get_Facedir_m16584 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_Facedir(System.Int32)
 void GC_CREATE_PLAYER_set_Facedir_m16585 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetFacedir(System.Int32)
 void GC_CREATE_PLAYER_SetFacedir_m16586 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasTitlename()
 bool GC_CREATE_PLAYER_get_HasTitlename_m16587 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_CREATE_PLAYER::get_Titlename()
 String_t* GC_CREATE_PLAYER_get_Titlename_m16588 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_Titlename(System.String)
 void GC_CREATE_PLAYER_set_Titlename_m16589 (GC_CREATE_PLAYER_t2947 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetTitlename(System.String)
 void GC_CREATE_PLAYER_SetTitlename_m16590 (GC_CREATE_PLAYER_t2947 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasIsInPkList()
 bool GC_CREATE_PLAYER_get_HasIsInPkList_m16591 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_IsInPkList()
 int32_t GC_CREATE_PLAYER_get_IsInPkList_m16592 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_IsInPkList(System.Int32)
 void GC_CREATE_PLAYER_set_IsInPkList_m16593 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetIsInPkList(System.Int32)
 void GC_CREATE_PLAYER_SetIsInPkList_m16594 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasIsDie()
 bool GC_CREATE_PLAYER_get_HasIsDie_m16595 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_IsDie()
 int32_t GC_CREATE_PLAYER_get_IsDie_m16596 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_IsDie(System.Int32)
 void GC_CREATE_PLAYER_set_IsDie_m16597 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetIsDie(System.Int32)
 void GC_CREATE_PLAYER_SetIsDie_m16598 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasReliveTime()
 bool GC_CREATE_PLAYER_get_HasReliveTime_m16599 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_ReliveTime()
 int32_t GC_CREATE_PLAYER_get_ReliveTime_m16600 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_ReliveTime(System.Int32)
 void GC_CREATE_PLAYER_set_ReliveTime_m16601 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetReliveTime(System.Int32)
 void GC_CREATE_PLAYER_SetReliveTime_m16602 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasPKModle()
 bool GC_CREATE_PLAYER_get_HasPKModle_m16603 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_PKModle()
 int32_t GC_CREATE_PLAYER_get_PKModle_m16604 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_PKModle(System.Int32)
 void GC_CREATE_PLAYER_set_PKModle_m16605 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetPKModle(System.Int32)
 void GC_CREATE_PLAYER_SetPKModle_m16606 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasMountID()
 bool GC_CREATE_PLAYER_get_HasMountID_m16607 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_MountID()
 int32_t GC_CREATE_PLAYER_get_MountID_m16608 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_MountID(System.Int32)
 void GC_CREATE_PLAYER_set_MountID_m16609 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetMountID(System.Int32)
 void GC_CREATE_PLAYER_SetMountID_m16610 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasMoveSpeed()
 bool GC_CREATE_PLAYER_get_HasMoveSpeed_m16611 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_MoveSpeed()
 int32_t GC_CREATE_PLAYER_get_MoveSpeed_m16612 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_MoveSpeed(System.Int32)
 void GC_CREATE_PLAYER_set_MoveSpeed_m16613 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetMoveSpeed(System.Int32)
 void GC_CREATE_PLAYER_SetMoveSpeed_m16614 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasModelVisualID()
 bool GC_CREATE_PLAYER_get_HasModelVisualID_m16615 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_ModelVisualID()
 int32_t GC_CREATE_PLAYER_get_ModelVisualID_m16616 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_ModelVisualID(System.Int32)
 void GC_CREATE_PLAYER_set_ModelVisualID_m16617 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetModelVisualID(System.Int32)
 void GC_CREATE_PLAYER_SetModelVisualID_m16618 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasWeaponDataID()
 bool GC_CREATE_PLAYER_get_HasWeaponDataID_m16619 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_WeaponDataID()
 int32_t GC_CREATE_PLAYER_get_WeaponDataID_m16620 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_WeaponDataID(System.Int32)
 void GC_CREATE_PLAYER_set_WeaponDataID_m16621 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetWeaponDataID(System.Int32)
 void GC_CREATE_PLAYER_SetWeaponDataID_m16622 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasWeaponEffectGem()
 bool GC_CREATE_PLAYER_get_HasWeaponEffectGem_m16623 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_WeaponEffectGem()
 int32_t GC_CREATE_PLAYER_get_WeaponEffectGem_m16624 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_WeaponEffectGem(System.Int32)
 void GC_CREATE_PLAYER_set_WeaponEffectGem_m16625 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetWeaponEffectGem(System.Int32)
 void GC_CREATE_PLAYER_SetWeaponEffectGem_m16626 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasCurTitleID()
 bool GC_CREATE_PLAYER_get_HasCurTitleID_m16627 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_CurTitleID()
 int32_t GC_CREATE_PLAYER_get_CurTitleID_m16628 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_CurTitleID(System.Int32)
 void GC_CREATE_PLAYER_set_CurTitleID_m16629 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetCurTitleID(System.Int32)
 void GC_CREATE_PLAYER_SetCurTitleID_m16630 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasStealthLev()
 bool GC_CREATE_PLAYER_get_HasStealthLev_m16631 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_StealthLev()
 int32_t GC_CREATE_PLAYER_get_StealthLev_m16632 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_StealthLev(System.Int32)
 void GC_CREATE_PLAYER_set_StealthLev_m16633 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetStealthLev(System.Int32)
 void GC_CREATE_PLAYER_SetStealthLev_m16634 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasVipCost()
 bool GC_CREATE_PLAYER_get_HasVipCost_m16635 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_VipCost()
 int32_t GC_CREATE_PLAYER_get_VipCost_m16636 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_VipCost(System.Int32)
 void GC_CREATE_PLAYER_set_VipCost_m16637 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetVipCost(System.Int32)
 void GC_CREATE_PLAYER_SetVipCost_m16638 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasGuildGuid()
 bool GC_CREATE_PLAYER_get_HasGuildGuid_m16639 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_CREATE_PLAYER::get_GuildGuid()
 uint64_t GC_CREATE_PLAYER_get_GuildGuid_m16640 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_GuildGuid(System.UInt64)
 void GC_CREATE_PLAYER_set_GuildGuid_m16641 (GC_CREATE_PLAYER_t2947 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetGuildGuid(System.UInt64)
 void GC_CREATE_PLAYER_SetGuildGuid_m16642 (GC_CREATE_PLAYER_t2947 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasCombatValue()
 bool GC_CREATE_PLAYER_get_HasCombatValue_m16643 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_CombatValue()
 int32_t GC_CREATE_PLAYER_get_CombatValue_m16644 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_CombatValue(System.Int32)
 void GC_CREATE_PLAYER_set_CombatValue_m16645 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetCombatValue(System.Int32)
 void GC_CREATE_PLAYER_SetCombatValue_m16646 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasBindparent()
 bool GC_CREATE_PLAYER_get_HasBindparent_m16647 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_Bindparent()
 int32_t GC_CREATE_PLAYER_get_Bindparent_m16648 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_Bindparent(System.Int32)
 void GC_CREATE_PLAYER_set_Bindparent_m16649 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetBindparent(System.Int32)
 void GC_CREATE_PLAYER_SetBindparent_m16650 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_CREATE_PLAYER::get_bindchildrenList()
 Object_t* GC_CREATE_PLAYER_get_bindchildrenList_m16651 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_bindchildrenCount()
 int32_t GC_CREATE_PLAYER_get_bindchildrenCount_m16652 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::GetBindchildren(System.Int32)
 int32_t GC_CREATE_PLAYER_GetBindchildren_m16653 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::AddBindchildren(System.Int32)
 void GC_CREATE_PLAYER_AddBindchildren_m16654 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasIsEnemy2Self()
 bool GC_CREATE_PLAYER_get_HasIsEnemy2Self_m16655 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_IsEnemy2Self()
 int32_t GC_CREATE_PLAYER_get_IsEnemy2Self_m16656 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_IsEnemy2Self(System.Int32)
 void GC_CREATE_PLAYER_set_IsEnemy2Self_m16657 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetIsEnemy2Self(System.Int32)
 void GC_CREATE_PLAYER_SetIsEnemy2Self_m16658 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasPaoshangState()
 bool GC_CREATE_PLAYER_get_HasPaoshangState_m16659 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_PaoshangState()
 int32_t GC_CREATE_PLAYER_get_PaoshangState_m16660 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_PaoshangState(System.Int32)
 void GC_CREATE_PLAYER_set_PaoshangState_m16661 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetPaoshangState(System.Int32)
 void GC_CREATE_PLAYER_SetPaoshangState_m16662 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasLightSkillLevel()
 bool GC_CREATE_PLAYER_get_HasLightSkillLevel_m16663 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_LightSkillLevel()
 int32_t GC_CREATE_PLAYER_get_LightSkillLevel_m16664 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_LightSkillLevel(System.Int32)
 void GC_CREATE_PLAYER_set_LightSkillLevel_m16665 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetLightSkillLevel(System.Int32)
 void GC_CREATE_PLAYER_SetLightSkillLevel_m16666 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasFollowState()
 bool GC_CREATE_PLAYER_get_HasFollowState_m16667 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_FollowState()
 int32_t GC_CREATE_PLAYER_get_FollowState_m16668 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_FollowState(System.Int32)
 void GC_CREATE_PLAYER_set_FollowState_m16669 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetFollowState(System.Int32)
 void GC_CREATE_PLAYER_SetFollowState_m16670 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasChangeState()
 bool GC_CREATE_PLAYER_get_HasChangeState_m16671 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_ChangeState()
 int32_t GC_CREATE_PLAYER_get_ChangeState_m16672 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_ChangeState(System.Int32)
 void GC_CREATE_PLAYER_set_ChangeState_m16673 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetChangeState(System.Int32)
 void GC_CREATE_PLAYER_SetChangeState_m16674 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::get_HasFlyWingId()
 bool GC_CREATE_PLAYER_get_HasFlyWingId_m16675 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::get_FlyWingId()
 int32_t GC_CREATE_PLAYER_get_FlyWingId_m16676 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::set_FlyWingId(System.Int32)
 void GC_CREATE_PLAYER_set_FlyWingId_m16677 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::SetFlyWingId(System.Int32)
 void GC_CREATE_PLAYER_SetFlyWingId_m16678 (GC_CREATE_PLAYER_t2947 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CREATE_PLAYER::SerializedSize()
 int32_t GC_CREATE_PLAYER_SerializedSize_m16679 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CREATE_PLAYER::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_CREATE_PLAYER_WriteTo_m16680 (GC_CREATE_PLAYER_t2947 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_CREATE_PLAYER::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_CREATE_PLAYER_MergeFrom_m16681 (GC_CREATE_PLAYER_t2947 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CREATE_PLAYER::IsInitialized()
 bool GC_CREATE_PLAYER_IsInitialized_m16682 (GC_CREATE_PLAYER_t2947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
