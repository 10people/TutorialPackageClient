#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_SYNSELTRAGET_ATTR
struct GC_SYNSELTRAGET_ATTR_t3043;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_SYNSELTRAGET_ATTR::.ctor()
 void GC_SYNSELTRAGET_ATTR__ctor_m18569 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYNSELTRAGET_ATTR::get_HasObjId()
 bool GC_SYNSELTRAGET_ATTR_get_HasObjId_m18570 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNSELTRAGET_ATTR::get_ObjId()
 int32_t GC_SYNSELTRAGET_ATTR_get_ObjId_m18571 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::set_ObjId(System.Int32)
 void GC_SYNSELTRAGET_ATTR_set_ObjId_m18572 (GC_SYNSELTRAGET_ATTR_t3043 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::SetObjId(System.Int32)
 void GC_SYNSELTRAGET_ATTR_SetObjId_m18573 (GC_SYNSELTRAGET_ATTR_t3043 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYNSELTRAGET_ATTR::get_HasCurHp()
 bool GC_SYNSELTRAGET_ATTR_get_HasCurHp_m18574 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNSELTRAGET_ATTR::get_CurHp()
 int32_t GC_SYNSELTRAGET_ATTR_get_CurHp_m18575 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::set_CurHp(System.Int32)
 void GC_SYNSELTRAGET_ATTR_set_CurHp_m18576 (GC_SYNSELTRAGET_ATTR_t3043 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::SetCurHp(System.Int32)
 void GC_SYNSELTRAGET_ATTR_SetCurHp_m18577 (GC_SYNSELTRAGET_ATTR_t3043 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYNSELTRAGET_ATTR::get_HasCurMp()
 bool GC_SYNSELTRAGET_ATTR_get_HasCurMp_m18578 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNSELTRAGET_ATTR::get_CurMp()
 int32_t GC_SYNSELTRAGET_ATTR_get_CurMp_m18579 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::set_CurMp(System.Int32)
 void GC_SYNSELTRAGET_ATTR_set_CurMp_m18580 (GC_SYNSELTRAGET_ATTR_t3043 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::SetCurMp(System.Int32)
 void GC_SYNSELTRAGET_ATTR_SetCurMp_m18581 (GC_SYNSELTRAGET_ATTR_t3043 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYNSELTRAGET_ATTR::get_HasMaxHP()
 bool GC_SYNSELTRAGET_ATTR_get_HasMaxHP_m18582 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNSELTRAGET_ATTR::get_MaxHP()
 int32_t GC_SYNSELTRAGET_ATTR_get_MaxHP_m18583 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::set_MaxHP(System.Int32)
 void GC_SYNSELTRAGET_ATTR_set_MaxHP_m18584 (GC_SYNSELTRAGET_ATTR_t3043 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::SetMaxHP(System.Int32)
 void GC_SYNSELTRAGET_ATTR_SetMaxHP_m18585 (GC_SYNSELTRAGET_ATTR_t3043 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYNSELTRAGET_ATTR::get_HasMaxMP()
 bool GC_SYNSELTRAGET_ATTR_get_HasMaxMP_m18586 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNSELTRAGET_ATTR::get_MaxMP()
 int32_t GC_SYNSELTRAGET_ATTR_get_MaxMP_m18587 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::set_MaxMP(System.Int32)
 void GC_SYNSELTRAGET_ATTR_set_MaxMP_m18588 (GC_SYNSELTRAGET_ATTR_t3043 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::SetMaxMP(System.Int32)
 void GC_SYNSELTRAGET_ATTR_SetMaxMP_m18589 (GC_SYNSELTRAGET_ATTR_t3043 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYNSELTRAGET_ATTR::get_HasCurLev()
 bool GC_SYNSELTRAGET_ATTR_get_HasCurLev_m18590 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNSELTRAGET_ATTR::get_CurLev()
 int32_t GC_SYNSELTRAGET_ATTR_get_CurLev_m18591 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::set_CurLev(System.Int32)
 void GC_SYNSELTRAGET_ATTR_set_CurLev_m18592 (GC_SYNSELTRAGET_ATTR_t3043 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::SetCurLev(System.Int32)
 void GC_SYNSELTRAGET_ATTR_SetCurLev_m18593 (GC_SYNSELTRAGET_ATTR_t3043 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYNSELTRAGET_ATTR::get_HasName()
 bool GC_SYNSELTRAGET_ATTR_get_HasName_m18594 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_SYNSELTRAGET_ATTR::get_Name()
 String_t* GC_SYNSELTRAGET_ATTR_get_Name_m18595 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::set_Name(System.String)
 void GC_SYNSELTRAGET_ATTR_set_Name_m18596 (GC_SYNSELTRAGET_ATTR_t3043 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::SetName(System.String)
 void GC_SYNSELTRAGET_ATTR_SetName_m18597 (GC_SYNSELTRAGET_ATTR_t3043 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYNSELTRAGET_ATTR::get_HasBelongTeamID()
 bool GC_SYNSELTRAGET_ATTR_get_HasBelongTeamID_m18598 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNSELTRAGET_ATTR::get_BelongTeamID()
 int32_t GC_SYNSELTRAGET_ATTR_get_BelongTeamID_m18599 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::set_BelongTeamID(System.Int32)
 void GC_SYNSELTRAGET_ATTR_set_BelongTeamID_m18600 (GC_SYNSELTRAGET_ATTR_t3043 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::SetBelongTeamID(System.Int32)
 void GC_SYNSELTRAGET_ATTR_SetBelongTeamID_m18601 (GC_SYNSELTRAGET_ATTR_t3043 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYNSELTRAGET_ATTR::get_HasBelongObjID()
 bool GC_SYNSELTRAGET_ATTR_get_HasBelongObjID_m18602 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNSELTRAGET_ATTR::get_BelongObjID()
 int32_t GC_SYNSELTRAGET_ATTR_get_BelongObjID_m18603 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::set_BelongObjID(System.Int32)
 void GC_SYNSELTRAGET_ATTR_set_BelongObjID_m18604 (GC_SYNSELTRAGET_ATTR_t3043 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::SetBelongObjID(System.Int32)
 void GC_SYNSELTRAGET_ATTR_SetBelongObjID_m18605 (GC_SYNSELTRAGET_ATTR_t3043 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNSELTRAGET_ATTR::SerializedSize()
 int32_t GC_SYNSELTRAGET_ATTR_SerializedSize_m18606 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNSELTRAGET_ATTR::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_SYNSELTRAGET_ATTR_WriteTo_m18607 (GC_SYNSELTRAGET_ATTR_t3043 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_SYNSELTRAGET_ATTR::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_SYNSELTRAGET_ATTR_MergeFrom_m18608 (GC_SYNSELTRAGET_ATTR_t3043 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYNSELTRAGET_ATTR::IsInitialized()
 bool GC_SYNSELTRAGET_ATTR_IsInitialized_m18609 (GC_SYNSELTRAGET_ATTR_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
