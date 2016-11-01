#pragma once
#include <stdint.h>
// LoginData/AccountData
struct AccountData_t4916;
// System.Collections.Generic.List`1<LoginData/PlayerRoleData>
struct List_1_t1936;
// LoginData/LoginRet
struct LoginRet_t4776;
// System.String
struct String_t;
// System.Collections.Generic.List`1<LoginData/ServerListData>
struct List_1_t4917;
// System.Collections.Generic.List`1<LoginData/ServerPageData>
struct List_1_t4918;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// System.Object
#include "mscorlib_System_Object.h"
// GC_LOGIN_QUEUE_STATUS/QUEUESTATUS
#include "AssemblyU2DCSharp_GC_LOGIN_QUEUE_STATUS_QUEUESTATUS.h"
// LoginData
struct LoginData_t4919  : public Object_t
{
};
struct LoginData_t4919_StaticFields{
	// System.Int32 LoginData::QueueDefaultNum
	int32_t ___QueueDefaultNum;
	// LoginData/AccountData LoginData::accountData
	AccountData_t4916 * ___accountData;
	// System.Collections.Generic.List`1<LoginData/PlayerRoleData> LoginData::loginRoleList
	List_1_t1936 * ___loginRoleList;
	// LoginData/LoginRet LoginData::retLogin
	LoginRet_t4776 * ___retLogin;
	// System.String LoginData::m_sRoleName
	String_t* ___m_sRoleName;
	// System.Boolean LoginData::m_sbIsMale
	bool ___m_sbIsMale;
	// GC_LOGIN_QUEUE_STATUS/QUEUESTATUS LoginData::m_curQueueState
	int32_t ___m_curQueueState;
	// System.Int32 LoginData::m_curQueueNum
	int32_t ___m_curQueueNum;
	// System.Collections.Generic.List`1<LoginData/ServerListData> LoginData::serverListData
	List_1_t4917 * ___serverListData;
	// System.Collections.Generic.List`1<LoginData/ServerPageData> LoginData::serverPageData
	List_1_t4918 * ___serverPageData;
	// System.String LoginData::m_strTestAccount
	String_t* ___m_strTestAccount;
	// System.Boolean LoginData::m_bEnableTestAccount
	bool ___m_bEnableTestAccount;
	// System.Collections.Generic.List`1<System.String> LoginData::m_randomNameList
	List_1_t1333 * ___m_randomNameList;
};
