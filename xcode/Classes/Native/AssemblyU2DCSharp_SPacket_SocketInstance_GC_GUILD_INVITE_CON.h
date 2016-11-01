#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// SPacket.SocketInstance.GC_GUILD_INVITE_CONFIRMHandler
struct GC_GUILD_INVITE_CONFIRMHandler_t2633  : public Object_t
{
	// System.UInt64 SPacket.SocketInstance.GC_GUILD_INVITE_CONFIRMHandler::m_InviterGuid
	uint64_t ___m_InviterGuid;
	// System.UInt64 SPacket.SocketInstance.GC_GUILD_INVITE_CONFIRMHandler::m_InviterGuildGuid
	uint64_t ___m_InviterGuildGuid;
	// System.String SPacket.SocketInstance.GC_GUILD_INVITE_CONFIRMHandler::m_InviterName
	String_t* ___m_InviterName;
};
