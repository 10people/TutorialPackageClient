#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_SYNC_AWARDTABLE
struct GC_SYNC_AWARDTABLE_t3342;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_SYNC_AWARDTABLE::.ctor()
 void GC_SYNC_AWARDTABLE__ctor_m23877 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_AWARDTABLE::get_idList()
 Object_t* GC_SYNC_AWARDTABLE_get_idList_m23878 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::get_idCount()
 int32_t GC_SYNC_AWARDTABLE_get_idCount_m23879 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::GetId(System.Int32)
 int32_t GC_SYNC_AWARDTABLE_GetId_m23880 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_AWARDTABLE::AddId(System.Int32)
 void GC_SYNC_AWARDTABLE_AddId_m23881 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_AWARDTABLE::get_lefttimeList()
 Object_t* GC_SYNC_AWARDTABLE_get_lefttimeList_m23882 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::get_lefttimeCount()
 int32_t GC_SYNC_AWARDTABLE_get_lefttimeCount_m23883 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::GetLefttime(System.Int32)
 int32_t GC_SYNC_AWARDTABLE_GetLefttime_m23884 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_AWARDTABLE::AddLefttime(System.Int32)
 void GC_SYNC_AWARDTABLE_AddLefttime_m23885 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_AWARDTABLE::get_expList()
 Object_t* GC_SYNC_AWARDTABLE_get_expList_m23886 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::get_expCount()
 int32_t GC_SYNC_AWARDTABLE_get_expCount_m23887 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::GetExp(System.Int32)
 int32_t GC_SYNC_AWARDTABLE_GetExp_m23888 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_AWARDTABLE::AddExp(System.Int32)
 void GC_SYNC_AWARDTABLE_AddExp_m23889 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_AWARDTABLE::get_moneyList()
 Object_t* GC_SYNC_AWARDTABLE_get_moneyList_m23890 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::get_moneyCount()
 int32_t GC_SYNC_AWARDTABLE_get_moneyCount_m23891 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::GetMoney(System.Int32)
 int32_t GC_SYNC_AWARDTABLE_GetMoney_m23892 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_AWARDTABLE::AddMoney(System.Int32)
 void GC_SYNC_AWARDTABLE_AddMoney_m23893 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_AWARDTABLE::get_bindyuanbaoList()
 Object_t* GC_SYNC_AWARDTABLE_get_bindyuanbaoList_m23894 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::get_bindyuanbaoCount()
 int32_t GC_SYNC_AWARDTABLE_get_bindyuanbaoCount_m23895 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::GetBindyuanbao(System.Int32)
 int32_t GC_SYNC_AWARDTABLE_GetBindyuanbao_m23896 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_AWARDTABLE::AddBindyuanbao(System.Int32)
 void GC_SYNC_AWARDTABLE_AddBindyuanbao_m23897 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_AWARDTABLE::get_item1dataidList()
 Object_t* GC_SYNC_AWARDTABLE_get_item1dataidList_m23898 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::get_item1dataidCount()
 int32_t GC_SYNC_AWARDTABLE_get_item1dataidCount_m23899 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::GetItem1dataid(System.Int32)
 int32_t GC_SYNC_AWARDTABLE_GetItem1dataid_m23900 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_AWARDTABLE::AddItem1dataid(System.Int32)
 void GC_SYNC_AWARDTABLE_AddItem1dataid_m23901 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_AWARDTABLE::get_item1countList()
 Object_t* GC_SYNC_AWARDTABLE_get_item1countList_m23902 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::get_item1countCount()
 int32_t GC_SYNC_AWARDTABLE_get_item1countCount_m23903 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::GetItem1count(System.Int32)
 int32_t GC_SYNC_AWARDTABLE_GetItem1count_m23904 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_AWARDTABLE::AddItem1count(System.Int32)
 void GC_SYNC_AWARDTABLE_AddItem1count_m23905 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_AWARDTABLE::get_item2dataidList()
 Object_t* GC_SYNC_AWARDTABLE_get_item2dataidList_m23906 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::get_item2dataidCount()
 int32_t GC_SYNC_AWARDTABLE_get_item2dataidCount_m23907 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::GetItem2dataid(System.Int32)
 int32_t GC_SYNC_AWARDTABLE_GetItem2dataid_m23908 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_AWARDTABLE::AddItem2dataid(System.Int32)
 void GC_SYNC_AWARDTABLE_AddItem2dataid_m23909 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_AWARDTABLE::get_item2countList()
 Object_t* GC_SYNC_AWARDTABLE_get_item2countList_m23910 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::get_item2countCount()
 int32_t GC_SYNC_AWARDTABLE_get_item2countCount_m23911 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::GetItem2count(System.Int32)
 int32_t GC_SYNC_AWARDTABLE_GetItem2count_m23912 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_AWARDTABLE::AddItem2count(System.Int32)
 void GC_SYNC_AWARDTABLE_AddItem2count_m23913 (GC_SYNC_AWARDTABLE_t3342 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_AWARDTABLE::SerializedSize()
 int32_t GC_SYNC_AWARDTABLE_SerializedSize_m23914 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_AWARDTABLE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_SYNC_AWARDTABLE_WriteTo_m23915 (GC_SYNC_AWARDTABLE_t3342 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_SYNC_AWARDTABLE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_SYNC_AWARDTABLE_MergeFrom_m23916 (GC_SYNC_AWARDTABLE_t3342 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYNC_AWARDTABLE::IsInitialized()
 bool GC_SYNC_AWARDTABLE_IsInitialized_m23917 (GC_SYNC_AWARDTABLE_t3342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
