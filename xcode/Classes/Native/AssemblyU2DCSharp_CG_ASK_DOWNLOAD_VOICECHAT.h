#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_ASK_DOWNLOAD_VOICECHAT
struct CG_ASK_DOWNLOAD_VOICECHAT_t3525  : public PacketDistributed_t2209
{
	// System.Boolean CG_ASK_DOWNLOAD_VOICECHAT::hasVoiceChatIndex
	bool ___hasVoiceChatIndex;
	// System.Int32 CG_ASK_DOWNLOAD_VOICECHAT::VoiceChatIndex_
	int32_t ___VoiceChatIndex_;
	// System.Boolean CG_ASK_DOWNLOAD_VOICECHAT::hasSenderGuid
	bool ___hasSenderGuid;
	// System.UInt64 CG_ASK_DOWNLOAD_VOICECHAT::SenderGuid_
	uint64_t ___SenderGuid_;
	// System.Boolean CG_ASK_DOWNLOAD_VOICECHAT::hasIsClickDownload
	bool ___hasIsClickDownload;
	// System.Int32 CG_ASK_DOWNLOAD_VOICECHAT::IsClickDownload_
	int32_t ___IsClickDownload_;
	// System.Int32 CG_ASK_DOWNLOAD_VOICECHAT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
