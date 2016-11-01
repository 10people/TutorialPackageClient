#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String>
struct PopsicleList_1_t2924;
// Google.ProtocolBuffers.ByteString
struct ByteString_t3022;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_CHAT
struct CG_CHAT_t1173  : public PacketDistributed_t2209
{
	// System.Boolean CG_CHAT::hasChattype
	bool ___hasChattype;
	// System.Int32 CG_CHAT::chattype_
	int32_t ___chattype_;
	// System.Boolean CG_CHAT::hasChatinfo
	bool ___hasChatinfo;
	// System.String CG_CHAT::chatinfo_
	String_t* ___chatinfo_;
	// System.Boolean CG_CHAT::hasReceiverguid
	bool ___hasReceiverguid;
	// System.UInt64 CG_CHAT::receiverguid_
	uint64_t ___receiverguid_;
	// System.Boolean CG_CHAT::hasReceivername
	bool ___hasReceivername;
	// System.String CG_CHAT::receivername_
	String_t* ___receivername_;
	// System.Boolean CG_CHAT::hasLinktype
	bool ___hasLinktype;
	// System.Int32 CG_CHAT::linktype_
	int32_t ___linktype_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> CG_CHAT::intdata_
	PopsicleList_1_t2923 * ___intdata_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String> CG_CHAT::strdata_
	PopsicleList_1_t2924 * ___strdata_;
	// System.Boolean CG_CHAT::hasLoudSpeakerNum
	bool ___hasLoudSpeakerNum;
	// System.Int32 CG_CHAT::LoudSpeakerNum_
	int32_t ___LoudSpeakerNum_;
	// System.Boolean CG_CHAT::hasVoiceChat
	bool ___hasVoiceChat;
	// Google.ProtocolBuffers.ByteString CG_CHAT::VoiceChat_
	ByteString_t3022 * ___VoiceChat_;
	// System.Boolean CG_CHAT::hasIsYaoHe
	bool ___hasIsYaoHe;
	// System.Int32 CG_CHAT::isYaoHe_
	int32_t ___isYaoHe_;
	// System.Boolean CG_CHAT::hasAnoymousState
	bool ___hasAnoymousState;
	// System.Int32 CG_CHAT::anoymousState_
	int32_t ___anoymousState_;
	// System.Boolean CG_CHAT::hasFellowguid
	bool ___hasFellowguid;
	// System.UInt64 CG_CHAT::fellowguid_
	uint64_t ___fellowguid_;
	// System.Int32 CG_CHAT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
