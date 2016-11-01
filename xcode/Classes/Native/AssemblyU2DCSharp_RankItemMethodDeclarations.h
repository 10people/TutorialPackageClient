#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RankItem
struct RankItem_t1919;
// System.String
struct String_t;

// System.Void RankItem::.ctor()
 void RankItem__ctor_m12539 (RankItem_t1919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankItem::set_Guid(System.UInt64)
 void RankItem_set_Guid_m12540 (RankItem_t1919 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 RankItem::get_Guid()
 uint64_t RankItem_get_Guid_m12541 (RankItem_t1919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankItem::set_Name(System.String)
 void RankItem_set_Name_m12542 (RankItem_t1919 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RankItem::get_Name()
 String_t* RankItem_get_Name_m12543 (RankItem_t1919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankItem::SetMaxLabel(System.Int32)
 void RankItem_SetMaxLabel_m12544 (RankItem_t1919 * __this, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankItem::SendData(System.UInt64,System.String,System.String,System.String,System.String,System.String,System.String)
 void RankItem_SendData_m12545 (RankItem_t1919 * __this, uint64_t ___oGuid, String_t* ___str1, String_t* ___str2, String_t* ___str3, String_t* ___str4, String_t* ___str5, String_t* ___str6, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankItem::Cleanup()
 void RankItem_Cleanup_m12546 (RankItem_t1919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankItem::OnClickItem()
 void RankItem_OnClickItem_m12547 (RankItem_t1919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankItem::OnSelectItem()
 void RankItem_OnSelectItem_m12548 (RankItem_t1919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankItem::OnCancelSelectItem()
 void RankItem_OnCancelSelectItem_m12549 (RankItem_t1919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
