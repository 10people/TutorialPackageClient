#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.SkeletonBone
struct SkeletonBone_t7543 
{
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t121  ___position;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t120  ___rotation;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t121  ___scale;
	// System.Int32 UnityEngine.SkeletonBone::transformModified
	int32_t ___transformModified;
};
// Native definition for marshalling of: UnityEngine.SkeletonBone
struct SkeletonBone_t7543_marshaled
{
	char* ___name;
	Vector3_t121  ___position;
	Quaternion_t120  ___rotation;
	Vector3_t121  ___scale;
	int32_t ___transformModified;
};
