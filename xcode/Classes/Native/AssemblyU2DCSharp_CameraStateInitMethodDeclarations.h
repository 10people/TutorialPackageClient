#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CameraStateInit
struct CameraStateInit_t4579;
// ThirdPersonCamera
struct ThirdPersonCamera_t4573;
// CameraDefine/CameraMoveDoneCallback
struct CameraMoveDoneCallback_t4571;
// Games.LogicObj.Obj
struct Obj_t2130;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void CameraStateInit::.ctor()
 void CameraStateInit__ctor_m32889 (CameraStateInit_t4579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateInit::.ctor(ThirdPersonCamera)
 void CameraStateInit__ctor_m32890 (CameraStateInit_t4579 * __this, ThirdPersonCamera_t4573 * ___thirdPersonCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CameraStateInit::get_CameraPos()
 Vector3_t121  CameraStateInit_get_CameraPos_m32891 (CameraStateInit_t4579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CameraStateInit::get_StarePos()
 Vector3_t121  CameraStateInit_get_StarePos_m32892 (CameraStateInit_t4579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateInit::UpdateCamera()
 void CameraStateInit_UpdateCamera_m32893 (CameraStateInit_t4579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateInit::LookPos(UnityEngine.Vector3,CameraDefine/CameraMoveDoneCallback,System.Single)
 void CameraStateInit_LookPos_m32894 (CameraStateInit_t4579 * __this, Vector3_t121  ___pos, CameraMoveDoneCallback_t4571 * ___onCameraMoveDone, float ___fDuration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraStateInit::LookTarget(Games.LogicObj.Obj,CameraDefine/CameraMoveDoneCallback,System.Single)
 void CameraStateInit_LookTarget_m32895 (CameraStateInit_t4579 * __this, Obj_t2130 * ___target, CameraMoveDoneCallback_t4571 * ___onCameraMoveDone, float ___fDuration, MethodInfo* method) IL2CPP_METHOD_ATTR;
