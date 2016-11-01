#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ThirdPersonCamera
struct ThirdPersonCamera_t4573;
// ICameraState
struct ICameraState_t4585;
// CameraDefine/CameraMoveDoneCallback
struct CameraMoveDoneCallback_t4571;
// Games.LogicObj.Obj
struct Obj_t2130;
// Callback
struct Callback_t2196;
// UnityEngine.AnimationCurve
struct AnimationCurve_t4583;
struct AnimationCurve_t4583_marshaled;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ThirdPersonCamera::.ctor()
 void ThirdPersonCamera__ctor_m32918 (ThirdPersonCamera_t4573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonCamera::get_Pitch()
 float ThirdPersonCamera_get_Pitch_m32919 (ThirdPersonCamera_t4573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonCamera::get_Yaw()
 float ThirdPersonCamera_get_Yaw_m32920 (ThirdPersonCamera_t4573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonCamera::get_Distance()
 float ThirdPersonCamera_get_Distance_m32921 (ThirdPersonCamera_t4573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThirdPersonCamera::get_TargetOffset()
 Vector3_t121  ThirdPersonCamera_get_TargetOffset_m32922 (ThirdPersonCamera_t4573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonCamera::get_Dirty()
 bool ThirdPersonCamera_get_Dirty_m32923 (ThirdPersonCamera_t4573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Init()
 void ThirdPersonCamera_Init_m32924 (ThirdPersonCamera_t4573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Clear()
 void ThirdPersonCamera_Clear_m32925 (ThirdPersonCamera_t4573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Update(System.Single)
 void ThirdPersonCamera_Update_m32926 (ThirdPersonCamera_t4573 * __this, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::SetState(ICameraState)
 void ThirdPersonCamera_SetState_m32927 (ThirdPersonCamera_t4573 * __this, Object_t * ___newState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::UpdatePitch(System.Single)
 void ThirdPersonCamera_UpdatePitch_m32928 (ThirdPersonCamera_t4573 * __this, float ___deltaPitch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::UpdateYaw(System.Single)
 void ThirdPersonCamera_UpdateYaw_m32929 (ThirdPersonCamera_t4573 * __this, float ___deltaYaw, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::UpdateDistance(System.Single)
 void ThirdPersonCamera_UpdateDistance_m32930 (ThirdPersonCamera_t4573 * __this, float ___deltaDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::ResetToDefault(System.Single)
 void ThirdPersonCamera_ResetToDefault_m32931 (ThirdPersonCamera_t4573 * __this, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::LookPos(UnityEngine.Vector3,CameraDefine/CameraMoveDoneCallback,System.Single)
 void ThirdPersonCamera_LookPos_m32932 (ThirdPersonCamera_t4573 * __this, Vector3_t121  ___targetPos, CameraMoveDoneCallback_t4571 * ___onCameraMoveDone, float ___fDuration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::LookTarget(Games.LogicObj.Obj,CameraDefine/CameraMoveDoneCallback,System.Single)
 void ThirdPersonCamera_LookTarget_m32933 (ThirdPersonCamera_t4573 * __this, Obj_t2130 * ___target, CameraMoveDoneCallback_t4571 * ___onCameraMoveDone, float ___fDuration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonCamera::StartCameraAnim(System.Int32,Callback)
 float ThirdPersonCamera_StartCameraAnim_m32934 (ThirdPersonCamera_t4573 * __this, int32_t ___nAnimId, Callback_t2196 * ___finishCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonCamera::InitCameraRock(System.Int32,Callback)
 float ThirdPersonCamera_InitCameraRock_m32935 (ThirdPersonCamera_t4573 * __this, int32_t ___nRockId, Callback_t2196 * ___finishCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonCamera::IsHaveRockInfoById(System.Int32)
 bool ThirdPersonCamera_IsHaveRockInfoById_m32936 (ThirdPersonCamera_t4573 * __this, int32_t ___nRockId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonCamera::IsPlayingAnim(System.Int32)
 bool ThirdPersonCamera_IsPlayingAnim_m32937 (ThirdPersonCamera_t4573 * __this, int32_t ___nAnimId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::CleanUpRockInfoById(System.Int32)
 void ThirdPersonCamera_CleanUpRockInfoById_m32938 (ThirdPersonCamera_t4573 * __this, int32_t ___nRockId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::StopCameraAnim(System.Int32)
 void ThirdPersonCamera_StopCameraAnim_m32939 (ThirdPersonCamera_t4573 * __this, int32_t ___nAnimId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve ThirdPersonCamera::InitRockOff(System.Int32)
 AnimationCurve_t4583 * ThirdPersonCamera_InitRockOff_m32940 (ThirdPersonCamera_t4573 * __this, int32_t ___nCurverId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::ApplyRock()
 void ThirdPersonCamera_ApplyRock_m32941 (ThirdPersonCamera_t4573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::ApplyAnim()
 void ThirdPersonCamera_ApplyAnim_m32942 (ThirdPersonCamera_t4573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
