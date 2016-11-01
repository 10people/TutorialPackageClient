#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_MAIL_OPERATION
struct CG_MAIL_OPERATION_t3101;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_MAIL_OPERATION::.ctor()
 void CG_MAIL_OPERATION__ctor_m19726 (CG_MAIL_OPERATION_t3101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_MAIL_OPERATION::get_HasOperationType()
 bool CG_MAIL_OPERATION_get_HasOperationType_m19727 (CG_MAIL_OPERATION_t3101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_MAIL_OPERATION::get_OperationType()
 int32_t CG_MAIL_OPERATION_get_OperationType_m19728 (CG_MAIL_OPERATION_t3101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_MAIL_OPERATION::set_OperationType(System.Int32)
 void CG_MAIL_OPERATION_set_OperationType_m19729 (CG_MAIL_OPERATION_t3101 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_MAIL_OPERATION::SetOperationType(System.Int32)
 void CG_MAIL_OPERATION_SetOperationType_m19730 (CG_MAIL_OPERATION_t3101 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_MAIL_OPERATION::get_HasMailGuid()
 bool CG_MAIL_OPERATION_get_HasMailGuid_m19731 (CG_MAIL_OPERATION_t3101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_MAIL_OPERATION::get_MailGuid()
 uint64_t CG_MAIL_OPERATION_get_MailGuid_m19732 (CG_MAIL_OPERATION_t3101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_MAIL_OPERATION::set_MailGuid(System.UInt64)
 void CG_MAIL_OPERATION_set_MailGuid_m19733 (CG_MAIL_OPERATION_t3101 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_MAIL_OPERATION::SetMailGuid(System.UInt64)
 void CG_MAIL_OPERATION_SetMailGuid_m19734 (CG_MAIL_OPERATION_t3101 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_MAIL_OPERATION::SerializedSize()
 int32_t CG_MAIL_OPERATION_SerializedSize_m19735 (CG_MAIL_OPERATION_t3101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_MAIL_OPERATION::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_MAIL_OPERATION_WriteTo_m19736 (CG_MAIL_OPERATION_t3101 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_MAIL_OPERATION::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_MAIL_OPERATION_MergeFrom_m19737 (CG_MAIL_OPERATION_t3101 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_MAIL_OPERATION::IsInitialized()
 bool CG_MAIL_OPERATION_IsInitialized_m19738 (CG_MAIL_OPERATION_t3101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
