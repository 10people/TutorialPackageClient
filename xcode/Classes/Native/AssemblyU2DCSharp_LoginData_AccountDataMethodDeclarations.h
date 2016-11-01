#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LoginData/AccountData
struct AccountData_t4916;
// System.String
struct String_t;

// System.Void LoginData/AccountData::.ctor()
 void AccountData__ctor_m34815 (AccountData_t4916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginData/AccountData::SetTestData(System.String)
 void AccountData_SetTestData_m34816 (AccountData_t4916 * __this, String_t* ___account, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginData/AccountData::SetCYData(System.String)
 void AccountData_SetCYData_m34817 (AccountData_t4916 * __this, String_t* ___validateInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginData/AccountData::SetAccountInfo(System.String,System.String,System.String,System.Int32)
 void AccountData_SetAccountInfo_m34818 (AccountData_t4916 * __this, String_t* ___userID, String_t* ___oid, String_t* ___accessToken, int32_t ___gameServerValidateInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginData/AccountData::CleanData()
 void AccountData_CleanData_m34819 (AccountData_t4916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
