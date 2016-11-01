#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RET_SIGNININFO
struct GC_RET_SIGNININFO_t3475;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_RET_SIGNININFO::.ctor()
 void GC_RET_SIGNININFO__ctor_m26013 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_SIGNININFO::get_HasRet()
 bool GC_RET_SIGNININFO_get_HasRet_m26014 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::get_Ret()
 int32_t GC_RET_SIGNININFO_get_Ret_m26015 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::set_Ret(System.Int32)
 void GC_RET_SIGNININFO_set_Ret_m26016 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::SetRet(System.Int32)
 void GC_RET_SIGNININFO_SetRet_m26017 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_SIGNININFO::get_indexList()
 Object_t* GC_RET_SIGNININFO_get_indexList_m26018 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::get_indexCount()
 int32_t GC_RET_SIGNININFO_get_indexCount_m26019 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::GetIndex(System.Int32)
 int32_t GC_RET_SIGNININFO_GetIndex_m26020 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::AddIndex(System.Int32)
 void GC_RET_SIGNININFO_AddIndex_m26021 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_SIGNININFO::get_statusList()
 Object_t* GC_RET_SIGNININFO_get_statusList_m26022 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::get_statusCount()
 int32_t GC_RET_SIGNININFO_get_statusCount_m26023 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::GetStatus(System.Int32)
 int32_t GC_RET_SIGNININFO_GetStatus_m26024 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::AddStatus(System.Int32)
 void GC_RET_SIGNININFO_AddStatus_m26025 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_SIGNININFO::get_requiredVipList()
 Object_t* GC_RET_SIGNININFO_get_requiredVipList_m26026 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::get_requiredVipCount()
 int32_t GC_RET_SIGNININFO_get_requiredVipCount_m26027 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::GetRequiredVip(System.Int32)
 int32_t GC_RET_SIGNININFO_GetRequiredVip_m26028 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::AddRequiredVip(System.Int32)
 void GC_RET_SIGNININFO_AddRequiredVip_m26029 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_SIGNININFO::get_ExpList()
 Object_t* GC_RET_SIGNININFO_get_ExpList_m26030 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::get_ExpCount()
 int32_t GC_RET_SIGNININFO_get_ExpCount_m26031 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::GetExp(System.Int32)
 int32_t GC_RET_SIGNININFO_GetExp_m26032 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::AddExp(System.Int32)
 void GC_RET_SIGNININFO_AddExp_m26033 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_SIGNININFO::get_MoneyList()
 Object_t* GC_RET_SIGNININFO_get_MoneyList_m26034 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::get_MoneyCount()
 int32_t GC_RET_SIGNININFO_get_MoneyCount_m26035 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::GetMoney(System.Int32)
 int32_t GC_RET_SIGNININFO_GetMoney_m26036 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::AddMoney(System.Int32)
 void GC_RET_SIGNININFO_AddMoney_m26037 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_SIGNININFO::get_BindYuanbaoList()
 Object_t* GC_RET_SIGNININFO_get_BindYuanbaoList_m26038 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::get_BindYuanbaoCount()
 int32_t GC_RET_SIGNININFO_get_BindYuanbaoCount_m26039 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::GetBindYuanbao(System.Int32)
 int32_t GC_RET_SIGNININFO_GetBindYuanbao_m26040 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::AddBindYuanbao(System.Int32)
 void GC_RET_SIGNININFO_AddBindYuanbao_m26041 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_SIGNININFO::get_Item1DataIDList()
 Object_t* GC_RET_SIGNININFO_get_Item1DataIDList_m26042 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::get_Item1DataIDCount()
 int32_t GC_RET_SIGNININFO_get_Item1DataIDCount_m26043 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::GetItem1DataID(System.Int32)
 int32_t GC_RET_SIGNININFO_GetItem1DataID_m26044 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::AddItem1DataID(System.Int32)
 void GC_RET_SIGNININFO_AddItem1DataID_m26045 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_SIGNININFO::get_Item1CountList()
 Object_t* GC_RET_SIGNININFO_get_Item1CountList_m26046 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::get_Item1CountCount()
 int32_t GC_RET_SIGNININFO_get_Item1CountCount_m26047 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::GetItem1Count(System.Int32)
 int32_t GC_RET_SIGNININFO_GetItem1Count_m26048 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::AddItem1Count(System.Int32)
 void GC_RET_SIGNININFO_AddItem1Count_m26049 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_SIGNININFO::get_Item2DataIDList()
 Object_t* GC_RET_SIGNININFO_get_Item2DataIDList_m26050 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::get_Item2DataIDCount()
 int32_t GC_RET_SIGNININFO_get_Item2DataIDCount_m26051 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::GetItem2DataID(System.Int32)
 int32_t GC_RET_SIGNININFO_GetItem2DataID_m26052 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::AddItem2DataID(System.Int32)
 void GC_RET_SIGNININFO_AddItem2DataID_m26053 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_SIGNININFO::get_Item2countList()
 Object_t* GC_RET_SIGNININFO_get_Item2countList_m26054 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::get_Item2countCount()
 int32_t GC_RET_SIGNININFO_get_Item2countCount_m26055 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::GetItem2count(System.Int32)
 int32_t GC_RET_SIGNININFO_GetItem2count_m26056 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::AddItem2count(System.Int32)
 void GC_RET_SIGNININFO_AddItem2count_m26057 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_SIGNININFO::get_HasCurNaturalIndex()
 bool GC_RET_SIGNININFO_get_HasCurNaturalIndex_m26058 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::get_CurNaturalIndex()
 int32_t GC_RET_SIGNININFO_get_CurNaturalIndex_m26059 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::set_CurNaturalIndex(System.Int32)
 void GC_RET_SIGNININFO_set_CurNaturalIndex_m26060 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::SetCurNaturalIndex(System.Int32)
 void GC_RET_SIGNININFO_SetCurNaturalIndex_m26061 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_SIGNININFO::get_HasCurMounthIndex()
 bool GC_RET_SIGNININFO_get_HasCurMounthIndex_m26062 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::get_CurMounthIndex()
 int32_t GC_RET_SIGNININFO_get_CurMounthIndex_m26063 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::set_CurMounthIndex(System.Int32)
 void GC_RET_SIGNININFO_set_CurMounthIndex_m26064 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::SetCurMounthIndex(System.Int32)
 void GC_RET_SIGNININFO_SetCurMounthIndex_m26065 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_SIGNININFO::get_supplySignCostList()
 Object_t* GC_RET_SIGNININFO_get_supplySignCostList_m26066 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::get_supplySignCostCount()
 int32_t GC_RET_SIGNININFO_get_supplySignCostCount_m26067 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::GetSupplySignCost(System.Int32)
 int32_t GC_RET_SIGNININFO_GetSupplySignCost_m26068 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::AddSupplySignCost(System.Int32)
 void GC_RET_SIGNININFO_AddSupplySignCost_m26069 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_SIGNININFO::get_HasFirstCanSignIndex()
 bool GC_RET_SIGNININFO_get_HasFirstCanSignIndex_m26070 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::get_FirstCanSignIndex()
 int32_t GC_RET_SIGNININFO_get_FirstCanSignIndex_m26071 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::set_FirstCanSignIndex(System.Int32)
 void GC_RET_SIGNININFO_set_FirstCanSignIndex_m26072 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::SetFirstCanSignIndex(System.Int32)
 void GC_RET_SIGNININFO_SetFirstCanSignIndex_m26073 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_SIGNININFO::get_HasAlreadySignedCount()
 bool GC_RET_SIGNININFO_get_HasAlreadySignedCount_m26074 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::get_AlreadySignedCount()
 int32_t GC_RET_SIGNININFO_get_AlreadySignedCount_m26075 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::set_AlreadySignedCount(System.Int32)
 void GC_RET_SIGNININFO_set_AlreadySignedCount_m26076 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::SetAlreadySignedCount(System.Int32)
 void GC_RET_SIGNININFO_SetAlreadySignedCount_m26077 (GC_RET_SIGNININFO_t3475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_SIGNININFO::SerializedSize()
 int32_t GC_RET_SIGNININFO_SerializedSize_m26078 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_SIGNININFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RET_SIGNININFO_WriteTo_m26079 (GC_RET_SIGNININFO_t3475 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RET_SIGNININFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RET_SIGNININFO_MergeFrom_m26080 (GC_RET_SIGNININFO_t3475 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_SIGNININFO::IsInitialized()
 bool GC_RET_SIGNININFO_IsInitialized_m26081 (GC_RET_SIGNININFO_t3475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
