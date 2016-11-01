#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.LogicObj.Obj
struct Obj_t2130;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// ObjEffectBehaviourController
struct ObjEffectBehaviourController_t2122;
// UnityEngine.Renderer
struct Renderer_t1008;
// UnityEngine.Material
struct Material_t133;
// PlayEffectDelegate
struct PlayEffectDelegate_t2116;
// System.Object
struct Object_t;
// Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_OBJ_TYP.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void Games.LogicObj.Obj::.ctor()
 void Obj__ctor_m31242 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.LogicObj.Obj::get_MainModelUrl()
 String_t* Obj_get_MainModelUrl_m31243 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::Awake()
 void Obj_Awake_m31244 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE Games.LogicObj.Obj::get_ObjType()
 int32_t Obj_get_ObjType_m31245 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj::get_CanLogic()
 bool Obj_get_CanLogic_m31246 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::set_CanLogic(System.Boolean)
 void Obj_set_CanLogic_m31247 (Obj_t2130 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj::get_ServerID()
 int32_t Obj_get_ServerID_m31248 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::set_ServerID(System.Int32)
 void Obj_set_ServerID_m31249 (Obj_t2130 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj::get_ModelID()
 int32_t Obj_get_ModelID_m31250 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::set_ModelID(System.Int32)
 void Obj_set_ModelID_m31251 (Obj_t2130 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Games.LogicObj.Obj::get_ModelNode()
 GameObject_t9 * Obj_get_ModelNode_m31252 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::set_ModelNode(UnityEngine.GameObject)
 void Obj_set_ModelNode_m31253 (Obj_t2130 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Games.LogicObj.Obj::get_ObjTransform()
 Transform_t78 * Obj_get_ObjTransform_m31254 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Games.LogicObj.Obj::get_Position()
 Vector3_t121  Obj_get_Position_m31255 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::set_Position(UnityEngine.Vector3)
 void Obj_set_Position_m31256 (Obj_t2130 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Games.LogicObj.Obj::get_Rotation()
 Quaternion_t120  Obj_get_Rotation_m31257 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::set_Rotation(UnityEngine.Quaternion)
 void Obj_set_Rotation_m31258 (Obj_t2130 * __this, Quaternion_t120  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Games.LogicObj.Obj::get_Scale()
 Vector3_t121  Obj_get_Scale_m31259 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::set_Scale(UnityEngine.Vector3)
 void Obj_set_Scale_m31260 (Obj_t2130 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.LogicObj.Obj::get_GameObjectName()
 String_t* Obj_get_GameObjectName_m31261 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::set_GameObjectName(System.String)
 void Obj_set_GameObjectName_m31262 (Obj_t2130 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::SetScale(System.Single)
 void Obj_SetScale_m31263 (Obj_t2130 * __this, float ___fScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj::IsInFront(Games.LogicObj.Obj)
 bool Obj_IsInFront_m31264 (Obj_t2130 * __this, Obj_t2130 * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::InitMaterialInfo()
 void Obj_InitMaterialInfo_m31265 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::InitWeaponMaterialInfo()
 void Obj_InitWeaponMaterialInfo_m31266 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::OptAfterInitMaterialInfo()
 void Obj_OptAfterInitMaterialInfo_m31267 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj::IsBodyRenderer(UnityEngine.Renderer)
 bool Obj_IsBodyRenderer_m31268 (Obj_t2130 * __this, Renderer_t1008 * ____Renderer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj::IsWeaponRenderer(UnityEngine.Renderer)
 bool Obj_IsWeaponRenderer_m31269 (Obj_t2130 * __this, Renderer_t1008 * ____Renderer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::SetMaterialInitColor()
 void Obj_SetMaterialInitColor_m31270 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::SetMaterialColor(UnityEngine.Material,System.Single,System.Single,System.Single)
 void Obj_SetMaterialColor_m31271 (Obj_t2130 * __this, Material_t133 * ____material, float ___red, float ___green, float ___blue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::SetMaterialColor(System.Single,System.Single,System.Single)
 void Obj_SetMaterialColor_m31272 (Obj_t2130 * __this, float ___red, float ___green, float ___blue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj::get_StealthLev()
 int32_t Obj_get_StealthLev_m31273 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::set_StealthLev(System.Int32)
 void Obj_set_StealthLev_m31274 (Obj_t2130 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::SetStealthState()
 void Obj_SetStealthState_m31275 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::CancelStealthState()
 void Obj_CancelStealthState_m31276 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::UpdateDissolve()
 void Obj_UpdateDissolve_m31277 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::PlayDissolve(System.Single,System.Single)
 void Obj_PlayDissolve_m31278 (Obj_t2130 * __this, float ____Speed, float ____delaytime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::PlayUnDissolve(System.Single,System.Single)
 void Obj_PlayUnDissolve_m31279 (Obj_t2130 * __this, float ____Speed, float ____delaytime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::ShowDissolveNPC()
 void Obj_ShowDissolveNPC_m31280 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjEffectBehaviourController Games.LogicObj.Obj::get_ObjEffectController()
 ObjEffectBehaviourController_t2122 * Obj_get_ObjEffectController_m31281 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::set_ObjEffectController(ObjEffectBehaviourController)
 void Obj_set_ObjEffectController_m31282 (Obj_t2130 * __this, ObjEffectBehaviourController_t2122 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::InitEffect()
 void Obj_InitEffect_m31283 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Games.LogicObj.Obj::GetObjBindPointObj(System.String)
 GameObject_t9 * Obj_GetObjBindPointObj_m31284 (Obj_t2130 * __this, String_t* ___pointName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::PlayEffect(System.Int32,PlayEffectDelegate,System.Object)
 void Obj_PlayEffect_m31285 (Obj_t2130 * __this, int32_t ___effectID, PlayEffectDelegate_t2116 * ___delPalyEffect, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::StopEffect(System.Int32,System.Boolean)
 void Obj_StopEffect_m31286 (Obj_t2130 * __this, int32_t ___effectID, bool ___bStopAll, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj::IsHaveBindPoint(System.String)
 bool Obj_IsHaveBindPoint_m31287 (Obj_t2130 * __this, String_t* ___strPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj::GetEffectCountById(System.Int32)
 int32_t Obj_GetEffectCountById_m31288 (Obj_t2130 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::SetMainModelUrl(System.String)
 void Obj_SetMainModelUrl_m31289 (Obj_t2130 * __this, String_t* ___url, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj::OnDestroy()
 void Obj_OnDestroy_m31290 (Obj_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
