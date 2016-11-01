#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_MAIL_OPERATION
struct CG_MAIL_OPERATION_t3101  : public PacketDistributed_t2209
{
	// System.Boolean CG_MAIL_OPERATION::hasOperationType
	bool ___hasOperationType;
	// System.Int32 CG_MAIL_OPERATION::OperationType_
	int32_t ___OperationType_;
	// System.Boolean CG_MAIL_OPERATION::hasMailGuid
	bool ___hasMailGuid;
	// System.UInt64 CG_MAIL_OPERATION::MailGuid_
	uint64_t ___MailGuid_;
	// System.Int32 CG_MAIL_OPERATION::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
