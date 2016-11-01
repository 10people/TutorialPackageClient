#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LoginData
struct LoginData_t4919;
// LoginData/PlayerRoleData
struct PlayerRoleData_t4913;
// GC_LOGIN_RET
struct GC_LOGIN_RET_t2925;
// LoginData/ServerListData
struct ServerListData_t1518;
// GC_RET_RANDOMNAME
struct GC_RET_RANDOMNAME_t3344;
// GC_LOGIN_RET/LOGINRESULT
#include "AssemblyU2DCSharp_GC_LOGIN_RET_LOGINRESULT.h"

// System.Void LoginData::.ctor()
 void LoginData__ctor_m34824 (LoginData_t4919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginData::.cctor()
 void LoginData__cctor_m34825 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LoginData/PlayerRoleData LoginData::GetPlayerRoleData(System.UInt64)
 PlayerRoleData_t4913 * LoginData_GetPlayerRoleData_m34826 (Object_t * __this/* static, unused */, uint64_t ___roleGUID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginData::UpdateLoginData(GC_LOGIN_RET)
 void LoginData_UpdateLoginData_m34827 (Object_t * __this/* static, unused */, GC_LOGIN_RET_t2925 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginData::UpdateLoginRoleInfo(System.UInt64)
 void LoginData_UpdateLoginRoleInfo_m34828 (Object_t * __this/* static, unused */, uint64_t ___roleGUID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginData::UpdateLoginQueueState(System.Int32,System.Int32)
 void LoginData_UpdateLoginQueueState_m34829 (Object_t * __this/* static, unused */, int32_t ___state, int32_t ___num, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LoginData/ServerListData LoginData::GetServerListDataByID(System.Int32)
 ServerListData_t1518 * LoginData_GetServerListDataByID_m34830 (Object_t * __this/* static, unused */, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LoginData::GetRecommandServerID()
 int32_t LoginData_GetRecommandServerID_m34831 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginData::Ret_Login(GC_LOGIN_RET/LOGINRESULT,System.Int32)
 void LoginData_Ret_Login_m34832 (Object_t * __this/* static, unused */, int32_t ___result, int32_t ___validateResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginData::VersionNotMatch()
 void LoginData_VersionNotMatch_m34833 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginData::SDKVarifyFail()
 void LoginData_SDKVarifyFail_m34834 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginData::UpdateRandomNameList(GC_RET_RANDOMNAME)
 void LoginData_UpdateRandomNameList_m34835 (Object_t * __this/* static, unused */, GC_RET_RANDOMNAME_t3344 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
