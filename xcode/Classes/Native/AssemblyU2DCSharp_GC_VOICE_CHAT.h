#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.ByteString
struct ByteString_t3022;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_VOICE_CHAT
struct GC_VOICE_CHAT_t3438  : public PacketDistributed_t2209
{
	// System.Boolean GC_VOICE_CHAT::hasVoiceData
	bool ___hasVoiceData;
	// Google.ProtocolBuffers.ByteString GC_VOICE_CHAT::VoiceData_
	ByteString_t3022 * ___VoiceData_;
	// System.Int32 GC_VOICE_CHAT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
