#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_VOICE_CHAT
struct CG_VOICE_CHAT_t3437;
// Google.ProtocolBuffers.ByteString
struct ByteString_t3022;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_VOICE_CHAT::.ctor()
 void CG_VOICE_CHAT__ctor_m25311 (CG_VOICE_CHAT_t3437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_VOICE_CHAT::get_HasVoiceData()
 bool CG_VOICE_CHAT_get_HasVoiceData_m25312 (CG_VOICE_CHAT_t3437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.ByteString CG_VOICE_CHAT::get_VoiceData()
 ByteString_t3022 * CG_VOICE_CHAT_get_VoiceData_m25313 (CG_VOICE_CHAT_t3437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_VOICE_CHAT::set_VoiceData(Google.ProtocolBuffers.ByteString)
 void CG_VOICE_CHAT_set_VoiceData_m25314 (CG_VOICE_CHAT_t3437 * __this, ByteString_t3022 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_VOICE_CHAT::SetVoiceData(Google.ProtocolBuffers.ByteString)
 void CG_VOICE_CHAT_SetVoiceData_m25315 (CG_VOICE_CHAT_t3437 * __this, ByteString_t3022 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_VOICE_CHAT::SerializedSize()
 int32_t CG_VOICE_CHAT_SerializedSize_m25316 (CG_VOICE_CHAT_t3437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_VOICE_CHAT::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_VOICE_CHAT_WriteTo_m25317 (CG_VOICE_CHAT_t3437 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_VOICE_CHAT::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_VOICE_CHAT_MergeFrom_m25318 (CG_VOICE_CHAT_t3437 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_VOICE_CHAT::IsInitialized()
 bool CG_VOICE_CHAT_IsInitialized_m25319 (CG_VOICE_CHAT_t3437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
