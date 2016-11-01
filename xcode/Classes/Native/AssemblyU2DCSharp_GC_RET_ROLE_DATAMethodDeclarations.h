#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RET_ROLE_DATA
struct GC_RET_ROLE_DATA_t3062;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_RET_ROLE_DATA::.ctor()
 void GC_RET_ROLE_DATA__ctor_m19055 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasRolename()
 bool GC_RET_ROLE_DATA_get_HasRolename_m19056 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_ROLE_DATA::get_Rolename()
 String_t* GC_RET_ROLE_DATA_get_Rolename_m19057 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Rolename(System.String)
 void GC_RET_ROLE_DATA_set_Rolename_m19058 (GC_RET_ROLE_DATA_t3062 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetRolename(System.String)
 void GC_RET_ROLE_DATA_SetRolename_m19059 (GC_RET_ROLE_DATA_t3062 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasCombatvalue()
 bool GC_RET_ROLE_DATA_get_HasCombatvalue_m19060 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Combatvalue()
 int32_t GC_RET_ROLE_DATA_get_Combatvalue_m19061 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Combatvalue(System.Int32)
 void GC_RET_ROLE_DATA_set_Combatvalue_m19062 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetCombatvalue(System.Int32)
 void GC_RET_ROLE_DATA_SetCombatvalue_m19063 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasLeve()
 bool GC_RET_ROLE_DATA_get_HasLeve_m19064 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Leve()
 int32_t GC_RET_ROLE_DATA_get_Leve_m19065 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Leve(System.Int32)
 void GC_RET_ROLE_DATA_set_Leve_m19066 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetLeve(System.Int32)
 void GC_RET_ROLE_DATA_SetLeve_m19067 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasProfession()
 bool GC_RET_ROLE_DATA_get_HasProfession_m19068 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Profession()
 int32_t GC_RET_ROLE_DATA_get_Profession_m19069 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Profession(System.Int32)
 void GC_RET_ROLE_DATA_set_Profession_m19070 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetProfession(System.Int32)
 void GC_RET_ROLE_DATA_SetProfession_m19071 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasGuid()
 bool GC_RET_ROLE_DATA_get_HasGuid_m19072 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_RET_ROLE_DATA::get_Guid()
 uint64_t GC_RET_ROLE_DATA_get_Guid_m19073 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Guid(System.UInt64)
 void GC_RET_ROLE_DATA_set_Guid_m19074 (GC_RET_ROLE_DATA_t3062 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetGuid(System.UInt64)
 void GC_RET_ROLE_DATA_SetGuid_m19075 (GC_RET_ROLE_DATA_t3062 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasCurhp()
 bool GC_RET_ROLE_DATA_get_HasCurhp_m19076 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Curhp()
 int32_t GC_RET_ROLE_DATA_get_Curhp_m19077 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Curhp(System.Int32)
 void GC_RET_ROLE_DATA_set_Curhp_m19078 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetCurhp(System.Int32)
 void GC_RET_ROLE_DATA_SetCurhp_m19079 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasMaxhp()
 bool GC_RET_ROLE_DATA_get_HasMaxhp_m19080 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Maxhp()
 int32_t GC_RET_ROLE_DATA_get_Maxhp_m19081 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Maxhp(System.Int32)
 void GC_RET_ROLE_DATA_set_Maxhp_m19082 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetMaxhp(System.Int32)
 void GC_RET_ROLE_DATA_SetMaxhp_m19083 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasCurmp()
 bool GC_RET_ROLE_DATA_get_HasCurmp_m19084 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Curmp()
 int32_t GC_RET_ROLE_DATA_get_Curmp_m19085 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Curmp(System.Int32)
 void GC_RET_ROLE_DATA_set_Curmp_m19086 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetCurmp(System.Int32)
 void GC_RET_ROLE_DATA_SetCurmp_m19087 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasMaxmp()
 bool GC_RET_ROLE_DATA_get_HasMaxmp_m19088 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Maxmp()
 int32_t GC_RET_ROLE_DATA_get_Maxmp_m19089 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Maxmp(System.Int32)
 void GC_RET_ROLE_DATA_set_Maxmp_m19090 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetMaxmp(System.Int32)
 void GC_RET_ROLE_DATA_SetMaxmp_m19091 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasCurexp()
 bool GC_RET_ROLE_DATA_get_HasCurexp_m19092 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Curexp()
 int32_t GC_RET_ROLE_DATA_get_Curexp_m19093 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Curexp(System.Int32)
 void GC_RET_ROLE_DATA_set_Curexp_m19094 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetCurexp(System.Int32)
 void GC_RET_ROLE_DATA_SetCurexp_m19095 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasMaxexp()
 bool GC_RET_ROLE_DATA_get_HasMaxexp_m19096 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Maxexp()
 int32_t GC_RET_ROLE_DATA_get_Maxexp_m19097 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Maxexp(System.Int32)
 void GC_RET_ROLE_DATA_set_Maxexp_m19098 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetMaxexp(System.Int32)
 void GC_RET_ROLE_DATA_SetMaxexp_m19099 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasPattack()
 bool GC_RET_ROLE_DATA_get_HasPattack_m19100 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Pattack()
 int32_t GC_RET_ROLE_DATA_get_Pattack_m19101 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Pattack(System.Int32)
 void GC_RET_ROLE_DATA_set_Pattack_m19102 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetPattack(System.Int32)
 void GC_RET_ROLE_DATA_SetPattack_m19103 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasMattack()
 bool GC_RET_ROLE_DATA_get_HasMattack_m19104 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Mattack()
 int32_t GC_RET_ROLE_DATA_get_Mattack_m19105 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Mattack(System.Int32)
 void GC_RET_ROLE_DATA_set_Mattack_m19106 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetMattack(System.Int32)
 void GC_RET_ROLE_DATA_SetMattack_m19107 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasHit()
 bool GC_RET_ROLE_DATA_get_HasHit_m19108 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Hit()
 int32_t GC_RET_ROLE_DATA_get_Hit_m19109 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Hit(System.Int32)
 void GC_RET_ROLE_DATA_set_Hit_m19110 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetHit(System.Int32)
 void GC_RET_ROLE_DATA_SetHit_m19111 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasCritical()
 bool GC_RET_ROLE_DATA_get_HasCritical_m19112 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Critical()
 int32_t GC_RET_ROLE_DATA_get_Critical_m19113 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Critical(System.Int32)
 void GC_RET_ROLE_DATA_set_Critical_m19114 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetCritical(System.Int32)
 void GC_RET_ROLE_DATA_SetCritical_m19115 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasPdefense()
 bool GC_RET_ROLE_DATA_get_HasPdefense_m19116 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Pdefense()
 int32_t GC_RET_ROLE_DATA_get_Pdefense_m19117 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Pdefense(System.Int32)
 void GC_RET_ROLE_DATA_set_Pdefense_m19118 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetPdefense(System.Int32)
 void GC_RET_ROLE_DATA_SetPdefense_m19119 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasMdefense()
 bool GC_RET_ROLE_DATA_get_HasMdefense_m19120 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Mdefense()
 int32_t GC_RET_ROLE_DATA_get_Mdefense_m19121 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Mdefense(System.Int32)
 void GC_RET_ROLE_DATA_set_Mdefense_m19122 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetMdefense(System.Int32)
 void GC_RET_ROLE_DATA_SetMdefense_m19123 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasDecritical()
 bool GC_RET_ROLE_DATA_get_HasDecritical_m19124 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Decritical()
 int32_t GC_RET_ROLE_DATA_get_Decritical_m19125 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Decritical(System.Int32)
 void GC_RET_ROLE_DATA_set_Decritical_m19126 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetDecritical(System.Int32)
 void GC_RET_ROLE_DATA_SetDecritical_m19127 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasDoge()
 bool GC_RET_ROLE_DATA_get_HasDoge_m19128 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Doge()
 int32_t GC_RET_ROLE_DATA_get_Doge_m19129 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Doge(System.Int32)
 void GC_RET_ROLE_DATA_set_Doge_m19130 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetDoge(System.Int32)
 void GC_RET_ROLE_DATA_SetDoge_m19131 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasStrike()
 bool GC_RET_ROLE_DATA_get_HasStrike_m19132 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Strike()
 int32_t GC_RET_ROLE_DATA_get_Strike_m19133 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Strike(System.Int32)
 void GC_RET_ROLE_DATA_set_Strike_m19134 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetStrike(System.Int32)
 void GC_RET_ROLE_DATA_SetStrike_m19135 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasCriticaladd()
 bool GC_RET_ROLE_DATA_get_HasCriticaladd_m19136 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Criticaladd()
 int32_t GC_RET_ROLE_DATA_get_Criticaladd_m19137 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Criticaladd(System.Int32)
 void GC_RET_ROLE_DATA_set_Criticaladd_m19138 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetCriticaladd(System.Int32)
 void GC_RET_ROLE_DATA_SetCriticaladd_m19139 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasDutical()
 bool GC_RET_ROLE_DATA_get_HasDutical_m19140 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Dutical()
 int32_t GC_RET_ROLE_DATA_get_Dutical_m19141 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Dutical(System.Int32)
 void GC_RET_ROLE_DATA_set_Dutical_m19142 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetDutical(System.Int32)
 void GC_RET_ROLE_DATA_SetDutical_m19143 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasCriticalmis()
 bool GC_RET_ROLE_DATA_get_HasCriticalmis_m19144 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Criticalmis()
 int32_t GC_RET_ROLE_DATA_get_Criticalmis_m19145 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Criticalmis(System.Int32)
 void GC_RET_ROLE_DATA_set_Criticalmis_m19146 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetCriticalmis(System.Int32)
 void GC_RET_ROLE_DATA_SetCriticalmis_m19147 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::get_HasCurofflineexp()
 bool GC_RET_ROLE_DATA_get_HasCurofflineexp_m19148 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::get_Curofflineexp()
 int32_t GC_RET_ROLE_DATA_get_Curofflineexp_m19149 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::set_Curofflineexp(System.Int32)
 void GC_RET_ROLE_DATA_set_Curofflineexp_m19150 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::SetCurofflineexp(System.Int32)
 void GC_RET_ROLE_DATA_SetCurofflineexp_m19151 (GC_RET_ROLE_DATA_t3062 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ROLE_DATA::SerializedSize()
 int32_t GC_RET_ROLE_DATA_SerializedSize_m19152 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ROLE_DATA::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RET_ROLE_DATA_WriteTo_m19153 (GC_RET_ROLE_DATA_t3062 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RET_ROLE_DATA::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RET_ROLE_DATA_MergeFrom_m19154 (GC_RET_ROLE_DATA_t3062 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ROLE_DATA::IsInitialized()
 bool GC_RET_ROLE_DATA_IsInitialized_m19155 (GC_RET_ROLE_DATA_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
