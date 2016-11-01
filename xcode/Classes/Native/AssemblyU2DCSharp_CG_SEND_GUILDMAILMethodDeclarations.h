#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_SEND_GUILDMAIL
struct CG_SEND_GUILDMAIL_t3456;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_SEND_GUILDMAIL::.ctor()
 void CG_SEND_GUILDMAIL__ctor_m25702 (CG_SEND_GUILDMAIL_t3456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_SEND_GUILDMAIL::get_HasTextContent()
 bool CG_SEND_GUILDMAIL_get_HasTextContent_m25703 (CG_SEND_GUILDMAIL_t3456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CG_SEND_GUILDMAIL::get_TextContent()
 String_t* CG_SEND_GUILDMAIL_get_TextContent_m25704 (CG_SEND_GUILDMAIL_t3456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SEND_GUILDMAIL::set_TextContent(System.String)
 void CG_SEND_GUILDMAIL_set_TextContent_m25705 (CG_SEND_GUILDMAIL_t3456 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SEND_GUILDMAIL::SetTextContent(System.String)
 void CG_SEND_GUILDMAIL_SetTextContent_m25706 (CG_SEND_GUILDMAIL_t3456 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_SEND_GUILDMAIL::SerializedSize()
 int32_t CG_SEND_GUILDMAIL_SerializedSize_m25707 (CG_SEND_GUILDMAIL_t3456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SEND_GUILDMAIL::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_SEND_GUILDMAIL_WriteTo_m25708 (CG_SEND_GUILDMAIL_t3456 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_SEND_GUILDMAIL::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_SEND_GUILDMAIL_MergeFrom_m25709 (CG_SEND_GUILDMAIL_t3456 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_SEND_GUILDMAIL::IsInitialized()
 bool CG_SEND_GUILDMAIL_IsInitialized_m25710 (CG_SEND_GUILDMAIL_t3456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
