#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RET_TEAMPLATFORMINFO
struct GC_RET_TEAMPLATFORMINFO_t3227;
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

// System.Void GC_RET_TEAMPLATFORMINFO::.ctor()
 void GC_RET_TEAMPLATFORMINFO__ctor_m21648 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_RET_TEAMPLATFORMINFO::get_playerGuidList()
 Object_t* GC_RET_TEAMPLATFORMINFO_get_playerGuidList_m21649 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::get_playerGuidCount()
 int32_t GC_RET_TEAMPLATFORMINFO_get_playerGuidCount_m21650 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_RET_TEAMPLATFORMINFO::GetPlayerGuid(System.Int32)
 uint64_t GC_RET_TEAMPLATFORMINFO_GetPlayerGuid_m21651 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_TEAMPLATFORMINFO::AddPlayerGuid(System.UInt64)
 void GC_RET_TEAMPLATFORMINFO_AddPlayerGuid_m21652 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_TEAMPLATFORMINFO::get_playerNameList()
 Object_t* GC_RET_TEAMPLATFORMINFO_get_playerNameList_m21653 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::get_playerNameCount()
 int32_t GC_RET_TEAMPLATFORMINFO_get_playerNameCount_m21654 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_TEAMPLATFORMINFO::GetPlayerName(System.Int32)
 String_t* GC_RET_TEAMPLATFORMINFO_GetPlayerName_m21655 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_TEAMPLATFORMINFO::AddPlayerName(System.String)
 void GC_RET_TEAMPLATFORMINFO_AddPlayerName_m21656 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_TEAMPLATFORMINFO::get_playerLevelList()
 Object_t* GC_RET_TEAMPLATFORMINFO_get_playerLevelList_m21657 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::get_playerLevelCount()
 int32_t GC_RET_TEAMPLATFORMINFO_get_playerLevelCount_m21658 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::GetPlayerLevel(System.Int32)
 int32_t GC_RET_TEAMPLATFORMINFO_GetPlayerLevel_m21659 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_TEAMPLATFORMINFO::AddPlayerLevel(System.Int32)
 void GC_RET_TEAMPLATFORMINFO_AddPlayerLevel_m21660 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_TEAMPLATFORMINFO::get_playerProfList()
 Object_t* GC_RET_TEAMPLATFORMINFO_get_playerProfList_m21661 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::get_playerProfCount()
 int32_t GC_RET_TEAMPLATFORMINFO_get_playerProfCount_m21662 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::GetPlayerProf(System.Int32)
 int32_t GC_RET_TEAMPLATFORMINFO_GetPlayerProf_m21663 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_TEAMPLATFORMINFO::AddPlayerProf(System.Int32)
 void GC_RET_TEAMPLATFORMINFO_AddPlayerProf_m21664 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_TEAMPLATFORMINFO::get_playerCombatList()
 Object_t* GC_RET_TEAMPLATFORMINFO_get_playerCombatList_m21665 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::get_playerCombatCount()
 int32_t GC_RET_TEAMPLATFORMINFO_get_playerCombatCount_m21666 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::GetPlayerCombat(System.Int32)
 int32_t GC_RET_TEAMPLATFORMINFO_GetPlayerCombat_m21667 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_TEAMPLATFORMINFO::AddPlayerCombat(System.Int32)
 void GC_RET_TEAMPLATFORMINFO_AddPlayerCombat_m21668 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_TEAMPLATFORMINFO::get_teamIDList()
 Object_t* GC_RET_TEAMPLATFORMINFO_get_teamIDList_m21669 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::get_teamIDCount()
 int32_t GC_RET_TEAMPLATFORMINFO_get_teamIDCount_m21670 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::GetTeamID(System.Int32)
 int32_t GC_RET_TEAMPLATFORMINFO_GetTeamID_m21671 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_TEAMPLATFORMINFO::AddTeamID(System.Int32)
 void GC_RET_TEAMPLATFORMINFO_AddTeamID_m21672 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_RET_TEAMPLATFORMINFO::get_memberGuidList()
 Object_t* GC_RET_TEAMPLATFORMINFO_get_memberGuidList_m21673 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::get_memberGuidCount()
 int32_t GC_RET_TEAMPLATFORMINFO_get_memberGuidCount_m21674 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_RET_TEAMPLATFORMINFO::GetMemberGuid(System.Int32)
 uint64_t GC_RET_TEAMPLATFORMINFO_GetMemberGuid_m21675 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_TEAMPLATFORMINFO::AddMemberGuid(System.UInt64)
 void GC_RET_TEAMPLATFORMINFO_AddMemberGuid_m21676 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_TEAMPLATFORMINFO::get_memberNameList()
 Object_t* GC_RET_TEAMPLATFORMINFO_get_memberNameList_m21677 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::get_memberNameCount()
 int32_t GC_RET_TEAMPLATFORMINFO_get_memberNameCount_m21678 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_TEAMPLATFORMINFO::GetMemberName(System.Int32)
 String_t* GC_RET_TEAMPLATFORMINFO_GetMemberName_m21679 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_TEAMPLATFORMINFO::AddMemberName(System.String)
 void GC_RET_TEAMPLATFORMINFO_AddMemberName_m21680 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_TEAMPLATFORMINFO::get_memberLevelList()
 Object_t* GC_RET_TEAMPLATFORMINFO_get_memberLevelList_m21681 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::get_memberLevelCount()
 int32_t GC_RET_TEAMPLATFORMINFO_get_memberLevelCount_m21682 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::GetMemberLevel(System.Int32)
 int32_t GC_RET_TEAMPLATFORMINFO_GetMemberLevel_m21683 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_TEAMPLATFORMINFO::AddMemberLevel(System.Int32)
 void GC_RET_TEAMPLATFORMINFO_AddMemberLevel_m21684 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_TEAMPLATFORMINFO::get_memberProfList()
 Object_t* GC_RET_TEAMPLATFORMINFO_get_memberProfList_m21685 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::get_memberProfCount()
 int32_t GC_RET_TEAMPLATFORMINFO_get_memberProfCount_m21686 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::GetMemberProf(System.Int32)
 int32_t GC_RET_TEAMPLATFORMINFO_GetMemberProf_m21687 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_TEAMPLATFORMINFO::AddMemberProf(System.Int32)
 void GC_RET_TEAMPLATFORMINFO_AddMemberProf_m21688 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_TEAMPLATFORMINFO::get_memberCombatList()
 Object_t* GC_RET_TEAMPLATFORMINFO_get_memberCombatList_m21689 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::get_memberCombatCount()
 int32_t GC_RET_TEAMPLATFORMINFO_get_memberCombatCount_m21690 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::GetMemberCombat(System.Int32)
 int32_t GC_RET_TEAMPLATFORMINFO_GetMemberCombat_m21691 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_TEAMPLATFORMINFO::AddMemberCombat(System.Int32)
 void GC_RET_TEAMPLATFORMINFO_AddMemberCombat_m21692 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_TEAMPLATFORMINFO::get_HasCount()
 bool GC_RET_TEAMPLATFORMINFO_get_HasCount_m21693 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::get_Count()
 int32_t GC_RET_TEAMPLATFORMINFO_get_Count_m21694 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_TEAMPLATFORMINFO::set_Count(System.Int32)
 void GC_RET_TEAMPLATFORMINFO_set_Count_m21695 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_TEAMPLATFORMINFO::SetCount(System.Int32)
 void GC_RET_TEAMPLATFORMINFO_SetCount_m21696 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_TEAMPLATFORMINFO::SerializedSize()
 int32_t GC_RET_TEAMPLATFORMINFO_SerializedSize_m21697 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_TEAMPLATFORMINFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RET_TEAMPLATFORMINFO_WriteTo_m21698 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RET_TEAMPLATFORMINFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RET_TEAMPLATFORMINFO_MergeFrom_m21699 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_TEAMPLATFORMINFO::IsInitialized()
 bool GC_RET_TEAMPLATFORMINFO_IsInitialized_m21700 (GC_RET_TEAMPLATFORMINFO_t3227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
