#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// LoginData/ServerListData
struct ServerListData_t1518  : public Object_t
{
	// System.Int32 LoginData/ServerListData::m_id
	int32_t ___m_id;
	// System.String LoginData/ServerListData::m_name
	String_t* ___m_name;
	// System.String LoginData/ServerListData::m_ip
	String_t* ___m_ip;
	// System.Int32 LoginData/ServerListData::m_port
	int32_t ___m_port;
	// System.Int32 LoginData/ServerListData::m_state
	int32_t ___m_state;
	// System.Int32 LoginData/ServerListData::m_type
	int32_t ___m_type;
};
