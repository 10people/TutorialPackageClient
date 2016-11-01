#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_FINDPLAYER
struct CG_FINDPLAYER_t3041;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_FINDPLAYER::.ctor()
 void CG_FINDPLAYER__ctor_m18527 (CG_FINDPLAYER_t3041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_FINDPLAYER::get_HasGuid()
 bool CG_FINDPLAYER_get_HasGuid_m18528 (CG_FINDPLAYER_t3041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_FINDPLAYER::get_Guid()
 uint64_t CG_FINDPLAYER_get_Guid_m18529 (CG_FINDPLAYER_t3041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_FINDPLAYER::set_Guid(System.UInt64)
 void CG_FINDPLAYER_set_Guid_m18530 (CG_FINDPLAYER_t3041 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_FINDPLAYER::SetGuid(System.UInt64)
 void CG_FINDPLAYER_SetGuid_m18531 (CG_FINDPLAYER_t3041 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_FINDPLAYER::get_HasName()
 bool CG_FINDPLAYER_get_HasName_m18532 (CG_FINDPLAYER_t3041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CG_FINDPLAYER::get_Name()
 String_t* CG_FINDPLAYER_get_Name_m18533 (CG_FINDPLAYER_t3041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_FINDPLAYER::set_Name(System.String)
 void CG_FINDPLAYER_set_Name_m18534 (CG_FINDPLAYER_t3041 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_FINDPLAYER::SetName(System.String)
 void CG_FINDPLAYER_SetName_m18535 (CG_FINDPLAYER_t3041 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_FINDPLAYER::SerializedSize()
 int32_t CG_FINDPLAYER_SerializedSize_m18536 (CG_FINDPLAYER_t3041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_FINDPLAYER::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_FINDPLAYER_WriteTo_m18537 (CG_FINDPLAYER_t3041 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_FINDPLAYER::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_FINDPLAYER_MergeFrom_m18538 (CG_FINDPLAYER_t3041 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_FINDPLAYER::IsInitialized()
 bool CG_FINDPLAYER_IsInitialized_m18539 (CG_FINDPLAYER_t3041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
