#pragma once
#include <stdint.h>
// WPSDKHelperScript
struct WPSDKHelperScript_t5229;
// WPSDKHelperScript/PayInfoForWP
struct PayInfoForWP_t5226;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t908;
// System.Action`1<System.Boolean>
struct Action_1_t5230;
// System.Action`1<System.String>
struct Action_1_t4407;
// WPSDKHelperScript/DelegateDeviceID
struct DelegateDeviceID_t5227;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// WPSDKHelperScript
struct WPSDKHelperScript_t5229  : public MonoBehaviour_t18
{
	// System.Boolean WPSDKHelperScript::IsNowLoginingIn
	bool ___IsNowLoginingIn;
	// WPSDKHelperScript/PayInfoForWP WPSDKHelperScript::m_payInfoForWp
	PayInfoForWP_t5226 * ___m_payInfoForWp;
	// System.Action`1<System.Boolean> WPSDKHelperScript::WPStartLogin
	Action_1_t5230 * ___WPStartLogin;
	// System.Action`1<System.String> WPSDKHelperScript::WPUserLogOut
	Action_1_t4407 * ___WPUserLogOut;
	// System.Action`1<System.String> WPSDKHelperScript::WPReqPayGoodsList
	Action_1_t4407 * ___WPReqPayGoodsList;
	// System.Action`1<System.String> WPSDKHelperScript::WPMakePayWithGoodsInfo
	Action_1_t4407 * ___WPMakePayWithGoodsInfo;
	// System.Action`1<System.String> WPSDKHelperScript::WPShowChargeRecordList
	Action_1_t4407 * ___WPShowChargeRecordList;
	// System.Action`1<System.String> WPSDKHelperScript::WPShowCallCenter
	Action_1_t4407 * ___WPShowCallCenter;
	// System.Action`1<System.String> WPSDKHelperScript::WPSendUserActionCMBI
	Action_1_t4407 * ___WPSendUserActionCMBI;
	// WPSDKHelperScript/DelegateDeviceID WPSDKHelperScript::WPGetDeviceUDID
	DelegateDeviceID_t5227 * ___WPGetDeviceUDID;
};
struct WPSDKHelperScript_t5229_StaticFields{
	// WPSDKHelperScript WPSDKHelperScript::m_instance
	WPSDKHelperScript_t5229 * ___m_instance;
	// System.String WPSDKHelperScript::configPath
	String_t* ___configPath;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> WPSDKHelperScript::m_WPConfigMap
	Dictionary_2_t908 * ___m_WPConfigMap;
};
