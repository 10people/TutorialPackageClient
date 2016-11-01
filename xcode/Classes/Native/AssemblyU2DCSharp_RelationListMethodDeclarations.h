#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RelationList
struct RelationList_t4805;
// System.Collections.Generic.Dictionary`2<System.UInt64,Relation>
struct Dictionary_2_t4804;
// Relation
struct Relation_t1442;
// GC_SYC_FULL_FRIEND_LIST
struct GC_SYC_FULL_FRIEND_LIST_t3035;
// GC_SYC_FULL_BLACK_LIST
struct GC_SYC_FULL_BLACK_LIST_t3038;
// GC_SYC_FULL_HATE_LIST
struct GC_SYC_FULL_HATE_LIST_t3409;

// System.Void RelationList::.ctor()
 void RelationList__ctor_m34181 (RelationList_t4805 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.UInt64,Relation> RelationList::get_RelationDataList()
 Dictionary_2_t4804 * RelationList_get_RelationDataList_m34182 (RelationList_t4805 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationList::set_RelationDataList(System.Collections.Generic.Dictionary`2<System.UInt64,Relation>)
 void RelationList_set_RelationDataList_m34183 (RelationList_t4805 * __this, Dictionary_2_t4804 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationList::CleanUp()
 void RelationList_CleanUp_m34184 (RelationList_t4805 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RelationList::AddRelation(Relation)
 bool RelationList_AddRelation_m34185 (RelationList_t4805 * __this, Relation_t1442 * ____relation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationList::DelRelation(System.UInt64)
 void RelationList_DelRelation_m34186 (RelationList_t4805 * __this, uint64_t ___relationGuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RelationList::GetRelationNum()
 int32_t RelationList_GetRelationNum_m34187 (RelationList_t4805 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RelationList::GetStateRelationNum(System.Int32)
 int32_t RelationList_GetStateRelationNum_m34188 (RelationList_t4805 * __this, int32_t ___relationState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationList::UpdateRelation(Relation)
 void RelationList_UpdateRelation_m34189 (RelationList_t4805 * __this, Relation_t1442 * ____relation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationList::UpdateRelationState(System.UInt64,System.Int32)
 void RelationList_UpdateRelationState_m34190 (RelationList_t4805 * __this, uint64_t ___relationGuid, int32_t ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationList::UpdateRelationUserInfo(Relation)
 void RelationList_UpdateRelationUserInfo_m34191 (RelationList_t4805 * __this, Relation_t1442 * ____relation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationList::RebuildRelationList(GC_SYC_FULL_FRIEND_LIST)
 void RelationList_RebuildRelationList_m34192 (RelationList_t4805 * __this, GC_SYC_FULL_FRIEND_LIST_t3035 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationList::RebuildRelationList(GC_SYC_FULL_BLACK_LIST)
 void RelationList_RebuildRelationList_m34193 (RelationList_t4805 * __this, GC_SYC_FULL_BLACK_LIST_t3038 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationList::RebuildRelationList(GC_SYC_FULL_HATE_LIST)
 void RelationList_RebuildRelationList_m34194 (RelationList_t4805 * __this, GC_SYC_FULL_HATE_LIST_t3409 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationList::SortByRelationState(System.Int32)
 void RelationList_SortByRelationState_m34195 (RelationList_t4805 * __this, int32_t ____state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationList::SortByTimeInfo(System.Collections.Generic.Dictionary`2<System.UInt64,Relation>)
 void RelationList_SortByTimeInfo_m34196 (RelationList_t4805 * __this, Dictionary_2_t4804 * ___needSortList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RelationList::IsExist(System.UInt64)
 bool RelationList_IsExist_m34197 (RelationList_t4805 * __this, uint64_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
