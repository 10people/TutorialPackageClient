#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MasterPreviewList
struct MasterPreviewList_t4781;
// System.Collections.Generic.List`1<MasterPreviewInfo>
struct List_1_t4780;
// GC_MASTER_RET_LIST
struct GC_MASTER_RET_LIST_t3261;
// MasterPreviewInfo
struct MasterPreviewInfo_t1538;
// System.Collections.Generic.SortedDictionary`2<System.Int32,MasterPreviewInfo>
struct SortedDictionary_2_t4782;

// System.Void MasterPreviewList::.ctor()
 void MasterPreviewList__ctor_m33914 (MasterPreviewList_t4781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterPreviewList::CleanUp()
 void MasterPreviewList_CleanUp_m33915 (MasterPreviewList_t4781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MasterPreviewInfo> MasterPreviewList::get_MasterInfoList()
 List_1_t4780 * MasterPreviewList_get_MasterInfoList_m33916 (MasterPreviewList_t4781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterPreviewList::UpdateData(GC_MASTER_RET_LIST)
 void MasterPreviewList_UpdateData_m33917 (MasterPreviewList_t4781 * __this, GC_MASTER_RET_LIST_t3261 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterPreviewList::doAddTorchToSortedList(System.Int32,MasterPreviewInfo,System.Collections.Generic.SortedDictionary`2<System.Int32,MasterPreviewInfo>)
 void MasterPreviewList_doAddTorchToSortedList_m33918 (MasterPreviewList_t4781 * __this, int32_t ___key, MasterPreviewInfo_t1538 * ___value, SortedDictionary_2_t4782 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
