#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_MAIL_SEND
struct CG_MAIL_SEND_t3099;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_MAIL_SEND::.ctor()
 void CG_MAIL_SEND__ctor_m19713 (CG_MAIL_SEND_t3099 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_MAIL_SEND::get_HasReceiverGuid()
 bool CG_MAIL_SEND_get_HasReceiverGuid_m19714 (CG_MAIL_SEND_t3099 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_MAIL_SEND::get_ReceiverGuid()
 uint64_t CG_MAIL_SEND_get_ReceiverGuid_m19715 (CG_MAIL_SEND_t3099 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_MAIL_SEND::set_ReceiverGuid(System.UInt64)
 void CG_MAIL_SEND_set_ReceiverGuid_m19716 (CG_MAIL_SEND_t3099 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_MAIL_SEND::SetReceiverGuid(System.UInt64)
 void CG_MAIL_SEND_SetReceiverGuid_m19717 (CG_MAIL_SEND_t3099 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_MAIL_SEND::get_HasTextContent()
 bool CG_MAIL_SEND_get_HasTextContent_m19718 (CG_MAIL_SEND_t3099 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CG_MAIL_SEND::get_TextContent()
 String_t* CG_MAIL_SEND_get_TextContent_m19719 (CG_MAIL_SEND_t3099 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_MAIL_SEND::set_TextContent(System.String)
 void CG_MAIL_SEND_set_TextContent_m19720 (CG_MAIL_SEND_t3099 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_MAIL_SEND::SetTextContent(System.String)
 void CG_MAIL_SEND_SetTextContent_m19721 (CG_MAIL_SEND_t3099 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_MAIL_SEND::SerializedSize()
 int32_t CG_MAIL_SEND_SerializedSize_m19722 (CG_MAIL_SEND_t3099 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_MAIL_SEND::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_MAIL_SEND_WriteTo_m19723 (CG_MAIL_SEND_t3099 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_MAIL_SEND::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_MAIL_SEND_MergeFrom_m19724 (CG_MAIL_SEND_t3099 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_MAIL_SEND::IsInitialized()
 bool CG_MAIL_SEND_IsInitialized_m19725 (CG_MAIL_SEND_t3099 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
