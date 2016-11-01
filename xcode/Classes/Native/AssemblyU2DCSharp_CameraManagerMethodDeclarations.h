#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CameraManager
struct CameraManager_t4575;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.GameObject
struct GameObject_t9;
// Callback
struct Callback_t2196;
// CameraDefine/CameraMoveDoneCallback
struct CameraMoveDoneCallback_t4571;
// Games.LogicObj.Obj
struct Obj_t2130;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void CameraManager::.ctor()
 void CameraManager__ctor_m32844 (CameraManager_t4575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform CameraManager::get_MainCameraTrans()
 Transform_t78 * CameraManager_get_MainCameraTrans_m32845 (CameraManager_t4575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraManager::get_IsDuangCamera()
 bool CameraManager_get_IsDuangCamera_m32846 (CameraManager_t4575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::set_IsDuangCamera(System.Boolean)
 void CameraManager_set_IsDuangCamera_m32847 (CameraManager_t4575 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CameraManager::get_CameraComponent()
 Camera_t38 * CameraManager_get_CameraComponent_m32848 (CameraManager_t4575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject CameraManager::get_CachedGo()
 GameObject_t9 * CameraManager_get_CachedGo_m32849 (CameraManager_t4575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::Init()
 void CameraManager_Init_m32850 (CameraManager_t4575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::InitMainCameraEffect()
 void CameraManager_InitMainCameraEffect_m32851 (CameraManager_t4575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraManager::get_OpenAndCloseFastBloom()
 bool CameraManager_get_OpenAndCloseFastBloom_m32852 (CameraManager_t4575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::set_OpenAndCloseFastBloom(System.Boolean)
 void CameraManager_set_OpenAndCloseFastBloom_m32853 (CameraManager_t4575 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraManager::get_OpenAndCloseMotionBlur()
 bool CameraManager_get_OpenAndCloseMotionBlur_m32854 (CameraManager_t4575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::set_OpenAndCloseMotionBlur(System.Boolean)
 void CameraManager_set_OpenAndCloseMotionBlur_m32855 (CameraManager_t4575 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::Clear()
 void CameraManager_Clear_m32856 (CameraManager_t4575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::Update(System.Single)
 void CameraManager_Update_m32857 (CameraManager_t4575 * __this, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::CameraCullingMask(UnityEngine.Color,System.Int32)
 void CameraManager_CameraCullingMask_m32858 (CameraManager_t4575 * __this, Color_t939  ___tagColor, int32_t ___tagCullingMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::ResetCameraCullingMash()
 void CameraManager_ResetCameraCullingMash_m32859 (CameraManager_t4575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::LinkCamera()
 void CameraManager_LinkCamera_m32860 (CameraManager_t4575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::AddMainCamera()
 void CameraManager_AddMainCamera_m32861 (CameraManager_t4575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::UpdateDistance(System.Single)
 void CameraManager_UpdateDistance_m32862 (CameraManager_t4575 * __this, float ___deltaDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::ResetThirdPersonCamera(System.Single)
 void CameraManager_ResetThirdPersonCamera_m32863 (CameraManager_t4575 * __this, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CameraManager::StartRock(System.Int32,Callback)
 float CameraManager_StartRock_m32864 (CameraManager_t4575 * __this, int32_t ___nRockId, Callback_t2196 * ___finishCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraManager::IsRocking(System.Int32)
 bool CameraManager_IsRocking_m32865 (CameraManager_t4575 * __this, int32_t ___nRockId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::StopRock(System.Int32)
 void CameraManager_StopRock_m32866 (CameraManager_t4575 * __this, int32_t ___nRockId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CameraManager::StartAnim(System.Int32,Callback)
 float CameraManager_StartAnim_m32867 (CameraManager_t4575 * __this, int32_t ___nAnimId, Callback_t2196 * ___finishCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraManager::IsPlayingAnim(System.Int32)
 bool CameraManager_IsPlayingAnim_m32868 (CameraManager_t4575 * __this, int32_t ___nAnimId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::StopAnim(System.Int32)
 void CameraManager_StopAnim_m32869 (CameraManager_t4575 * __this, int32_t ___nAnimId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::LookPos(UnityEngine.Vector3,CameraDefine/CameraMoveDoneCallback,System.Single)
 void CameraManager_LookPos_m32870 (CameraManager_t4575 * __this, Vector3_t121  ___targetPos, CameraMoveDoneCallback_t4571 * ___onCameraMoveDone, float ___fDuration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::LookTarget(Games.LogicObj.Obj,CameraDefine/CameraMoveDoneCallback,System.Single)
 void CameraManager_LookTarget_m32871 (CameraManager_t4575 * __this, Obj_t2130 * ___target, CameraMoveDoneCallback_t4571 * ___onCameraMoveDone, float ___fDuration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::OnCutsceneMovieBegin()
 void CameraManager_OnCutsceneMovieBegin_m32872 (CameraManager_t4575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
