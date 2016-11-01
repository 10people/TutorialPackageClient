#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// SwordEmitter/SwordData
struct SwordData_t5140  : public Object_t
{
	// UnityEngine.GameObject SwordEmitter/SwordData::obj
	GameObject_t9 * ___obj;
	// UnityEngine.Vector3 SwordEmitter/SwordData::dir
	Vector3_t121  ___dir;
	// UnityEngine.GameObject SwordEmitter/SwordData::quad
	GameObject_t9 * ___quad;
	// System.Single SwordEmitter/SwordData::radius
	float ___radius;
	// System.Single SwordEmitter/SwordData::speed
	float ___speed;
	// System.Single SwordEmitter/SwordData::speedUpdateTimer
	float ___speedUpdateTimer;
	// System.Single SwordEmitter/SwordData::radiusUpdateTimer
	float ___radiusUpdateTimer;
};
