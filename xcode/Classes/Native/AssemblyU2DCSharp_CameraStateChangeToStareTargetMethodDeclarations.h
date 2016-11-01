#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CameraStateChangeToStareTarget
struct CameraStateChangeToStareTarget_t4578;
// ThirdPersonCamera
struct ThirdPersonCamera_t4573;
// Games.LogicObj.Obj
struct Obj_t2130;
// CameraDefine/CameraMoveDoneCallback
struct CameraMoveDoneCallback_t4571;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// iTween/EaseType
#include "AssemblyU2DCSharp_iTween_EaseType.h"

// System.Void CameraStateChangeToStareTarget::.ctor()
 void CameraStateChangeToStareTarget__ctor_m32881 (CameraStateChangeToStareTarget_t4578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateChangeToStareTarget::.ctor(ThirdPersonCamera)
 void CameraStateChangeToStareTarget__ctor_m32882 (CameraStateChangeToStareTarget_t4578 * __this, ThirdPersonCamera_t4573 * ___thirdPersonCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateChangeToStareTarget::EnterState(Games.LogicObj.Obj,UnityEngine.Vector3,System.Single,iTween/EaseType,CameraDefine/CameraMoveDoneCallback)
 void CameraStateChangeToStareTarget_EnterState_m32883 (CameraStateChangeToStareTarget_t4578 * __this, Obj_t2130 * ___target, Vector3_t121  ___currentStarePos, float ___fDuration, int32_t ___easeType, CameraMoveDoneCallback_t4571 * ___onFinish, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CameraStateChangeToStareTarget::get_CameraPos()
 Vector3_t121  CameraStateChangeToStareTarget_get_CameraPos_m32884 (CameraStateChangeToStareTarget_t4578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CameraStateChangeToStareTarget::get_StarePos()
 Vector3_t121  CameraStateChangeToStareTarget_get_StarePos_m32885 (CameraStateChangeToStareTarget_t4578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateChangeToStareTarget::UpdateCamera()
 void CameraStateChangeToStareTarget_UpdateCamera_m32886 (CameraStateChangeToStareTarget_t4578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateChangeToStareTarget::LookPos(UnityEngine.Vector3,CameraDefine/CameraMoveDoneCallback,System.Single)
 void CameraStateChangeToStareTarget_LookPos_m32887 (CameraStateChangeToStareTarget_t4578 * __this, Vector3_t121  ___pos, CameraMoveDoneCallback_t4571 * ___onCameraMoveDone, float ___fDuration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateChangeToStareTarget::LookTarget(Games.LogicObj.Obj,CameraDefine/CameraMoveDoneCallback,System.Single)
 void CameraStateChangeToStareTarget_LookTarget_m32888 (CameraStateChangeToStareTarget_t4578 * __this, Obj_t2130 * ___target, CameraMoveDoneCallback_t4571 * ___onCameraMoveDone, float ___fDuration, MethodInfo* method) IL2CPP_METHOD_ATTR;
