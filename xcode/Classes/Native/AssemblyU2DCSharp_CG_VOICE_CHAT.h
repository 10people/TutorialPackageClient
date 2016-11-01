#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.ByteString
struct ByteString_t3022;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_VOICE_CHAT
struct CG_VOICE_CHAT_t3437  : public PacketDistributed_t2209
{
	// System.Boolean CG_VOICE_CHAT::hasVoiceData
	bool ___hasVoiceData;
	// Google.ProtocolBuffers.ByteString CG_VOICE_CHAT::VoiceData_
	ByteString_t3022 * ___VoiceData_;
	// System.Int32 CG_VOICE_CHAT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
