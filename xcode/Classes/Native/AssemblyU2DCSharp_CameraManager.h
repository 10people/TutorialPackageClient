#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.GameObject
struct GameObject_t9;
// ThirdPersonCamera
struct ThirdPersonCamera_t4573;
// CameraBase
struct CameraBase_t4570;
// FastBloom
struct FastBloom_t4574;
// MotionBlur
struct MotionBlur_t1047;
// Singleton`1<CameraManager>
#include "AssemblyU2DCSharp_Singleton_1_gen_1.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// CameraManager
struct CameraManager_t4575  : public Singleton_1_t4576
{
	// UnityEngine.Camera CameraManager::m_CameraComponent
	Camera_t38 * ___m_CameraComponent;
	// UnityEngine.Transform CameraManager::m_MainCameraTrans
	Transform_t78 * ___m_MainCameraTrans;
	// UnityEngine.GameObject CameraManager::m_MainCameraGo
	GameObject_t9 * ___m_MainCameraGo;
	// System.Int32 CameraManager::m_cullingMask
	int32_t ___m_cullingMask;
	// UnityEngine.Color CameraManager::m_BackgroundColor
	Color_t939  ___m_BackgroundColor;
	// ThirdPersonCamera CameraManager::m_ThirdPersonCamera
	ThirdPersonCamera_t4573 * ___m_ThirdPersonCamera;
	// CameraBase CameraManager::m_CurrentCamera
	CameraBase_t4570 * ___m_CurrentCamera;
	// System.Boolean CameraManager::m_bDirty
	bool ___m_bDirty;
	// FastBloom CameraManager::m_FastBloom
	FastBloom_t4574 * ___m_FastBloom;
	// MotionBlur CameraManager::m_MotionBlur
	MotionBlur_t1047 * ___m_MotionBlur;
	// System.Boolean CameraManager::m_IsDuang
	bool ___m_IsDuang;
};
