#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_FELLOW_TALENTSKILL_LEVELUP
struct CG_FELLOW_TALENTSKILL_LEVELUP_t3584;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_FELLOW_TALENTSKILL_LEVELUP::.ctor()
 void CG_FELLOW_TALENTSKILL_LEVELUP__ctor_m27760 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_FELLOW_TALENTSKILL_LEVELUP::get_HasGuid()
 bool CG_FELLOW_TALENTSKILL_LEVELUP_get_HasGuid_m27761 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_FELLOW_TALENTSKILL_LEVELUP::get_Guid()
 uint64_t CG_FELLOW_TALENTSKILL_LEVELUP_get_Guid_m27762 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_FELLOW_TALENTSKILL_LEVELUP::set_Guid(System.UInt64)
 void CG_FELLOW_TALENTSKILL_LEVELUP_set_Guid_m27763 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_FELLOW_TALENTSKILL_LEVELUP::SetGuid(System.UInt64)
 void CG_FELLOW_TALENTSKILL_LEVELUP_SetGuid_m27764 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_FELLOW_TALENTSKILL_LEVELUP::get_HasSkillid()
 bool CG_FELLOW_TALENTSKILL_LEVELUP_get_HasSkillid_m27765 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_FELLOW_TALENTSKILL_LEVELUP::get_Skillid()
 int32_t CG_FELLOW_TALENTSKILL_LEVELUP_get_Skillid_m27766 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_FELLOW_TALENTSKILL_LEVELUP::set_Skillid(System.Int32)
 void CG_FELLOW_TALENTSKILL_LEVELUP_set_Skillid_m27767 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_FELLOW_TALENTSKILL_LEVELUP::SetSkillid(System.Int32)
 void CG_FELLOW_TALENTSKILL_LEVELUP_SetSkillid_m27768 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> CG_FELLOW_TALENTSKILL_LEVELUP::get_skillbookidList()
 Object_t* CG_FELLOW_TALENTSKILL_LEVELUP_get_skillbookidList_m27769 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_FELLOW_TALENTSKILL_LEVELUP::get_skillbookidCount()
 int32_t CG_FELLOW_TALENTSKILL_LEVELUP_get_skillbookidCount_m27770 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_FELLOW_TALENTSKILL_LEVELUP::GetSkillbookid(System.Int32)
 int32_t CG_FELLOW_TALENTSKILL_LEVELUP_GetSkillbookid_m27771 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_FELLOW_TALENTSKILL_LEVELUP::AddSkillbookid(System.Int32)
 void CG_FELLOW_TALENTSKILL_LEVELUP_AddSkillbookid_m27772 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> CG_FELLOW_TALENTSKILL_LEVELUP::get_skillbookcountList()
 Object_t* CG_FELLOW_TALENTSKILL_LEVELUP_get_skillbookcountList_m27773 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_FELLOW_TALENTSKILL_LEVELUP::get_skillbookcountCount()
 int32_t CG_FELLOW_TALENTSKILL_LEVELUP_get_skillbookcountCount_m27774 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_FELLOW_TALENTSKILL_LEVELUP::GetSkillbookcount(System.Int32)
 int32_t CG_FELLOW_TALENTSKILL_LEVELUP_GetSkillbookcount_m27775 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_FELLOW_TALENTSKILL_LEVELUP::AddSkillbookcount(System.Int32)
 void CG_FELLOW_TALENTSKILL_LEVELUP_AddSkillbookcount_m27776 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_FELLOW_TALENTSKILL_LEVELUP::SerializedSize()
 int32_t CG_FELLOW_TALENTSKILL_LEVELUP_SerializedSize_m27777 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_FELLOW_TALENTSKILL_LEVELUP::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_FELLOW_TALENTSKILL_LEVELUP_WriteTo_m27778 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_FELLOW_TALENTSKILL_LEVELUP::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_FELLOW_TALENTSKILL_LEVELUP_MergeFrom_m27779 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_FELLOW_TALENTSKILL_LEVELUP::IsInitialized()
 bool CG_FELLOW_TALENTSKILL_LEVELUP_IsInitialized_m27780 (CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
