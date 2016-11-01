#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_VOICE_CHAT
struct GC_VOICE_CHAT_t3438;
// Google.ProtocolBuffers.ByteString
struct ByteString_t3022;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_VOICE_CHAT::.ctor()
 void GC_VOICE_CHAT__ctor_m25320 (GC_VOICE_CHAT_t3438 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_VOICE_CHAT::get_HasVoiceData()
 bool GC_VOICE_CHAT_get_HasVoiceData_m25321 (GC_VOICE_CHAT_t3438 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.ByteString GC_VOICE_CHAT::get_VoiceData()
 ByteString_t3022 * GC_VOICE_CHAT_get_VoiceData_m25322 (GC_VOICE_CHAT_t3438 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_VOICE_CHAT::set_VoiceData(Google.ProtocolBuffers.ByteString)
 void GC_VOICE_CHAT_set_VoiceData_m25323 (GC_VOICE_CHAT_t3438 * __this, ByteString_t3022 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_VOICE_CHAT::SetVoiceData(Google.ProtocolBuffers.ByteString)
 void GC_VOICE_CHAT_SetVoiceData_m25324 (GC_VOICE_CHAT_t3438 * __this, ByteString_t3022 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_VOICE_CHAT::SerializedSize()
 int32_t GC_VOICE_CHAT_SerializedSize_m25325 (GC_VOICE_CHAT_t3438 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_VOICE_CHAT::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_VOICE_CHAT_WriteTo_m25326 (GC_VOICE_CHAT_t3438 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_VOICE_CHAT::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_VOICE_CHAT_MergeFrom_m25327 (GC_VOICE_CHAT_t3438 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_VOICE_CHAT::IsInitialized()
 bool GC_VOICE_CHAT_IsInitialized_m25328 (GC_VOICE_CHAT_t3438 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
