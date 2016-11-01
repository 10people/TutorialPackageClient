#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_COPYSCENE_INVITE
struct GC_COPYSCENE_INVITE_t3078;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_COPYSCENE_INVITE::.ctor()
 void GC_COPYSCENE_INVITE__ctor_m19343 (GC_COPYSCENE_INVITE_t3078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_INVITE::get_HasSceneID()
 bool GC_COPYSCENE_INVITE_get_HasSceneID_m19344 (GC_COPYSCENE_INVITE_t3078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_INVITE::get_SceneID()
 int32_t GC_COPYSCENE_INVITE_get_SceneID_m19345 (GC_COPYSCENE_INVITE_t3078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_INVITE::set_SceneID(System.Int32)
 void GC_COPYSCENE_INVITE_set_SceneID_m19346 (GC_COPYSCENE_INVITE_t3078 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_INVITE::SetSceneID(System.Int32)
 void GC_COPYSCENE_INVITE_SetSceneID_m19347 (GC_COPYSCENE_INVITE_t3078 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_INVITE::get_HasInviterName()
 bool GC_COPYSCENE_INVITE_get_HasInviterName_m19348 (GC_COPYSCENE_INVITE_t3078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_COPYSCENE_INVITE::get_InviterName()
 String_t* GC_COPYSCENE_INVITE_get_InviterName_m19349 (GC_COPYSCENE_INVITE_t3078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_INVITE::set_InviterName(System.String)
 void GC_COPYSCENE_INVITE_set_InviterName_m19350 (GC_COPYSCENE_INVITE_t3078 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_INVITE::SetInviterName(System.String)
 void GC_COPYSCENE_INVITE_SetInviterName_m19351 (GC_COPYSCENE_INVITE_t3078 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_INVITE::get_HasDifficult()
 bool GC_COPYSCENE_INVITE_get_HasDifficult_m19352 (GC_COPYSCENE_INVITE_t3078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_INVITE::get_Difficult()
 int32_t GC_COPYSCENE_INVITE_get_Difficult_m19353 (GC_COPYSCENE_INVITE_t3078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_INVITE::set_Difficult(System.Int32)
 void GC_COPYSCENE_INVITE_set_Difficult_m19354 (GC_COPYSCENE_INVITE_t3078 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_INVITE::SetDifficult(System.Int32)
 void GC_COPYSCENE_INVITE_SetDifficult_m19355 (GC_COPYSCENE_INVITE_t3078 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_INVITE::get_HasMultipleType()
 bool GC_COPYSCENE_INVITE_get_HasMultipleType_m19356 (GC_COPYSCENE_INVITE_t3078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_INVITE::get_MultipleType()
 int32_t GC_COPYSCENE_INVITE_get_MultipleType_m19357 (GC_COPYSCENE_INVITE_t3078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_INVITE::set_MultipleType(System.Int32)
 void GC_COPYSCENE_INVITE_set_MultipleType_m19358 (GC_COPYSCENE_INVITE_t3078 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_INVITE::SetMultipleType(System.Int32)
 void GC_COPYSCENE_INVITE_SetMultipleType_m19359 (GC_COPYSCENE_INVITE_t3078 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_INVITE::SerializedSize()
 int32_t GC_COPYSCENE_INVITE_SerializedSize_m19360 (GC_COPYSCENE_INVITE_t3078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_INVITE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_COPYSCENE_INVITE_WriteTo_m19361 (GC_COPYSCENE_INVITE_t3078 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_COPYSCENE_INVITE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_COPYSCENE_INVITE_MergeFrom_m19362 (GC_COPYSCENE_INVITE_t3078 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_INVITE::IsInitialized()
 bool GC_COPYSCENE_INVITE_IsInitialized_m19363 (GC_COPYSCENE_INVITE_t3078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
