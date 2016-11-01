#pragma once
#include <stdint.h>
// System.Func`1<System.Boolean>
struct Func_1_t4406;
// System.String
struct String_t;
// GameRes.LoadFinishCallback
struct LoadFinishCallback_t2169;
// System.Action`1<System.String>
struct Action_1_t4407;
// System.Object
#include "mscorlib_System_Object.h"
// GameRes.LoadCompleteCallBackParameter
#include "AssemblyU2DCSharp_GameRes_LoadCompleteCallBackParameter.h"
// GameRes.ResourcesManager/<Load>c__AnonStorey43
struct U3CLoadU3Ec__AnonStorey43_t4408  : public Object_t
{
	// System.Func`1<System.Boolean> GameRes.ResourcesManager/<Load>c__AnonStorey43::condition
	Func_1_t4406 * ___condition;
	// System.String GameRes.ResourcesManager/<Load>c__AnonStorey43::url
	String_t* ___url;
	// GameRes.LoadFinishCallback GameRes.ResourcesManager/<Load>c__AnonStorey43::loadComplete
	LoadFinishCallback_t2169 * ___loadComplete;
	// GameRes.LoadCompleteCallBackParameter GameRes.ResourcesManager/<Load>c__AnonStorey43::parameter
	LoadCompleteCallBackParameter_t2120  ___parameter;
	// System.Action`1<System.String> GameRes.ResourcesManager/<Load>c__AnonStorey43::loadFailed
	Action_1_t4407 * ___loadFailed;
};
