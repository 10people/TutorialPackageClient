#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_MAIL_SEND
struct CG_MAIL_SEND_t3099  : public PacketDistributed_t2209
{
	// System.Boolean CG_MAIL_SEND::hasReceiverGuid
	bool ___hasReceiverGuid;
	// System.UInt64 CG_MAIL_SEND::ReceiverGuid_
	uint64_t ___ReceiverGuid_;
	// System.Boolean CG_MAIL_SEND::hasTextContent
	bool ___hasTextContent;
	// System.String CG_MAIL_SEND::TextContent_
	String_t* ___TextContent_;
	// System.Int32 CG_MAIL_SEND::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
