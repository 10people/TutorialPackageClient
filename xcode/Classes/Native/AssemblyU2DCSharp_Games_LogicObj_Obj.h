#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t4452;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color>
struct Dictionary_2_t4453;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Shader>
struct Dictionary_2_t4454;
// ObjEffectBehaviourController
struct ObjEffectBehaviourController_t2122;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_OBJ_TYP.h"
// Games.LogicObj.Obj
struct Obj_t2130  : public MonoBehaviour_t18
{
	// System.String Games.LogicObj.Obj::m_MainObjUrl
	String_t* ___m_MainObjUrl;
	// Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE Games.LogicObj.Obj::m_ObjType
	int32_t ___m_ObjType;
	// System.Boolean Games.LogicObj.Obj::m_bCanLogic
	bool ___m_bCanLogic;
	// System.Int32 Games.LogicObj.Obj::m_ServerID
	int32_t ___m_ServerID;
	// System.Int32 Games.LogicObj.Obj::m_ModelID
	int32_t ___m_ModelID;
	// UnityEngine.GameObject Games.LogicObj.Obj::m_ModelNode
	GameObject_t9 * ___m_ModelNode;
	// UnityEngine.Transform Games.LogicObj.Obj::m_ObjTransform
	Transform_t78 * ___m_ObjTransform;
	// System.Collections.Generic.List`1<UnityEngine.Material> Games.LogicObj.Obj::m_WeaponMaterialList
	List_1_t4452 * ___m_WeaponMaterialList;
	// System.Collections.Generic.List`1<UnityEngine.Material> Games.LogicObj.Obj::m_BodyMaterialList
	List_1_t4452 * ___m_BodyMaterialList;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color> Games.LogicObj.Obj::m_BodyInitColorDic
	Dictionary_2_t4453 * ___m_BodyInitColorDic;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color> Games.LogicObj.Obj::m_WeaponInitColorDic
	Dictionary_2_t4453 * ___m_WeaponInitColorDic;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Shader> Games.LogicObj.Obj::m_BodyInitShaderDic
	Dictionary_2_t4454 * ___m_BodyInitShaderDic;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Shader> Games.LogicObj.Obj::m_WeaponInitShaderDic
	Dictionary_2_t4454 * ___m_WeaponInitShaderDic;
	// System.Boolean Games.LogicObj.Obj::m_bIsPlayDissolve
	bool ___m_bIsPlayDissolve;
	// System.Single Games.LogicObj.Obj::m_fPlayDissolveSpeed
	float ___m_fPlayDissolveSpeed;
	// System.Single Games.LogicObj.Obj::m_fPlayDissolveDelay
	float ___m_fPlayDissolveDelay;
	// System.Boolean Games.LogicObj.Obj::m_bIsPlayUnDissolve
	bool ___m_bIsPlayUnDissolve;
	// System.Single Games.LogicObj.Obj::m_fPlayUnDissolveSpeed
	float ___m_fPlayUnDissolveSpeed;
	// System.Single Games.LogicObj.Obj::m_fPlayUnDissolveDelay
	float ___m_fPlayUnDissolveDelay;
	// System.Int32 Games.LogicObj.Obj::m_nStealthLev
	int32_t ___m_nStealthLev;
	// ObjEffectBehaviourController Games.LogicObj.Obj::m_objEffectController
	ObjEffectBehaviourController_t2122 * ___m_objEffectController;
};
