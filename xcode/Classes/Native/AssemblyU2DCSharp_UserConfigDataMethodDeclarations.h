#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UserConfigData
struct UserConfigData_t4982;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t908;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<LoginData/PlayerRoleData>>
struct Dictionary_2_t4975;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// Games.Mission.CurOwnMission
struct CurOwnMission_t4792;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Games.Mission.CurOwnMission>>
struct Dictionary_2_t4976;
// PlayerAuto
struct PlayerAuto_t4939;
// System.Collections.Generic.Dictionary`2<System.String,PlayerAuto>
struct Dictionary_2_t4977;
// RestaurantConfigData
struct RestaurantConfigData_t4960;
// System.Collections.Generic.Dictionary`2<System.String,RestaurantConfigData>
struct Dictionary_2_t4979;
// SkillBarInfo[]
struct SkillBarInfoU5BU5D_t1728;
// System.Collections.Generic.Dictionary`2<System.String,SkillBarInfo[]>
struct Dictionary_2_t4978;
// Games.YuanBaoShopData.ShoppingCart
struct ShoppingCart_t4955;
// System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>
struct Dictionary_2_t4980;
// BelleConfigData
struct BelleConfigData_t4551;
// System.Collections.Generic.Dictionary`2<System.String,BelleConfigData>
struct Dictionary_2_t4981;

// System.Void UserConfigData::.ctor()
 void UserConfigData__ctor_m35664 (UserConfigData_t4982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserConfigData::.cctor()
 void UserConfigData__cctor_m35665 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UserConfigData::get_DataPath()
 String_t* UserConfigData_get_DataPath_m35666 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UserConfigData::get_ClientResVersion()
 int32_t UserConfigData_get_ClientResVersion_m35667 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserConfigData::AddAccountInfo(System.String,System.String)
 void UserConfigData_AddAccountInfo_m35668 (Object_t * __this/* static, unused */, String_t* ___account, String_t* ___psw, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UserConfigData::GetAccountList()
 Dictionary_2_t908 * UserConfigData_GetAccountList_m35669 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserConfigData::AddRoleInfo()
 void UserConfigData_AddRoleInfo_m35670 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<LoginData/PlayerRoleData>> UserConfigData::GetRoleInfoList(System.String)
 Dictionary_2_t4975 * UserConfigData_GetRoleInfoList_m35671 (Object_t * __this/* static, unused */, String_t* ___account, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserConfigData::RemoveRoleInfo(System.String)
 void UserConfigData_RemoveRoleInfo_m35672 (Object_t * __this/* static, unused */, String_t* ___account, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserConfigData::AddFastReplyInfo(System.Collections.Generic.List`1<System.String>)
 void UserConfigData_AddFastReplyInfo_m35673 (Object_t * __this/* static, unused */, List_1_t1333 * ___textList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> UserConfigData::GetFastReplyList()
 List_1_t1333 * UserConfigData_GetFastReplyList_m35674 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserConfigData::AddClientMission(System.String,Games.Mission.CurOwnMission)
 void UserConfigData_AddClientMission_m35675 (Object_t * __this/* static, unused */, String_t* ___strGuid, CurOwnMission_t4792 * ___oClientMission, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserConfigData::DelClientMission(System.String,System.Int32)
 void UserConfigData_DelClientMission_m35676 (Object_t * __this/* static, unused */, String_t* ___strGuid, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Games.Mission.CurOwnMission>> UserConfigData::GetClientMissionData()
 Dictionary_2_t4976 * UserConfigData_GetClientMissionData_m35677 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserConfigData::AddPlayerAuto(System.String,PlayerAuto)
 void UserConfigData_AddPlayerAuto_m35678 (Object_t * __this/* static, unused */, String_t* ___sGUID, PlayerAuto_t4939 * ___curData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,PlayerAuto> UserConfigData::GetPlayerAutoList()
 Dictionary_2_t4977 * UserConfigData_GetPlayerAutoList_m35679 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserConfigData::AddRestaurantConfig(System.String,RestaurantConfigData)
 void UserConfigData_AddRestaurantConfig_m35680 (Object_t * __this/* static, unused */, String_t* ___sGUID, RestaurantConfigData_t4960 * ___curData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,RestaurantConfigData> UserConfigData::GetRestaurantConfigList()
 Dictionary_2_t4979 * UserConfigData_GetRestaurantConfigList_m35681 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserConfigData::AddSkillBarSetInfo(System.String,SkillBarInfo[])
 void UserConfigData_AddSkillBarSetInfo_m35682 (Object_t * __this/* static, unused */, String_t* ___guid, SkillBarInfoU5BU5D_t1728* ___curData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,SkillBarInfo[]> UserConfigData::GetSkillBarSetInfo()
 Dictionary_2_t4978 * UserConfigData_GetSkillBarSetInfo_m35683 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserConfigData::SetSystemDefault()
 void UserConfigData_SetSystemDefault_m35684 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserConfigData::AddShoppingCartInfo(System.String,Games.YuanBaoShopData.ShoppingCart)
 void UserConfigData_AddShoppingCartInfo_m35685 (Object_t * __this/* static, unused */, String_t* ___strGuid, ShoppingCart_t4955 * ___curData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart> UserConfigData::GetShoppingCartInfo()
 Dictionary_2_t4980 * UserConfigData_GetShoppingCartInfo_m35686 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserConfigData::AddBelleConfigInfo(System.String,BelleConfigData)
 void UserConfigData_AddBelleConfigInfo_m35687 (Object_t * __this/* static, unused */, String_t* ___guid, BelleConfigData_t4551 * ___belleConfigData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,BelleConfigData> UserConfigData::GetBelleConfigData()
 Dictionary_2_t4981 * UserConfigData_GetBelleConfigData_m35688 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
