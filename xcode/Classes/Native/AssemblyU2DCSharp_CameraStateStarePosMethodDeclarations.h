#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CameraStateStarePos
struct CameraStateStarePos_t4580;
// ThirdPersonCamera
struct ThirdPersonCamera_t4573;
// CameraDefine/CameraMoveDoneCallback
struct CameraMoveDoneCallback_t4571;
// Games.LogicObj.Obj
struct Obj_t2130;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void CameraStateStarePos::.ctor()
 void CameraStateStarePos__ctor_m32896 (CameraStateStarePos_t4580 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateStarePos::.ctor(ThirdPersonCamera)
 void CameraStateStarePos__ctor_m32897 (CameraStateStarePos_t4580 * __this, ThirdPersonCamera_t4573 * ___thirdPersonCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateStarePos::EnterState(UnityEngine.Vector3)
 void CameraStateStarePos_EnterState_m32898 (CameraStateStarePos_t4580 * __this, Vector3_t121  ___targetPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CameraStateStarePos::get_CameraPos()
 Vector3_t121  CameraStateStarePos_get_CameraPos_m32899 (CameraStateStarePos_t4580 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CameraStateStarePos::get_StarePos()
 Vector3_t121  CameraStateStarePos_get_StarePos_m32900 (CameraStateStarePos_t4580 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateStarePos::UpdateCamera()
 void CameraStateStarePos_UpdateCamera_m32901 (CameraStateStarePos_t4580 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateStarePos::LookPos(UnityEngine.Vector3,CameraDefine/CameraMoveDoneCallback,System.Single)
 void CameraStateStarePos_LookPos_m32902 (CameraStateStarePos_t4580 * __this, Vector3_t121  ___pos, CameraMoveDoneCallback_t4571 * ___onCameraMoveDone, float ___fDuration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateStarePos::LookTarget(Games.LogicObj.Obj,CameraDefine/CameraMoveDoneCallback,System.Single)
 void CameraStateStarePos_LookTarget_m32903 (CameraStateStarePos_t4580 * __this, Obj_t2130 * ___target, CameraMoveDoneCallback_t4571 * ___onCameraMoveDone, float ___fDuration, MethodInfo* method) IL2CPP_METHOD_ATTR;
