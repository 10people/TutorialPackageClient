#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String>
struct PopsicleList_1_t2924;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_CHAT
struct GC_CHAT_t1292  : public PacketDistributed_t2209
{
	// System.Boolean GC_CHAT::hasChattype
	bool ___hasChattype;
	// System.Int32 GC_CHAT::chattype_
	int32_t ___chattype_;
	// System.Boolean GC_CHAT::hasChatinfo
	bool ___hasChatinfo;
	// System.String GC_CHAT::chatinfo_
	String_t* ___chatinfo_;
	// System.Boolean GC_CHAT::hasSenderguid
	bool ___hasSenderguid;
	// System.UInt64 GC_CHAT::senderguid_
	uint64_t ___senderguid_;
	// System.Boolean GC_CHAT::hasSendername
	bool ___hasSendername;
	// System.String GC_CHAT::sendername_
	String_t* ___sendername_;
	// System.Boolean GC_CHAT::hasReceiverguid
	bool ___hasReceiverguid;
	// System.UInt64 GC_CHAT::receiverguid_
	uint64_t ___receiverguid_;
	// System.Boolean GC_CHAT::hasReceivername
	bool ___hasReceivername;
	// System.String GC_CHAT::receivername_
	String_t* ___receivername_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_CHAT::linktype_
	PopsicleList_1_t2923 * ___linktype_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_CHAT::intdata_
	PopsicleList_1_t2923 * ___intdata_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String> GC_CHAT::strdata_
	PopsicleList_1_t2924 * ___strdata_;
	// System.Boolean GC_CHAT::hasSenderVIPLevel
	bool ___hasSenderVIPLevel;
	// System.Int32 GC_CHAT::SenderVIPLevel_
	int32_t ___SenderVIPLevel_;
	// System.Boolean GC_CHAT::hasReceiverVIPLevel
	bool ___hasReceiverVIPLevel;
	// System.Int32 GC_CHAT::ReceiverVIPLevel_
	int32_t ___ReceiverVIPLevel_;
	// System.Boolean GC_CHAT::hasVoiceChatIndex
	bool ___hasVoiceChatIndex;
	// System.Int32 GC_CHAT::VoiceChatIndex_
	int32_t ___VoiceChatIndex_;
	// System.Boolean GC_CHAT::hasAnoymousState
	bool ___hasAnoymousState;
	// System.Int32 GC_CHAT::anoymousState_
	int32_t ___anoymousState_;
	// System.Boolean GC_CHAT::hasSenderLevel
	bool ___hasSenderLevel;
	// System.Int32 GC_CHAT::senderLevel_
	int32_t ___senderLevel_;
	// System.Boolean GC_CHAT::hasSenderProfession
	bool ___hasSenderProfession;
	// System.Int32 GC_CHAT::senderProfession_
	int32_t ___senderProfession_;
	// System.Int32 GC_CHAT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
