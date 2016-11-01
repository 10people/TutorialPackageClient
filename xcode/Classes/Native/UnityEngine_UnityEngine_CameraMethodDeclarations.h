#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.RenderTexture
struct RenderTexture_t940;
// UnityEngine.Camera[]
struct CameraU5BU5D_t37;
// UnityEngine.Shader
struct Shader_t934;
// System.String
struct String_t;
// UnityEngine.RenderingPath
#include "UnityEngine_UnityEngine_RenderingPath.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.DepthTextureMode
#include "UnityEngine_UnityEngine_DepthTextureMode.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Single UnityEngine.Camera::get_fieldOfView()
 float Camera_get_fieldOfView_m4508 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
 void Camera_set_fieldOfView_m4506 (Camera_t38 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
 float Camera_get_nearClipPlane_m40182 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
 void Camera_set_nearClipPlane_m40183 (Camera_t38 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
 float Camera_get_farClipPlane_m40184 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
 void Camera_set_farClipPlane_m40185 (Camera_t38 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_renderingPath(UnityEngine.RenderingPath)
 void Camera_set_renderingPath_m6579 (Camera_t38 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_orthographicSize()
 float Camera_get_orthographicSize_m4509 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
 void Camera_set_orthographicSize_m4505 (Camera_t38 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Camera::get_orthographic()
 bool Camera_get_orthographic_m4504 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
 void Camera_set_orthographic_m41726 (Camera_t38 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Camera::get_isOrthoGraphic()
 bool Camera_get_isOrthoGraphic_m41917 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
 float Camera_get_depth_m41045 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_depth(System.Single)
 void Camera_set_depth_m6507 (Camera_t38 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_aspect()
 float Camera_get_aspect_m41727 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_aspect(System.Single)
 void Camera_set_aspect_m41728 (Camera_t38 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
 int32_t Camera_get_cullingMask_m40830 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
 void Camera_set_cullingMask_m6506 (Camera_t38 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
 int32_t Camera_get_eventMask_m52532 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_eventMask(System.Int32)
 void Camera_set_eventMask_m42220 (Camera_t38 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_backgroundColor(UnityEngine.Color&)
 void Camera_INTERNAL_get_backgroundColor_m52533 (Camera_t38 * __this, Color_t939 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)
 void Camera_INTERNAL_set_backgroundColor_m52534 (Camera_t38 * __this, Color_t939 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Camera::get_backgroundColor()
 Color_t939  Camera_get_backgroundColor_m40831 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
 void Camera_set_backgroundColor_m6549 (Camera_t38 * __this, Color_t939  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)
 void Camera_INTERNAL_get_rect_m52535 (Camera_t38 * __this, Rect_t5068 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)
 void Camera_INTERNAL_set_rect_m52536 (Camera_t38 * __this, Rect_t5068 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_rect()
 Rect_t5068  Camera_get_rect_m41992 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
 void Camera_set_rect_m42299 (Camera_t38 * __this, Rect_t5068  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
 void Camera_INTERNAL_get_pixelRect_m52537 (Camera_t38 * __this, Rect_t5068 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
 Rect_t5068  Camera_get_pixelRect_m42174 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
 RenderTexture_t940 * Camera_get_targetTexture_m6550 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
 void Camera_set_targetTexture_m6551 (Camera_t38 * __this, RenderTexture_t940 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_pixelWidth()
 float Camera_get_pixelWidth_m6553 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_pixelHeight()
 float Camera_get_pixelHeight_m6554 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)
 void Camera_INTERNAL_get_worldToCameraMatrix_m52538 (Camera_t38 * __this, Matrix4x4_t941 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_worldToCameraMatrix(UnityEngine.Matrix4x4&)
 void Camera_INTERNAL_set_worldToCameraMatrix_m52539 (Camera_t38 * __this, Matrix4x4_t941 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
 Matrix4x4_t941  Camera_get_worldToCameraMatrix_m6572 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_worldToCameraMatrix(UnityEngine.Matrix4x4)
 void Camera_set_worldToCameraMatrix_m6574 (Camera_t38 * __this, Matrix4x4_t941  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
 void Camera_INTERNAL_get_projectionMatrix_m52540 (Camera_t38 * __this, Matrix4x4_t941 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)
 void Camera_INTERNAL_set_projectionMatrix_m52541 (Camera_t38 * __this, Matrix4x4_t941 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
 Matrix4x4_t941  Camera_get_projectionMatrix_m6575 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
 void Camera_set_projectionMatrix_m6576 (Camera_t38 * __this, Matrix4x4_t941  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
 int32_t Camera_get_clearFlags_m41722 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
 void Camera_set_clearFlags_m6505 (Camera_t38 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
 Vector3_t121  Camera_WorldToScreenPoint_m39046 (Camera_t38 * __this, Vector3_t121  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)
 Vector3_t121  Camera_INTERNAL_CALL_WorldToScreenPoint_m52542 (Object_t * __this/* static, unused */, Camera_t38 * ___self, Vector3_t121 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
 Vector3_t121  Camera_WorldToViewportPoint_m41970 (Camera_t38 * __this, Vector3_t121  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
 Vector3_t121  Camera_INTERNAL_CALL_WorldToViewportPoint_m52543 (Object_t * __this/* static, unused */, Camera_t38 * ___self, Vector3_t121 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
 Vector3_t121  Camera_ViewportToWorldPoint_m41916 (Camera_t38 * __this, Vector3_t121  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ViewportToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
 Vector3_t121  Camera_INTERNAL_CALL_ViewportToWorldPoint_m52544 (Object_t * __this/* static, unused */, Camera_t38 * ___self, Vector3_t121 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
 Vector3_t121  Camera_ScreenToWorldPoint_m39664 (Camera_t38 * __this, Vector3_t121  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
 Vector3_t121  Camera_INTERNAL_CALL_ScreenToWorldPoint_m52545 (Object_t * __this/* static, unused */, Camera_t38 * ___self, Vector3_t121 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
 Vector3_t121  Camera_ScreenToViewportPoint_m42204 (Camera_t38 * __this, Vector3_t121  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
 Vector3_t121  Camera_INTERNAL_CALL_ScreenToViewportPoint_m52546 (Object_t * __this/* static, unused */, Camera_t38 * ___self, Vector3_t121 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
 Ray_t974  Camera_ScreenPointToRay_m4174 (Camera_t38 * __this, Vector3_t121  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
 Ray_t974  Camera_INTERNAL_CALL_ScreenPointToRay_m52547 (Object_t * __this/* static, unused */, Camera_t38 * ___self, Vector3_t121 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
 Camera_t38 * Camera_get_main_m4172 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera[] UnityEngine.Camera::get_allCameras()
 CameraU5BU5D_t37* Camera_get_allCameras_m41543 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
 int32_t Camera_get_allCamerasCount_m52548 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
 int32_t Camera_GetAllCameras_m52549 (Object_t * __this/* static, unused */, CameraU5BU5D_t37* ___cameras, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::RenderWithShader(UnityEngine.Shader,System.String)
 void Camera_RenderWithShader_m6577 (Camera_t38 * __this, Shader_t934 * ___shader, String_t* ___replacementTag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
 int32_t Camera_get_depthTextureMode_m41828 (Camera_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
 void Camera_set_depthTextureMode_m6578 (Camera_t38 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
