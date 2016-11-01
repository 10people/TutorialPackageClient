#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CameraStateChangeToStarePos
struct CameraStateChangeToStarePos_t4577;
// ThirdPersonCamera
struct ThirdPersonCamera_t4573;
// CameraDefine/CameraMoveDoneCallback
struct CameraMoveDoneCallback_t4571;
// Games.LogicObj.Obj
struct Obj_t2130;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// iTween/EaseType
#include "AssemblyU2DCSharp_iTween_EaseType.h"

// System.Void CameraStateChangeToStarePos::.ctor()
 void CameraStateChangeToStarePos__ctor_m32873 (CameraStateChangeToStarePos_t4577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateChangeToStarePos::.ctor(ThirdPersonCamera)
 void CameraStateChangeToStarePos__ctor_m32874 (CameraStateChangeToStarePos_t4577 * __this, ThirdPersonCamera_t4573 * ___thirdPersonCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateChangeToStarePos::EnterState(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,iTween/EaseType,CameraDefine/CameraMoveDoneCallback)
 void CameraStateChangeToStarePos_EnterState_m32875 (CameraStateChangeToStarePos_t4577 * __this, Vector3_t121  ___targetPos, Vector3_t121  ___currentStarePos, float ___fDuration, int32_t ___easeType, CameraMoveDoneCallback_t4571 * ___onFinish, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CameraStateChangeToStarePos::get_CameraPos()
 Vector3_t121  CameraStateChangeToStarePos_get_CameraPos_m32876 (CameraStateChangeToStarePos_t4577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CameraStateChangeToStarePos::get_StarePos()
 Vector3_t121  CameraStateChangeToStarePos_get_StarePos_m32877 (CameraStateChangeToStarePos_t4577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateChangeToStarePos::UpdateCamera()
 void CameraStateChangeToStarePos_UpdateCamera_m32878 (CameraStateChangeToStarePos_t4577 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateChangeToStarePos::LookPos(UnityEngine.Vector3,CameraDefine/CameraMoveDoneCallback,System.Single)
 void CameraStateChangeToStarePos_LookPos_m32879 (CameraStateChangeToStarePos_t4577 * __this, Vector3_t121  ___pos, CameraMoveDoneCallback_t4571 * ___onCameraMoveDone, float ___fDuration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateChangeToStarePos::LookTarget(Games.LogicObj.Obj,CameraDefine/CameraMoveDoneCallback,System.Single)
 void CameraStateChangeToStarePos_LookTarget_m32880 (CameraStateChangeToStarePos_t4577 * __this, Obj_t2130 * ___target, CameraMoveDoneCallback_t4571 * ___onCameraMoveDone, float ___fDuration, MethodInfo* method) IL2CPP_METHOD_ATTR;
