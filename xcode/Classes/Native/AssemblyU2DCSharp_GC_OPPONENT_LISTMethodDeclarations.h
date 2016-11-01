#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_OPPONENT_LIST
struct GC_OPPONENT_LIST_t3106;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_OPPONENT_LIST::.ctor()
 void GC_OPPONENT_LIST__ctor_m19787 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_OPPONENT_LIST::get_HasOpponum()
 bool GC_OPPONENT_LIST_get_HasOpponum_m19788 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::get_Opponum()
 int32_t GC_OPPONENT_LIST_get_Opponum_m19789 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_OPPONENT_LIST::set_Opponum(System.Int32)
 void GC_OPPONENT_LIST_set_Opponum_m19790 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_OPPONENT_LIST::SetOpponum(System.Int32)
 void GC_OPPONENT_LIST_SetOpponum_m19791 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_OPPONENT_LIST::get_levelList()
 Object_t* GC_OPPONENT_LIST_get_levelList_m19792 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::get_levelCount()
 int32_t GC_OPPONENT_LIST_get_levelCount_m19793 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::GetLevel(System.Int32)
 int32_t GC_OPPONENT_LIST_GetLevel_m19794 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_OPPONENT_LIST::AddLevel(System.Int32)
 void GC_OPPONENT_LIST_AddLevel_m19795 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_OPPONENT_LIST::get_professionList()
 Object_t* GC_OPPONENT_LIST_get_professionList_m19796 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::get_professionCount()
 int32_t GC_OPPONENT_LIST_get_professionCount_m19797 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::GetProfession(System.Int32)
 int32_t GC_OPPONENT_LIST_GetProfession_m19798 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_OPPONENT_LIST::AddProfession(System.Int32)
 void GC_OPPONENT_LIST_AddProfession_m19799 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_OPPONENT_LIST::get_combatNumList()
 Object_t* GC_OPPONENT_LIST_get_combatNumList_m19800 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::get_combatNumCount()
 int32_t GC_OPPONENT_LIST_get_combatNumCount_m19801 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::GetCombatNum(System.Int32)
 int32_t GC_OPPONENT_LIST_GetCombatNum_m19802 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_OPPONENT_LIST::AddCombatNum(System.Int32)
 void GC_OPPONENT_LIST_AddCombatNum_m19803 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_OPPONENT_LIST::get_nameList()
 Object_t* GC_OPPONENT_LIST_get_nameList_m19804 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::get_nameCount()
 int32_t GC_OPPONENT_LIST_get_nameCount_m19805 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_OPPONENT_LIST::GetName(System.Int32)
 String_t* GC_OPPONENT_LIST_GetName_m19806 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_OPPONENT_LIST::AddName(System.String)
 void GC_OPPONENT_LIST_AddName_m19807 (GC_OPPONENT_LIST_t3106 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_OPPONENT_LIST::get_rankPosList()
 Object_t* GC_OPPONENT_LIST_get_rankPosList_m19808 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::get_rankPosCount()
 int32_t GC_OPPONENT_LIST_get_rankPosCount_m19809 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::GetRankPos(System.Int32)
 int32_t GC_OPPONENT_LIST_GetRankPos_m19810 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_OPPONENT_LIST::AddRankPos(System.Int32)
 void GC_OPPONENT_LIST_AddRankPos_m19811 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_OPPONENT_LIST::get_winSpiritList()
 Object_t* GC_OPPONENT_LIST_get_winSpiritList_m19812 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::get_winSpiritCount()
 int32_t GC_OPPONENT_LIST_get_winSpiritCount_m19813 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::GetWinSpirit(System.Int32)
 int32_t GC_OPPONENT_LIST_GetWinSpirit_m19814 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_OPPONENT_LIST::AddWinSpirit(System.Int32)
 void GC_OPPONENT_LIST_AddWinSpirit_m19815 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_OPPONENT_LIST::get_loseSpiritList()
 Object_t* GC_OPPONENT_LIST_get_loseSpiritList_m19816 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::get_loseSpiritCount()
 int32_t GC_OPPONENT_LIST_get_loseSpiritCount_m19817 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::GetLoseSpirit(System.Int32)
 int32_t GC_OPPONENT_LIST_GetLoseSpirit_m19818 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_OPPONENT_LIST::AddLoseSpirit(System.Int32)
 void GC_OPPONENT_LIST_AddLoseSpirit_m19819 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_OPPONENT_LIST::get_userGuidList()
 Object_t* GC_OPPONENT_LIST_get_userGuidList_m19820 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::get_userGuidCount()
 int32_t GC_OPPONENT_LIST_get_userGuidCount_m19821 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_OPPONENT_LIST::GetUserGuid(System.Int32)
 uint64_t GC_OPPONENT_LIST_GetUserGuid_m19822 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_OPPONENT_LIST::AddUserGuid(System.UInt64)
 void GC_OPPONENT_LIST_AddUserGuid_m19823 (GC_OPPONENT_LIST_t3106 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_OPPONENT_LIST::get_HasNeedCost()
 bool GC_OPPONENT_LIST_get_HasNeedCost_m19824 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::get_NeedCost()
 int32_t GC_OPPONENT_LIST_get_NeedCost_m19825 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_OPPONENT_LIST::set_NeedCost(System.Int32)
 void GC_OPPONENT_LIST_set_NeedCost_m19826 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_OPPONENT_LIST::SetNeedCost(System.Int32)
 void GC_OPPONENT_LIST_SetNeedCost_m19827 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_OPPONENT_LIST::get_winReputataionList()
 Object_t* GC_OPPONENT_LIST_get_winReputataionList_m19828 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::get_winReputataionCount()
 int32_t GC_OPPONENT_LIST_get_winReputataionCount_m19829 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::GetWinReputataion(System.Int32)
 int32_t GC_OPPONENT_LIST_GetWinReputataion_m19830 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_OPPONENT_LIST::AddWinReputataion(System.Int32)
 void GC_OPPONENT_LIST_AddWinReputataion_m19831 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_OPPONENT_LIST::get_loseReputataionList()
 Object_t* GC_OPPONENT_LIST_get_loseReputataionList_m19832 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::get_loseReputataionCount()
 int32_t GC_OPPONENT_LIST_get_loseReputataionCount_m19833 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::GetLoseReputataion(System.Int32)
 int32_t GC_OPPONENT_LIST_GetLoseReputataion_m19834 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_OPPONENT_LIST::AddLoseReputataion(System.Int32)
 void GC_OPPONENT_LIST_AddLoseReputataion_m19835 (GC_OPPONENT_LIST_t3106 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_OPPONENT_LIST::SerializedSize()
 int32_t GC_OPPONENT_LIST_SerializedSize_m19836 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_OPPONENT_LIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_OPPONENT_LIST_WriteTo_m19837 (GC_OPPONENT_LIST_t3106 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_OPPONENT_LIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_OPPONENT_LIST_MergeFrom_m19838 (GC_OPPONENT_LIST_t3106 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_OPPONENT_LIST::IsInitialized()
 bool GC_OPPONENT_LIST_IsInitialized_m19839 (GC_OPPONENT_LIST_t3106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
