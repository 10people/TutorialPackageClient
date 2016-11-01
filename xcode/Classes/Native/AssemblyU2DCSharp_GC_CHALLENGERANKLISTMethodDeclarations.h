#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_CHALLENGERANKLIST
struct GC_CHALLENGERANKLIST_t3108;
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

// System.Void GC_CHALLENGERANKLIST::.ctor()
 void GC_CHALLENGERANKLIST__ctor_m19849 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHALLENGERANKLIST::get_HasPage()
 bool GC_CHALLENGERANKLIST_get_HasPage_m19850 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGERANKLIST::get_Page()
 int32_t GC_CHALLENGERANKLIST_get_Page_m19851 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGERANKLIST::set_Page(System.Int32)
 void GC_CHALLENGERANKLIST_set_Page_m19852 (GC_CHALLENGERANKLIST_t3108 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGERANKLIST::SetPage(System.Int32)
 void GC_CHALLENGERANKLIST_SetPage_m19853 (GC_CHALLENGERANKLIST_t3108 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHALLENGERANKLIST::get_HasTotalpage()
 bool GC_CHALLENGERANKLIST_get_HasTotalpage_m19854 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGERANKLIST::get_Totalpage()
 int32_t GC_CHALLENGERANKLIST_get_Totalpage_m19855 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGERANKLIST::set_Totalpage(System.Int32)
 void GC_CHALLENGERANKLIST_set_Totalpage_m19856 (GC_CHALLENGERANKLIST_t3108 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGERANKLIST::SetTotalpage(System.Int32)
 void GC_CHALLENGERANKLIST_SetTotalpage_m19857 (GC_CHALLENGERANKLIST_t3108 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_CHALLENGERANKLIST::get_levelList()
 Object_t* GC_CHALLENGERANKLIST_get_levelList_m19858 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGERANKLIST::get_levelCount()
 int32_t GC_CHALLENGERANKLIST_get_levelCount_m19859 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGERANKLIST::GetLevel(System.Int32)
 int32_t GC_CHALLENGERANKLIST_GetLevel_m19860 (GC_CHALLENGERANKLIST_t3108 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGERANKLIST::AddLevel(System.Int32)
 void GC_CHALLENGERANKLIST_AddLevel_m19861 (GC_CHALLENGERANKLIST_t3108 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_CHALLENGERANKLIST::get_professionList()
 Object_t* GC_CHALLENGERANKLIST_get_professionList_m19862 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGERANKLIST::get_professionCount()
 int32_t GC_CHALLENGERANKLIST_get_professionCount_m19863 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGERANKLIST::GetProfession(System.Int32)
 int32_t GC_CHALLENGERANKLIST_GetProfession_m19864 (GC_CHALLENGERANKLIST_t3108 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGERANKLIST::AddProfession(System.Int32)
 void GC_CHALLENGERANKLIST_AddProfession_m19865 (GC_CHALLENGERANKLIST_t3108 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_CHALLENGERANKLIST::get_combatNumList()
 Object_t* GC_CHALLENGERANKLIST_get_combatNumList_m19866 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGERANKLIST::get_combatNumCount()
 int32_t GC_CHALLENGERANKLIST_get_combatNumCount_m19867 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGERANKLIST::GetCombatNum(System.Int32)
 int32_t GC_CHALLENGERANKLIST_GetCombatNum_m19868 (GC_CHALLENGERANKLIST_t3108 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGERANKLIST::AddCombatNum(System.Int32)
 void GC_CHALLENGERANKLIST_AddCombatNum_m19869 (GC_CHALLENGERANKLIST_t3108 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_CHALLENGERANKLIST::get_nameList()
 Object_t* GC_CHALLENGERANKLIST_get_nameList_m19870 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGERANKLIST::get_nameCount()
 int32_t GC_CHALLENGERANKLIST_get_nameCount_m19871 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_CHALLENGERANKLIST::GetName(System.Int32)
 String_t* GC_CHALLENGERANKLIST_GetName_m19872 (GC_CHALLENGERANKLIST_t3108 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGERANKLIST::AddName(System.String)
 void GC_CHALLENGERANKLIST_AddName_m19873 (GC_CHALLENGERANKLIST_t3108 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_CHALLENGERANKLIST::get_posList()
 Object_t* GC_CHALLENGERANKLIST_get_posList_m19874 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGERANKLIST::get_posCount()
 int32_t GC_CHALLENGERANKLIST_get_posCount_m19875 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGERANKLIST::GetPos(System.Int32)
 int32_t GC_CHALLENGERANKLIST_GetPos_m19876 (GC_CHALLENGERANKLIST_t3108 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGERANKLIST::AddPos(System.Int32)
 void GC_CHALLENGERANKLIST_AddPos_m19877 (GC_CHALLENGERANKLIST_t3108 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_CHALLENGERANKLIST::get_userGuidList()
 Object_t* GC_CHALLENGERANKLIST_get_userGuidList_m19878 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGERANKLIST::get_userGuidCount()
 int32_t GC_CHALLENGERANKLIST_get_userGuidCount_m19879 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_CHALLENGERANKLIST::GetUserGuid(System.Int32)
 uint64_t GC_CHALLENGERANKLIST_GetUserGuid_m19880 (GC_CHALLENGERANKLIST_t3108 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGERANKLIST::AddUserGuid(System.UInt64)
 void GC_CHALLENGERANKLIST_AddUserGuid_m19881 (GC_CHALLENGERANKLIST_t3108 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_CHALLENGERANKLIST::get_zhenqiList()
 Object_t* GC_CHALLENGERANKLIST_get_zhenqiList_m19882 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGERANKLIST::get_zhenqiCount()
 int32_t GC_CHALLENGERANKLIST_get_zhenqiCount_m19883 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGERANKLIST::GetZhenqi(System.Int32)
 int32_t GC_CHALLENGERANKLIST_GetZhenqi_m19884 (GC_CHALLENGERANKLIST_t3108 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGERANKLIST::AddZhenqi(System.Int32)
 void GC_CHALLENGERANKLIST_AddZhenqi_m19885 (GC_CHALLENGERANKLIST_t3108 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGERANKLIST::SerializedSize()
 int32_t GC_CHALLENGERANKLIST_SerializedSize_m19886 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGERANKLIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_CHALLENGERANKLIST_WriteTo_m19887 (GC_CHALLENGERANKLIST_t3108 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_CHALLENGERANKLIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_CHALLENGERANKLIST_MergeFrom_m19888 (GC_CHALLENGERANKLIST_t3108 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHALLENGERANKLIST::IsInitialized()
 bool GC_CHALLENGERANKLIST_IsInitialized_m19889 (GC_CHALLENGERANKLIST_t3108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
