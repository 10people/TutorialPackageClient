#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t908;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<LoginData/PlayerRoleData>>
struct Dictionary_2_t4975;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Games.Mission.CurOwnMission>>
struct Dictionary_2_t4976;
// System.Collections.Generic.Dictionary`2<System.String,PlayerAuto>
struct Dictionary_2_t4977;
// System.Collections.Generic.Dictionary`2<System.String,SkillBarInfo[]>
struct Dictionary_2_t4978;
// System.Collections.Generic.Dictionary`2<System.String,RestaurantConfigData>
struct Dictionary_2_t4979;
// System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart>
struct Dictionary_2_t4980;
// System.Collections.Generic.Dictionary`2<System.String,BelleConfigData>
struct Dictionary_2_t4981;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Object
#include "mscorlib_System_Object.h"
// UserConfigData
struct UserConfigData_t4982  : public Object_t
{
};
struct UserConfigData_t4982_StaticFields{
	// System.Int32 UserConfigData::AccountInfoMax
	int32_t ___AccountInfoMax;
	// System.String UserConfigData::AccountFileName
	String_t* ___AccountFileName;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UserConfigData::m_accountMap
	Dictionary_2_t908 * ___m_accountMap;
	// System.String UserConfigData::RoleInfoFileLast
	String_t* ___RoleInfoFileLast;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<LoginData/PlayerRoleData>> UserConfigData::m_roleInfoMap
	Dictionary_2_t4975 * ___m_roleInfoMap;
	// System.String UserConfigData::CurRoleInfoAccount
	String_t* ___CurRoleInfoAccount;
	// System.String UserConfigData::FastReplyFileName
	String_t* ___FastReplyFileName;
	// System.Collections.Generic.List`1<System.String> UserConfigData::m_FastReplyList
	List_1_t1333 * ___m_FastReplyList;
	// System.String UserConfigData::MissionClientName
	String_t* ___MissionClientName;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Games.Mission.CurOwnMission>> UserConfigData::m_MissionClientData
	Dictionary_2_t4976 * ___m_MissionClientData;
	// System.String UserConfigData::AutoConfigFileName
	String_t* ___AutoConfigFileName;
	// System.Collections.Generic.Dictionary`2<System.String,PlayerAuto> UserConfigData::m_AutoConfigMap
	Dictionary_2_t4977 * ___m_AutoConfigMap;
	// System.String UserConfigData::SkillBarSetFileName
	String_t* ___SkillBarSetFileName;
	// System.Collections.Generic.Dictionary`2<System.String,SkillBarInfo[]> UserConfigData::m_SkillBarSetMap
	Dictionary_2_t4978 * ___m_SkillBarSetMap;
	// System.String UserConfigData::RestaurantConfigFileName
	String_t* ___RestaurantConfigFileName;
	// System.Collections.Generic.Dictionary`2<System.String,RestaurantConfigData> UserConfigData::m_RestaurantConfigMap
	Dictionary_2_t4979 * ___m_RestaurantConfigMap;
	// System.String UserConfigData::ShoppingCartFileName
	String_t* ___ShoppingCartFileName;
	// System.Collections.Generic.Dictionary`2<System.String,Games.YuanBaoShopData.ShoppingCart> UserConfigData::m_ShoppingCartInfo
	Dictionary_2_t4980 * ___m_ShoppingCartInfo;
	// System.String UserConfigData::BelleConfigFileName
	String_t* ___BelleConfigFileName;
	// System.Collections.Generic.Dictionary`2<System.String,BelleConfigData> UserConfigData::m_BelleConfig
	Dictionary_2_t4981 * ___m_BelleConfig;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UserConfigData::<>f__switch$map6
	Dictionary_2_t944 * ___U3CU3Ef__switch$map6;
};
