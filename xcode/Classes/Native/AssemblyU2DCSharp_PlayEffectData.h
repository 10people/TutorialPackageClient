#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PlayEffectData
struct PlayEffectData_t2127  : public Object_t
{
	// System.String PlayEffectData::_effectPath
	String_t* ____effectPath;
	// UnityEngine.GameObject PlayEffectData::_parentObj
	GameObject_t9 * ____parentObj;
	// UnityEngine.Vector3 PlayEffectData::_effectPos
	Vector3_t121  ____effectPos;
	// UnityEngine.Vector3 PlayEffectData::_effectRot
	Vector3_t121  ____effectRot;
	// System.Single PlayEffectData::_duration
	float ____duration;
	// System.Single PlayEffectData::_delay
	float ____delay;
};
