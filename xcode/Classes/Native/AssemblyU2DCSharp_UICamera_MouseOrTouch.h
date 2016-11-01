#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UICamera/ClickNotification
#include "AssemblyU2DCSharp_UICamera_ClickNotification.h"
// UICamera/MouseOrTouch
struct MouseOrTouch_t5399  : public Object_t
{
	// UnityEngine.Vector2 UICamera/MouseOrTouch::pos
	Vector2_t12  ___pos;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::delta
	Vector2_t12  ___delta;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::totalDelta
	Vector2_t12  ___totalDelta;
	// UnityEngine.Camera UICamera/MouseOrTouch::pressedCam
	Camera_t38 * ___pressedCam;
	// UnityEngine.GameObject UICamera/MouseOrTouch::current
	GameObject_t9 * ___current;
	// UnityEngine.GameObject UICamera/MouseOrTouch::pressed
	GameObject_t9 * ___pressed;
	// UnityEngine.GameObject UICamera/MouseOrTouch::dragged
	GameObject_t9 * ___dragged;
	// System.Single UICamera/MouseOrTouch::clickTime
	float ___clickTime;
	// UICamera/ClickNotification UICamera/MouseOrTouch::clickNotification
	int32_t ___clickNotification;
	// System.Boolean UICamera/MouseOrTouch::touchBegan
	bool ___touchBegan;
	// System.Boolean UICamera/MouseOrTouch::pressStarted
	bool ___pressStarted;
	// System.Boolean UICamera/MouseOrTouch::dragStarted
	bool ___dragStarted;
};
