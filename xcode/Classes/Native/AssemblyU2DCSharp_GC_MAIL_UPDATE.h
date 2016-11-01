#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_MAIL_UPDATE
struct GC_MAIL_UPDATE_t3097  : public PacketDistributed_t2209
{
	// System.Boolean GC_MAIL_UPDATE::hasMailGuid
	bool ___hasMailGuid;
	// System.UInt64 GC_MAIL_UPDATE::MailGuid_
	uint64_t ___MailGuid_;
	// System.Boolean GC_MAIL_UPDATE::hasSenderType
	bool ___hasSenderType;
	// System.Int32 GC_MAIL_UPDATE::SenderType_
	int32_t ___SenderType_;
	// System.Boolean GC_MAIL_UPDATE::hasSenderGuid
	bool ___hasSenderGuid;
	// System.UInt64 GC_MAIL_UPDATE::SenderGuid_
	uint64_t ___SenderGuid_;
	// System.Boolean GC_MAIL_UPDATE::hasSenderName
	bool ___hasSenderName;
	// System.String GC_MAIL_UPDATE::SenderName_
	String_t* ___SenderName_;
	// System.Boolean GC_MAIL_UPDATE::hasSendTime
	bool ___hasSendTime;
	// System.Int32 GC_MAIL_UPDATE::SendTime_
	int32_t ___SendTime_;
	// System.Boolean GC_MAIL_UPDATE::hasRecevierGuid
	bool ___hasRecevierGuid;
	// System.UInt64 GC_MAIL_UPDATE::RecevierGuid_
	uint64_t ___RecevierGuid_;
	// System.Boolean GC_MAIL_UPDATE::hasReadTime
	bool ___hasReadTime;
	// System.Int32 GC_MAIL_UPDATE::ReadTime_
	int32_t ___ReadTime_;
	// System.Boolean GC_MAIL_UPDATE::hasTextContent
	bool ___hasTextContent;
	// System.String GC_MAIL_UPDATE::TextContent_
	String_t* ___TextContent_;
	// System.Boolean GC_MAIL_UPDATE::hasMoneyType
	bool ___hasMoneyType;
	// System.Int32 GC_MAIL_UPDATE::MoneyType_
	int32_t ___MoneyType_;
	// System.Boolean GC_MAIL_UPDATE::hasMoneyCount
	bool ___hasMoneyCount;
	// System.Int32 GC_MAIL_UPDATE::MoneyCount_
	int32_t ___MoneyCount_;
	// System.Boolean GC_MAIL_UPDATE::hasItemID
	bool ___hasItemID;
	// System.Int32 GC_MAIL_UPDATE::ItemID_
	int32_t ___ItemID_;
	// System.Boolean GC_MAIL_UPDATE::hasItemCount
	bool ___hasItemCount;
	// System.Int32 GC_MAIL_UPDATE::ItemCount_
	int32_t ___ItemCount_;
	// System.Boolean GC_MAIL_UPDATE::hasOrigin
	bool ___hasOrigin;
	// System.Int32 GC_MAIL_UPDATE::Origin_
	int32_t ___Origin_;
	// System.Int32 GC_MAIL_UPDATE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
