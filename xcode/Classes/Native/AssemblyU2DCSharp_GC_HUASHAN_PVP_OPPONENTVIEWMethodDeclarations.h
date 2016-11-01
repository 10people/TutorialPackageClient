#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_HUASHAN_PVP_OPPONENTVIEW
struct GC_HUASHAN_PVP_OPPONENTVIEW_t3176;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::.ctor()
 void GC_HUASHAN_PVP_OPPONENTVIEW__ctor_m20770 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_HUASHAN_PVP_OPPONENTVIEW::get_HasProfession()
 bool GC_HUASHAN_PVP_OPPONENTVIEW_get_HasProfession_m20771 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_HUASHAN_PVP_OPPONENTVIEW::get_Profession()
 int32_t GC_HUASHAN_PVP_OPPONENTVIEW_get_Profession_m20772 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::set_Profession(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_set_Profession_m20773 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::SetProfession(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_SetProfession_m20774 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_HUASHAN_PVP_OPPONENTVIEW::get_HasCombatnum()
 bool GC_HUASHAN_PVP_OPPONENTVIEW_get_HasCombatnum_m20775 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_HUASHAN_PVP_OPPONENTVIEW::get_Combatnum()
 int32_t GC_HUASHAN_PVP_OPPONENTVIEW_get_Combatnum_m20776 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::set_Combatnum(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_set_Combatnum_m20777 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::SetCombatnum(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_SetCombatnum_m20778 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_HUASHAN_PVP_OPPONENTVIEW::get_HasHp()
 bool GC_HUASHAN_PVP_OPPONENTVIEW_get_HasHp_m20779 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_HUASHAN_PVP_OPPONENTVIEW::get_Hp()
 int32_t GC_HUASHAN_PVP_OPPONENTVIEW_get_Hp_m20780 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::set_Hp(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_set_Hp_m20781 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::SetHp(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_SetHp_m20782 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_HUASHAN_PVP_OPPONENTVIEW::get_HasMp()
 bool GC_HUASHAN_PVP_OPPONENTVIEW_get_HasMp_m20783 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_HUASHAN_PVP_OPPONENTVIEW::get_Mp()
 int32_t GC_HUASHAN_PVP_OPPONENTVIEW_get_Mp_m20784 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::set_Mp(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_set_Mp_m20785 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::SetMp(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_SetMp_m20786 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_HUASHAN_PVP_OPPONENTVIEW::get_HasAttack()
 bool GC_HUASHAN_PVP_OPPONENTVIEW_get_HasAttack_m20787 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_HUASHAN_PVP_OPPONENTVIEW::get_Attack()
 int32_t GC_HUASHAN_PVP_OPPONENTVIEW_get_Attack_m20788 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::set_Attack(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_set_Attack_m20789 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::SetAttack(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_SetAttack_m20790 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_HUASHAN_PVP_OPPONENTVIEW::get_HasDefense()
 bool GC_HUASHAN_PVP_OPPONENTVIEW_get_HasDefense_m20791 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_HUASHAN_PVP_OPPONENTVIEW::get_Defense()
 int32_t GC_HUASHAN_PVP_OPPONENTVIEW_get_Defense_m20792 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::set_Defense(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_set_Defense_m20793 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::SetDefense(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_SetDefense_m20794 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_HUASHAN_PVP_OPPONENTVIEW::get_HasCritical()
 bool GC_HUASHAN_PVP_OPPONENTVIEW_get_HasCritical_m20795 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_HUASHAN_PVP_OPPONENTVIEW::get_Critical()
 int32_t GC_HUASHAN_PVP_OPPONENTVIEW_get_Critical_m20796 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::set_Critical(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_set_Critical_m20797 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::SetCritical(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_SetCritical_m20798 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_HUASHAN_PVP_OPPONENTVIEW::get_HasSpeed()
 bool GC_HUASHAN_PVP_OPPONENTVIEW_get_HasSpeed_m20799 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_HUASHAN_PVP_OPPONENTVIEW::get_Speed()
 int32_t GC_HUASHAN_PVP_OPPONENTVIEW_get_Speed_m20800 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::set_Speed(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_set_Speed_m20801 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::SetSpeed(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_SetSpeed_m20802 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_HUASHAN_PVP_OPPONENTVIEW::get_HasDodge()
 bool GC_HUASHAN_PVP_OPPONENTVIEW_get_HasDodge_m20803 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_HUASHAN_PVP_OPPONENTVIEW::get_Dodge()
 int32_t GC_HUASHAN_PVP_OPPONENTVIEW_get_Dodge_m20804 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::set_Dodge(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_set_Dodge_m20805 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::SetDodge(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_SetDodge_m20806 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_HUASHAN_PVP_OPPONENTVIEW::get_HasName()
 bool GC_HUASHAN_PVP_OPPONENTVIEW_get_HasName_m20807 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_HUASHAN_PVP_OPPONENTVIEW::get_Name()
 String_t* GC_HUASHAN_PVP_OPPONENTVIEW_get_Name_m20808 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::set_Name(System.String)
 void GC_HUASHAN_PVP_OPPONENTVIEW_set_Name_m20809 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::SetName(System.String)
 void GC_HUASHAN_PVP_OPPONENTVIEW_SetName_m20810 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_HUASHAN_PVP_OPPONENTVIEW::get_HasLevel()
 bool GC_HUASHAN_PVP_OPPONENTVIEW_get_HasLevel_m20811 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_HUASHAN_PVP_OPPONENTVIEW::get_Level()
 int32_t GC_HUASHAN_PVP_OPPONENTVIEW_get_Level_m20812 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::set_Level(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_set_Level_m20813 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::SetLevel(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_SetLevel_m20814 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_HUASHAN_PVP_OPPONENTVIEW::get_HasPos()
 bool GC_HUASHAN_PVP_OPPONENTVIEW_get_HasPos_m20815 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_HUASHAN_PVP_OPPONENTVIEW::get_Pos()
 int32_t GC_HUASHAN_PVP_OPPONENTVIEW_get_Pos_m20816 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::set_Pos(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_set_Pos_m20817 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::SetPos(System.Int32)
 void GC_HUASHAN_PVP_OPPONENTVIEW_SetPos_m20818 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_HUASHAN_PVP_OPPONENTVIEW::get_HasGuid()
 bool GC_HUASHAN_PVP_OPPONENTVIEW_get_HasGuid_m20819 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_HUASHAN_PVP_OPPONENTVIEW::get_Guid()
 uint64_t GC_HUASHAN_PVP_OPPONENTVIEW_get_Guid_m20820 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::set_Guid(System.UInt64)
 void GC_HUASHAN_PVP_OPPONENTVIEW_set_Guid_m20821 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::SetGuid(System.UInt64)
 void GC_HUASHAN_PVP_OPPONENTVIEW_SetGuid_m20822 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_HUASHAN_PVP_OPPONENTVIEW::SerializedSize()
 int32_t GC_HUASHAN_PVP_OPPONENTVIEW_SerializedSize_m20823 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_HUASHAN_PVP_OPPONENTVIEW::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_HUASHAN_PVP_OPPONENTVIEW_WriteTo_m20824 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_HUASHAN_PVP_OPPONENTVIEW::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_HUASHAN_PVP_OPPONENTVIEW_MergeFrom_m20825 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_HUASHAN_PVP_OPPONENTVIEW::IsInitialized()
 bool GC_HUASHAN_PVP_OPPONENTVIEW_IsInitialized_m20826 (GC_HUASHAN_PVP_OPPONENTVIEW_t3176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
