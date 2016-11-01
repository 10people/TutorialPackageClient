#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_WULIN_OPPONENTVIEW
struct GC_WULIN_OPPONENTVIEW_t3505;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_WULIN_OPPONENTVIEW::.ctor()
 void GC_WULIN_OPPONENTVIEW__ctor_m26461 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WULIN_OPPONENTVIEW::get_HasProfession()
 bool GC_WULIN_OPPONENTVIEW_get_HasProfession_m26462 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_OPPONENTVIEW::get_Profession()
 int32_t GC_WULIN_OPPONENTVIEW_get_Profession_m26463 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::set_Profession(System.Int32)
 void GC_WULIN_OPPONENTVIEW_set_Profession_m26464 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::SetProfession(System.Int32)
 void GC_WULIN_OPPONENTVIEW_SetProfession_m26465 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WULIN_OPPONENTVIEW::get_HasCombatnum()
 bool GC_WULIN_OPPONENTVIEW_get_HasCombatnum_m26466 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_OPPONENTVIEW::get_Combatnum()
 int32_t GC_WULIN_OPPONENTVIEW_get_Combatnum_m26467 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::set_Combatnum(System.Int32)
 void GC_WULIN_OPPONENTVIEW_set_Combatnum_m26468 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::SetCombatnum(System.Int32)
 void GC_WULIN_OPPONENTVIEW_SetCombatnum_m26469 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WULIN_OPPONENTVIEW::get_HasHp()
 bool GC_WULIN_OPPONENTVIEW_get_HasHp_m26470 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_OPPONENTVIEW::get_Hp()
 int32_t GC_WULIN_OPPONENTVIEW_get_Hp_m26471 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::set_Hp(System.Int32)
 void GC_WULIN_OPPONENTVIEW_set_Hp_m26472 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::SetHp(System.Int32)
 void GC_WULIN_OPPONENTVIEW_SetHp_m26473 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WULIN_OPPONENTVIEW::get_HasMp()
 bool GC_WULIN_OPPONENTVIEW_get_HasMp_m26474 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_OPPONENTVIEW::get_Mp()
 int32_t GC_WULIN_OPPONENTVIEW_get_Mp_m26475 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::set_Mp(System.Int32)
 void GC_WULIN_OPPONENTVIEW_set_Mp_m26476 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::SetMp(System.Int32)
 void GC_WULIN_OPPONENTVIEW_SetMp_m26477 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WULIN_OPPONENTVIEW::get_HasAttack()
 bool GC_WULIN_OPPONENTVIEW_get_HasAttack_m26478 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_OPPONENTVIEW::get_Attack()
 int32_t GC_WULIN_OPPONENTVIEW_get_Attack_m26479 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::set_Attack(System.Int32)
 void GC_WULIN_OPPONENTVIEW_set_Attack_m26480 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::SetAttack(System.Int32)
 void GC_WULIN_OPPONENTVIEW_SetAttack_m26481 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WULIN_OPPONENTVIEW::get_HasDefense()
 bool GC_WULIN_OPPONENTVIEW_get_HasDefense_m26482 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_OPPONENTVIEW::get_Defense()
 int32_t GC_WULIN_OPPONENTVIEW_get_Defense_m26483 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::set_Defense(System.Int32)
 void GC_WULIN_OPPONENTVIEW_set_Defense_m26484 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::SetDefense(System.Int32)
 void GC_WULIN_OPPONENTVIEW_SetDefense_m26485 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WULIN_OPPONENTVIEW::get_HasCritical()
 bool GC_WULIN_OPPONENTVIEW_get_HasCritical_m26486 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_OPPONENTVIEW::get_Critical()
 int32_t GC_WULIN_OPPONENTVIEW_get_Critical_m26487 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::set_Critical(System.Int32)
 void GC_WULIN_OPPONENTVIEW_set_Critical_m26488 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::SetCritical(System.Int32)
 void GC_WULIN_OPPONENTVIEW_SetCritical_m26489 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WULIN_OPPONENTVIEW::get_HasSpeed()
 bool GC_WULIN_OPPONENTVIEW_get_HasSpeed_m26490 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_OPPONENTVIEW::get_Speed()
 int32_t GC_WULIN_OPPONENTVIEW_get_Speed_m26491 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::set_Speed(System.Int32)
 void GC_WULIN_OPPONENTVIEW_set_Speed_m26492 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::SetSpeed(System.Int32)
 void GC_WULIN_OPPONENTVIEW_SetSpeed_m26493 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WULIN_OPPONENTVIEW::get_HasDodge()
 bool GC_WULIN_OPPONENTVIEW_get_HasDodge_m26494 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_OPPONENTVIEW::get_Dodge()
 int32_t GC_WULIN_OPPONENTVIEW_get_Dodge_m26495 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::set_Dodge(System.Int32)
 void GC_WULIN_OPPONENTVIEW_set_Dodge_m26496 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::SetDodge(System.Int32)
 void GC_WULIN_OPPONENTVIEW_SetDodge_m26497 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WULIN_OPPONENTVIEW::get_HasName()
 bool GC_WULIN_OPPONENTVIEW_get_HasName_m26498 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_WULIN_OPPONENTVIEW::get_Name()
 String_t* GC_WULIN_OPPONENTVIEW_get_Name_m26499 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::set_Name(System.String)
 void GC_WULIN_OPPONENTVIEW_set_Name_m26500 (GC_WULIN_OPPONENTVIEW_t3505 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::SetName(System.String)
 void GC_WULIN_OPPONENTVIEW_SetName_m26501 (GC_WULIN_OPPONENTVIEW_t3505 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WULIN_OPPONENTVIEW::get_HasLevel()
 bool GC_WULIN_OPPONENTVIEW_get_HasLevel_m26502 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_OPPONENTVIEW::get_Level()
 int32_t GC_WULIN_OPPONENTVIEW_get_Level_m26503 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::set_Level(System.Int32)
 void GC_WULIN_OPPONENTVIEW_set_Level_m26504 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::SetLevel(System.Int32)
 void GC_WULIN_OPPONENTVIEW_SetLevel_m26505 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WULIN_OPPONENTVIEW::get_HasPos()
 bool GC_WULIN_OPPONENTVIEW_get_HasPos_m26506 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_OPPONENTVIEW::get_Pos()
 int32_t GC_WULIN_OPPONENTVIEW_get_Pos_m26507 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::set_Pos(System.Int32)
 void GC_WULIN_OPPONENTVIEW_set_Pos_m26508 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::SetPos(System.Int32)
 void GC_WULIN_OPPONENTVIEW_SetPos_m26509 (GC_WULIN_OPPONENTVIEW_t3505 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WULIN_OPPONENTVIEW::get_HasGuid()
 bool GC_WULIN_OPPONENTVIEW_get_HasGuid_m26510 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_WULIN_OPPONENTVIEW::get_Guid()
 uint64_t GC_WULIN_OPPONENTVIEW_get_Guid_m26511 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::set_Guid(System.UInt64)
 void GC_WULIN_OPPONENTVIEW_set_Guid_m26512 (GC_WULIN_OPPONENTVIEW_t3505 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::SetGuid(System.UInt64)
 void GC_WULIN_OPPONENTVIEW_SetGuid_m26513 (GC_WULIN_OPPONENTVIEW_t3505 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_OPPONENTVIEW::SerializedSize()
 int32_t GC_WULIN_OPPONENTVIEW_SerializedSize_m26514 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_OPPONENTVIEW::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_WULIN_OPPONENTVIEW_WriteTo_m26515 (GC_WULIN_OPPONENTVIEW_t3505 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_WULIN_OPPONENTVIEW::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_WULIN_OPPONENTVIEW_MergeFrom_m26516 (GC_WULIN_OPPONENTVIEW_t3505 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WULIN_OPPONENTVIEW::IsInitialized()
 bool GC_WULIN_OPPONENTVIEW_IsInitialized_m26517 (GC_WULIN_OPPONENTVIEW_t3505 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
