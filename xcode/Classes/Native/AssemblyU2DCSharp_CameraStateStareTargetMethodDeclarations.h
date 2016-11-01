#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CameraStateStareTarget
struct CameraStateStareTarget_t4581;
// ThirdPersonCamera
struct ThirdPersonCamera_t4573;
// Games.LogicObj.Obj
struct Obj_t2130;
// CameraDefine/CameraMoveDoneCallback
struct CameraMoveDoneCallback_t4571;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void CameraStateStareTarget::.ctor()
 void CameraStateStareTarget__ctor_m32904 (CameraStateStareTarget_t4581 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateStareTarget::.ctor(ThirdPersonCamera)
 void CameraStateStareTarget__ctor_m32905 (CameraStateStareTarget_t4581 * __this, ThirdPersonCamera_t4573 * ___thirdPersonCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateStareTarget::EnterState(Games.LogicObj.Obj)
 void CameraStateStareTarget_EnterState_m32906 (CameraStateStareTarget_t4581 * __this, Obj_t2130 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CameraStateStareTarget::get_CameraPos()
 Vector3_t121  CameraStateStareTarget_get_CameraPos_m32907 (CameraStateStareTarget_t4581 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CameraStateStareTarget::get_StarePos()
 Vector3_t121  CameraStateStareTarget_get_StarePos_m32908 (CameraStateStareTarget_t4581 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateStareTarget::UpdateCamera()
 void CameraStateStareTarget_UpdateCamera_m32909 (CameraStateStareTarget_t4581 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateStareTarget::LookPos(UnityEngine.Vector3,CameraDefine/CameraMoveDoneCallback,System.Single)
 void CameraStateStareTarget_LookPos_m32910 (CameraStateStareTarget_t4581 * __this, Vector3_t121  ___pos, CameraMoveDoneCallback_t4571 * ___onCameraMoveDone, float ___fDuration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateStareTarget::LookTarget(Games.LogicObj.Obj,CameraDefine/CameraMoveDoneCallback,System.Single)
 void CameraStateStareTarget_LookTarget_m32911 (CameraStateStareTarget_t4581 * __this, Obj_t2130 * ___target, CameraMoveDoneCallback_t4571 * ___onCameraMoveDone, float ___fDuration, MethodInfo* method) IL2CPP_METHOD_ATTR;
