#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.ByteString
struct ByteString_t3022;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_RET_DOWNLOAD_VOICECHAT
struct GC_RET_DOWNLOAD_VOICECHAT_t3526  : public PacketDistributed_t2209
{
	// System.Boolean GC_RET_DOWNLOAD_VOICECHAT::hasVoiceChatIndex
	bool ___hasVoiceChatIndex;
	// System.Int32 GC_RET_DOWNLOAD_VOICECHAT::VoiceChatIndex_
	int32_t ___VoiceChatIndex_;
	// System.Boolean GC_RET_DOWNLOAD_VOICECHAT::hasVoiceChat
	bool ___hasVoiceChat;
	// Google.ProtocolBuffers.ByteString GC_RET_DOWNLOAD_VOICECHAT::VoiceChat_
	ByteString_t3022 * ___VoiceChat_;
	// System.Int32 GC_RET_DOWNLOAD_VOICECHAT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
