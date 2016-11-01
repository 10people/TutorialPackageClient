#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.MoneyTree.MoneyTreeData
struct MoneyTreeData_t4797;
// GC_MONEYTREE_DATA
struct GC_MONEYTREE_DATA_t3140;
// GC_MONEYTREE_VIP_RET
struct GC_MONEYTREE_VIP_RET_t3467;

// System.Int32 Games.MoneyTree.MoneyTreeData::get_MoneyTreeID()
 int32_t MoneyTreeData_get_MoneyTreeID_m34016 (MoneyTreeData_t4797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.MoneyTree.MoneyTreeData::set_MoneyTreeID(System.Int32)
 void MoneyTreeData_set_MoneyTreeID_m34017 (MoneyTreeData_t4797 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.MoneyTree.MoneyTreeData::get_CDTime()
 int32_t MoneyTreeData_get_CDTime_m34018 (MoneyTreeData_t4797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.MoneyTree.MoneyTreeData::set_CDTime(System.Int32)
 void MoneyTreeData_set_CDTime_m34019 (MoneyTreeData_t4797 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.MoneyTree.MoneyTreeData::get_YuanBaoAwardCount()
 int32_t MoneyTreeData_get_YuanBaoAwardCount_m34020 (MoneyTreeData_t4797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.MoneyTree.MoneyTreeData::set_YuanBaoAwardCount(System.Int32)
 void MoneyTreeData_set_YuanBaoAwardCount_m34021 (MoneyTreeData_t4797 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.MoneyTree.MoneyTreeData::CleanUp()
 void MoneyTreeData_CleanUp_m34022 (MoneyTreeData_t4797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.MoneyTree.MoneyTreeData::Tick_MoneyTreeAward()
 void MoneyTreeData_Tick_MoneyTreeAward_m34023 (MoneyTreeData_t4797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.MoneyTree.MoneyTreeData::SendAwardPacket(System.Int32,System.Int32)
 void MoneyTreeData_SendAwardPacket_m34024 (MoneyTreeData_t4797 * __this, int32_t ___nAwardCount, int32_t ___nAwardType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.MoneyTree.MoneyTreeData::HandlePacket(GC_MONEYTREE_DATA)
 void MoneyTreeData_HandlePacket_m34025 (MoneyTreeData_t4797 * __this, GC_MONEYTREE_DATA_t3140 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.MoneyTree.MoneyTreeData::HandlePacket(GC_MONEYTREE_VIP_RET)
 void MoneyTreeData_HandlePacket_m34026 (MoneyTreeData_t4797 * __this, GC_MONEYTREE_VIP_RET_t3467 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
