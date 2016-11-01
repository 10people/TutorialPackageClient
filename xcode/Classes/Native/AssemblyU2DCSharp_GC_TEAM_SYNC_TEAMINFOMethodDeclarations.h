#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_TEAM_SYNC_TEAMINFO
struct GC_TEAM_SYNC_TEAMINFO_t2969;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_TEAM_SYNC_TEAMINFO::.ctor()
 void GC_TEAM_SYNC_TEAMINFO__ctor_m17066 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_TEAM_SYNC_TEAMINFO::get_HasTeamID()
 bool GC_TEAM_SYNC_TEAMINFO_get_HasTeamID_m17067 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::get_TeamID()
 int32_t GC_TEAM_SYNC_TEAMINFO_get_TeamID_m17068 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::set_TeamID(System.Int32)
 void GC_TEAM_SYNC_TEAMINFO_set_TeamID_m17069 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::SetTeamID(System.Int32)
 void GC_TEAM_SYNC_TEAMINFO_SetTeamID_m17070 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_TEAM_SYNC_TEAMINFO::get_memberGuidList()
 Object_t* GC_TEAM_SYNC_TEAMINFO_get_memberGuidList_m17071 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::get_memberGuidCount()
 int32_t GC_TEAM_SYNC_TEAMINFO_get_memberGuidCount_m17072 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_TEAM_SYNC_TEAMINFO::GetMemberGuid(System.Int32)
 uint64_t GC_TEAM_SYNC_TEAMINFO_GetMemberGuid_m17073 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::AddMemberGuid(System.UInt64)
 void GC_TEAM_SYNC_TEAMINFO_AddMemberGuid_m17074 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_TEAM_SYNC_TEAMINFO::get_memberNameList()
 Object_t* GC_TEAM_SYNC_TEAMINFO_get_memberNameList_m17075 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::get_memberNameCount()
 int32_t GC_TEAM_SYNC_TEAMINFO_get_memberNameCount_m17076 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_TEAM_SYNC_TEAMINFO::GetMemberName(System.Int32)
 String_t* GC_TEAM_SYNC_TEAMINFO_GetMemberName_m17077 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::AddMemberName(System.String)
 void GC_TEAM_SYNC_TEAMINFO_AddMemberName_m17078 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_TEAM_SYNC_TEAMINFO::get_memberLevelList()
 Object_t* GC_TEAM_SYNC_TEAMINFO_get_memberLevelList_m17079 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::get_memberLevelCount()
 int32_t GC_TEAM_SYNC_TEAMINFO_get_memberLevelCount_m17080 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::GetMemberLevel(System.Int32)
 int32_t GC_TEAM_SYNC_TEAMINFO_GetMemberLevel_m17081 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::AddMemberLevel(System.Int32)
 void GC_TEAM_SYNC_TEAMINFO_AddMemberLevel_m17082 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_TEAM_SYNC_TEAMINFO::get_memberProfList()
 Object_t* GC_TEAM_SYNC_TEAMINFO_get_memberProfList_m17083 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::get_memberProfCount()
 int32_t GC_TEAM_SYNC_TEAMINFO_get_memberProfCount_m17084 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::GetMemberProf(System.Int32)
 int32_t GC_TEAM_SYNC_TEAMINFO_GetMemberProf_m17085 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::AddMemberProf(System.Int32)
 void GC_TEAM_SYNC_TEAMINFO_AddMemberProf_m17086 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_TEAM_SYNC_TEAMINFO::get_memberHPList()
 Object_t* GC_TEAM_SYNC_TEAMINFO_get_memberHPList_m17087 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::get_memberHPCount()
 int32_t GC_TEAM_SYNC_TEAMINFO_get_memberHPCount_m17088 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::GetMemberHP(System.Int32)
 int32_t GC_TEAM_SYNC_TEAMINFO_GetMemberHP_m17089 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::AddMemberHP(System.Int32)
 void GC_TEAM_SYNC_TEAMINFO_AddMemberHP_m17090 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_TEAM_SYNC_TEAMINFO::get_memberMaxHPList()
 Object_t* GC_TEAM_SYNC_TEAMINFO_get_memberMaxHPList_m17091 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::get_memberMaxHPCount()
 int32_t GC_TEAM_SYNC_TEAMINFO_get_memberMaxHPCount_m17092 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::GetMemberMaxHP(System.Int32)
 int32_t GC_TEAM_SYNC_TEAMINFO_GetMemberMaxHP_m17093 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::AddMemberMaxHP(System.Int32)
 void GC_TEAM_SYNC_TEAMINFO_AddMemberMaxHP_m17094 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_TEAM_SYNC_TEAMINFO::get_memberCombatList()
 Object_t* GC_TEAM_SYNC_TEAMINFO_get_memberCombatList_m17095 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::get_memberCombatCount()
 int32_t GC_TEAM_SYNC_TEAMINFO_get_memberCombatCount_m17096 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::GetMemberCombat(System.Int32)
 int32_t GC_TEAM_SYNC_TEAMINFO_GetMemberCombat_m17097 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::AddMemberCombat(System.Int32)
 void GC_TEAM_SYNC_TEAMINFO_AddMemberCombat_m17098 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_TEAM_SYNC_TEAMINFO::get_sceneclassList()
 Object_t* GC_TEAM_SYNC_TEAMINFO_get_sceneclassList_m17099 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::get_sceneclassCount()
 int32_t GC_TEAM_SYNC_TEAMINFO_get_sceneclassCount_m17100 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::GetSceneclass(System.Int32)
 int32_t GC_TEAM_SYNC_TEAMINFO_GetSceneclass_m17101 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::AddSceneclass(System.Int32)
 void GC_TEAM_SYNC_TEAMINFO_AddSceneclass_m17102 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_TEAM_SYNC_TEAMINFO::get_sceneinstList()
 Object_t* GC_TEAM_SYNC_TEAMINFO_get_sceneinstList_m17103 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::get_sceneinstCount()
 int32_t GC_TEAM_SYNC_TEAMINFO_get_sceneinstCount_m17104 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::GetSceneinst(System.Int32)
 int32_t GC_TEAM_SYNC_TEAMINFO_GetSceneinst_m17105 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::AddSceneinst(System.Int32)
 void GC_TEAM_SYNC_TEAMINFO_AddSceneinst_m17106 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_TEAM_SYNC_TEAMINFO::get_posXList()
 Object_t* GC_TEAM_SYNC_TEAMINFO_get_posXList_m17107 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::get_posXCount()
 int32_t GC_TEAM_SYNC_TEAMINFO_get_posXCount_m17108 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::GetPosX(System.Int32)
 int32_t GC_TEAM_SYNC_TEAMINFO_GetPosX_m17109 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::AddPosX(System.Int32)
 void GC_TEAM_SYNC_TEAMINFO_AddPosX_m17110 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_TEAM_SYNC_TEAMINFO::get_posZList()
 Object_t* GC_TEAM_SYNC_TEAMINFO_get_posZList_m17111 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::get_posZCount()
 int32_t GC_TEAM_SYNC_TEAMINFO_get_posZCount_m17112 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::GetPosZ(System.Int32)
 int32_t GC_TEAM_SYNC_TEAMINFO_GetPosZ_m17113 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::AddPosZ(System.Int32)
 void GC_TEAM_SYNC_TEAMINFO_AddPosZ_m17114 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_TEAM_SYNC_TEAMINFO::get_ModelVisualIdList()
 Object_t* GC_TEAM_SYNC_TEAMINFO_get_ModelVisualIdList_m17115 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::get_ModelVisualIdCount()
 int32_t GC_TEAM_SYNC_TEAMINFO_get_ModelVisualIdCount_m17116 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::GetModelVisualId(System.Int32)
 int32_t GC_TEAM_SYNC_TEAMINFO_GetModelVisualId_m17117 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::AddModelVisualId(System.Int32)
 void GC_TEAM_SYNC_TEAMINFO_AddModelVisualId_m17118 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_TEAM_SYNC_TEAMINFO::get_WeaponDataIdList()
 Object_t* GC_TEAM_SYNC_TEAMINFO_get_WeaponDataIdList_m17119 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::get_WeaponDataIdCount()
 int32_t GC_TEAM_SYNC_TEAMINFO_get_WeaponDataIdCount_m17120 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::GetWeaponDataId(System.Int32)
 int32_t GC_TEAM_SYNC_TEAMINFO_GetWeaponDataId_m17121 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::AddWeaponDataId(System.Int32)
 void GC_TEAM_SYNC_TEAMINFO_AddWeaponDataId_m17122 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_TEAM_SYNC_TEAMINFO::get_WeaponEffectGemList()
 Object_t* GC_TEAM_SYNC_TEAMINFO_get_WeaponEffectGemList_m17123 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::get_WeaponEffectGemCount()
 int32_t GC_TEAM_SYNC_TEAMINFO_get_WeaponEffectGemCount_m17124 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::GetWeaponEffectGem(System.Int32)
 int32_t GC_TEAM_SYNC_TEAMINFO_GetWeaponEffectGem_m17125 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::AddWeaponEffectGem(System.Int32)
 void GC_TEAM_SYNC_TEAMINFO_AddWeaponEffectGem_m17126 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_TEAM_SYNC_TEAMINFO::get_teamCJGTierList()
 Object_t* GC_TEAM_SYNC_TEAMINFO_get_teamCJGTierList_m17127 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::get_teamCJGTierCount()
 int32_t GC_TEAM_SYNC_TEAMINFO_get_teamCJGTierCount_m17128 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::GetTeamCJGTier(System.Int32)
 int32_t GC_TEAM_SYNC_TEAMINFO_GetTeamCJGTier_m17129 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::AddTeamCJGTier(System.Int32)
 void GC_TEAM_SYNC_TEAMINFO_AddTeamCJGTier_m17130 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TEAM_SYNC_TEAMINFO::SerializedSize()
 int32_t GC_TEAM_SYNC_TEAMINFO_SerializedSize_m17131 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TEAM_SYNC_TEAMINFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_TEAM_SYNC_TEAMINFO_WriteTo_m17132 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_TEAM_SYNC_TEAMINFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_TEAM_SYNC_TEAMINFO_MergeFrom_m17133 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_TEAM_SYNC_TEAMINFO::IsInitialized()
 bool GC_TEAM_SYNC_TEAMINFO_IsInitialized_m17134 (GC_TEAM_SYNC_TEAMINFO_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
