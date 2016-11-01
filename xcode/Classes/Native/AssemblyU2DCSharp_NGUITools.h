#pragma once
#include <stdint.h>
// UnityEngine.AudioListener
struct AudioListener_t5354;
// System.Reflection.PropertyInfo
struct PropertyInfo_t5355;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// NGUITools
struct NGUITools_t5356  : public Object_t
{
};
struct NGUITools_t5356_StaticFields{
	// UnityEngine.AudioListener NGUITools::mListener
	AudioListener_t5354 * ___mListener;
	// System.Boolean NGUITools::mLoaded
	bool ___mLoaded;
	// System.Single NGUITools::mGlobalVolume
	float ___mGlobalVolume;
	// UnityEngine.Color NGUITools::mInvisible
	Color_t939  ___mInvisible;
	// System.Reflection.PropertyInfo NGUITools::mSystemCopyBuffer
	PropertyInfo_t5355 * ___mSystemCopyBuffer;
};
