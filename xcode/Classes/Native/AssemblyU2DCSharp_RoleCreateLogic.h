#pragma once
#include <stdint.h>
// UIInput
struct UIInput_t1231;
// TabController
struct TabController_t1209;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// ChangePerson
struct ChangePerson_t1694;
// MUISelectPerson
struct MUISelectPerson_t1695;
// UnityEngine.Transform
struct Transform_t78;
// UIPlayTween
struct UIPlayTween_t1696;
// TweenAlpha
struct TweenAlpha_t1261;
// TweenScale
struct TweenScale_t1259;
// TweenPosition
struct TweenPosition_t1255;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UIControllerBase`1<RoleCreateLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_22.h"
// RoleCreateLogic/ROLE_PROFESSION
#include "AssemblyU2DCSharp_RoleCreateLogic_ROLE_PROFESSION.h"
// RoleCreateLogic/ROLE_SEX
#include "AssemblyU2DCSharp_RoleCreateLogic_ROLE_SEX.h"
// RoleCreateLogic
struct RoleCreateLogic_t1697  : public UIControllerBase_1_t1698
{
	// UIInput RoleCreateLogic::m_InputName
	UIInput_t1231 * ___m_InputName;
	// RoleCreateLogic/ROLE_PROFESSION RoleCreateLogic::m_ChooseIndex
	int32_t ___m_ChooseIndex;
	// RoleCreateLogic/ROLE_SEX RoleCreateLogic::m_ChooseSex
	int32_t ___m_ChooseSex;
	// System.Boolean RoleCreateLogic::m_bBeginHeartBeat
	bool ___m_bBeginHeartBeat;
	// System.Single RoleCreateLogic::m_HeartBeatTimer
	float ___m_HeartBeatTimer;
	// TabController RoleCreateLogic::m_SexController
	TabController_t1209 * ___m_SexController;
	// UnityEngine.GameObject RoleCreateLogic::m_RoleImage1
	GameObject_t9 * ___m_RoleImage1;
	// UnityEngine.GameObject RoleCreateLogic::m_RoleImage2
	GameObject_t9 * ___m_RoleImage2;
	// UnityEngine.GameObject RoleCreateLogic::m_RoleImage3
	GameObject_t9 * ___m_RoleImage3;
	// UILabel RoleCreateLogic::m_ProTitle
	UILabel_t1176 * ___m_ProTitle;
	// UnityEngine.GameObject RoleCreateLogic::m_FirstStepObj
	GameObject_t9 * ___m_FirstStepObj;
	// UnityEngine.GameObject RoleCreateLogic::m_NextStepObj
	GameObject_t9 * ___m_NextStepObj;
	// UnityEngine.GameObject[] RoleCreateLogic::m_RoleItemObj
	GameObjectU5BU5D_t1200* ___m_RoleItemObj;
	// ChangePerson RoleCreateLogic::m_ChangePersonObj
	ChangePerson_t1694 * ___m_ChangePersonObj;
	// MUISelectPerson RoleCreateLogic::m_MuiSelectPersonObj
	MUISelectPerson_t1695 * ___m_MuiSelectPersonObj;
	// UnityEngine.GameObject RoleCreateLogic::bgButton1Obj
	GameObject_t9 * ___bgButton1Obj;
	// UnityEngine.GameObject RoleCreateLogic::bgButton2Obj
	GameObject_t9 * ___bgButton2Obj;
	// UnityEngine.Transform RoleCreateLogic::firstBlurredTrans
	Transform_t78 * ___firstBlurredTrans;
	// System.Int32 RoleCreateLogic::m_CurRoleIndex
	int32_t ___m_CurRoleIndex;
	// UIPlayTween RoleCreateLogic::tweenPlayer
	UIPlayTween_t1696 * ___tweenPlayer;
	// TweenAlpha RoleCreateLogic::backgroundTweenerAlpha
	TweenAlpha_t1261 * ___backgroundTweenerAlpha;
	// TweenScale RoleCreateLogic::backgroungTweenerScale
	TweenScale_t1259 * ___backgroungTweenerScale;
	// TweenPosition RoleCreateLogic::backgroundTweenerPosition
	TweenPosition_t1255 * ___backgroundTweenerPosition;
	// UILabel[] RoleCreateLogic::m_processNameArray
	UILabelU5BU5D_t1203* ___m_processNameArray;
	// UnityEngine.GameObject[] RoleCreateLogic::m_RoleBgObj
	GameObjectU5BU5D_t1200* ___m_RoleBgObj;
	// UnityEngine.GameObject[] RoleCreateLogic::m_ZhiYeObj
	GameObjectU5BU5D_t1200* ___m_ZhiYeObj;
	// UILabel[] RoleCreateLogic::m_ZhiYeLabel
	UILabelU5BU5D_t1203* ___m_ZhiYeLabel;
	// UIPlayTween RoleCreateLogic::m_ZhiYeMgr
	UIPlayTween_t1696 * ___m_ZhiYeMgr;
	// System.Boolean RoleCreateLogic::IsClickSelectRole
	bool ___IsClickSelectRole;
	// UnityEngine.GameObject RoleCreateLogic::m_ResetTweenParent
	GameObject_t9 * ___m_ResetTweenParent;
};
