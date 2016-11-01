#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// GC_MAIL_UPDATE/MailSender
#include "AssemblyU2DCSharp_GC_MAIL_UPDATE_MailSender.h"
// MailData/UserMail
struct UserMail_t1901  : public Object_t
{
	// GC_MAIL_UPDATE/MailSender MailData/UserMail::senderType
	int32_t ___senderType;
	// System.UInt64 MailData/UserMail::key
	uint64_t ___key;
	// System.UInt64 MailData/UserMail::SenderID
	uint64_t ___SenderID;
	// System.String MailData/UserMail::SenderName
	String_t* ___SenderName;
	// System.String MailData/UserMail::time
	String_t* ___time;
	// System.String MailData/UserMail::text
	String_t* ___text;
	// System.Int32 MailData/UserMail::itemID
	int32_t ___itemID;
	// System.Int32 MailData/UserMail::itemCount
	int32_t ___itemCount;
	// System.Boolean MailData/UserMail::bReaded
	bool ___bReaded;
	// System.Boolean MailData/UserMail::bGetItem
	bool ___bGetItem;
	// System.Int32 MailData/UserMail::moneyType
	int32_t ___moneyType;
	// System.Int32 MailData/UserMail::moneyCount
	int32_t ___moneyCount;
	// System.Int32 MailData/UserMail::sortTime
	int32_t ___sortTime;
};
