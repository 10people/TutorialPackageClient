#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MirrorReflection
struct MirrorReflection_t5144;
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void MirrorReflection::.ctor()
 void MirrorReflection__ctor_m36594 (MirrorReflection_t5144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirrorReflection::.cctor()
 void MirrorReflection__cctor_m36595 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// MirrorReflection MirrorReflection::get_instance()
 MirrorReflection_t5144 * MirrorReflection_get_instance_m36596 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirrorReflection::Awake()
 void MirrorReflection_Awake_m36597 (MirrorReflection_t5144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirrorReflection::LateUpdate()
 void MirrorReflection_LateUpdate_m36598 (MirrorReflection_t5144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirrorReflection::OnDisable()
 void MirrorReflection_OnDisable_m36599 (MirrorReflection_t5144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirrorReflection::UpdateCameraModes(UnityEngine.Camera,UnityEngine.Camera)
 void MirrorReflection_UpdateCameraModes_m36600 (MirrorReflection_t5144 * __this, Camera_t38 * ___src, Camera_t38 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirrorReflection::CreateMirrorObjects(UnityEngine.Camera,UnityEngine.Camera&)
 void MirrorReflection_CreateMirrorObjects_m36601 (MirrorReflection_t5144 * __this, Camera_t38 * ___currentCamera, Camera_t38 ** ___reflectionCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirrorReflection::sgn(System.Single)
 float MirrorReflection_sgn_m36602 (Object_t * __this/* static, unused */, float ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 MirrorReflection::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 Vector4_t942  MirrorReflection_CameraSpacePlane_m36603 (MirrorReflection_t5144 * __this, Camera_t38 * ___cam, Vector3_t121  ___pos, Vector3_t121  ___normal, float ___sideSign, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirrorReflection::CalculateObliqueMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
 void MirrorReflection_CalculateObliqueMatrix_m36604 (Object_t * __this/* static, unused */, Matrix4x4_t941 * ___projection, Vector4_t942  ___clipPlane, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirrorReflection::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
 void MirrorReflection_CalculateReflectionMatrix_m36605 (Object_t * __this/* static, unused */, Matrix4x4_t941 * ___reflectionMat, Vector4_t942  ___plane, MethodInfo* method) IL2CPP_METHOD_ATTR;
