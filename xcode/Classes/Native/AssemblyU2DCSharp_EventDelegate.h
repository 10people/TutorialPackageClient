#pragma once
#include <stdint.h>
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t18;
// System.String
struct String_t;
// EventDelegate/Callback
struct Callback_t5349;
// System.Object
#include "mscorlib_System_Object.h"
// EventDelegate
struct EventDelegate_t5350  : public Object_t
{
	// UnityEngine.MonoBehaviour EventDelegate::mTarget
	MonoBehaviour_t18 * ___mTarget;
	// System.String EventDelegate::mMethodName
	String_t* ___mMethodName;
	// System.Boolean EventDelegate::oneShot
	bool ___oneShot;
	// EventDelegate/Callback EventDelegate::mCachedCallback
	Callback_t5349 * ___mCachedCallback;
};
struct EventDelegate_t5350_StaticFields{
	// System.Int32 EventDelegate::s_Hash
	int32_t ___s_Hash;
};
