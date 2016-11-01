#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlatformHelper
struct PlatformHelper_t4502;
// System.String
struct String_t;
// RechargeData/GoodInfo
struct GoodInfo_t4503;
// PlatformHelper/ChannelType
#include "AssemblyU2DCSharp_PlatformHelper_ChannelType.h"
// PlatformHelper/NetworkState
#include "AssemblyU2DCSharp_PlatformHelper_NetworkState.h"
// Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_GOOGLEP.h"
// Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_GOOGLEP_0.h"

// System.Void PlatformHelper::.ctor()
 void PlatformHelper__ctor_m32225 (PlatformHelper_t4502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlatformHelper::IsEnabledCrash()
 bool PlatformHelper_IsEnabledCrash_m32226 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlatformHelper::IsChannelTW()
 bool PlatformHelper_IsChannelTW_m32227 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlatformHelper::IsChannelHK()
 bool PlatformHelper_IsChannelHK_m32228 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlatformHelper::IsChannelMainland()
 bool PlatformHelper_IsChannelMainland_m32229 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlatformHelper::IsCYSDK()
 bool PlatformHelper_IsCYSDK_m32230 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::_getGengxinURL()
 String_t* PlatformHelper__getGengxinURL_m32231 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::_getCommonGengxinURL()
 String_t* PlatformHelper__getCommonGengxinURL_m32232 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlatformHelper::_getGameVersion()
 int32_t PlatformHelper__getGameVersion_m32233 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlatformHelper::_getProgramVersion()
 int32_t PlatformHelper__getProgramVersion_m32234 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlatformHelper::_isEnableGM()
 bool PlatformHelper__isEnableGM_m32235 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_setScreenCanAutoLock(System.Boolean)
 void PlatformHelper__setScreenCanAutoLock_m32236 (Object_t * __this/* static, unused */, bool ___bCanLock, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::_getResDonwloadUrl()
 String_t* PlatformHelper__getResDonwloadUrl_m32237 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlatformHelper::_isEnableUpdate()
 bool PlatformHelper__isEnableUpdate_m32238 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_userLogin()
 void PlatformHelper__userLogin_m32239 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_userLogout()
 void PlatformHelper__userLogout_m32240 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_notification(System.String)
 void PlatformHelper__notification_m32241 (Object_t * __this/* static, unused */, String_t* ___news, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_enterUserCenter()
 void PlatformHelper__enterUserCenter_m32242 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_showSocialShareCenter(System.String)
 void PlatformHelper__showSocialShareCenter_m32243 (Object_t * __this/* static, unused */, String_t* ___szShareContent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::_getChannelString()
 String_t* PlatformHelper__getChannelString_m32244 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::_getServerlistUrl()
 String_t* PlatformHelper__getServerlistUrl_m32245 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_roleEnterGame(System.String,System.String,System.String,System.Int32)
 void PlatformHelper__roleEnterGame_m32246 (Object_t * __this/* static, unused */, String_t* ___strAccountID, String_t* ___strRoleType, String_t* ___strRoleName, int32_t ___RoleLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_onAccountLogin(System.String,System.String)
 void PlatformHelper__onAccountLogin_m32247 (Object_t * __this/* static, unused */, String_t* ___strServerID, String_t* ___strUserID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_makePay(System.String,System.String)
 void PlatformHelper__makePay_m32248 (Object_t * __this/* static, unused */, String_t* ___strRoleID, String_t* ___groupID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::_getUpdateAppUrl()
 String_t* PlatformHelper__getUpdateAppUrl_m32249 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::_getAppDetailUrl()
 String_t* PlatformHelper__getAppDetailUrl_m32250 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::_getDeviceUDID()
 String_t* PlatformHelper__getDeviceUDID_m32251 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlatformHelper::_IsEnableDebugMode()
 bool PlatformHelper__IsEnableDebugMode_m32252 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::_getMediaChannel()
 String_t* PlatformHelper__getMediaChannel_m32253 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlatformHelper::_getNetworkType()
 int32_t PlatformHelper__getNetworkType_m32254 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::_getDeviceType()
 String_t* PlatformHelper__getDeviceType_m32255 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::_getDeviceVersion()
 String_t* PlatformHelper__getDeviceVersion_m32256 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::_getChannelID()
 String_t* PlatformHelper__getChannelID_m32257 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_sendUserAction(System.String)
 void PlatformHelper__sendUserAction_m32258 (Object_t * __this/* static, unused */, String_t* ___strEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_appStart()
 void PlatformHelper__appStart_m32259 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_showCallCenter()
 void PlatformHelper__showCallCenter_m32260 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_makePayWithGoodInfo(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
 void PlatformHelper__makePayWithGoodInfo_m32261 (Object_t * __this/* static, unused */, String_t* ___roleID, String_t* ___serverID, String_t* ___roleName, String_t* ___goodID, String_t* ___goodName, String_t* ___goodNum, String_t* ___price, String_t* ___registerID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_reqPaymentGoodInfoList()
 void PlatformHelper__reqPaymentGoodInfoList_m32262 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_showRechargeRecord()
 void PlatformHelper__showRechargeRecord_m32263 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_startBanner()
 void PlatformHelper__startBanner_m32264 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_showBanner(System.Boolean)
 void PlatformHelper__showBanner_m32265 (Object_t * __this/* static, unused */, bool ___bShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlatformHelper::_isEnableShareCenter()
 bool PlatformHelper__isEnableShareCenter_m32266 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::_shareToFB(System.String)
 void PlatformHelper__shareToFB_m32267 (Object_t * __this/* static, unused */, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::UploadBug(System.String)
 void PlatformHelper_UploadBug_m32268 (Object_t * __this/* static, unused */, String_t* ___butMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::getcurrentTime()
 String_t* PlatformHelper_getcurrentTime_m32269 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::getCurrentDate()
 String_t* PlatformHelper_getCurrentDate_m32270 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlatformHelper::GetGameVersion()
 int32_t PlatformHelper_GetGameVersion_m32271 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlatformHelper::GetProgramVersion()
 int32_t PlatformHelper_GetProgramVersion_m32272 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlatformHelper::IsEnableGM()
 bool PlatformHelper_IsEnableGM_m32273 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::SetScreenCanAutoLock(System.Boolean)
 void PlatformHelper_SetScreenCanAutoLock_m32274 (Object_t * __this/* static, unused */, bool ___bCanLock, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::GetResDonwloadUrl()
 String_t* PlatformHelper_GetResDonwloadUrl_m32275 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlatformHelper::IsEnableUpdate()
 bool PlatformHelper_IsEnableUpdate_m32276 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::UserLogin()
 void PlatformHelper_UserLogin_m32277 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::UserLogout()
 void PlatformHelper_UserLogout_m32278 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::Notification(System.String)
 void PlatformHelper_Notification_m32279 (Object_t * __this/* static, unused */, String_t* ___news, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::ChangeAccount()
 void PlatformHelper_ChangeAccount_m32280 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlatformHelper/ChannelType PlatformHelper::GetChannelType()
 int32_t PlatformHelper_GetChannelType_m32281 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::GetServerListUrl()
 String_t* PlatformHelper_GetServerListUrl_m32282 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::RoleEnterGame(System.String,System.String,System.String,System.Int32)
 void PlatformHelper_RoleEnterGame_m32283 (Object_t * __this/* static, unused */, String_t* ___strAccountID, String_t* ___strRoleType, String_t* ___strRoleName, int32_t ___RoleLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::OnAccountLogin(System.String,System.String)
 void PlatformHelper_OnAccountLogin_m32284 (Object_t * __this/* static, unused */, String_t* ___strServerID, String_t* ___strUserID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::MakePay()
 void PlatformHelper_MakePay_m32285 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::ReqPaymentGoodInfoList()
 void PlatformHelper_ReqPaymentGoodInfoList_m32286 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlatformHelper::MakePayWithGoodInfo(RechargeData/GoodInfo)
 bool PlatformHelper_MakePayWithGoodInfo_m32287 (Object_t * __this/* static, unused */, GoodInfo_t4503 * ___curGoodInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::ShowRechargeRecord()
 void PlatformHelper_ShowRechargeRecord_m32288 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::GetUpdateAppUrl()
 String_t* PlatformHelper_GetUpdateAppUrl_m32289 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::GetAppDetailUrl()
 String_t* PlatformHelper_GetAppDetailUrl_m32290 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::GetDeviceUDID()
 String_t* PlatformHelper_GetDeviceUDID_m32291 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlatformHelper::IsEnableDebugMode()
 bool PlatformHelper_IsEnableDebugMode_m32292 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::GetMediaChannel()
 String_t* PlatformHelper_GetMediaChannel_m32293 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlatformHelper/NetworkState PlatformHelper::GetNetworkState()
 int32_t PlatformHelper_GetNetworkState_m32294 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::GetChannelID()
 String_t* PlatformHelper_GetChannelID_m32295 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::GetDeviceType()
 String_t* PlatformHelper_GetDeviceType_m32296 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::GetDeviceVersion()
 String_t* PlatformHelper_GetDeviceVersion_m32297 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::SendUserAction(System.String)
 void PlatformHelper_SendUserAction_m32298 (Object_t * __this/* static, unused */, String_t* ___strEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::AppStart()
 void PlatformHelper_AppStart_m32299 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::EnterUserCenter()
 void PlatformHelper_EnterUserCenter_m32300 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::ShowCallCenter()
 void PlatformHelper_ShowCallCenter_m32301 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::ShowSocialShareCenter(System.String)
 void PlatformHelper_ShowSocialShareCenter_m32302 (Object_t * __this/* static, unused */, String_t* ___szShareContent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::StartAD()
 void PlatformHelper_StartAD_m32303 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::ShowAD(System.Boolean)
 void PlatformHelper_ShowAD_m32304 (Object_t * __this/* static, unused */, bool ___bShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::GetGengxinInfoURL()
 String_t* PlatformHelper_GetGengxinInfoURL_m32305 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::GetCommonGengxinInfoURL()
 String_t* PlatformHelper_GetCommonGengxinInfoURL_m32306 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::OnRoleCreate(System.String,System.String)
 void PlatformHelper_OnRoleCreate_m32307 (Object_t * __this/* static, unused */, String_t* ___roleName, String_t* ___roleLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlatformHelper::IsEnableShareCenter()
 bool PlatformHelper_IsEnableShareCenter_m32308 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::ShareToFB(System.String)
 void PlatformHelper_ShareToFB_m32309 (Object_t * __this/* static, unused */, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::UnlockAchievement(Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE)
 void PlatformHelper_UnlockAchievement_m32310 (Object_t * __this/* static, unused */, int32_t ___achievement, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::ShowAchievement()
 void PlatformHelper_ShowAchievement_m32311 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::SubmitRankScore(Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE,System.Int32)
 void PlatformHelper_SubmitRankScore_m32312 (Object_t * __this/* static, unused */, int32_t ___type, int32_t ___score, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformHelper::ShowRank()
 void PlatformHelper_ShowRank_m32313 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlatformHelper::GetComplainURL()
 String_t* PlatformHelper_GetComplainURL_m32314 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
