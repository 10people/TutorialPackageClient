#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_SEND_GUILDMAIL
struct CG_SEND_GUILDMAIL_t3456  : public PacketDistributed_t2209
{
	// System.Boolean CG_SEND_GUILDMAIL::hasTextContent
	bool ___hasTextContent;
	// System.String CG_SEND_GUILDMAIL::TextContent_
	String_t* ___TextContent_;
	// System.Int32 CG_SEND_GUILDMAIL::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
