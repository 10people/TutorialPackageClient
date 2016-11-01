#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NetManager
struct NetManager_t2178;
// System.String
struct String_t;
// NetWorkLogic/ConnectDelegate
struct ConnectDelegate_t2201;
// LoginData/LoginRet
struct LoginRet_t4776;
// SPacket.SocketInstance.GC_SELECTROLE_RETHandler/SelectRoleFailRet
struct SelectRoleFailRet_t2793;
// UpdateHelper/CheckVersionResult
#include "AssemblyU2DCSharp_UpdateHelper_CheckVersionResult.h"
// GC_LOGIN_RET/LOGINRESULT
#include "AssemblyU2DCSharp_GC_LOGIN_RET_LOGINRESULT.h"
// GC_SELECTROLE_RET/SELECTROLE_RESULT
#include "AssemblyU2DCSharp_GC_SELECTROLE_RET_SELECTROLE_RESULT.h"

// System.Void NetManager::.ctor()
 void NetManager__ctor_m33810 (NetManager_t2178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::.cctor()
 void NetManager__cctor_m33811 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NetManager NetManager::Instance()
 NetManager_t2178 * NetManager_Instance_m33812 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::Awake()
 void NetManager_Awake_m33813 (NetManager_t2178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::OnEnable()
 void NetManager_OnEnable_m33814 (NetManager_t2178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::Update()
 void NetManager_Update_m33815 (NetManager_t2178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::ConnectToServer(System.String,System.Int32,NetWorkLogic/ConnectDelegate)
 void NetManager_ConnectToServer_m33816 (NetManager_t2178 * __this, String_t* ____ip, int32_t ____port, ConnectDelegate_t2201 * ___delConnect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::OnConnectCheckResVersion(UpdateHelper/CheckVersionResult)
 void NetManager_OnConnectCheckResVersion_m33817 (NetManager_t2178 * __this, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::DoConnectToServer()
 void NetManager_DoConnectToServer_m33818 (NetManager_t2178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::SendUserLogin(LoginData/LoginRet,System.Boolean,System.Boolean)
 void NetManager_SendUserLogin_m33819 (Object_t * __this/* static, unused */, LoginRet_t4776 * ___retFun, bool ___bForce, bool ___bReconnect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::SendChooseRole(System.UInt64,SPacket.SocketInstance.GC_SELECTROLE_RETHandler/SelectRoleFailRet)
 void NetManager_SendChooseRole_m33820 (Object_t * __this/* static, unused */, uint64_t ___roleGUID, SelectRoleFailRet_t2793 * ___funRet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::SendUserLogout()
 void NetManager_SendUserLogout_m33821 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::ConnectLost()
 void NetManager_ConnectLost_m33822 (NetManager_t2178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::WP8ConnectingLostLogic()
 void NetManager_WP8ConnectingLostLogic_m33823 (NetManager_t2178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::WP8ComeBackFromBack()
 void NetManager_WP8ComeBackFromBack_m33824 (NetManager_t2178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::OnWaitPacketTimeOut()
 void NetManager_OnWaitPacketTimeOut_m33825 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::OnReturnServerChoose()
 void NetManager_OnReturnServerChoose_m33826 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::OnReconnect()
 void NetManager_OnReconnect_m33827 (NetManager_t2178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::OnReConnectCheckResVersion(UpdateHelper/CheckVersionResult)
 void NetManager_OnReConnectCheckResVersion_m33828 (NetManager_t2178 * __this, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::DoReconnect()
 void NetManager_DoReconnect_m33829 (NetManager_t2178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::Ret_Reconnect(System.Boolean,System.String)
 void NetManager_Ret_Reconnect_m33830 (NetManager_t2178 * __this, bool ___bSuccess, String_t* ___strResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::Ret_Login(GC_LOGIN_RET/LOGINRESULT,System.Int32)
 void NetManager_Ret_Login_m33831 (NetManager_t2178 * __this, int32_t ___result, int32_t ___validateResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::OnChooseRole()
 void NetManager_OnChooseRole_m33832 (NetManager_t2178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::EnterLoginScene()
 void NetManager_EnterLoginScene_m33833 (NetManager_t2178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::EnterOffline()
 void NetManager_EnterOffline_m33834 (NetManager_t2178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::RetSelectRoleFail(GC_SELECTROLE_RET/SELECTROLE_RESULT)
 void NetManager_RetSelectRoleFail_m33835 (NetManager_t2178 * __this, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::OnSelectRoleFail()
 void NetManager_OnSelectRoleFail_m33836 (NetManager_t2178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetManager::OnQuitGameClick()
 void NetManager_OnQuitGameClick_m33837 (NetManager_t2178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
