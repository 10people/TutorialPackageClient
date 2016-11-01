#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ReflectionFx
struct ReflectionFx_t938;
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.RenderTexture
struct RenderTexture_t940;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ReflectionFx::.ctor()
 void ReflectionFx__ctor_m4011 (ReflectionFx_t938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReflectionFx::Start()
 void ReflectionFx_Start_m4012 (ReflectionFx_t938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReflectionFx::OnDisable()
 void ReflectionFx_OnDisable_m4013 (ReflectionFx_t938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera ReflectionFx::CreateReflectionCameraFor(UnityEngine.Camera)
 Camera_t38 * ReflectionFx_CreateReflectionCameraFor_m4014 (ReflectionFx_t938 * __this, Camera_t38 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReflectionFx::HighQuality()
 void ReflectionFx_HighQuality_m4015 (ReflectionFx_t938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReflectionFx::SetStandardCameraParameter(UnityEngine.Camera,UnityEngine.LayerMask)
 void ReflectionFx_SetStandardCameraParameter_m4016 (ReflectionFx_t938 * __this, Camera_t38 * ___cam, LayerMask_t39  ___mask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture ReflectionFx::CreateTextureFor(UnityEngine.Camera)
 RenderTexture_t940 * ReflectionFx_CreateTextureFor_m4017 (ReflectionFx_t938 * __this, Camera_t38 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReflectionFx::RenderHelpCameras(UnityEngine.Camera)
 void ReflectionFx_RenderHelpCameras_m4018 (ReflectionFx_t938 * __this, Camera_t38 * ___currentCam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReflectionFx::LateUpdate()
 void ReflectionFx_LateUpdate_m4019 (ReflectionFx_t938 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReflectionFx::ObjectBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
 void ReflectionFx_ObjectBeingRendered_m4020 (ReflectionFx_t938 * __this, Transform_t78 * ___tr, Camera_t38 * ___currentCam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReflectionFx::RenderReflectionFor(UnityEngine.Camera,UnityEngine.Camera)
 void ReflectionFx_RenderReflectionFor_m4021 (ReflectionFx_t938 * __this, Camera_t38 * ___cam, Camera_t38 * ___reflectCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReflectionFx::SaneCameraSettings(UnityEngine.Camera)
 void ReflectionFx_SaneCameraSettings_m4022 (ReflectionFx_t938 * __this, Camera_t38 * ___helperCam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 ReflectionFx::CalculateObliqueMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
 Matrix4x4_t941  ReflectionFx_CalculateObliqueMatrix_m4023 (Object_t * __this/* static, unused */, Matrix4x4_t941  ___projection, Vector4_t942  ___clipPlane, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 ReflectionFx::CalculateReflectionMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
 Matrix4x4_t941  ReflectionFx_CalculateReflectionMatrix_m4024 (Object_t * __this/* static, unused */, Matrix4x4_t941  ___reflectionMat, Vector4_t942  ___plane, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ReflectionFx::sgn(System.Single)
 float ReflectionFx_sgn_m4025 (Object_t * __this/* static, unused */, float ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 ReflectionFx::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 Vector4_t942  ReflectionFx_CameraSpacePlane_m4026 (ReflectionFx_t938 * __this, Camera_t38 * ___cam, Vector3_t121  ___pos, Vector3_t121  ___normal, float ___sideSign, MethodInfo* method) IL2CPP_METHOD_ATTR;
