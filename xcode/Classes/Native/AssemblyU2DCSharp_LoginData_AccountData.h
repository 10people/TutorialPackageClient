#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// LoginData/AccountData/ConnnectType
#include "AssemblyU2DCSharp_LoginData_AccountData_ConnnectType.h"
// LoginData/AccountData
struct AccountData_t4916  : public Object_t
{
	// System.String LoginData/AccountData::m_account
	String_t* ___m_account;
	// System.String LoginData/AccountData::m_validateInfo
	String_t* ___m_validateInfo;
	// System.String LoginData/AccountData::m_userID
	String_t* ___m_userID;
	// System.Boolean LoginData/AccountData::m_bInit
	bool ___m_bInit;
	// LoginData/AccountData/ConnnectType LoginData/AccountData::m_connectType
	int32_t ___m_connectType;
	// System.String LoginData/AccountData::m_oid
	String_t* ___m_oid;
	// System.String LoginData/AccountData::m_accessToken
	String_t* ___m_accessToken;
	// System.Int32 LoginData/AccountData::m_gameServerValidateInfo
	int32_t ___m_gameServerValidateInfo;
};
