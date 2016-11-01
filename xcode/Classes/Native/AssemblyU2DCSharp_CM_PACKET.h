#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt32>
struct PopsicleList_1_t2932;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int64>
struct PopsicleList_1_t3198;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64>
struct PopsicleList_1_t2922;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String>
struct PopsicleList_1_t2924;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CM_PACKET
struct CM_PACKET_t3652  : public PacketDistributed_t2209
{
	// System.Boolean CM_PACKET::hasId
	bool ___hasId;
	// System.Int32 CM_PACKET::id_
	int32_t ___id_;
	// System.Boolean CM_PACKET::hasId_string
	bool ___hasId_string;
	// System.String CM_PACKET::id_string_
	String_t* ___id_string_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> CM_PACKET::arr_int32_
	PopsicleList_1_t2923 * ___arr_int32_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt32> CM_PACKET::arr_uint32_
	PopsicleList_1_t2932 * ___arr_uint32_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int64> CM_PACKET::arr_int64_
	PopsicleList_1_t3198 * ___arr_int64_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64> CM_PACKET::arr_uint64_
	PopsicleList_1_t2922 * ___arr_uint64_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String> CM_PACKET::arr_string_
	PopsicleList_1_t2924 * ___arr_string_;
	// System.Int32 CM_PACKET::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
