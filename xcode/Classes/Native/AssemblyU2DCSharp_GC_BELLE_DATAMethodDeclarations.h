#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_BELLE_DATA
struct GC_BELLE_DATA_t2988;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_BELLE_DATA::.ctor()
 void GC_BELLE_DATA__ctor_m17571 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_BELLE_DATA::get_belleIDList()
 Object_t* GC_BELLE_DATA_get_belleIDList_m17572 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::get_belleIDCount()
 int32_t GC_BELLE_DATA_get_belleIDCount_m17573 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::GetBelleID(System.Int32)
 int32_t GC_BELLE_DATA_GetBelleID_m17574 (GC_BELLE_DATA_t2988 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::AddBelleID(System.Int32)
 void GC_BELLE_DATA_AddBelleID_m17575 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_BELLE_DATA::get_belleLevelList()
 Object_t* GC_BELLE_DATA_get_belleLevelList_m17576 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::get_belleLevelCount()
 int32_t GC_BELLE_DATA_get_belleLevelCount_m17577 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::GetBelleLevel(System.Int32)
 int32_t GC_BELLE_DATA_GetBelleLevel_m17578 (GC_BELLE_DATA_t2988 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::AddBelleLevel(System.Int32)
 void GC_BELLE_DATA_AddBelleLevel_m17579 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_BELLE_DATA::get_belleMatrixIDList()
 Object_t* GC_BELLE_DATA_get_belleMatrixIDList_m17580 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::get_belleMatrixIDCount()
 int32_t GC_BELLE_DATA_get_belleMatrixIDCount_m17581 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::GetBelleMatrixID(System.Int32)
 int32_t GC_BELLE_DATA_GetBelleMatrixID_m17582 (GC_BELLE_DATA_t2988 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::AddBelleMatrixID(System.Int32)
 void GC_BELLE_DATA_AddBelleMatrixID_m17583 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_BELLE_DATA::get_belleMatrixIndexList()
 Object_t* GC_BELLE_DATA_get_belleMatrixIndexList_m17584 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::get_belleMatrixIndexCount()
 int32_t GC_BELLE_DATA_get_belleMatrixIndexCount_m17585 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::GetBelleMatrixIndex(System.Int32)
 int32_t GC_BELLE_DATA_GetBelleMatrixIndex_m17586 (GC_BELLE_DATA_t2988 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::AddBelleMatrixIndex(System.Int32)
 void GC_BELLE_DATA_AddBelleMatrixIndex_m17587 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_BELLE_DATA::get_belleNextEvolutionTimerList()
 Object_t* GC_BELLE_DATA_get_belleNextEvolutionTimerList_m17588 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::get_belleNextEvolutionTimerCount()
 int32_t GC_BELLE_DATA_get_belleNextEvolutionTimerCount_m17589 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::GetBelleNextEvolutionTimer(System.Int32)
 int32_t GC_BELLE_DATA_GetBelleNextEvolutionTimer_m17590 (GC_BELLE_DATA_t2988 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::AddBelleNextEvolutionTimer(System.Int32)
 void GC_BELLE_DATA_AddBelleNextEvolutionTimer_m17591 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_BELLE_DATA::get_belleFavourValueList()
 Object_t* GC_BELLE_DATA_get_belleFavourValueList_m17592 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::get_belleFavourValueCount()
 int32_t GC_BELLE_DATA_get_belleFavourValueCount_m17593 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::GetBelleFavourValue(System.Int32)
 int32_t GC_BELLE_DATA_GetBelleFavourValue_m17594 (GC_BELLE_DATA_t2988 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::AddBelleFavourValue(System.Int32)
 void GC_BELLE_DATA_AddBelleFavourValue_m17595 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_BELLE_DATA::get_matrixIDList()
 Object_t* GC_BELLE_DATA_get_matrixIDList_m17596 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::get_matrixIDCount()
 int32_t GC_BELLE_DATA_get_matrixIDCount_m17597 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::GetMatrixID(System.Int32)
 int32_t GC_BELLE_DATA_GetMatrixID_m17598 (GC_BELLE_DATA_t2988 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::AddMatrixID(System.Int32)
 void GC_BELLE_DATA_AddMatrixID_m17599 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_BELLE_DATA::get_matrixIsActiveList()
 Object_t* GC_BELLE_DATA_get_matrixIsActiveList_m17600 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::get_matrixIsActiveCount()
 int32_t GC_BELLE_DATA_get_matrixIsActiveCount_m17601 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::GetMatrixIsActive(System.Int32)
 int32_t GC_BELLE_DATA_GetMatrixIsActive_m17602 (GC_BELLE_DATA_t2988 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::AddMatrixIsActive(System.Int32)
 void GC_BELLE_DATA_AddMatrixIsActive_m17603 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_BELLE_DATA::get_matrixBellesList()
 Object_t* GC_BELLE_DATA_get_matrixBellesList_m17604 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::get_matrixBellesCount()
 int32_t GC_BELLE_DATA_get_matrixBellesCount_m17605 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::GetMatrixBelles(System.Int32)
 int32_t GC_BELLE_DATA_GetMatrixBelles_m17606 (GC_BELLE_DATA_t2988 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::AddMatrixBelles(System.Int32)
 void GC_BELLE_DATA_AddMatrixBelles_m17607 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_BELLE_DATA::get_HasDayCloseTime()
 bool GC_BELLE_DATA_get_HasDayCloseTime_m17608 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::get_DayCloseTime()
 int32_t GC_BELLE_DATA_get_DayCloseTime_m17609 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::set_DayCloseTime(System.Int32)
 void GC_BELLE_DATA_set_DayCloseTime_m17610 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::SetDayCloseTime(System.Int32)
 void GC_BELLE_DATA_SetDayCloseTime_m17611 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_BELLE_DATA::get_HasDayMaxCloseTime()
 bool GC_BELLE_DATA_get_HasDayMaxCloseTime_m17612 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::get_DayMaxCloseTime()
 int32_t GC_BELLE_DATA_get_DayMaxCloseTime_m17613 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::set_DayMaxCloseTime(System.Int32)
 void GC_BELLE_DATA_set_DayMaxCloseTime_m17614 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::SetDayMaxCloseTime(System.Int32)
 void GC_BELLE_DATA_SetDayMaxCloseTime_m17615 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_BELLE_DATA::get_HasBelleMatrixActiveMax()
 bool GC_BELLE_DATA_get_HasBelleMatrixActiveMax_m17616 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::get_BelleMatrixActiveMax()
 int32_t GC_BELLE_DATA_get_BelleMatrixActiveMax_m17617 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::set_BelleMatrixActiveMax(System.Int32)
 void GC_BELLE_DATA_set_BelleMatrixActiveMax_m17618 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::SetBelleMatrixActiveMax(System.Int32)
 void GC_BELLE_DATA_SetBelleMatrixActiveMax_m17619 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_BELLE_DATA::get_HasNextCloseTimer()
 bool GC_BELLE_DATA_get_HasNextCloseTimer_m17620 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::get_NextCloseTimer()
 int32_t GC_BELLE_DATA_get_NextCloseTimer_m17621 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::set_NextCloseTimer(System.Int32)
 void GC_BELLE_DATA_set_NextCloseTimer_m17622 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::SetNextCloseTimer(System.Int32)
 void GC_BELLE_DATA_SetNextCloseTimer_m17623 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_BELLE_DATA::get_belleCloseAddAttrValueList()
 Object_t* GC_BELLE_DATA_get_belleCloseAddAttrValueList_m17624 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::get_belleCloseAddAttrValueCount()
 int32_t GC_BELLE_DATA_get_belleCloseAddAttrValueCount_m17625 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::GetBelleCloseAddAttrValue(System.Int32)
 int32_t GC_BELLE_DATA_GetBelleCloseAddAttrValue_m17626 (GC_BELLE_DATA_t2988 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::AddBelleCloseAddAttrValue(System.Int32)
 void GC_BELLE_DATA_AddBelleCloseAddAttrValue_m17627 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_BELLE_DATA::get_closeLevelList()
 Object_t* GC_BELLE_DATA_get_closeLevelList_m17628 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::get_closeLevelCount()
 int32_t GC_BELLE_DATA_get_closeLevelCount_m17629 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::GetCloseLevel(System.Int32)
 int32_t GC_BELLE_DATA_GetCloseLevel_m17630 (GC_BELLE_DATA_t2988 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::AddCloseLevel(System.Int32)
 void GC_BELLE_DATA_AddCloseLevel_m17631 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_BELLE_DATA::get_subLevelList()
 Object_t* GC_BELLE_DATA_get_subLevelList_m17632 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::get_subLevelCount()
 int32_t GC_BELLE_DATA_get_subLevelCount_m17633 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::GetSubLevel(System.Int32)
 int32_t GC_BELLE_DATA_GetSubLevel_m17634 (GC_BELLE_DATA_t2988 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::AddSubLevel(System.Int32)
 void GC_BELLE_DATA_AddSubLevel_m17635 (GC_BELLE_DATA_t2988 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_BELLE_DATA::SerializedSize()
 int32_t GC_BELLE_DATA_SerializedSize_m17636 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_BELLE_DATA::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_BELLE_DATA_WriteTo_m17637 (GC_BELLE_DATA_t2988 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_BELLE_DATA::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_BELLE_DATA_MergeFrom_m17638 (GC_BELLE_DATA_t2988 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_BELLE_DATA::IsInitialized()
 bool GC_BELLE_DATA_IsInitialized_m17639 (GC_BELLE_DATA_t2988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
